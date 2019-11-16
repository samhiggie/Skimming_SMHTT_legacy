#ifndef THTH_TREE_H
#define	THTH_TREE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include "TTree.h"
#include "TFile.h"
#include "TSystem.h"
#include "HTauTauTree_mt_jec.h"
#include "RecoilCorrector.h"
#include "MEtSys.h"

using namespace std;
float L1iso, L1pt, bweight;

std::vector<float> njet_runtree_VecUp;
std::vector<float> njet_runtree_VecDown;
std::vector<float> vbf_runtree_VecUp;
std::vector<float> vbf_runtree_VecDown;
std::vector<float> met_runtree_VecUp;
std::vector<float> met_runtree_VecDown;
std::vector<float> metphi_runtree_VecUp;
std::vector<float> metphi_runtree_VecDown;
std::vector<float> puppimet_runtree_VecUp;
std::vector<float> puppimet_runtree_VecDown;
std::vector<float> puppimetphi_runtree_VecUp;
std::vector<float> puppimetphi_runtree_VecDown;
std::vector<float> mjj_runtree_VecUp;
std::vector<float> mjj_runtree_VecDown;
std::vector<float> j1pt_runtree_VecUp;
std::vector<float> j1pt_runtree_VecDown;
std::vector<float> j2pt_runtree_VecUp;
std::vector<float> j2pt_runtree_VecDown;

//for the TES calculations
std::vector<TLorentzVector*> mymet_vectorUp; // for all the jec corrections
std::vector<TLorentzVector*> mymet_vectorDown; // for all the jec corrections
std::vector<TLorentzVector*> mymet_uncorr_vectorUp; // for all the jec corrections
std::vector<TLorentzVector*> mymet_uncorr_vectorDown; // for all the jec corrections

std::vector<std::string> uncertNames = {
"AbsoluteFlavMap",
"AbsoluteMPFBias",
"AbsoluteScale",
"AbsoluteStat",
"AbsoluteSample",
"FlavorQCD",
"Fragmentation",
"PileUpDataMC",
"PileUpPtBB",
"PileUpPtEC1",
"PileUpPtEC2",
"PileUpPtHF",
"PileUpPtRef",
"RelativeBal",
"RelativeSample",
"RelativeFSR",
"RelativeJEREC1",
"RelativeJEREC2",
"RelativeJERHF",
"RelativePtBB",
"RelativePtEC1",
"RelativePtEC2",
"RelativePtHF",
"RelativeStatEC",
"RelativeStatFSR",
"RelativeStatHF",
"SinglePionECAL",
"SinglePionHCAL",
"SubTotalAbsolute",
"SubTotalMC",
"SubTotalPileUp",
"SubTotalPt",
"SubTotalRelative",
"SubTotalScale",
"TimePtEta",
"TotalNoFlavorNoTime",
"TotalNoFlavor",
"TotalNoTime",
"Total",
"Eta3to5",
"Eta0to5",
"Eta0to3",
"EC2",
"Closure"
}; // end uncertNames

float jpt_JetRelativeSampleUp_1, jpt_JetRelativeSampleDown_1, jpt_JetRelativeBalUp_1, jpt_JetRelativeBalDown_1, jpt_JetEta0to3Up_1, jpt_JetEta0to3Down_1, jpt_JetEta3to5Up_1, jpt_JetEta3to5Down_1, jpt_JetEta0to5Up_1, jpt_JetEta0to5Down_1, jpt_JetEC2Up_1, jpt_JetEC2Down_1;
float jpt_JetRelativeSampleUp_2, jpt_JetRelativeSampleDown_2, jpt_JetRelativeBalUp_2, jpt_JetRelativeBalDown_2, jpt_JetEta0to3Up_2, jpt_JetEta0to3Down_2, jpt_JetEta3to5Up_2, jpt_JetEta3to5Down_2, jpt_JetEta0to5Up_2, jpt_JetEta0to5Down_2, jpt_JetEC2Up_2, jpt_JetEC2Down_2;
float met_responseUp, met_responseDown, met_resolutionUp, met_resolutionDown;
float metphi_responseUp, metphi_responseDown, metphi_resolutionUp, metphi_resolutionDown;
float met_JetEta0to3Up, met_JetEta0to3Down, metphi_JetEta0to3Up, metphi_JetEta0to3Down;
float met_JetEC2Up, met_JetEC2Down, metphi_JetEC2Up, metphi_JetEC2Down;
float met_JetEta0to5Up, met_JetEta0to5Down, metphi_JetEta0to5Up, metphi_JetEta0to5Down;
float met_JetEta3to5Up, met_JetEta3to5Down, metphi_JetEta3to5Up, metphi_JetEta3to5Down;
float met_JetRelativeSampleUp, met_JetRelativeSampleDown, metphi_JetRelativeSampleUp, metphi_JetRelativeSampleDown;
float met_JetRelativeBalUp, met_JetRelativeBalDown, metphi_JetRelativeBalUp, metphi_JetRelativeBalDown;
float againstElectronTightMVA62018_2, againstElectronVTightMVA62018_2, againstElectronVLooseMVA62018_2, againstElectronMediumMVA62018_2, againstElectronLooseMVA62018_2;
float byTightDPF_2,byVVVLooseDeepVSjet_2,byVVLooseDeepVSjet_2,byVLooseDeepVSjet_2,byLooseDeepVSjet_2,byMediumDeepVSjet_2,byTightDeepVSjet_2,byVTightDeepVSjet_2,byVVTightDeepVSjet_2;
float byVVVLooseDeepVSmu_2,byVVLooseDeepVSmu_2,byVLooseDeepVSmu_2,byLooseDeepVSmu_2,byMediumDeepVSmu_2,byTightDeepVSmu_2,byVTightDeepVSmu_2,byVVTightDeepVSmu_2;
float byVVVLooseDeepVSe_2,byVVLooseDeepVSe_2,byVLooseDeepVSe_2,byLooseDeepVSe_2,byMediumDeepVSe_2,byTightDeepVSe_2,byVTightDeepVSe_2,byVVTightDeepVSe_2;
int njets, nbtag, nbtagL;
float mjj;
float mjj_JetRelativeSampleUp, mjj_JetRelativeSampleDown, mjj_JetRelativeBalUp, mjj_JetRelativeBalDown, mjj_JetEta0to3Up, mjj_JetEta0to3Down, mjj_JetEta0to5Up, mjj_JetEta0to5Down, mjj_JetEta3to5Up, mjj_JetEta3to5Down, mjj_JetEC2Up, mjj_JetEC2Down;
int njets_JetRelativeSampleUp, njets_JetRelativeSampleDown, njets_JetRelativeBalUp, njets_JetRelativeBalDown, njets_JetEta0to3Up, njets_JetEta0to3Down, njets_JetEta0to5Up, njets_JetEta0to5Down, njets_JetEta3to5Up, njets_JetEta3to5Down, njets_JetEC2Up, njets_JetEC2Down;
float passMu24, passMu27, passMu20Tau27, passMu20HPSTau27;
float matchMu24_1, matchMu27_1, matchMu20Tau27_1, matchMu20Tau27_2, matchMu20HPSTau27_1, matchMu20HPSTau27_2;
float filterMu24_1, filterMu27_1, filterMu20Tau27_1, filterMu20Tau27_2, filterMu20HPSTau27_1, filterMu20HPSTau27_2;
float byVVLooseIsolationMVArun2v2DBoldDMwLT_2, byVLooseIsolationMVArun2v1DBoldDMwLT_2,byVLooseIsolationMVArun2v2DBoldDMwLT_2, byLooseIsolationMVArun2v2DBoldDMwLT_2, byMediumIsolationMVArun2v2DBoldDMwLT_2, byTightIsolationMVArun2v2DBoldDMwLT_2, byVTightIsolationMVArun2v2DBoldDMwLT_2, byVVTightIsolationMVArun2v2DBoldDMwLT_2, byIsolationMVArun2v2DBoldDMwLTraw_2, byIsolationMVA3oldDMwLTraw_2;
float Rivet_VEta,Rivet_VPt,Rivet_errorCode,Rivet_higgsEta,Rivet_higgsPt,Rivet_nJets25,Rivet_nJets30,Rivet_p4decay_VEta,Rivet_p4decay_VPt,Rivet_prodMode,Rivet_stage0_cat,Rivet_stage1_cat_pTjet25GeV,Rivet_stage1_cat_pTjet30GeV, Rivet_stage1p1_cat;
unsigned int run, lumi, evt, NUP = -10;
int gen_match_1, gen_match_2=0;
float npu, rho, npv=-1, puweight, weight, numGenJets,jetPt_2;
float e_1, px_1, py_1, pz_1, pt_1, phi_1, eta_1, m_1, q_1, d0_1, dZ_1, mt_1, iso_1, l1_decayMode, isoDB_1;
float e_2, px_2, py_2, pz_2, pt_2, phi_2, eta_2, m_2, q_2, d0_2, dZ_2, mt_2, iso_2, l2_decayMode;
float je_1, jmass_1, jpt_1, jpx_1, jpy_1, jpz_1, jeta_1, jphi_1, jrawf_1, jmva_1, jpfid_1, jpuid_1;
float je_2, jmass_2, jpx_2, jpy_2, jpz_2, jpt_2, jeta_2, jphi_2, jrawf_2, jmva_2, jpfid_2, jpuid_2;
float bpt_1, beta_1, bphi_1, brawf_1, bmva_1, bpfid_1, bpuid_1, bflavor_1;
float bpt_2, beta_2, bphi_2, brawf_2, bmva_2, bpfid_2, bpuid_2, bflavor_2;
float jcsv_1, jcsv_2;
float met, metphi, metcov00,metcov01,metcov10,metcov11;
float met_UESDown, met_UESUp, metphi_UESDown, metphi_UESUp;
float top_reweighting, gen_Higgs_pt, gen_Higgs_mass=1.0;
float extraelec_veto, extramuon_veto, dilepton_veto=false;
float met_px, met_py,genpX,genpY,vispX,vispY,metSig,genpT,genM;
float pt_top1, pt_top2, genweight;
float decayModeFinding_2, againstElectronTightMVA6_2, againstElectronVTightMVA6_2, againstElectronVLooseMVA6_2, againstElectronMediumMVA6_2, againstElectronLooseMVA6_2, againstMuonLoose3_2, againstMuonTight3_2;
float Flag_BadChargedCandidateFilter, Flag_BadPFMuonFilter, Flag_EcalDeadCellTriggerPrimitiveFilter, Flag_HBHENoiseFilter, Flag_HBHENoiseIsoFilter, Flag_badCloneMuon, Flag_badGlobalMuon, Flag_eeBadScFilter, Flag_globalTightHalo2016Filter, Flag_goodVertices, Flag_globalSuperTightHalo2016Filter, Flag_badMuons, Flag_duplicateMuons, Flag_ecalBadCalibFilter, Flag_ecalBadCalibReducedMINIAODFilter;
float matchEmbFilter_Mu20Tau27_1,matchEmbFilter_Mu24_1,matchEmbFilter_Mu27_1,matchEmbFilter_Mu20Tau27_2,matchEmbFilter_Mu20HPSTau27_2;
float genpt_1, genpt_2, geneta_1, geneta_2;

RecoilCorrector recoilPFMetCorrector("Skimming_SMHTT_legacy/SMH_et_2016/HTT-utilities/RecoilCorrections/data/TypeI-PFMet_Run2018.root");
MEtSys metSys("Skimming_SMHTT_legacy/SMH_et_2016/HTT-utilities/RecoilCorrections/data/PFMEtSys_2017.root");

void fillVectors(){


    for(unsigned int i=0; i<uncertNames.size(); i++){
            njet_runtree_VecUp.push_back(-999);
            njet_runtree_VecDown.push_back(-999);
            vbf_runtree_VecUp.push_back(-999.);
            vbf_runtree_VecDown.push_back(-999.);
            met_runtree_VecUp.push_back(-999.);
            met_runtree_VecDown.push_back(-999.);
            metphi_runtree_VecUp.push_back(-999.);
            metphi_runtree_VecDown.push_back(-999.);
            puppimet_runtree_VecUp.push_back(-999.);
            puppimet_runtree_VecDown.push_back(-999.);
            puppimetphi_runtree_VecUp.push_back(-999.);
            puppimetphi_runtree_VecDown.push_back(-999.);
            mjj_runtree_VecUp.push_back(-999.);
            mjj_runtree_VecDown.push_back(-999.);
            j1pt_runtree_VecUp.push_back(-999.);
            j1pt_runtree_VecDown.push_back(-999.);
            j2pt_runtree_VecUp.push_back(-999.);
            j2pt_runtree_VecDown.push_back(-999.);
    }

}
void fillTree(TTree *Run_Tree, HTauTauTree_mt *tree, int entry_tree, int recoil, bool ismc){
    tree->GetEntry(entry_tree);
    run = tree->run;
    lumi = tree->lumi;
    evt =tree->evt;
    genweight = tree->GenWeight;
    bweight=tree->bweight_2018;

    geneta_1=tree->mGenEta;
    geneta_2=tree->tGenEta;
    genpt_1=tree->mGenPt;
    genpt_2=tree->tGenPt;

    matchEmbFilter_Mu20Tau27_1=tree->mMatchEmbeddedFilterMu20Tau27_2018;
    matchEmbFilter_Mu24_1=tree->mMatchEmbeddedFilterMu24;
    matchEmbFilter_Mu27_1=tree->mMatchEmbeddedFilterMu27;
    matchEmbFilter_Mu20Tau27_2=tree->tMatchEmbeddedFilterMu20HPSTau27;
    matchEmbFilter_Mu20HPSTau27_2=tree->tMatchEmbeddedFilterMu20Tau27;

    passMu24=tree->IsoMu24Pass;
    passMu27=tree->IsoMu27Pass;
    passMu20Tau27=tree->Mu20LooseTau27Pass;
    passMu20HPSTau27=tree->Mu20LooseHPSTau27Pass;

    matchMu24_1=tree->mMatchesIsoMu24Path;
    matchMu27_1=tree->mMatchesIsoMu27Path;
    matchMu20Tau27_1=tree->mMatchesIsoMu20Tau27Path;
    matchMu20Tau27_2=tree->tMatchesIsoMu20Tau27Path;
    matchMu20HPSTau27_1=tree->mMatchesIsoMu20HPSTau27Path;
    matchMu20HPSTau27_2=tree->tMatchesIsoMu20HPSTau27Path;
    filterMu24_1=tree->mMatchesIsoMu24Filter;
    filterMu27_1=tree->mMatchesIsoMu27Filter;
    filterMu20Tau27_1=tree->mMatchesIsoMu20Tau27Filter;
    filterMu20Tau27_2=tree->tMatchesIsoMu20Tau27Filter;
    filterMu20HPSTau27_1=tree->mMatchesIsoMu20HPSTau27Filter;
    filterMu20HPSTau27_2=tree->tMatchesIsoMu20HPSTau27Filter;

    Rivet_VEta=tree->Rivet_VEta;
    Rivet_VPt=tree->Rivet_VPt;
    Rivet_errorCode=tree->Rivet_errorCode;
    Rivet_higgsEta=tree->Rivet_higgsEta;
    Rivet_higgsPt=tree->Rivet_higgsPt;
    Rivet_nJets25=tree->Rivet_nJets25;
    Rivet_nJets30=tree->Rivet_nJets30;
    Rivet_p4decay_VEta=tree->Rivet_p4decay_VEta;
    Rivet_p4decay_VPt=tree->Rivet_p4decay_VPt;
    Rivet_prodMode=tree->Rivet_prodMode;
    Rivet_stage0_cat=tree->Rivet_stage0_cat;
    Rivet_stage1p1_cat=tree->Rivet_stage1p1_cat;
    Rivet_stage1_cat_pTjet25GeV=tree->Rivet_stage1_cat_pTjet25GeV;
    Rivet_stage1_cat_pTjet30GeV=tree->Rivet_stage1_cat_pTjet30GeV;

    genpX=tree->genpX;
    genpY=tree->genpY;
    vispX=tree->vispX;
    vispY=tree->vispY;
    genpT=tree->genpT;
    genM=tree->genM;


    Flag_ecalBadCalibReducedMINIAODFilter = tree->Flag_ecalBadCalibReducedMINIAODFilter;
    Flag_BadChargedCandidateFilter = tree->Flag_BadChargedCandidateFilter;
    Flag_BadPFMuonFilter = tree->Flag_BadPFMuonFilter;
    Flag_EcalDeadCellTriggerPrimitiveFilter = tree->Flag_EcalDeadCellTriggerPrimitiveFilter;
    Flag_HBHENoiseFilter = tree->Flag_HBHENoiseFilter;
    Flag_HBHENoiseIsoFilter = tree->Flag_HBHENoiseIsoFilter;
    Flag_badMuons = tree->Flag_badMuons;
    Flag_duplicateMuons = tree->Flag_duplicateMuons;
    Flag_ecalBadCalibFilter = tree->Flag_ecalBadCalibFilter;
    Flag_eeBadScFilter = tree->Flag_eeBadScFilter;
    Flag_globalSuperTightHalo2016Filter = tree->Flag_globalSuperTightHalo2016Filter;
    Flag_globalTightHalo2016Filter = tree->Flag_globalTightHalo2016Filter;
    Flag_goodVertices = tree->Flag_goodVertices;

    metSig=tree->metSig;
    metcov00=tree->metcov00;
    metcov01=tree->metcov01;
    metcov10=tree->metcov10;
    metcov11=tree->metcov11;

    numGenJets=tree->numGenJets;
    jetPt_2=tree->tJetPt;

    gen_Higgs_pt=tree->genpT;
    gen_Higgs_mass=tree->genM;

    pt_top1=tree->topQuarkPt1;
    pt_top2=tree->topQuarkPt2;

    weight=tree->GenWeight;

    njets = tree->jetVeto30;
    nbtag = tree->bjetDeepCSVVeto20Medium_2018_DR0p5;
    nbtagL = tree->bjetDeepCSVVeto20Loose_2018_DR0p5;
    //njets_JetRelativeSampleUp = tree->jetVeto30_JetRelativeSampleUp;
    //njets_JetRelativeSampleDown = tree->jetVeto30_JetRelativeSampleDown;
    //njets_JetEta3to5Up = tree->jetVeto30_JetEta3to5Up;
    //njets_JetEta3to5Down = tree->jetVeto30_JetEta3to5Down;
    //njets_JetEta0to5Up = tree->jetVeto30_JetEta0to5Up;
    //njets_JetEta0to5Down = tree->jetVeto30_JetEta0to5Down;
    //njets_JetEta0to3Up = tree->jetVeto30_JetEta0to3Up;
    //njets_JetEta0to3Down = tree->jetVeto30_JetEta0to3Down;
    //njets_JetRelativeBalUp = tree->jetVeto30_JetRelativeBalUp;
    //njets_JetRelativeBalDown = tree->jetVeto30_JetRelativeBalDown;
    //njets_JetEC2Up = tree->jetVeto30_JetEC2Up;
    //njets_JetEC2Down = tree->jetVeto30_JetEC2Down;

    std::cout<<"inputtree value: "<<tree->njetVecUp[2]<<std::endl;
    //std::cout<<"vector variable value: "<<tree->njetVecDown[42]<<std::endl;
    //std::cout<<"runttree size: "<<njet_runtree_VecUp.size()<<std::endl;
    //std::cout<<"input treesize: "<<tree->njetVecUp.size()<<std::endl;
    //all JEC variables
    //(tree->Get(("jetVeto30_Jet"+uncertNames[i]+"Up")).c_str())
    for(unsigned int i=0; i<uncertNames.size(); i++){
    
        njet_runtree_VecUp.at(i)              = tree->njetVecUp[i]         ; 
        njet_runtree_VecDown.at(i)            = tree->njetVecDown[i]       ; 
        vbf_runtree_VecUp.at(i)               = tree->vbfVecUp[i]          ; 
        vbf_runtree_VecDown.at(i)             = tree->vbfVecDown[i]        ; 
        met_runtree_VecUp.at(i)               = tree->metVecUp[i]          ; 
        met_runtree_VecDown.at(i)             = tree->metVecDown[i]        ; 
        metphi_runtree_VecUp.at(i)            = tree->metphiVecUp[i]       ; 
        metphi_runtree_VecDown.at(i)          = tree->metphiVecDown[i]     ; 
        puppimet_runtree_VecUp.at(i)          = tree->puppimetVecUp[i]     ; 
        puppimet_runtree_VecDown.at(i)        = tree->puppimetVecDown[i]   ; 
        puppimetphi_runtree_VecUp.at(i)       = tree->puppimetphiVecUp[i]  ; 
        puppimetphi_runtree_VecDown.at(i)     = tree->puppimetphiVecDown[i]; 
        mjj_runtree_VecUp.at(i)               = tree->mjjVecUp[i]          ; 
        mjj_runtree_VecDown.at(i)             = tree->mjjVecDown[i]        ; 
        j1pt_runtree_VecUp.at(i)              = tree->j1ptVecUp[i]         ; 
        j1pt_runtree_VecDown.at(i)            = tree->j1ptVecDown[i]       ; 
        j2pt_runtree_VecUp.at(i)              = tree->j2ptVecUp[i]         ; 
        j2pt_runtree_VecDown.at(i)            = tree->j2ptVecDown[i]       ; 

        //TLorentzVectors for ES calc
        TLorentzVector* tmp = new TLorentzVector();
    
        tmp->SetPtEtaPhiM(tree->metVecUp[i],0,tree->metphiVecUp[i],0);
        mymet_vectorUp.push_back((TLorentzVector*)tmp->Clone());
        tmp->SetPtEtaPhiM(tree->metVecDown[i],0,tree->metphiVecDown[i],0);
        mymet_vectorDown.push_back((TLorentzVector*)tmp->Clone());
        tmp->SetPtEtaPhiM(tree->metVecUp[i],0,tree->metphiVecUp[i],0);
        mymet_uncorr_vectorUp.push_back((TLorentzVector*)tmp->Clone());
        tmp->SetPtEtaPhiM(tree->metVecDown[i],0,tree->metphiVecDown[i],0);
        mymet_uncorr_vectorDown.push_back((TLorentzVector*)tmp->Clone());



    }

    //std::cout<<"input vector value : "<< tree->j1ptVecUp[42]<<std::endl;
    //std::cout<<"vector variable value after: "<<j1pt_runtree_VecDown[42]<<std::endl;
    std::cout<<"input vector value : "<< tree->njetVecUp[42]<<std::endl;
    std::cout<<"vector variable value after: "<<njet_runtree_VecDown[42]<<std::endl;


    gen_match_1=tree->mZTTGenMatching;
    gen_match_2=tree->tZTTGenMatching;

    TLorentzVector tau1;
    TLorentzVector tau2;
    tau1.SetPtEtaPhiM(tree->mPt,tree->mEta,tree->mPhi,tree->mMass);
    tau2.SetPtEtaPhiM(tree->tPt,tree->tEta,tree->tPhi,tree->tMass);

    TLorentzVector mymet;
    mymet.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex=mymet.Px();
    float pfmetcorr_ey=mymet.Py();

    TLorentzVector mymet_UESUp;
    mymet_UESUp.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_UnclusteredEnUp,0,tree->type1_pfMet_shiftedPhi_UnclusteredEnUp,0);
    float pfmetcorr_ex_UESUp=mymet_UESUp.Px();
    float pfmetcorr_ey_UESUp=mymet_UESUp.Py();

    TLorentzVector mymet_UESDown;
    mymet_UESDown.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_UnclusteredEnDown,0,tree->type1_pfMet_shiftedPhi_UnclusteredEnDown,0);
    float pfmetcorr_ex_UESDown=mymet_UESDown.Px();
    float pfmetcorr_ey_UESDown=mymet_UESDown.Py();

    TLorentzVector mymet_resolutionUp, mymet_resolutionDown, mymet_responseUp, mymet_responseDown;
    float pfmetcorr_ex_responseUp,pfmetcorr_ey_responseUp,pfmetcorr_ex_responseDown,pfmetcorr_ey_responseDown,pfmetcorr_ex_resolutionUp,pfmetcorr_ey_resolutionUp,pfmetcorr_ex_resolutionDown,pfmetcorr_ey_resolutionDown=0;


    //I think I need a vector of TLorentzVectors here


    if (ismc && tree->tZTTGenMatching==5 && tree->tDecayMode==0){
        for(unsigned int i=0; i<uncertNames.size(); i++){
            mymet_vectorUp.at(i)->operator+(tau2-0.987*tau2);
            mymet_vectorDown.at(i)->operator+(tau2-0.987*tau2);
        }
        
    }
    else if (ismc && tree->tZTTGenMatching==5 && tree->tDecayMode==1){
        for(unsigned int i=0; i<uncertNames.size(); i++){
            mymet_vectorUp.at(i)->operator+(tau2-0.995*tau2);
            mymet_vectorDown.at(i)->operator+(tau2-0.995*tau2);
        }
    }
    else if (ismc && tree->tZTTGenMatching==5 && tree->tDecayMode==10){
        for(unsigned int i=0; i<uncertNames.size(); i++){
            mymet_vectorUp.at(i)->operator+(tau2-0.988*tau2);
            mymet_vectorDown.at(i)->operator+(tau2-0.988*tau2);
        }
    }
    if (ismc && (tree->tZTTGenMatching==1 or tree->tZTTGenMatching==3) && tree->tDecayMode==0){
        for(unsigned int i=0; i<uncertNames.size(); i++){
            mymet_vectorUp.at(i)->operator+(tau2-0.968*tau2);
            mymet_vectorDown.at(i)->operator+(tau2-0.968*tau2);
        }
    }
    else if (ismc && (tree->tZTTGenMatching==1 or tree->tZTTGenMatching==3) && tree->tDecayMode==1){
        for(unsigned int i=0; i<uncertNames.size(); i++){
            mymet_vectorUp.at(i)->operator+(tau2-1.026*tau2);
            mymet_vectorDown.at(i)->operator+(tau2-1.026*tau2);
        }
    }

    if (ismc && (tree->tZTTGenMatching==2 or tree->tZTTGenMatching==4) && tree->tDecayMode==0){
        for(unsigned int i=0; i<uncertNames.size(); i++){
            mymet_vectorUp.at(i)->operator+(tau2-0.998*tau2);
            mymet_vectorDown.at(i)->operator+(tau2-0.998*tau2);
        }
    }
    else if (ismc && (tree->tZTTGenMatching==2 or tree->tZTTGenMatching==4) && tree->tDecayMode==1){
        for(unsigned int i=0; i<uncertNames.size(); i++){
            mymet_vectorUp.at(i)->operator+(tau2-0.990*tau2);
            mymet_vectorDown.at(i)->operator+(tau2-0.990*tau2);
        }
    }

    int Process= MEtSys::ProcessType::BOSON;

    int recoiljets=tree->jetVeto30+1;
    if (recoil==2) recoiljets=tree->jetVeto30;

    if (recoil>=1){
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet.Px(), // uncorrected type I pf met px (float)
         mymet.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex, // corrected type I pf met px (float)
         pfmetcorr_ey  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_UESDown.Px(), // uncorrected type I pf met px (float)
         mymet_UESDown.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_UESDown, // corrected type I pf met px (float)
         pfmetcorr_ey_UESDown  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_UESUp.Px(), // uncorrected type I pf met px (float)
         mymet_UESUp.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_UESUp, // corrected type I pf met px (float)
         pfmetcorr_ey_UESUp  // corrected type I pf met py (float)
        );

        for(unsigned int i=0; i<uncertNames.size(); i++){
            float upPx = mymet_vectorUp.at(i)->Px();
            float upPy = mymet_vectorUp.at(i)->Py();
            float downPx = mymet_vectorDown.at(i)->Px();
            float downPy = mymet_vectorDown.at(i)->Py();

            recoilPFMetCorrector.CorrectByMeanResolution(
                mymet_uncorr_vectorUp.at(i)->Px(), // uncorrected type I pf met px (float)
                mymet_uncorr_vectorUp.at(i)->Py(), // uncorrected type I pf met py (float)
                tree->genpX, // generator Z/W/Higgs px (float)
                tree->genpY, // generator Z/W/Higgs py (float)
                tree->vispX, // generator visible Z/W/Higgs px (float)
                tree->vispY, // generator visible Z/W/Higgs py (float)
                recoiljets,  // number of jets (hadronic jet multiplicity) (int)
                upPx, // corrected type I pf met px (float)
                upPy  // corrected type I pf met py (float)
            );
            mymet_vectorUp.at(i)->SetPx(upPx);
            mymet_vectorUp.at(i)->SetPy(upPy);
            recoilPFMetCorrector.CorrectByMeanResolution(
                mymet_uncorr_vectorDown.at(i)->Px(), // uncorrected type I pf met px (float)
                mymet_uncorr_vectorDown.at(i)->Py(), // uncorrected type I pf met py (float)
                tree->genpX, // generator Z/W/Higgs px (float)
                tree->genpY, // generator Z/W/Higgs py (float)
                tree->vispX, // generator visible Z/W/Higgs px (float)
                tree->vispY, // generator visible Z/W/Higgs py (float)
                recoiljets,  // number of jets (hadronic jet multiplicity) (int)
                downPx, // corrected type I pf met px (float)
                downPy  // corrected type I pf met py (float)
            );
            mymet_vectorDown.at(i)->SetPx(downPx);
            mymet_vectorDown.at(i)->SetPy(downPy);
        }
    }
    mymet.SetPxPyPzE(pfmetcorr_ex,pfmetcorr_ey,0,sqrt(pfmetcorr_ex*pfmetcorr_ex+pfmetcorr_ey*pfmetcorr_ey));
    if (recoil>=1){
        metSys.ApplyMEtSys(mymet.Px(),mymet.Py(),
                         genpX,genpY,
                         vispX,vispY,
                         recoiljets,
                         Process,
                         MEtSys::SysType::Response,
                         MEtSys::SysShift::Up,
                         pfmetcorr_ex_responseUp,pfmetcorr_ey_responseUp
                         );

        metSys.ApplyMEtSys(mymet.Px(),mymet.Py(),
                         genpX,genpY,
                         vispX,vispY,
                         recoiljets,
                         Process,
                         MEtSys::SysType::Response,
                         MEtSys::SysShift::Down,
                         pfmetcorr_ex_responseDown,pfmetcorr_ey_responseDown
                         );

        metSys.ApplyMEtSys(mymet.Px(),mymet.Py(),
                         genpX,genpY,
                         vispX,vispY,
                         recoiljets,
                         Process,
                         MEtSys::SysType::Resolution,
                         MEtSys::SysShift::Up,
                         pfmetcorr_ex_resolutionUp,pfmetcorr_ey_resolutionUp
                         );
        metSys.ApplyMEtSys(mymet.Px(),mymet.Py(),
                         genpX,genpY,
                         vispX,vispY,
                         recoiljets,
                         Process,
                         MEtSys::SysType::Resolution,
                         MEtSys::SysShift::Down,
                         pfmetcorr_ex_resolutionDown,pfmetcorr_ey_resolutionDown
                         );
    }

    mymet.SetPxPyPzE(pfmetcorr_ex,pfmetcorr_ey,0,sqrt(pfmetcorr_ex*pfmetcorr_ex+pfmetcorr_ey*pfmetcorr_ey));
    mymet_UESUp.SetPxPyPzE(pfmetcorr_ex_UESUp,pfmetcorr_ey_UESUp,0,sqrt(pfmetcorr_ex_UESUp*pfmetcorr_ex_UESUp+pfmetcorr_ey_UESUp*pfmetcorr_ey_UESUp));
    mymet_UESDown.SetPxPyPzE(pfmetcorr_ex_UESDown,pfmetcorr_ey_UESDown,0,sqrt(pfmetcorr_ex_UESDown*pfmetcorr_ex_UESDown+pfmetcorr_ey_UESDown*pfmetcorr_ey_UESDown));
    mymet_responseUp.SetPxPyPzE(pfmetcorr_ex_responseUp,pfmetcorr_ey_responseUp,0,sqrt(pfmetcorr_ex_responseUp*pfmetcorr_ex_responseUp+pfmetcorr_ey_responseUp*pfmetcorr_ey_responseUp));
    mymet_responseDown.SetPxPyPzE(pfmetcorr_ex_responseDown,pfmetcorr_ey_responseDown,0,sqrt(pfmetcorr_ex_responseDown*pfmetcorr_ex_responseDown+pfmetcorr_ey_responseDown*pfmetcorr_ey_responseDown));
    mymet_resolutionUp.SetPxPyPzE(pfmetcorr_ex_resolutionUp,pfmetcorr_ey_resolutionUp,0,sqrt(pfmetcorr_ex_resolutionUp*pfmetcorr_ex_resolutionUp+pfmetcorr_ey_resolutionUp*pfmetcorr_ey_resolutionUp));
    mymet_resolutionDown.SetPxPyPzE(pfmetcorr_ex_resolutionDown,pfmetcorr_ey_resolutionDown,0,sqrt(pfmetcorr_ex_resolutionDown*pfmetcorr_ex_resolutionDown+pfmetcorr_ey_resolutionDown*pfmetcorr_ey_resolutionDown));


//cout<<mymet.Pt()<<" "<<mymet_responseUp.Pt()<<" "<<mymet_responseDown.Pt()<<" "<<mymet_resolutionUp.Pt()<<" "<<mymet_resolutionDown.Pt()<<" "<<endl;

    for(unsigned int i=0; i<uncertNames.size(); i++){
        //saving the corrected met 
        mymet_vectorUp.at(i)->SetPxPyPzE(mymet_vectorUp.at(i)->Px(),mymet_vectorUp.at(i)->Py(),0,sqrt(mymet_vectorUp.at(i)->Px()*mymet_vectorUp.at(i)->Px()+mymet_vectorUp.at(i)->Py()*mymet_vectorUp.at(i)->Py()));
        mymet_vectorDown.at(i)->SetPxPyPzE(mymet_vectorDown.at(i)->Px(),mymet_vectorDown.at(i)->Py(),0,sqrt(mymet_vectorDown.at(i)->Px()*mymet_vectorDown.at(i)->Px()+mymet_vectorDown.at(i)->Py()*mymet_vectorDown.at(i)->Py()));

        //saving the corrected met to the tree
        met_runtree_VecUp.at(i)=mymet_vectorUp.at(i)->Pt(); 
        met_runtree_VecDown.at(i)=mymet_vectorUp.at(i)->Pt(); 
        metphi_runtree_VecUp.at(i)=mymet_vectorUp.at(i)->Phi(); 
        metphi_runtree_VecDown.at(i)=mymet_vectorUp.at(i)->Phi(); 
    }


    met=mymet.Pt();
    metphi=mymet.Phi();
    met_px=mymet.Px();
    met_py=mymet.Py();
    met_UESUp=mymet_UESUp.Pt();
    metphi_UESUp=mymet_UESUp.Phi();
    met_UESDown=mymet_UESDown.Pt();
    metphi_UESDown=mymet_UESDown.Phi();
    met_responseUp=mymet_responseUp.Pt();
    met_resolutionUp=mymet_resolutionUp.Pt();
    metphi_responseUp=mymet_responseUp.Phi();
    metphi_resolutionUp=mymet_resolutionUp.Phi();
    met_responseDown=mymet_responseDown.Pt();
    met_resolutionDown=mymet_resolutionDown.Pt();
    metphi_responseDown=mymet_responseDown.Phi();
    metphi_resolutionDown=mymet_resolutionDown.Phi();

    if (ismc && tree->tZTTGenMatching==5 && tree->tDecayMode==0) tau2=tau2*0.987;
    else if (ismc && tree->tZTTGenMatching==5 && tree->tDecayMode==1) tau2=tau2*0.995;
    else if (ismc && tree->tZTTGenMatching==5 && tree->tDecayMode==10) tau2=tau2*0.988;
    if (ismc && (tree->tZTTGenMatching==1 or tree->tZTTGenMatching==3) && tree->tDecayMode==0) tau2=tau2*0.968;
    else if (ismc && (tree->tZTTGenMatching==1 or tree->tZTTGenMatching==3) && tree->tDecayMode==1) tau2=tau2*1.026;
    if (ismc && (tree->tZTTGenMatching==2 or tree->tZTTGenMatching==4) && tree->tDecayMode==0) tau2=tau2*0.998;
    else if (ismc && (tree->tZTTGenMatching==2 or tree->tZTTGenMatching==4) && tree->tDecayMode==1) tau2=tau2*0.990;

    l2_decayMode=tree->tDecayMode;

    m_1 = tau1.M();
    e_1 = tau1.E();
    pt_1 = tau1.Pt();
    phi_1 = tau1.Phi();
    eta_1 = tau1.Eta();
    dZ_1 = tree->mPVDZ;
    d0_1 = tree->mPVDXY;
    iso_1 = tree->mRelPFIsoDBDefault;
    q_1 = tree->mCharge;

    m_2 = tau2.M();
    if (tree->tDecayMode==0) m_2=tree->tMass;
    e_2 = tau2.E();
    pt_2 = tau2.Pt();
    phi_2 = tau2.Phi();
    eta_2 = tau2.Eta();
    dZ_2 = tree->tPVDZ;
    d0_2=tree->tPVDXY;
    iso_2=tree->tByIsolationMVArun2v1DBoldDMwLTraw;
    q_2 = tree->tCharge;

    againstMuonTight3_2 = tree->tAgainstMuonTight3;
    againstMuonLoose3_2 = tree->tAgainstMuonLoose3;
    againstElectronVLooseMVA6_2 = tree->tAgainstElectronVLooseMVA6;
    againstElectronLooseMVA6_2 = tree->tAgainstElectronLooseMVA6;
    againstElectronMediumMVA6_2 = tree->tAgainstElectronMediumMVA6;
    againstElectronTightMVA6_2 = tree->tAgainstElectronTightMVA6;
    againstElectronVTightMVA6_2 = tree->tAgainstElectronVTightMVA6;
    againstElectronVLooseMVA62018_2 = tree->tAgainstElectronVLooseMVA62018;
    againstElectronLooseMVA62018_2 = tree->tAgainstElectronLooseMVA62018;
    againstElectronMediumMVA62018_2 = tree->tAgainstElectronMediumMVA62018;
    againstElectronTightMVA62018_2 = tree->tAgainstElectronTightMVA62018;
    againstElectronVTightMVA62018_2 = tree->tAgainstElectronVTightMVA62018;
    byIsolationMVA3oldDMwLTraw_2=tree->tRerunMVArun2v2DBoldDMwLTraw;
    byVVLooseIsolationMVArun2v2DBoldDMwLT_2 = tree->tRerunMVArun2v2DBoldDMwLTVVLoose;
    byVLooseIsolationMVArun2v2DBoldDMwLT_2 = tree->tRerunMVArun2v2DBoldDMwLTVLoose;
    byLooseIsolationMVArun2v2DBoldDMwLT_2 = tree->tRerunMVArun2v2DBoldDMwLTLoose;
    byMediumIsolationMVArun2v2DBoldDMwLT_2 = tree->tRerunMVArun2v2DBoldDMwLTMedium;
    byTightIsolationMVArun2v2DBoldDMwLT_2 = tree->tRerunMVArun2v2DBoldDMwLTTight;
    byVTightIsolationMVArun2v2DBoldDMwLT_2 = tree->tRerunMVArun2v2DBoldDMwLTVTight;
    byVVTightIsolationMVArun2v2DBoldDMwLT_2 = tree->tRerunMVArun2v2DBoldDMwLTVVTight;
    byVVVLooseDeepVSjet_2=tree->tVVVLooseDeepTau2017v2p1VSjet;
    byVVLooseDeepVSjet_2=tree->tVVLooseDeepTau2017v2p1VSjet;
    byVLooseDeepVSjet_2=tree->tVLooseDeepTau2017v2p1VSjet;
    byLooseDeepVSjet_2=tree->tLooseDeepTau2017v2p1VSjet;
    byMediumDeepVSjet_2=tree->tMediumDeepTau2017v2p1VSjet;
    byTightDeepVSjet_2=tree->tTightDeepTau2017v2p1VSjet;
    byVTightDeepVSjet_2=tree->tVTightDeepTau2017v2p1VSjet;
    byVVTightDeepVSjet_2=tree->tVVTightDeepTau2017v2p1VSjet;
    byVVVLooseDeepVSmu_2=tree->tVVVLooseDeepTau2017v2p1VSmu;
    byVVLooseDeepVSmu_2=tree->tVVLooseDeepTau2017v2p1VSmu;
    byVLooseDeepVSmu_2=tree->tVLooseDeepTau2017v2p1VSmu;
    byLooseDeepVSmu_2=tree->tLooseDeepTau2017v2p1VSmu;
    byMediumDeepVSmu_2=tree->tMediumDeepTau2017v2p1VSmu;
    byTightDeepVSmu_2=tree->tTightDeepTau2017v2p1VSmu;
    byVTightDeepVSmu_2=tree->tVTightDeepTau2017v2p1VSmu;
    byVVTightDeepVSmu_2=tree->tVVTightDeepTau2017v2p1VSmu;
    byVVVLooseDeepVSe_2=tree->tVVVLooseDeepTau2017v2p1VSe;
    byVVLooseDeepVSe_2=tree->tVVLooseDeepTau2017v2p1VSe;
    byVLooseDeepVSe_2=tree->tVLooseDeepTau2017v2p1VSe;
    byLooseDeepVSe_2=tree->tLooseDeepTau2017v2p1VSe;
    byMediumDeepVSe_2=tree->tMediumDeepTau2017v2p1VSe;
    byTightDeepVSe_2=tree->tTightDeepTau2017v2p1VSe;
    byVTightDeepVSe_2=tree->tVTightDeepTau2017v2p1VSe;
    byVVTightDeepVSe_2=tree->tVVTightDeepTau2017v2p1VSe;

    decayModeFinding_2=tree->tDecayModeFinding;

    jpt_1=tree->j1pt;
    jpt_2=tree->j2pt;
    jcsv_1=tree->j1csv;
    jcsv_2=tree->j2csv;

    //other non met vars
    //for(unsigned int i=0; i<uncertNames.size(); i++){
    //    j1pt_runtree_VecUp[i]=tree->j1ptVecUp[i];
    //    j1pt_runtree_VecDown[i]=tree->j1ptVecUp[i];
    //    j2pt_runtree_VecUp[i]=tree->j2ptVecUp[i];
    //    j2pt_runtree_VecDown[i]=tree->j2ptVecDown[i];
    //    mjj_runtree_VecUp[i]=tree->vbfVecUp[i];
    //    mjj_runtree_VecDown[i]=tree->vbfVecDown[i];
    //}

    jeta_1=tree->j1eta;
    jeta_2=tree->j2eta;
    jphi_1=tree->j1phi;
    jphi_2=tree->j2phi;
    bpt_1=tree->jb1pt_2018;
    bpt_2=tree->jb2pt_2018;
    beta_1=tree->jb1eta_2018;
    beta_2=tree->jb2eta_2018;
    bphi_1=tree->jb1phi_2018;
    bphi_2=tree->jb2phi_2018;
    bflavor_1=tree->jb1hadronflavor_2018;
    bflavor_2=tree->jb2hadronflavor_2018;
    mjj=tree->vbfMass;


  NUP=tree->NUP;
  npu=tree->nTruePU;
  npv=tree->nvtx;

  L1iso=tree->tL1IsoTauMatch;
  L1pt=tree->tL1IsoTauPt;

  extraelec_veto=(tree->eVetoZTTp001dxyzR0>0);
  extramuon_veto=(tree->muVetoZTTp001dxyzR0>1);
  dilepton_veto=(tree->dimuonVeto>0);


  Run_Tree->Fill();
}

#endif


