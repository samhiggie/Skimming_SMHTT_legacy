#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include "TH1F.h"
#include "TH2F.h"
#include "TH3F.h"
#include "TTree.h"
#include "TChain.h"
#include "TFile.h"
#include "TMath.h"
#include "TSystem.h"
#include "TRandom.h"
#include "TLorentzVector.h"
#include "TRandom3.h"
#include "makeHisto.h"
#include "tautau_Tree_tt.h"

int main(int argc, char** argv) {

    using namespace std;
    myMap1 = new map<string, TH1F*>();
    myMap2 = new map<string, TH2F*>();
    string status_sample = *(argv + 1);
    bool isMC = false;
    bool isData = false;
    if (status_sample.compare("mc") == 0) isMC = true;
    if (status_sample.compare("data") == 0) isData = true;
    string out = *(argv + 2);
    string outname= out;
    TFile *fout = TFile::Open(outname.c_str(), "RECREATE");

    string in = *(argv + 3);
    string inname= in;
    TFile *fIn = TFile::Open(inname.c_str());

    int recoil=0;
    string recoilType = *(argv + 4);
    if (recoilType.compare("W") == 0)  recoil=1;
    if (recoilType.compare("Z") == 0)  recoil=2;

    TTree* treePtr = (TTree*) fIn->Get("tt/final/Ntuple");
    TH1F *evCounter = (TH1F*) fIn->Get("tt/eventCount");
    TH1F *evCounterW = (TH1F*) fIn->Get("tt/summedWeights");
    HTauTauTree_tt* tree = new HTauTauTree_tt (treePtr);

    TTree *Run_Tree = new TTree("tautau_tree", "tautau_tree");
    Run_Tree->SetDirectory(0);
    Run_Tree->Branch("run", &run, "run/I");
    Run_Tree->Branch("lumi", &lumi, "lumi/I");
    Run_Tree->Branch("evt", &evt, "evt/I");

    Run_Tree->Branch("genpX", &genpX, "genpX/F");
    Run_Tree->Branch("genpY", &genpY, "genpY/F");
    Run_Tree->Branch("genM", &genM, "genM/F");
    Run_Tree->Branch("genpT", &genpT, "genpT/F");
    Run_Tree->Branch("vispX", &vispX, "vispX/F");
    Run_Tree->Branch("vispY", &vispY, "vispY/F");

    Run_Tree->Branch("Rivet_VEta", &Rivet_VEta, "Rivet_VEta/F");
    Run_Tree->Branch("Rivet_VPt", &Rivet_VPt, "Rivet_VPt/F");
    Run_Tree->Branch("Rivet_errorCode", &Rivet_errorCode, "Rivet_errorCode/F");
    Run_Tree->Branch("Rivet_higgsEta", &Rivet_higgsEta, "Rivet_higgsEta/F");
    Run_Tree->Branch("Rivet_higgsPt", &Rivet_higgsPt, "Rivet_higgsPt/F");
    Run_Tree->Branch("Rivet_nJets25", &Rivet_nJets25, "Rivet_nJets25/F");
    Run_Tree->Branch("Rivet_nJets30", &Rivet_nJets30, "Rivet_nJets30/F");
    Run_Tree->Branch("Rivet_p4decay_VEta", &Rivet_p4decay_VEta, "Rivet_p4decay_VEta/F");
    Run_Tree->Branch("Rivet_p4decay_VPt", &Rivet_p4decay_VPt, "Rivet_p4decay_VPt/F");
    Run_Tree->Branch("Rivet_prodMode", &Rivet_prodMode, "Rivet_prodMode/F");
    Run_Tree->Branch("Rivet_stage0_cat", &Rivet_stage0_cat, "Rivet_stage0_cat/F");
    Run_Tree->Branch("Rivet_stage1p1_cat", &Rivet_stage1p1_cat, "Rivet_stage1p1_cat/F");
    Run_Tree->Branch("Rivet_stage1_cat_pTjet25GeV", &Rivet_stage1_cat_pTjet25GeV, "Rivet_stage1_cat_pTjet25GeV/F");
    Run_Tree->Branch("Rivet_stage1_cat_pTjet30GeV", &Rivet_stage1_cat_pTjet30GeV, "Rivet_stage1_cat_pTjet30GeV/F");

    Run_Tree->Branch("npv", &npv, "npv/F");
    Run_Tree->Branch("npu", &npu, "npu/F");
    Run_Tree->Branch("L1iso_1", &L1iso_1, "L1iso_1/F");
    Run_Tree->Branch("L1pt_1", &L1pt_1, "L1pt_1/F");
    Run_Tree->Branch("L1iso_2", &L1iso_2, "L1iso_2/F");
    Run_Tree->Branch("L1pt_2", &L1pt_2, "L1pt_2/F");

    Run_Tree->Branch("passDoubleTightTau35TightID", &passDoubleTightTau35TightID, "passDoubleTightTau35TightID/F");
    Run_Tree->Branch("passDoubleMediumTau40TightID", &passDoubleMediumTau40TightID, "passDoubleMediumTau40TightID/F");
    Run_Tree->Branch("passDoubleTightTau40ID", &passDoubleTightTau40ID, "passDoubleTightTau40ID/F");
    Run_Tree->Branch("passDoubleMediumHPSTau35", &passDoubleMediumHPSTau35, "passDoubleMediumHPSTau35/F");

    Run_Tree->Branch("matchDoubleTightTau35TightID_1", &matchDoubleTightTau35TightID_1, "matchDoubleTightTau35TightID_1/F");
    Run_Tree->Branch("matchDoubleMediumTau40TightID_1", &matchDoubleMediumTau40TightID_1, "matchDoubleMediumTau40TightID_1/F");
    Run_Tree->Branch("matchDoubleTightTau40ID_1", &matchDoubleTightTau40ID_1, "matchDoubleTightTau40ID_1/F");
    Run_Tree->Branch("matchDoubleMediumHPSTau35_1", &matchDoubleMediumHPSTau35_1, "matchDoubleMediumHPSTau35_1/F");
    Run_Tree->Branch("filterDoubleTightTau35TightID_1", &filterDoubleTightTau35TightID_1, "filterDoubleTightTau35TightID_1/F");
    Run_Tree->Branch("filterDoubleMediumTau40TightID_1", &filterDoubleMediumTau40TightID_1, "filterDoubleMediumTau40TightID_1/F");
    Run_Tree->Branch("filterDoubleTightTau40ID_1", &filterDoubleTightTau40ID_1, "filterDoubleTightTau40ID_1/F");
    Run_Tree->Branch("filterDoubleMediumHPSTau35_1", &filterDoubleMediumHPSTau35_1, "filterDoubleMediumHPSTau35_1/F");
    Run_Tree->Branch("matchDoubleTightTau35TightID_2", &matchDoubleTightTau35TightID_2, "matchDoubleTightTau35TightID_2/F");
    Run_Tree->Branch("matchDoubleMediumTau40TightID_2", &matchDoubleMediumTau40TightID_2, "matchDoubleMediumTau40TightID_2/F");
    Run_Tree->Branch("matchDoubleTightTau40ID_2", &matchDoubleTightTau40ID_2, "matchDoubleTightTau40ID_2/F");
    Run_Tree->Branch("matchDoubleMediumHPSTau35_2", &matchDoubleMediumHPSTau35_2, "matchDoubleMediumHPSTau35_2/F");
    Run_Tree->Branch("filterDoubleTightTau35TightID_2", &filterDoubleTightTau35TightID_2, "filterDoubleTightTau35TightID_2/F");
    Run_Tree->Branch("filterDoubleMediumTau40TightID_2", &filterDoubleMediumTau40TightID_2, "filterDoubleMediumTau40TightID_2/F");
    Run_Tree->Branch("filterDoubleTightTau40ID_2", &filterDoubleTightTau40ID_2, "filterDoubleTightTau40ID_2/F");
    Run_Tree->Branch("filterDoubleMediumHPSTau35_2", &filterDoubleMediumHPSTau35_2, "filterDoubleMediumHPSTau35_2/F");

    Run_Tree->Branch("pt_1", &pt_1, "pt_1/F");
    Run_Tree->Branch("phi_1", &phi_1, "phi_1/F");
    Run_Tree->Branch("eta_1", &eta_1, "eta_1/F");
    Run_Tree->Branch("m_1", &m_1, "m_1/F");
    Run_Tree->Branch("e_1", &e_1, "e_1/F");
    Run_Tree->Branch("q_1", &q_1, "q_1/F");

    Run_Tree->Branch("pt_2", &pt_2, "pt_2/F");
    Run_Tree->Branch("phi_2", &phi_2, "phi_2/F");
    Run_Tree->Branch("eta_2", &eta_2, "eta_2/F");
    Run_Tree->Branch("m_2", &m_2, "m_2/F");
    Run_Tree->Branch("e_2", &e_2, "e_2/F");
    Run_Tree->Branch("q_2", &q_2, "q_2/F");
    Run_Tree->Branch("l2_decayMode", &l2_decayMode, "l2_decayMode/F");
    Run_Tree->Branch("againstElectronVLooseMVA6_2", &againstElectronVLooseMVA6_2, "againstElectronVLooseMVA6_2/F");
    Run_Tree->Branch("againstElectronLooseMVA6_2", &againstElectronLooseMVA6_2, "againstElectronLooseMVA6_2/F");
    Run_Tree->Branch("againstElectronMediumMVA6_2", &againstElectronMediumMVA6_2, "againstElectronMediumMVA6_2/F");
    Run_Tree->Branch("againstElectronTightMVA6_2", &againstElectronTightMVA6_2, "againstElectronTightMVA6_2/F");
    Run_Tree->Branch("againstElectronVTightMVA6_2", &againstElectronVTightMVA6_2, "againstElectronVTightMVA6_2/F");
    Run_Tree->Branch("againstElectronVLooseMVA62018_2", &againstElectronVLooseMVA62018_2, "againstElectronVLooseMVA62018_2/F");
    Run_Tree->Branch("againstElectronLooseMVA62018_2", &againstElectronLooseMVA62018_2, "againstElectronLooseMVA62018_2/F");
    Run_Tree->Branch("againstElectronMediumMVA62018_2", &againstElectronMediumMVA62018_2, "againstElectronMediumMVA62018_2/F");
    Run_Tree->Branch("againstElectronTightMVA62018_2", &againstElectronTightMVA62018_2, "againstElectronTightMVA62018_2/F");
    Run_Tree->Branch("againstElectronVTightMVA62018_2", &againstElectronVTightMVA62018_2, "againstElectronVTightMVA62018_2/F");
    Run_Tree->Branch("againstMuonLoose3_2", &againstMuonLoose3_2, "againstMuonLoose3_2/F");
    Run_Tree->Branch("againstMuonTight3_2", &againstMuonTight3_2, "againstMuonTight3_2/F");
    Run_Tree->Branch("byVVLooseIsolationMVArun2v2DBoldDMwLT_2", &byVVLooseIsolationMVArun2v2DBoldDMwLT_2, "byVVLooseIsolationMVArun2v2DBoldDMwLT_2/F");
    Run_Tree->Branch("byVLooseIsolationMVArun2v2DBoldDMwLT_2", &byVLooseIsolationMVArun2v2DBoldDMwLT_2, "byVLooseIsolationMVArun2v2DBoldDMwLT_2/F");
    Run_Tree->Branch("byLooseIsolationMVArun2v2DBoldDMwLT_2", &byLooseIsolationMVArun2v2DBoldDMwLT_2, "byLooseIsolationMVArun2v2DBoldDMwLT_2/F");
    Run_Tree->Branch("byMediumIsolationMVArun2v2DBoldDMwLT_2", &byMediumIsolationMVArun2v2DBoldDMwLT_2, "byMediumIsolationMVArun2v2DBoldDMwLT_2/F");
    Run_Tree->Branch("byTightIsolationMVArun2v2DBoldDMwLT_2", &byTightIsolationMVArun2v2DBoldDMwLT_2, "byTightIsolationMVArun2v2DBoldDMwLT_2/F");
    Run_Tree->Branch("byVTightIsolationMVArun2v2DBoldDMwLT_2", &byVTightIsolationMVArun2v2DBoldDMwLT_2, "byVTightIsolationMVArun2v2DBoldDMwLT_2/F");
    Run_Tree->Branch("byVVTightIsolationMVArun2v2DBoldDMwLT_2", &byVVTightIsolationMVArun2v2DBoldDMwLT_2, "byVVTightIsolationMVArun2v2DBoldDMwLT_2/F");
    Run_Tree->Branch("byIsolationMVA3oldDMwLTraw_2", &byIsolationMVA3oldDMwLTraw_2, "byIsolationMVA3oldDMwLTraw_2/F");
    Run_Tree->Branch("decayModeFinding_2", &decayModeFinding_2, "decayModeFinding_2/F");
    Run_Tree->Branch("byTightDPF_2", &byTightDPF_2, "byTightDPF_2/F");
    Run_Tree->Branch("byVVVLooseDeepVSjet_2", &byVVVLooseDeepVSjet_2, "byVVVLooseDeepVSjet_2/F");
    Run_Tree->Branch("byVVLooseDeepVSjet_2", &byVVLooseDeepVSjet_2, "byVVLooseDeepVSjet_2/F");
    Run_Tree->Branch("byVLooseDeepVSjet_2", &byVLooseDeepVSjet_2, "byVLooseDeepVSjet_2/F");
    Run_Tree->Branch("byLooseDeepVSjet_2", &byLooseDeepVSjet_2, "byLooseDeepVSjet_2/F");
    Run_Tree->Branch("byMediumDeepVSjet_2", &byMediumDeepVSjet_2, "byMediumDeepVSjet_2/F");
    Run_Tree->Branch("byTightDeepVSjet_2", &byTightDeepVSjet_2, "byTightDeepVSjet_2/F");
    Run_Tree->Branch("byVTightDeepVSjet_2", &byVTightDeepVSjet_2, "byVTightDeepVSjet_2/F");
    Run_Tree->Branch("byVVTightDeepVSjet_2", &byVVTightDeepVSjet_2, "byVVTightDeepVSjet_2/F");
    Run_Tree->Branch("byVVVLooseDeepVSmu_2", &byVVVLooseDeepVSmu_2, "byVVVLooseDeepVSmu_2/F");
    Run_Tree->Branch("byVVLooseDeepVSmu_2", &byVVLooseDeepVSmu_2, "byVVLooseDeepVSmu_2/F");
    Run_Tree->Branch("byVLooseDeepVSmu_2", &byVLooseDeepVSmu_2, "byVLooseDeepVSmu_2/F");
    Run_Tree->Branch("byLooseDeepVSmu_2", &byLooseDeepVSmu_2, "byLooseDeepVSmu_2/F");
    Run_Tree->Branch("byMediumDeepVSmu_2", &byMediumDeepVSmu_2, "byMediumDeepVSmu_2/F");
    Run_Tree->Branch("byTightDeepVSmu_2", &byTightDeepVSmu_2, "byTightDeepVSmu_2/F");
    Run_Tree->Branch("byVTightDeepVSmu_2", &byVTightDeepVSmu_2, "byVTightDeepVSmu_2/F");
    Run_Tree->Branch("byVVTightDeepVSmu_2", &byVVTightDeepVSmu_2, "byVVTightDeepVSmu_2/F");
    Run_Tree->Branch("byVVVLooseDeepVSe_2", &byVVVLooseDeepVSe_2, "byVVVLooseDeepVSe_2/F");
    Run_Tree->Branch("byVVLooseDeepVSe_2", &byVVLooseDeepVSe_2, "byVVLooseDeepVSe_2/F");
    Run_Tree->Branch("byVLooseDeepVSe_2", &byVLooseDeepVSe_2, "byVLooseDeepVSe_2/F");
    Run_Tree->Branch("byLooseDeepVSe_2", &byLooseDeepVSe_2, "byLooseDeepVSe_2/F");
    Run_Tree->Branch("byMediumDeepVSe_2", &byMediumDeepVSe_2, "byMediumDeepVSe_2/F");
    Run_Tree->Branch("byTightDeepVSe_2", &byTightDeepVSe_2, "byTightDeepVSe_2/F");
    Run_Tree->Branch("byVTightDeepVSe_2", &byVTightDeepVSe_2, "byVTightDeepVSe_2/F");
    Run_Tree->Branch("byVVTightDeepVSe_2", &byVVTightDeepVSe_2, "byVVTightDeepVSe_2/F");

    Run_Tree->Branch("l1_decayMode", &l1_decayMode, "l1_decayMode/F");
    Run_Tree->Branch("againstElectronVLooseMVA6_1", &againstElectronVLooseMVA6_1, "againstElectronVLooseMVA6_1/F");
    Run_Tree->Branch("againstElectronLooseMVA6_1", &againstElectronLooseMVA6_1, "againstElectronLooseMVA6_1/F");
    Run_Tree->Branch("againstElectronMediumMVA6_1", &againstElectronMediumMVA6_1, "againstElectronMediumMVA6_1/F");
    Run_Tree->Branch("againstElectronTightMVA6_1", &againstElectronTightMVA6_1, "againstElectronTightMVA6_1/F");
    Run_Tree->Branch("againstElectronVTightMVA6_1", &againstElectronVTightMVA6_1, "againstElectronVTightMVA6_1/F");
    Run_Tree->Branch("againstElectronVLooseMVA62018_1", &againstElectronVLooseMVA62018_1, "againstElectronVLooseMVA62018_1/F");
    Run_Tree->Branch("againstElectronLooseMVA62018_1", &againstElectronLooseMVA62018_1, "againstElectronLooseMVA62018_1/F");
    Run_Tree->Branch("againstElectronMediumMVA62018_1", &againstElectronMediumMVA62018_1, "againstElectronMediumMVA62018_1/F");
    Run_Tree->Branch("againstElectronTightMVA62018_1", &againstElectronTightMVA62018_1, "againstElectronTightMVA62018_1/F");
    Run_Tree->Branch("againstElectronVTightMVA62018_1", &againstElectronVTightMVA62018_1, "againstElectronVTightMVA62018_1/F");
    Run_Tree->Branch("againstMuonLoose3_1", &againstMuonLoose3_1, "againstMuonLoose3_1/F");
    Run_Tree->Branch("againstMuonTight3_1", &againstMuonTight3_1, "againstMuonTight3_1/F");
    Run_Tree->Branch("byVVLooseIsolationMVArun2v2DBoldDMwLT_1", &byVVLooseIsolationMVArun2v2DBoldDMwLT_1, "byVVLooseIsolationMVArun2v2DBoldDMwLT_1/F");
    Run_Tree->Branch("byVLooseIsolationMVArun2v2DBoldDMwLT_1", &byVLooseIsolationMVArun2v2DBoldDMwLT_1, "byVLooseIsolationMVArun2v2DBoldDMwLT_1/F");
    Run_Tree->Branch("byLooseIsolationMVArun2v2DBoldDMwLT_1", &byLooseIsolationMVArun2v2DBoldDMwLT_1, "byLooseIsolationMVArun2v2DBoldDMwLT_1/F");
    Run_Tree->Branch("byMediumIsolationMVArun2v2DBoldDMwLT_1", &byMediumIsolationMVArun2v2DBoldDMwLT_1, "byMediumIsolationMVArun2v2DBoldDMwLT_1/F");
    Run_Tree->Branch("byTightIsolationMVArun2v2DBoldDMwLT_1", &byTightIsolationMVArun2v2DBoldDMwLT_1, "byTightIsolationMVArun2v2DBoldDMwLT_1/F");
    Run_Tree->Branch("byVTightIsolationMVArun2v2DBoldDMwLT_1", &byVTightIsolationMVArun2v2DBoldDMwLT_1, "byVTightIsolationMVArun2v2DBoldDMwLT_1/F");
    Run_Tree->Branch("byVVTightIsolationMVArun2v2DBoldDMwLT_1", &byVVTightIsolationMVArun2v2DBoldDMwLT_1, "byVVTightIsolationMVArun2v2DBoldDMwLT_1/F");
    Run_Tree->Branch("byIsolationMVA3oldDMwLTraw_1", &byIsolationMVA3oldDMwLTraw_1, "byIsolationMVA3oldDMwLTraw_1/F");
    Run_Tree->Branch("decayModeFinding_1", &decayModeFinding_1, "decayModeFinding_1/F");
    Run_Tree->Branch("byTightDPF_1", &byTightDPF_1, "byTightDPF_1/F");
    Run_Tree->Branch("byVVVLooseDeepVSjet_1", &byVVVLooseDeepVSjet_1, "byVVVLooseDeepVSjet_1/F");
    Run_Tree->Branch("byVVLooseDeepVSjet_1", &byVVLooseDeepVSjet_1, "byVVLooseDeepVSjet_1/F");
    Run_Tree->Branch("byVLooseDeepVSjet_1", &byVLooseDeepVSjet_1, "byVLooseDeepVSjet_1/F");
    Run_Tree->Branch("byLooseDeepVSjet_1", &byLooseDeepVSjet_1, "byLooseDeepVSjet_1/F");
    Run_Tree->Branch("byMediumDeepVSjet_1", &byMediumDeepVSjet_1, "byMediumDeepVSjet_1/F");
    Run_Tree->Branch("byTightDeepVSjet_1", &byTightDeepVSjet_1, "byTightDeepVSjet_1/F");
    Run_Tree->Branch("byVTightDeepVSjet_1", &byVTightDeepVSjet_1, "byVTightDeepVSjet_1/F");
    Run_Tree->Branch("byVVTightDeepVSjet_1", &byVVTightDeepVSjet_1, "byVVTightDeepVSjet_1/F");
    Run_Tree->Branch("byVVVLooseDeepVSmu_1", &byVVVLooseDeepVSmu_1, "byVVVLooseDeepVSmu_1/F");
    Run_Tree->Branch("byVVLooseDeepVSmu_1", &byVVLooseDeepVSmu_1, "byVVLooseDeepVSmu_1/F");
    Run_Tree->Branch("byVLooseDeepVSmu_1", &byVLooseDeepVSmu_1, "byVLooseDeepVSmu_1/F");
    Run_Tree->Branch("byLooseDeepVSmu_1", &byLooseDeepVSmu_1, "byLooseDeepVSmu_1/F");
    Run_Tree->Branch("byMediumDeepVSmu_1", &byMediumDeepVSmu_1, "byMediumDeepVSmu_1/F");
    Run_Tree->Branch("byTightDeepVSmu_1", &byTightDeepVSmu_1, "byTightDeepVSmu_1/F");
    Run_Tree->Branch("byVTightDeepVSmu_1", &byVTightDeepVSmu_1, "byVTightDeepVSmu_1/F");
    Run_Tree->Branch("byVVTightDeepVSmu_1", &byVVTightDeepVSmu_1, "byVVTightDeepVSmu_1/F");
    Run_Tree->Branch("byVVVLooseDeepVSe_1", &byVVVLooseDeepVSe_1, "byVVVLooseDeepVSe_1/F");
    Run_Tree->Branch("byVVLooseDeepVSe_1", &byVVLooseDeepVSe_1, "byVVLooseDeepVSe_1/F");
    Run_Tree->Branch("byVLooseDeepVSe_1", &byVLooseDeepVSe_1, "byVLooseDeepVSe_1/F");
    Run_Tree->Branch("byLooseDeepVSe_1", &byLooseDeepVSe_1, "byLooseDeepVSe_1/F");
    Run_Tree->Branch("byMediumDeepVSe_1", &byMediumDeepVSe_1, "byMediumDeepVSe_1/F");
    Run_Tree->Branch("byTightDeepVSe_1", &byTightDeepVSe_1, "byTightDeepVSe_1/F");
    Run_Tree->Branch("byVTightDeepVSe_1", &byVTightDeepVSe_1, "byVTightDeepVSe_1/F");
    Run_Tree->Branch("byVVTightDeepVSe_1", &byVVTightDeepVSe_1, "byVVTightDeepVSe_1/F");


    Run_Tree->Branch("numGenJets", &numGenJets, "numGenJets/F");
    Run_Tree->Branch("jetPt_2", &jetPt_2, "jetPt_2/F");

    Run_Tree->Branch("flag_goodVertices", &flag_goodVertices, "flag_goodVertices/F");
    Run_Tree->Branch("flag_globalSuperTightHalo2016", &flag_globalSuperTightHalo2016, "flag_globalSuperTightHalo2016/F");
    Run_Tree->Branch("flag_eeBadSc", &flag_eeBadSc, "flag_eeBadSc/F");
    Run_Tree->Branch("flag_ecalBadCalib", &flag_ecalBadCalib, "flag_ecalBadCalib/F");
    Run_Tree->Branch("flag_badMuons", &flag_badMuons, "flag_badMuons/F");
    Run_Tree->Branch("flag_duplicateMuons", &flag_duplicateMuons, "flag_duplicateMuons/F");
    Run_Tree->Branch("flag_HBHENoiseIso", &flag_HBHENoiseIso, "flag_HBHENoiseIso/F");
    Run_Tree->Branch("flag_HBHENoise", &flag_HBHENoise, "flag_HBHENoise/F");
    Run_Tree->Branch("flag_EcalDeadCellTriggerPrimitive", &flag_EcalDeadCellTriggerPrimitive, "flag_EcalDeadCellTriggerPrimitive/F");
    Run_Tree->Branch("flag_BadPFMuon", &flag_BadPFMuon, "flag_BadPFMuon/F");
    Run_Tree->Branch("flag_BadChargedCandidate", &flag_BadChargedCandidate, "flag_BadChargedCandidate/F");

    Run_Tree->Branch("met", &met, "met/F");
    Run_Tree->Branch("metSig", &metSig, "metSig/F");
    Run_Tree->Branch("metcov00", &metcov00, "metcov00/F");
    Run_Tree->Branch("metcov10", &metcov10, "metcov10/F");
    Run_Tree->Branch("metcov11", &metcov11, "metcov11/F");
    Run_Tree->Branch("metcov01", &metcov01, "metcov01/F");
    Run_Tree->Branch("metphi", &metphi, "metphi/F");
    Run_Tree->Branch("met_py", &met_py, "met_py/F");
    Run_Tree->Branch("met_px", &met_px, "met_px/F");
    Run_Tree->Branch("met_UESUp", &met_UESUp, "met_UESUp/F");
    Run_Tree->Branch("metphi_UESUp", &metphi_UESUp, "metphi_UESUp/F");
    Run_Tree->Branch("met_UESDown", &met_UESDown, "met_UESDown/F");
    Run_Tree->Branch("metphi_UESDown", &metphi_UESDown, "metphi_UESDown/F");

    Run_Tree->Branch("met_responseUp", &met_responseUp, "met_responseUp/F");
    Run_Tree->Branch("met_responseDown", &met_responseDown, "met_responseDown/F");
    Run_Tree->Branch("met_resolutionUp", &met_resolutionUp, "met_resolutionUp/F");
    Run_Tree->Branch("met_resolutionDown", &met_resolutionDown, "met_resolutionDown/F");
    Run_Tree->Branch("metphi_responseUp", &metphi_responseUp, "metphi_responseUp/F");
    Run_Tree->Branch("metphi_responseDown", &metphi_responseDown, "metphi_responseDown/F");
    Run_Tree->Branch("metphi_resolutionUp", &metphi_resolutionUp, "metphi_resolutionUp/F");
    Run_Tree->Branch("metphi_resolutionDown", &metphi_resolutionDown, "metphi_resolutionDown/F");

    Run_Tree->Branch("met_JetEta0to3Up", &met_JetEta0to3Up, "met_JetEta0to3Up/F");
    Run_Tree->Branch("metphi_JetEta0to3Up", &metphi_JetEta0to3Up, "metphi_JetEta0to3Up/F");
    Run_Tree->Branch("met_JetEta0to3Down", &met_JetEta0to3Down, "met_JetEta0to3Down/F");
    Run_Tree->Branch("metphi_JetEta0to3Down", &metphi_JetEta0to3Down, "metphi_JetEta0to3Down/F");
    Run_Tree->Branch("met_JetEC2Up", &met_JetEC2Up, "met_JetEC2Up/F");
    Run_Tree->Branch("metphi_JetEC2Up", &metphi_JetEC2Up, "metphi_JetEC2Up/F");
    Run_Tree->Branch("met_JetEC2Down", &met_JetEC2Down, "met_JetEC2Down/F");
    Run_Tree->Branch("metphi_JetEC2Down", &metphi_JetEC2Down, "metphi_JetEC2Down/F");
    Run_Tree->Branch("met_JetRelativeBalUp", &met_JetRelativeBalUp, "met_JetRelativeBalUp/F");
    Run_Tree->Branch("metphi_JetRelativeBalUp", &metphi_JetRelativeBalUp, "metphi_JetRelativeBalUp/F");
    Run_Tree->Branch("met_JetRelativeBalDown", &met_JetRelativeBalDown, "met_JetRelativeBalDown/F");
    Run_Tree->Branch("metphi_JetRelativeBalDown", &metphi_JetRelativeBalDown, "metphi_JetRelativeBalDown/F");
    Run_Tree->Branch("met_JetRelativeSampleUp", &met_JetRelativeSampleUp, "met_JetRelativeSampleUp/F");
    Run_Tree->Branch("metphi_JetRelativeSampleUp", &metphi_JetRelativeSampleUp, "metphi_JetRelativeSampleUp/F");
    Run_Tree->Branch("met_JetRelativeSampleDown", &met_JetRelativeSampleDown, "met_JetRelativeSampleDown/F");
    Run_Tree->Branch("metphi_JetRelativeSampleDown", &metphi_JetRelativeSampleDown, "metphi_JetRelativeSampleDown/F");
    Run_Tree->Branch("met_JetEta3to5Up", &met_JetEta3to5Up, "met_JetEta3to5Up/F");
    Run_Tree->Branch("metphi_JetEta3to5Up", &metphi_JetEta3to5Up, "metphi_JetEta3to5Up/F");
    Run_Tree->Branch("met_JetEta3to5Down", &met_JetEta3to5Down, "met_JetEta3to5Down/F");
    Run_Tree->Branch("metphi_JetEta3to5Down", &metphi_JetEta3to5Down, "metphi_JetEta3to5Down/F");
    Run_Tree->Branch("met_JetEta0to5Up", &met_JetEta0to5Up, "met_JetEta0to5Up/F");
    Run_Tree->Branch("metphi_JetEta0to5Up", &metphi_JetEta0to5Up, "metphi_JetEta0to5Up/F");
    Run_Tree->Branch("met_JetEta0to5Down", &met_JetEta0to5Down, "met_JetEta0to5Down/F");
    Run_Tree->Branch("metphi_JetEta0to5Down", &metphi_JetEta0to5Down, "metphi_JetEta0to5Down/F");

    Run_Tree->Branch("mjj", &mjj, "mjj/F");
    Run_Tree->Branch("mjj_JetRelativeBalUp", &mjj_JetRelativeBalUp, "mjj_JetRelativeBalUp/F");
    Run_Tree->Branch("mjj_JetRelativeBalDown", &mjj_JetRelativeBalDown, "mjj_JetRelativeBalDown/F");
    Run_Tree->Branch("mjj_JetRelativeSampleUp", &mjj_JetRelativeSampleUp, "mjj_JetRelativeSampleUp/F");
    Run_Tree->Branch("mjj_JetRelativeSampleDown", &mjj_JetRelativeSampleDown, "mjj_JetRelativeSampleDown/F");
    Run_Tree->Branch("mjj_JetEta0to3Up", &mjj_JetEta0to3Up, "mjj_JetEta0to3Up/F");
    Run_Tree->Branch("mjj_JetEta0to3Down", &mjj_JetEta0to3Down, "mjj_JetEta0to3Down/F");
    Run_Tree->Branch("mjj_JetEC2Up", &mjj_JetEC2Up, "mjj_JetEC2Up/F");
    Run_Tree->Branch("mjj_JetEC2Down", &mjj_JetEC2Down, "mjj_JetEC2Down/F");
    Run_Tree->Branch("mjj_JetEta0to5Up", &mjj_JetEta0to5Up, "mjj_JetEta0to5Up/F");
    Run_Tree->Branch("mjj_JetEta0to5Down", &mjj_JetEta0to5Down, "mjj_JetEta0to5Down/F");
    Run_Tree->Branch("mjj_JetEta3to5Up", &mjj_JetEta3to5Up, "mjj_JetEta3to5Up/F");
    Run_Tree->Branch("mjj_JetEta3to5Down", &mjj_JetEta3to5Down, "mjj_JetEta3to5Down/F");
    Run_Tree->Branch("gen_match_1", &gen_match_1, "gen_match_1/I");
    Run_Tree->Branch("gen_match_2", &gen_match_2, "gen_match_2/I");

    Run_Tree->Branch("nbtag", &nbtag, "nbtag/I");
    Run_Tree->Branch("njets", &njets, "njets/I");
    Run_Tree->Branch("njets_JetRelativeBalUp", &njets_JetRelativeBalUp, "njets_JetRelativeBalUp/I");
    Run_Tree->Branch("njets_JetRelativeBalDown", &njets_JetRelativeBalDown, "njets_JetRelativeBalDown/I");
    Run_Tree->Branch("njets_JetRelativeSampleUp", &njets_JetRelativeSampleUp, "njets_JetRelativeSampleUp/I");
    Run_Tree->Branch("njets_JetRelativeSampleDown", &njets_JetRelativeSampleDown, "njets_JetRelativeSampleDown/I");
    Run_Tree->Branch("njets_JetEta0to3Up", &njets_JetEta0to3Up, "njets_JetEta0to3Up/I");
    Run_Tree->Branch("njets_JetEta0to3Down", &njets_JetEta0to3Down, "njets_JetEta0to3Down/I");
    Run_Tree->Branch("njets_JetEC2Up", &njets_JetEC2Up, "njets_JetEC2Up/I");
    Run_Tree->Branch("njets_JetEC2Down", &njets_JetEC2Down, "njets_JetEC2Down/I");
    Run_Tree->Branch("njets_JetEta0to5Up", &njets_JetEta0to5Up, "njets_JetEta0to5Up/I");
    Run_Tree->Branch("njets_JetEta0to5Down", &njets_JetEta0to5Down, "njets_JetEta0to5Down/I");
    Run_Tree->Branch("njets_JetEta3to5Up", &njets_JetEta3to5Up, "njets_JetEta3to5Up/I");
    Run_Tree->Branch("njets_JetEta3to5Down", &njets_JetEta3to5Down, "njets_JetEta3to5Down/I");

    Run_Tree->Branch("jpt_1", &jpt_1, "jpt_1/F");
    Run_Tree->Branch("jeta_1", &jeta_1, "jeta_1/F");
    Run_Tree->Branch("jphi_1", &jphi_1, "jphi_1/F");

    Run_Tree->Branch("jpt_2", &jpt_2, "jpt_2/F");
    Run_Tree->Branch("jeta_2", &jeta_2, "jeta_2/F");
    Run_Tree->Branch("jphi_2", &jphi_2, "jphi_2/F");

    Run_Tree->Branch("jpt_JetEta0to3Up_1", &jpt_JetEta0to3Up_1, "jpt_JetEta0to3Up_1/F");
    Run_Tree->Branch("jpt_JetEta0to3Down_1", &jpt_JetEta0to3Down_1, "jpt_JetEta0to3Down_1/F");
    Run_Tree->Branch("jpt_JetEC2Up_1", &jpt_JetEC2Up_1, "jpt_JetEC2Up_1/F");
    Run_Tree->Branch("jpt_JetEC2Down_1", &jpt_JetEC2Down_1, "jpt_JetEC2Down_1/F");
    Run_Tree->Branch("jpt_JetEta3to5Up_1", &jpt_JetEta3to5Up_1, "jpt_JetEta3to5Up_1/F");
    Run_Tree->Branch("jpt_JetEta3to5Down_1", &jpt_JetEta3to5Down_1, "jpt_JetEta3to5Down_1/F");
    Run_Tree->Branch("jpt_JetEta0to5Up_1", &jpt_JetEta0to5Up_1, "jpt_JetEta0to5Up_1/F");
    Run_Tree->Branch("jpt_JetEta0to5Down_1", &jpt_JetEta0to5Down_1, "jpt_JetEta0to5Down_1/F");
    Run_Tree->Branch("jpt_JetRelativeBalUp_1", &jpt_JetRelativeBalUp_1, "jpt_JetRelativeBalUp_1/F");
    Run_Tree->Branch("jpt_JetRelativeBalDown_1", &jpt_JetRelativeBalDown_1, "jpt_JetRelativeBalDown_1/F");
    Run_Tree->Branch("jpt_JetRelativeSampleUp_1", &jpt_JetRelativeSampleUp_1, "jpt_JetRelativeSampleUp_1/F");
    Run_Tree->Branch("jpt_JetRelativeSampleDown_1", &jpt_JetRelativeSampleDown_1, "jpt_JetRelativeSampleDown_1/F");

    Run_Tree->Branch("jpt_JetEta0to3Up_2", &jpt_JetEta0to3Up_2, "jpt_JetEta0to3Up_2/F");
    Run_Tree->Branch("jpt_JetEta0to3Down_2", &jpt_JetEta0to3Down_2, "jpt_JetEta0to3Down_2/F");
    Run_Tree->Branch("jpt_JetEC2Up_2", &jpt_JetEC2Up_2, "jpt_JetEC2Up_2/F");
    Run_Tree->Branch("jpt_JetEC2Down_2", &jpt_JetEC2Down_2, "jpt_JetEC2Down_2/F");
    Run_Tree->Branch("jpt_JetEta3to5Up_2", &jpt_JetEta3to5Up_2, "jpt_JetEta3to5Up_2/F");
    Run_Tree->Branch("jpt_JetEta3to5Down_2", &jpt_JetEta3to5Down_2, "jpt_JetEta3to5Down_2/F");
    Run_Tree->Branch("jpt_JetEta0to5Up_2", &jpt_JetEta0to5Up_2, "jpt_JetEta0to5Up_2/F");
    Run_Tree->Branch("jpt_JetEta0to5Down_2", &jpt_JetEta0to5Down_2, "jpt_JetEta0to5Down_2/F");
    Run_Tree->Branch("jpt_JetRelativeBalUp_2", &jpt_JetRelativeBalUp_2, "jpt_JetRelativeBalUp_2/F");
    Run_Tree->Branch("jpt_JetRelativeBalDown_2", &jpt_JetRelativeBalDown_2, "jpt_JetRelativeBalDown_2/F");
    Run_Tree->Branch("jpt_JetRelativeSampleUp_2", &jpt_JetRelativeSampleUp_2, "jpt_JetRelativeSampleUp_2/F");
    Run_Tree->Branch("jpt_JetRelativeSampleDown_2", &jpt_JetRelativeSampleDown_2, "jpt_JetRelativeSampleDown_2/F");

    Run_Tree->Branch("bpt_1", &bpt_1, "bpt_1/F");
    Run_Tree->Branch("bflavor_1", &bflavor_1, "bflavor_1/F");
    Run_Tree->Branch("beta_1", &beta_1, "beta_1/F");
    Run_Tree->Branch("bphi_1", &bphi_1, "bphi_1/F");

    Run_Tree->Branch("bpt_2", &bpt_2, "bpt_2/F");
    Run_Tree->Branch("bflavor_2", &bflavor_2, "bflavor_2/F");
    Run_Tree->Branch("beta_2", &beta_2, "beta_2/F");
    Run_Tree->Branch("bphi_2", &bphi_2, "bphi_2/F");

    Run_Tree->Branch("pt_top1", &pt_top1, "pt_top1/F");
    Run_Tree->Branch("pt_top2", &pt_top2, "pt_top2/F");
    Run_Tree->Branch("genweight", &genweight, "genweight/F");

    Run_Tree->Branch("gen_Higgs_pt", &gen_Higgs_pt, "gen_Higgs_pt/F");
    Run_Tree->Branch("gen_Higgs_mass", &gen_Higgs_mass, "gen_Higgs_mass/F");

    int bestEntry=-1;
    ULong64_t evt_now=0;
    ULong64_t evt_before=-1;
    float tau1iso_before=-1000;
    float tau2iso_before=-1000;
    int reorder=0;
    plotFill("nevents",0,9,0,9,evCounter->GetBinContent(1));
    plotFill("nevents",1,9,0,9,evCounterW->GetBinContent(1));
    for (int iEntry = 0; iEntry < tree->GetEntries() ; iEntry++)
    {
        float pu=1.0;
        tree->GetEntry(iEntry);
        bool print=false;
        if (iEntry % 1000 == 0) fprintf(stdout, "\r  Processed events: %8d ", iEntry);
        fflush(stdout);
        plotFill("pileup_mc",tree->nTruePU,80,0,80);
        TLorentzVector dau1;
        TLorentzVector dau2;
        dau1.SetPtEtaPhiM(tree->t1Pt,tree->t1Eta,tree->t1Phi,tree->t1Mass);
        dau2.SetPtEtaPhiM(tree->t2Pt,tree->t2Eta,tree->t2Phi,tree->t2Mass);
        if (isMC && tree->t2ZTTGenMatching==5 && tree->t2DecayMode==0) dau2=dau2*0.987;
        else if (isMC && tree->t2ZTTGenMatching==5 && tree->t2DecayMode==1) dau2=dau2*0.995;
        else if (isMC && tree->t2ZTTGenMatching==5 && tree->t2DecayMode==10) dau2=dau2*0.988;
        if (isMC && (tree->t2ZTTGenMatching==1 or tree->t2ZTTGenMatching==3) && tree->t2DecayMode==0) dau2=dau2*1.003;
        else if (isMC && (tree->t2ZTTGenMatching==1 or tree->t2ZTTGenMatching==3) && tree->t2DecayMode==1) dau2=dau2*1.036;
        if (isMC && tree->t1ZTTGenMatching==5 && tree->t1DecayMode==0) dau1=dau1*0.987;
        else if (isMC && tree->t1ZTTGenMatching==5 && tree->t1DecayMode==1) dau1=dau1*0.995;
        else if (isMC && tree->t1ZTTGenMatching==5 && tree->t1DecayMode==10) dau1=dau1*0.988;
        if (isMC && (tree->t1ZTTGenMatching==1 or tree->t1ZTTGenMatching==3) && tree->t1DecayMode==0) dau1=dau1*1.003;
        else if (isMC && (tree->t1ZTTGenMatching==1 or tree->t1ZTTGenMatching==3) && tree->t1DecayMode==1) dau1=dau1*1.036;
        if (dau1.DeltaR(dau2)<0.3) continue;
        if (fabs(tree->t1PVDZ)>0.2) continue;
        if (fabs(tree->t2PVDZ)>0.2) continue;
	if (dau1.Pt()<39.5 or dau2.Pt()<39.5) continue;
        if (fabs(dau1.Eta())>2.1 or fabs(dau2.Eta())>2.1) continue;
        if (!tree->t1RerunMVArun2v2DBoldDMwLTVLoose and !tree->t1VVVLooseDeepTau2017v1VSjet) continue;
	if (!tree->t1DecayModeFinding) continue;
        if (!tree->t2RerunMVArun2v2DBoldDMwLTVLoose and !tree->t2VVVLooseDeepTau2017v1VSjet) continue;
        if (!tree->t2DecayModeFinding) continue;
	if (tree->eVetoZTTp001dxyzR0>0) continue;
	if (tree->muVetoZTTp001dxyzR0>0) continue;
	evt_now=tree->evt;
	if (evt_now!=evt_before){
	   tau1iso_before=tree->t1RerunMVArun2v2DBoldDMwLTraw;
	   tau2iso_before=tree->t2RerunMVArun2v2DBoldDMwLTraw;
	   if (tree->t1RerunMVArun2v2DBoldDMwLTraw<tree->t2RerunMVArun2v2DBoldDMwLTraw) reorder=1;
	   else reorder=0;
	}
        if (evt_now!=evt_before){
           if (bestEntry>-1){
              fillTree(Run_Tree,tree,bestEntry,recoil,isMC,reorder);
           }
	   bestEntry=iEntry;
	}
	if (evt_now==evt_before){
	   if ((tree->t1RerunMVArun2v2DBoldDMwLTraw>tau1iso_before && tree->t1RerunMVArun2v2DBoldDMwLTraw>tau2iso_before) or (tree->t2RerunMVArun2v2DBoldDMwLTraw>tau1iso_before && tree->t2RerunMVArun2v2DBoldDMwLTraw>tau2iso_before)){
		bestEntry=iEntry;
	        tau1iso_before=tree->t1RerunMVArun2v2DBoldDMwLTraw;
		tau2iso_before=tree->t2RerunMVArun2v2DBoldDMwLTraw;
		if (tree->t1RerunMVArun2v2DBoldDMwLTraw<tree->t2RerunMVArun2v2DBoldDMwLTraw) reorder=1;
		else reorder=0;
	   }
	}
	evt_before=evt_now;
    }
    if (bestEntry>-1)
       fillTree(Run_Tree,tree,bestEntry,recoil,isMC,reorder);
    fout->cd();
    Run_Tree->Write();
    map<string, TH1F*>::const_iterator iMap1 = myMap1->begin();
    map<string, TH1F*>::const_iterator jMap1 = myMap1->end();
    for (; iMap1 != jMap1; ++iMap1)
        nplot1(iMap1->first)->Write();
    map<string, TH2F*>::const_iterator iMap2 = myMap2->begin();
    map<string, TH2F*>::const_iterator jMap2 = myMap2->end();
    for (; iMap2 != jMap2; ++iMap2)
        nplot2(iMap2->first)->Write();

    fout->Close();
    return 0;
}

