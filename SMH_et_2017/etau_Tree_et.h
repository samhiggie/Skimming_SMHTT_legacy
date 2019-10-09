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
#include "HTauTauTree_et.h"
#include "RecoilCorrector.h"
#include "MEtSys.h"
//#include "myHelper.h"

using namespace std;
float met_responseUp, met_responseDown, met_resolutionUp, met_resolutionDown;
float metphi_responseUp, metphi_responseDown, metphi_resolutionUp, metphi_resolutionDown;
float L1iso, L1pt;
float eid80_iso_1, eid80_noiso_1, eid90_iso_1, eid90_noiso_1;
int njets, nbtag, nbtagL;
float mjj;
float met_JetEta0to3Up, met_JetEta0to3Down, metphi_JetEta0to3Up, metphi_JetEta0to3Down;
float met_JetEC2Up, met_JetEC2Down, metphi_JetEC2Up, metphi_JetEC2Down;
float met_JetEta0to5Up, met_JetEta0to5Down, metphi_JetEta0to5Up, metphi_JetEta0to5Down;
float met_JetEta3to5Up, met_JetEta3to5Down, metphi_JetEta3to5Up, metphi_JetEta3to5Down;
float jcsv_1, jcsv_2;
float met_JetRelativeSampleUp, met_JetRelativeSampleDown, metphi_JetRelativeSampleUp, metphi_JetRelativeSampleDown;
float met_JetRelativeBalUp, met_JetRelativeBalDown, metphi_JetRelativeBalUp, metphi_JetRelativeBalDown;
float mjj_JetRelativeSampleUp, mjj_JetRelativeSampleDown, mjj_JetRelativeBalUp, mjj_JetRelativeBalDown, mjj_JetEta0to3Up, mjj_JetEta0to3Down, mjj_JetEta0to5Up, mjj_JetEta0to5Down, mjj_JetEta3to5Up, mjj_JetEta3to5Down, mjj_JetEC2Up, mjj_JetEC2Down;
int njets_JetRelativeSampleUp, njets_JetRelativeSampleDown, njets_JetRelativeBalUp, njets_JetRelativeBalDown, njets_JetEta0to3Up, njets_JetEta0to3Down, njets_JetEta0to5Up, njets_JetEta0to5Down, njets_JetEta3to5Up, njets_JetEta3to5Down, njets_JetEC2Up, njets_JetEC2Down;
float passEle27, passEle32, passEle35, passEle24Tau30, passEle24HPSTau30;
float matchEle27_1, matchEle32_1, matchEle35_1, matchEle24Tau30_1, matchEle24Tau30_2, matchEle24HPSTau30_1, matchEle24HPSTau30_2;
float filterEle27_1, filterEle32_1, filterEle35_1, filterEle24Tau30_1, filterEle24Tau30_2, filterEle24HPSTau30_1, filterEle24HPSTau30_2;
float byVVLooseIsolationMVArun2v2DBoldDMwLT_2, byVLooseIsolationMVArun2v2DBoldDMwLT_2, byLooseIsolationMVArun2v2DBoldDMwLT_2, byMediumIsolationMVArun2v2DBoldDMwLT_2, byTightIsolationMVArun2v2DBoldDMwLT_2, byVTightIsolationMVArun2v2DBoldDMwLT_2, byVVTightIsolationMVArun2v2DBoldDMwLT_2, byIsolationMVArun2v2DBoldDMwLTraw_2, byIsolationMVA3oldDMwLTraw_2;
float Rivet_VEta,Rivet_VPt,Rivet_errorCode,Rivet_higgsEta,Rivet_higgsPt,Rivet_nJets25,Rivet_nJets30,Rivet_p4decay_VEta,Rivet_p4decay_VPt,Rivet_prodMode,Rivet_stage0_cat,Rivet_stage1_cat_pTjet25GeV,Rivet_stage1_cat_pTjet30GeV,Rivet_stage1p1_cat;
unsigned int run, lumi, evt, NUP = -10;
int gen_match_1, gen_match_2=0;
float npu, rho, npv=-1, puweight, weight, numGenJets,jetPt_2;
float e_1, px_1, py_1, pz_1, pt_1, phi_1, eta_1, m_1, q_1, d0_1, dZ_1, mt_1, iso_1, l1_decayMode, isoDB_1;
float e_2, px_2, py_2, pz_2, pt_2, phi_2, eta_2, m_2, q_2, d0_2, dZ_2, mt_2, iso_2, l2_decayMode;
float je_1, jmass_1, jpt_1, jpx_1, jpy_1, jpz_1, jeta_1, jphi_1, jrawf_1, jmva_1, jpfid_1, jpuid_1;
float jpt_JetRelativeSampleUp_1, jpt_JetRelativeSampleDown_1, jpt_JetRelativeBalUp_1, jpt_JetRelativeBalDown_1, jpt_JetEta0to3Up_1, jpt_JetEta0to3Down_1, jpt_JetEta3to5Up_1, jpt_JetEta3to5Down_1, jpt_JetEta0to5Up_1, jpt_JetEta0to5Down_1, jpt_JetEC2Up_1, jpt_JetEC2Down_1;
float jpt_JetRelativeSampleUp_2, jpt_JetRelativeSampleDown_2, jpt_JetRelativeBalUp_2, jpt_JetRelativeBalDown_2, jpt_JetEta0to3Up_2, jpt_JetEta0to3Down_2, jpt_JetEta3to5Up_2, jpt_JetEta3to5Down_2, jpt_JetEta0to5Up_2, jpt_JetEta0to5Down_2, jpt_JetEC2Up_2, jpt_JetEC2Down_2;
float je_2, jmass_2, jpx_2, jpy_2, jpz_2, jpt_2, jeta_2, jphi_2, jrawf_2, jmva_2, jpfid_2, jpuid_2;
float bpt_1, beta_1, bphi_1, brawf_1, bmva_1, bpfid_1, bpuid_1, bflavor_1;
float bpt_2, beta_2, bphi_2, brawf_2, bmva_2, bpfid_2, bpuid_2, bflavor_2;
float met, metphi, metcov00,metcov01,metcov10,metcov11;
float met_UESDown, met_UESUp, metphi_UESDown, metphi_UESUp;
float top_reweighting, gen_Higgs_pt, gen_Higgs_mass=1.0;
float extraelec_veto, extramuon_veto, dilepton_veto=false;
float met_px, met_py,genpX,genpY,vispX,vispY,metSig,genpT,genM;
float pt_top1, pt_top2, genweight;
float decayModeFinding_2, againstElectronTightMVA6_2, againstElectronVTightMVA6_2, againstElectronVLooseMVA6_2, againstElectronMediumMVA6_2, againstElectronLooseMVA6_2, againstMuonLoose3_2, againstMuonTight3_2;
float againstElectronTightMVA62018_2, againstElectronVTightMVA62018_2, againstElectronVLooseMVA62018_2, againstElectronMediumMVA62018_2, againstElectronLooseMVA62018_2;
float byTightDPF_2,byVVVLooseDeepVSjet_2,byVVLooseDeepVSjet_2,byVLooseDeepVSjet_2,byLooseDeepVSjet_2,byMediumDeepVSjet_2,byTightDeepVSjet_2,byVTightDeepVSjet_2,byVVTightDeepVSjet_2;
float byVVVLooseDeepVSmu_2,byVVLooseDeepVSmu_2,byVLooseDeepVSmu_2,byLooseDeepVSmu_2,byMediumDeepVSmu_2,byTightDeepVSmu_2,byVTightDeepVSmu_2,byVVTightDeepVSmu_2;
float byVVVLooseDeepVSe_2,byVVLooseDeepVSe_2,byVLooseDeepVSe_2,byLooseDeepVSe_2,byMediumDeepVSe_2,byTightDeepVSe_2,byVTightDeepVSe_2,byVVTightDeepVSe_2;
float pt_1_ScaleUp, pt_1_ScaleDown, pt_1_SigmaUp, pt_1_SigmaDown;
float Flag_BadChargedCandidateFilter, Flag_BadPFMuonFilter, Flag_EcalDeadCellTriggerPrimitiveFilter, Flag_HBHENoiseFilter, Flag_HBHENoiseIsoFilter, Flag_badCloneMuon, Flag_badGlobalMuon, Flag_eeBadScFilter, Flag_globalTightHalo2016Filter, Flag_goodVertices, Flag_globalSuperTightHalo2016Filter, Flag_badMuons, Flag_duplicateMuons, Flag_ecalBadCalibFilter, Flag_ecalBadCalibReducedMINIAODFilter;
float bweight, genpt_1, genpt_2, geneta_1, geneta_2, prefiring_weight,prefiring_weight_up, prefiring_weight_down;
float matchEmbFilter_Ele24Tau30_1,matchEmbFilter_Ele27_1,matchEmbFilter_Ele32DoubleL1v1_1,matchEmbFilter_Ele32DoubleL1v2_1,matchEmbFilter_Ele32_1,matchEmbFilter_Ele35_1,matchEmbFilter_Ele24Tau30_2;

RecoilCorrector recoilPFMetCorrector("SMH_et_2016/HTT-utilities/RecoilCorrections/data/Type1_PFMET_2017.root");
MEtSys metSys("SMH_et_2016/HTT-utilities/RecoilCorrections/data/PFMEtSys_2017.root");

void fillTree(TTree *Run_Tree, HTauTauTree_et *tree, int entry_tree, int recoil, bool ismc){
    tree->GetEntry(entry_tree);
    run = tree->run;
    lumi = tree->lumi;
    evt =tree->evt;
    genweight = tree->GenWeight;
    bweight=tree->bweight_2017;
    prefiring_weight=tree->prefiring_weight;
    prefiring_weight_up=tree->prefiring_weight_up;
    prefiring_weight_down=tree->prefiring_weight_down;

    matchEmbFilter_Ele24Tau30_1=tree->eMatchEmbeddedFilterEle24Tau30;
    matchEmbFilter_Ele27_1=tree->eMatchEmbeddedFilterEle27;
    matchEmbFilter_Ele32_1=tree->eMatchEmbeddedFilterEle32;
    matchEmbFilter_Ele35_1=tree->eMatchEmbeddedFilterEle35;
    matchEmbFilter_Ele32DoubleL1v1_1=tree->eMatchEmbeddedFilterEle32DoubleL1_v1;
    matchEmbFilter_Ele32DoubleL1v2_1=tree->eMatchEmbeddedFilterEle32DoubleL1_v2;
    matchEmbFilter_Ele24Tau30_2=tree->tMatchEmbeddedFilterEle24Tau30;

    geneta_1=tree->eGenEta;
    geneta_2=tree->tGenEta;
    genpt_1=tree->eGenPt;
    genpt_2=tree->tGenPt;

    passEle27=tree->Ele27WPTightPass;
    passEle32=tree->Ele32WPTightPass;
    passEle35=tree->Ele35WPTightPass;
    passEle24Tau30=tree->Ele24LooseTau30Pass;

    matchEle27_1=tree->eMatchesEle27Path;
    matchEle32_1=tree->eMatchesEle32Path;
    matchEle35_1=tree->eMatchesEle35Path;
    matchEle24Tau30_1=tree->eMatchesEle24Tau30Path;
    matchEle24Tau30_2=tree->tMatchesEle24Tau30Path;
    filterEle27_1=tree->eMatchesEle27Filter;
    filterEle32_1=tree->eMatchesEle32Filter;
    filterEle35_1=tree->eMatchesEle35Filter;
    filterEle24Tau30_1=tree->eMatchesEle24Tau30Filter;
    filterEle24Tau30_2=tree->tMatchesEle24Tau30Filter;

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

    //FIXME noisy jet veto
    njets = tree->jetVeto30WoNoisyJets;
    nbtag = tree->bjetDeepCSVVeto20Medium_2018_DR0p5;
    nbtagL = tree->bjetDeepCSVVeto20Loose_2018_DR0p5;
    njets_JetRelativeSampleUp = tree->jetVeto30WoNoisyJets_JetRelativeSampleUp;
    njets_JetRelativeSampleDown = tree->jetVeto30WoNoisyJets_JetRelativeSampleDown;
    njets_JetEta3to5Up = tree->jetVeto30WoNoisyJets_JetEta3to5Up;
    njets_JetEta3to5Down = tree->jetVeto30WoNoisyJets_JetEta3to5Down;
    njets_JetEta0to5Up = tree->jetVeto30WoNoisyJets_JetEta0to5Up;
    njets_JetEta0to5Down = tree->jetVeto30WoNoisyJets_JetEta0to5Down;
    njets_JetEta0to3Up = tree->jetVeto30WoNoisyJets_JetEta0to3Up;
    njets_JetEta0to3Down = tree->jetVeto30WoNoisyJets_JetEta0to3Down;
    njets_JetEC2Up = tree->jetVeto30WoNoisyJets_JetEC2Up;
    njets_JetEC2Down = tree->jetVeto30WoNoisyJets_JetEC2Down;
    njets_JetRelativeBalUp = tree->jetVeto30WoNoisyJets_JetRelativeSampleUp; //FIXME
    njets_JetRelativeBalDown = tree->jetVeto30WoNoisyJets_JetRelativeSampleDown; //FIXME

    gen_match_1=tree->eZTTGenMatching;
    gen_match_2=tree->tZTTGenMatching;

    TLorentzVector tau1;
    TLorentzVector tau2;
    tau1.SetPtEtaPhiM(tree->ePt,tree->eEta,tree->ePhi,tree->eMass);
    tau2.SetPtEtaPhiM(tree->tPt,tree->tEta,tree->tPhi,tree->tMass);

//cout<<tree->type1_pfMetEt<<" "<<tree->type1_pfMet_shiftedPt_JetEta0to5Up<<" "<<tree->type1_pfMet_shiftedPt_JetEta0to5Down<<endl;

    TLorentzVector mymet;
    mymet.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex=mymet.Px();
    float pfmetcorr_ey=mymet.Py();

    TLorentzVector mymet_JetEta0to3Up;
    mymet_JetEta0to3Up.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEta0to3Up,0,tree->type1_pfMet_shiftedPhi_JetEta0to3Up,0);
    //mymet_JetEta0to3Up.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex_JetEta0to3Up=mymet_JetEta0to3Up.Px();
    float pfmetcorr_ey_JetEta0to3Up=mymet_JetEta0to3Up.Py();

    TLorentzVector mymet_JetEta0to3Down;
    mymet_JetEta0to3Down.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEta0to3Down,0,tree->type1_pfMet_shiftedPhi_JetEta0to3Down,0);
    //mymet_JetEta0to3Down.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex_JetEta0to3Down=mymet_JetEta0to3Down.Px();
    float pfmetcorr_ey_JetEta0to3Down=mymet_JetEta0to3Down.Py();

    TLorentzVector mymet_JetEC2Up;
    mymet_JetEC2Up.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEC2Up,0,tree->type1_pfMet_shiftedPhi_JetEC2Up,0);
    //mymet_JetEC2Up.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex_JetEC2Up=mymet_JetEC2Up.Px();
    float pfmetcorr_ey_JetEC2Up=mymet_JetEC2Up.Py();

    TLorentzVector mymet_JetEC2Down;
    mymet_JetEC2Down.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEC2Down,0,tree->type1_pfMet_shiftedPhi_JetEC2Down,0);
    //mymet_JetEC2Down.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex_JetEC2Down=mymet_JetEC2Down.Px();
    float pfmetcorr_ey_JetEC2Down=mymet_JetEC2Down.Py();

    TLorentzVector mymet_JetEta0to5Up;
    mymet_JetEta0to5Up.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEta0to5Up,0,tree->type1_pfMet_shiftedPhi_JetEta0to5Up,0);
    //mymet_JetEta0to5Up.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex_JetEta0to5Up=mymet_JetEta0to5Up.Px();
    float pfmetcorr_ey_JetEta0to5Up=mymet_JetEta0to5Up.Py();

    TLorentzVector mymet_JetEta0to5Down;
    mymet_JetEta0to5Down.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEta0to5Down,0,tree->type1_pfMet_shiftedPhi_JetEta0to5Down,0);
    //mymet_JetEta0to5Down.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex_JetEta0to5Down=mymet_JetEta0to5Down.Px();
    float pfmetcorr_ey_JetEta0to5Down=mymet_JetEta0to5Down.Py();

    TLorentzVector mymet_JetEta3to5Up;
    mymet_JetEta3to5Up.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEta3to5Up,0,tree->type1_pfMet_shiftedPhi_JetEta3to5Up,0);
    //mymet_JetEta3to5Up.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex_JetEta3to5Up=mymet_JetEta3to5Up.Px();
    float pfmetcorr_ey_JetEta3to5Up=mymet_JetEta3to5Up.Py();

    TLorentzVector mymet_JetEta3to5Down;
    mymet_JetEta3to5Down.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEta3to5Down,0,tree->type1_pfMet_shiftedPhi_JetEta3to5Down,0);
    //mymet_JetEta3to5Down.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex_JetEta3to5Down=mymet_JetEta3to5Down.Px();
    float pfmetcorr_ey_JetEta3to5Down=mymet_JetEta3to5Down.Py();

    TLorentzVector mymet_JetRelativeSampleUp;
    mymet_JetRelativeSampleUp.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetRelativeSampleUp,0,tree->type1_pfMet_shiftedPhi_JetRelativeSampleUp,0);
    //mymet_JetRelativeSampleUp.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex_JetRelativeSampleUp=mymet_JetRelativeSampleUp.Px();
    float pfmetcorr_ey_JetRelativeSampleUp=mymet_JetRelativeSampleUp.Py();

    TLorentzVector mymet_JetRelativeSampleDown;
    mymet_JetRelativeSampleDown.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetRelativeSampleDown,0,tree->type1_pfMet_shiftedPhi_JetRelativeSampleDown,0);
    //mymet_JetRelativeSampleDown.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex_JetRelativeSampleDown=mymet_JetRelativeSampleDown.Px();
    float pfmetcorr_ey_JetRelativeSampleDown=mymet_JetRelativeSampleDown.Py();

    TLorentzVector mymet_JetRelativeBalUp;
    mymet_JetRelativeBalUp.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetRelativeBalUp,0,tree->type1_pfMet_shiftedPhi_JetRelativeBalUp,0);
    //mymet_JetRelativeBalUp.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex_JetRelativeBalUp=mymet_JetRelativeBalUp.Px();
    float pfmetcorr_ey_JetRelativeBalUp=mymet_JetRelativeBalUp.Py();

    TLorentzVector mymet_JetRelativeBalDown;
    mymet_JetRelativeBalDown.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetRelativeBalDown,0,tree->type1_pfMet_shiftedPhi_JetRelativeBalDown,0);
    //mymet_JetRelativeBalDown.SetPtEtaPhiM(tree->type1_pfMetEt,0,tree->type1_pfMetPhi,0);
    float pfmetcorr_ex_JetRelativeBalDown=mymet_JetRelativeBalDown.Px();
    float pfmetcorr_ey_JetRelativeBalDown=mymet_JetRelativeBalDown.Py();

    TLorentzVector mymet_UESUp;
    mymet_UESUp.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_UnclusteredEnUp,0,tree->type1_pfMet_shiftedPhi_UnclusteredEnUp,0);
    float pfmetcorr_ex_UESUp=mymet_UESUp.Px();
    float pfmetcorr_ey_UESUp=mymet_UESUp.Py();

    TLorentzVector mymet_UESDown;
    mymet_UESDown.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_UnclusteredEnDown,0,tree->type1_pfMet_shiftedPhi_UnclusteredEnDown,0);
    float pfmetcorr_ex_UESDown=mymet_UESDown.Px();
    float pfmetcorr_ey_UESDown=mymet_UESDown.Py();

    TLorentzVector mymet_resolutionUp, mymet_resolutionDown, mymet_responseUp, mymet_responseDown;
    float pfmetcorr_ex_responseUp,pfmetcorr_ey_responseUp,pfmetcorr_ex_responseDown,pfmetcorr_ey_responseDown,pfmetcorr_ex_resolutionUp,pfmetcorr_ey_resolutionUp,pfmetcorr_ex_resolutionDown,pfmetcorr_ey_resolutionDown;

    if (ismc && tree->tZTTGenMatching==5 && tree->tDecayMode==0){
        mymet=mymet+tau2-1.007*tau2;
        mymet_UESDown=mymet_UESDown+tau2-1.007*tau2;
        mymet_UESUp=mymet_UESUp+tau2-1.007*tau2;
        mymet_JetEta0to3Up=mymet_JetEta0to3Up+tau2-1.007*tau2;
        mymet_JetEta0to3Down=mymet_JetEta0to3Down+tau2-1.007*tau2;
        mymet_JetEC2Up=mymet_JetEC2Up+tau2-1.007*tau2;
        mymet_JetEC2Down=mymet_JetEC2Down+tau2-1.007*tau2;
        mymet_JetRelativeSampleUp=mymet_JetRelativeSampleUp+tau2-1.007*tau2;
        mymet_JetRelativeSampleDown=mymet_JetRelativeSampleDown+tau2-1.007*tau2;
        mymet_JetEta3to5Up=mymet_JetEta3to5Up+tau2-1.007*tau2;
        mymet_JetEta3to5Down=mymet_JetEta3to5Down+tau2-1.007*tau2;
        mymet_JetRelativeBalUp=mymet_JetRelativeBalUp+tau2-1.007*tau2;
        mymet_JetRelativeBalDown=mymet_JetRelativeBalDown+tau2-1.007*tau2;
        mymet_JetEta0to5Up=mymet_JetEta0to5Up+tau2-1.007*tau2;
        mymet_JetEta0to5Down=mymet_JetEta0to5Down+tau2-1.007*tau2;
    }
    else if (ismc && tree->tZTTGenMatching==5 && tree->tDecayMode==1){
        mymet=mymet+tau2-0.998*tau2;
        mymet_UESDown=mymet_UESDown+tau2-0.998*tau2;
        mymet_UESUp=mymet_UESUp+tau2-0.998*tau2;
        mymet_JetEta0to3Up=mymet_JetEta0to3Up+tau2-0.998*tau2;
        mymet_JetEta0to3Down=mymet_JetEta0to3Down+tau2-0.998*tau2;
        mymet_JetEC2Up=mymet_JetEC2Up+tau2-0.998*tau2;
        mymet_JetEC2Down=mymet_JetEC2Down+tau2-0.998*tau2;
        mymet_JetRelativeSampleUp=mymet_JetRelativeSampleUp+tau2-0.998*tau2;
        mymet_JetRelativeSampleDown=mymet_JetRelativeSampleDown+tau2-0.998*tau2;
        mymet_JetEta3to5Up=mymet_JetEta3to5Up+tau2-0.998*tau2;
        mymet_JetEta3to5Down=mymet_JetEta3to5Down+tau2-0.998*tau2;
        mymet_JetRelativeBalUp=mymet_JetRelativeBalUp+tau2-0.998*tau2;
        mymet_JetRelativeBalDown=mymet_JetRelativeBalDown+tau2-0.998*tau2;
        mymet_JetEta0to5Up=mymet_JetEta0to5Up+tau2-0.998*tau2;
        mymet_JetEta0to5Down=mymet_JetEta0to5Down+tau2-0.998*tau2;
    }
    else if (ismc && tree->tZTTGenMatching==5 && tree->tDecayMode==10){
        mymet=mymet+tau2-1.001*tau2;
        mymet_UESDown=mymet_UESDown+tau2-1.001*tau2;
        mymet_UESUp=mymet_UESUp+tau2-1.001*tau2;
        mymet_JetEta0to3Up=mymet_JetEta0to3Up+tau2-1.001*tau2;
        mymet_JetEta0to3Down=mymet_JetEta0to3Down+tau2-1.001*tau2;
        mymet_JetEC2Up=mymet_JetEC2Up+tau2-1.001*tau2;
        mymet_JetEC2Down=mymet_JetEC2Down+tau2-1.001*tau2;
        mymet_JetRelativeSampleUp=mymet_JetRelativeSampleUp+tau2-1.001*tau2;
        mymet_JetRelativeSampleDown=mymet_JetRelativeSampleDown+tau2-1.001*tau2;
        mymet_JetEta3to5Up=mymet_JetEta3to5Up+tau2-1.001*tau2;
        mymet_JetEta3to5Down=mymet_JetEta3to5Down+tau2-1.001*tau2;
        mymet_JetRelativeBalUp=mymet_JetRelativeBalUp+tau2-1.001*tau2;
        mymet_JetRelativeBalDown=mymet_JetRelativeBalDown+tau2-1.001*tau2;
        mymet_JetEta0to5Up=mymet_JetEta0to5Up+tau2-1.001*tau2;
        mymet_JetEta0to5Down=mymet_JetEta0to5Down+tau2-1.001*tau2;
    }
    if (ismc && (tree->tZTTGenMatching==1 or tree->tZTTGenMatching==3) && tree->tDecayMode==0){
        mymet=mymet+tau2-1.003*tau2;
        mymet_UESDown=mymet_UESDown+tau2-1.003*tau2;
        mymet_UESUp=mymet_UESUp+tau2-1.003*tau2;
        mymet_JetEta0to3Up=mymet_JetEta0to3Up+tau2-1.003*tau2;
        mymet_JetEta0to3Down=mymet_JetEta0to3Down+tau2-1.003*tau2;
        mymet_JetEC2Up=mymet_JetEC2Up+tau2-1.003*tau2;
        mymet_JetEC2Down=mymet_JetEC2Down+tau2-1.003*tau2;
        mymet_JetRelativeSampleUp=mymet_JetRelativeSampleUp+tau2-1.003*tau2;
        mymet_JetRelativeSampleDown=mymet_JetRelativeSampleDown+tau2-1.003*tau2;
        mymet_JetEta3to5Up=mymet_JetEta3to5Up+tau2-1.003*tau2;
        mymet_JetEta3to5Down=mymet_JetEta3to5Down+tau2-1.003*tau2;
        mymet_JetRelativeBalUp=mymet_JetRelativeBalUp+tau2-1.003*tau2;
        mymet_JetRelativeBalDown=mymet_JetRelativeBalDown+tau2-1.003*tau2;
        mymet_JetEta0to5Up=mymet_JetEta0to5Up+tau2-1.003*tau2;
        mymet_JetEta0to5Down=mymet_JetEta0to5Down+tau2-1.003*tau2;
    }
    else if (ismc && (tree->tZTTGenMatching==1 or tree->tZTTGenMatching==3) && tree->tDecayMode==1){
        mymet=mymet+tau2-1.036*tau2;
        mymet_UESDown=mymet_UESDown+tau2-1.036*tau2;
        mymet_UESUp=mymet_UESUp+tau2-1.036*tau2;
        mymet_JetEta0to3Up=mymet_JetEta0to3Up+tau2-1.036*tau2;
        mymet_JetEta0to3Down=mymet_JetEta0to3Down+tau2-1.036*tau2;
        mymet_JetEC2Up=mymet_JetEC2Up+tau2-1.036*tau2;
        mymet_JetEC2Down=mymet_JetEC2Down+tau2-1.036*tau2;
        mymet_JetRelativeSampleUp=mymet_JetRelativeSampleUp+tau2-1.036*tau2;
        mymet_JetRelativeSampleDown=mymet_JetRelativeSampleDown+tau2-1.036*tau2;
        mymet_JetEta3to5Up=mymet_JetEta3to5Up+tau2-1.036*tau2;
        mymet_JetEta3to5Down=mymet_JetEta3to5Down+tau2-1.036*tau2;
        mymet_JetRelativeBalUp=mymet_JetRelativeBalUp+tau2-1.036*tau2;
        mymet_JetRelativeBalDown=mymet_JetRelativeBalDown+tau2-1.036*tau2;
        mymet_JetEta0to5Up=mymet_JetEta0to5Up+tau2-1.036*tau2;
        mymet_JetEta0to5Down=mymet_JetEta0to5Down+tau2-1.036*tau2;
    }

    int recoiljets=tree->jetVeto30WoNoisyJets+1;
    if (recoil==2) recoiljets=tree->jetVeto30WoNoisyJets;

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
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_JetEta0to3Up.Px(), // uncorrected type I pf met px (float)
         mymet_JetEta0to3Up.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_JetEta0to3Up, // corrected type I pf met px (float)
         pfmetcorr_ey_JetEta0to3Up  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_JetEta0to3Down.Px(), // uncorrected type I pf met px (float)
         mymet_JetEta0to3Down.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_JetEta0to3Down, // corrected type I pf met px (float)
         pfmetcorr_ey_JetEta0to3Down  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_JetEC2Up.Px(), // uncorrected type I pf met px (float)
         mymet_JetEC2Up.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_JetEC2Up, // corrected type I pf met px (float)
         pfmetcorr_ey_JetEC2Up  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_JetEC2Down.Px(), // uncorrected type I pf met px (float)
         mymet_JetEC2Down.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_JetEC2Down, // corrected type I pf met px (float)
         pfmetcorr_ey_JetEC2Down  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_JetEta0to5Up.Px(), // uncorrected type I pf met px (float)
         mymet_JetEta0to5Up.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_JetEta0to5Up, // corrected type I pf met px (float)
         pfmetcorr_ey_JetEta0to5Up  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_JetEta0to5Down.Px(), // uncorrected type I pf met px (float)
         mymet_JetEta0to5Down.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_JetEta0to5Down, // corrected type I pf met px (float)
         pfmetcorr_ey_JetEta0to5Down  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_JetEta3to5Up.Px(), // uncorrected type I pf met px (float)
         mymet_JetEta3to5Up.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_JetEta3to5Up, // corrected type I pf met px (float)
         pfmetcorr_ey_JetEta3to5Up  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_JetEta3to5Down.Px(), // uncorrected type I pf met px (float)
         mymet_JetEta3to5Down.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_JetEta3to5Down, // corrected type I pf met px (float)
         pfmetcorr_ey_JetEta3to5Down  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_JetRelativeBalUp.Px(), // uncorrected type I pf met px (float)
         mymet_JetRelativeBalUp.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_JetRelativeBalUp, // corrected type I pf met px (float)
         pfmetcorr_ey_JetRelativeBalUp  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_JetRelativeBalDown.Px(), // uncorrected type I pf met px (float)
         mymet_JetRelativeBalDown.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_JetRelativeBalDown, // corrected type I pf met px (float)
         pfmetcorr_ey_JetRelativeBalDown  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_JetRelativeSampleUp.Px(), // uncorrected type I pf met px (float)
         mymet_JetRelativeSampleUp.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_JetRelativeSampleUp, // corrected type I pf met px (float)
         pfmetcorr_ey_JetRelativeSampleUp  // corrected type I pf met py (float)
        );
         recoilPFMetCorrector.CorrectByMeanResolution(
         mymet_JetRelativeSampleDown.Px(), // uncorrected type I pf met px (float)
         mymet_JetRelativeSampleDown.Py(), // uncorrected type I pf met py (float)
         tree->genpX, // generator Z/W/Higgs px (float)
         tree->genpY, // generator Z/W/Higgs py (float)
         tree->vispX, // generator visible Z/W/Higgs px (float)
         tree->vispY, // generator visible Z/W/Higgs py (float)
         recoiljets,  // number of jets (hadronic jet multiplicity) (int)
         pfmetcorr_ex_JetRelativeSampleDown, // corrected type I pf met px (float)
         pfmetcorr_ey_JetRelativeSampleDown  // corrected type I pf met py (float)
        );
    }

    mymet.SetPxPyPzE(pfmetcorr_ex,pfmetcorr_ey,0,sqrt(pfmetcorr_ex*pfmetcorr_ex+pfmetcorr_ey*pfmetcorr_ey));
    int Process= MEtSys::ProcessType::BOSON;
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
    mymet_JetRelativeBalUp.SetPxPyPzE(pfmetcorr_ex_JetRelativeBalUp,pfmetcorr_ey_JetRelativeBalUp,0,sqrt(pfmetcorr_ex_JetRelativeBalUp*pfmetcorr_ex_JetRelativeBalUp+pfmetcorr_ey_JetRelativeBalUp*pfmetcorr_ey_JetRelativeBalUp));
    mymet_JetRelativeBalDown.SetPxPyPzE(pfmetcorr_ex_JetRelativeBalDown,pfmetcorr_ey_JetRelativeBalDown,0,sqrt(pfmetcorr_ex_JetRelativeBalDown*pfmetcorr_ex_JetRelativeBalDown+pfmetcorr_ey_JetRelativeBalDown*pfmetcorr_ey_JetRelativeBalDown));
    mymet_JetRelativeSampleUp.SetPxPyPzE(pfmetcorr_ex_JetRelativeSampleUp,pfmetcorr_ey_JetRelativeSampleUp,0,sqrt(pfmetcorr_ex_JetRelativeSampleUp*pfmetcorr_ex_JetRelativeSampleUp+pfmetcorr_ey_JetRelativeSampleUp*pfmetcorr_ey_JetRelativeSampleUp));
    mymet_JetRelativeSampleDown.SetPxPyPzE(pfmetcorr_ex_JetRelativeSampleDown,pfmetcorr_ey_JetRelativeSampleDown,0,sqrt(pfmetcorr_ex_JetRelativeSampleDown*pfmetcorr_ex_JetRelativeSampleDown+pfmetcorr_ey_JetRelativeSampleDown*pfmetcorr_ey_JetRelativeSampleDown));
    mymet_JetEta3to5Up.SetPxPyPzE(pfmetcorr_ex_JetEta3to5Up,pfmetcorr_ey_JetEta3to5Up,0,sqrt(pfmetcorr_ex_JetEta3to5Up*pfmetcorr_ex_JetEta3to5Up+pfmetcorr_ey_JetEta3to5Up*pfmetcorr_ey_JetEta3to5Up));
    mymet_JetEta3to5Down.SetPxPyPzE(pfmetcorr_ex_JetEta3to5Down,pfmetcorr_ey_JetEta3to5Down,0,sqrt(pfmetcorr_ex_JetEta3to5Down*pfmetcorr_ex_JetEta3to5Down+pfmetcorr_ey_JetEta3to5Down*pfmetcorr_ey_JetEta3to5Down));
    mymet_JetEta0to5Up.SetPxPyPzE(pfmetcorr_ex_JetEta0to5Up,pfmetcorr_ey_JetEta0to5Up,0,sqrt(pfmetcorr_ex_JetEta0to5Up*pfmetcorr_ex_JetEta0to5Up+pfmetcorr_ey_JetEta0to5Up*pfmetcorr_ey_JetEta0to5Up));
    mymet_JetEta0to5Down.SetPxPyPzE(pfmetcorr_ex_JetEta0to5Down,pfmetcorr_ey_JetEta0to5Down,0,sqrt(pfmetcorr_ex_JetEta0to5Down*pfmetcorr_ex_JetEta0to5Down+pfmetcorr_ey_JetEta0to5Down*pfmetcorr_ey_JetEta0to5Down));
    mymet_JetEta0to3Up.SetPxPyPzE(pfmetcorr_ex_JetEta0to3Up,pfmetcorr_ey_JetEta0to3Up,0,sqrt(pfmetcorr_ex_JetEta0to3Up*pfmetcorr_ex_JetEta0to3Up+pfmetcorr_ey_JetEta0to3Up*pfmetcorr_ey_JetEta0to3Up));
    mymet_JetEta0to3Down.SetPxPyPzE(pfmetcorr_ex_JetEta0to3Down,pfmetcorr_ey_JetEta0to3Down,0,sqrt(pfmetcorr_ex_JetEta0to3Down*pfmetcorr_ex_JetEta0to3Down+pfmetcorr_ey_JetEta0to3Down*pfmetcorr_ey_JetEta0to3Down));
    mymet_JetEC2Up.SetPxPyPzE(pfmetcorr_ex_JetEC2Up,pfmetcorr_ey_JetEC2Up,0,sqrt(pfmetcorr_ex_JetEC2Up*pfmetcorr_ex_JetEC2Up+pfmetcorr_ey_JetEC2Up*pfmetcorr_ey_JetEC2Up));
    mymet_JetEC2Down.SetPxPyPzE(pfmetcorr_ex_JetEC2Down,pfmetcorr_ey_JetEC2Down,0,sqrt(pfmetcorr_ex_JetEC2Down*pfmetcorr_ex_JetEC2Down+pfmetcorr_ey_JetEC2Down*pfmetcorr_ey_JetEC2Down));


    met=mymet.Pt();
    metphi=mymet.Phi();
    met_px=mymet.Px();
    met_py=mymet.Py();
    met_UESUp=mymet_UESUp.Pt();
    metphi_UESUp=mymet_UESUp.Phi();
    met_UESDown=mymet_UESDown.Pt();
    metphi_UESDown=mymet_UESDown.Phi();
    met_JetEta0to3Up=mymet_JetEta0to3Up.Pt();
    metphi_JetEta0to3Up=mymet_JetEta0to3Up.Phi();
    met_JetEta0to3Down=mymet_JetEta0to3Down.Pt();
    metphi_JetEta0to3Down=mymet_JetEta0to3Down.Phi();
    met_JetEC2Up=mymet_JetEC2Up.Pt();
    metphi_JetEC2Up=mymet_JetEC2Up.Phi();
    met_JetEC2Down=mymet_JetEC2Down.Pt();
    metphi_JetEC2Down=mymet_JetEC2Down.Phi();
    met_JetRelativeSampleUp=mymet_JetRelativeSampleUp.Pt();
    metphi_JetRelativeSampleUp=mymet_JetRelativeSampleUp.Phi();
    met_JetRelativeSampleDown=mymet_JetRelativeSampleDown.Pt();
    metphi_JetRelativeSampleDown=mymet_JetRelativeSampleDown.Phi();
    met_JetRelativeBalUp=mymet_JetRelativeBalUp.Pt();
    metphi_JetRelativeBalUp=mymet_JetRelativeBalUp.Phi();
    met_JetRelativeBalDown=mymet_JetRelativeBalDown.Pt();
    metphi_JetRelativeBalDown=mymet_JetRelativeBalDown.Phi();
    met_JetEta3to5Up=mymet_JetEta3to5Up.Pt();
    metphi_JetEta3to5Up=mymet_JetEta3to5Up.Phi();
    met_JetEta3to5Down=mymet_JetEta3to5Down.Pt();
    metphi_JetEta3to5Down=mymet_JetEta3to5Down.Phi();
    met_JetEta0to5Up=mymet_JetEta0to5Up.Pt();
    metphi_JetEta0to5Up=mymet_JetEta0to5Up.Phi();
    met_JetEta0to5Down=mymet_JetEta0to5Down.Pt();
    metphi_JetEta0to5Down=mymet_JetEta0to5Down.Phi();

    met_responseUp=mymet_responseUp.Pt();
    met_resolutionUp=mymet_resolutionUp.Pt();
    metphi_responseUp=mymet_responseUp.Phi();
    metphi_resolutionUp=mymet_resolutionUp.Phi();
    met_responseDown=mymet_responseDown.Pt();
    met_resolutionDown=mymet_resolutionDown.Pt();
    metphi_responseDown=mymet_responseDown.Phi();
    metphi_resolutionDown=mymet_resolutionDown.Phi();

//cout<<met<<" "<<met_resolutionDown<<" "<<met_resolutionUp<<" "<<met_responseDown<<" "<<met_responseUp<<endl;
//cout<<met<<" "<<met_JetEta0to3Up<<" "<<met_JetEta0to3Down<<" "<<met_JetEta0to5Up<<" "<<met_JetEta0to5Down<<" "<<met_JetEta3to5Up<<" "<<met_JetEta3to5Down<<" "<<endl;

    if (ismc && tree->tZTTGenMatching==5 && tree->tDecayMode==0) tau2=tau2*1.007;
    else if (ismc && tree->tZTTGenMatching==5 && tree->tDecayMode==1) tau2=tau2*0.998;
    else if (ismc && tree->tZTTGenMatching==5 && tree->tDecayMode==10) tau2=tau2*1.001;
    if (ismc && (tree->tZTTGenMatching==1 or tree->tZTTGenMatching==3) && tree->tDecayMode==0) tau2=tau2*1.003;
    else if (ismc && (tree->tZTTGenMatching==1 or tree->tZTTGenMatching==3) && tree->tDecayMode==1) tau2=tau2*1.036;

    l2_decayMode=tree->tDecayMode;

    float uncorrectedE=tau1.E();
    TLorentzVector myeleScaleUp=tau1*(tree->eEnergyScaleUp/uncorrectedE);
    TLorentzVector myeleScaleDown=tau1*(tree->eEnergyScaleDown/uncorrectedE);
    TLorentzVector myeleSigmaUp=tau1*(tree->eEnergySigmaUp/uncorrectedE);
    TLorentzVector myeleSigmaDown=tau1*(tree->eEnergySigmaDown/uncorrectedE);
    tau1=tau1*(tree->eCorrectedEt/uncorrectedE);
    m_1 = tree->eMass;
    e_1 = tau1.E();
    pt_1 = tau1.Pt();
    pt_1_ScaleUp = myeleScaleUp.Pt();
    pt_1_ScaleDown = myeleScaleDown.Pt();
    pt_1_SigmaUp = myeleSigmaUp.Pt();
    pt_1_SigmaDown = myeleSigmaDown.Pt();
    phi_1 = tau1.Phi();
    eta_1 = tau1.Eta();
    dZ_1 = tree->ePVDZ;
    d0_1 = tree->ePVDXY;
    isoDB_1 = tree->eIsoDB03;
    iso_1 = tree->eRelPFIsoRho;
    q_1 = tree->eCharge;
    eid80_noiso_1=tree->eMVANoisoWP80;
    eid80_iso_1=tree->eMVAIsoWP80;
    eid90_noiso_1=tree->eMVANoisoWP90;
    eid90_iso_1=tree->eMVAIsoWP90;

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
    jpt_JetEta0to3Up_1=tree->j1pt_JetEta0to3Up;
    jpt_JetEta0to3Down_1=tree->j1pt_JetEta0to3Down;
    jpt_JetEC2Up_1=tree->j1pt_JetEC2Up;
    jpt_JetEC2Down_1=tree->j1pt_JetEC2Down;
    jpt_JetEta0to5Up_1=tree->j1pt_JetEta0to5Up;
    jpt_JetEta0to5Down_1=tree->j1pt_JetEta0to5Down;
    jpt_JetEta3to5Up_1=tree->j1pt_JetEta3to5Up;
    jpt_JetEta3to5Down_1=tree->j1pt_JetEta3to5Down;
    jpt_JetRelativeSampleUp_1=tree->j1pt_JetRelativeSampleUp;
    jpt_JetRelativeSampleDown_1=tree->j1pt_JetRelativeSampleDown;
    jpt_JetRelativeBalUp_1=tree->j1pt_JetRelativeBalUp;
    jpt_JetRelativeBalDown_1=tree->j1pt_JetRelativeBalDown;
    jpt_JetEta0to3Up_2=tree->j2pt_JetEta0to3Up;
    jpt_JetEta0to3Down_2=tree->j2pt_JetEta0to3Down;
    jpt_JetEC2Up_2=tree->j2pt_JetEC2Up;
    jpt_JetEC2Down_2=tree->j2pt_JetEC2Down;
    jpt_JetEta0to5Up_2=tree->j2pt_JetEta0to5Up;
    jpt_JetEta0to5Down_2=tree->j2pt_JetEta0to5Down;
    jpt_JetEta3to5Up_2=tree->j2pt_JetEta3to5Up;
    jpt_JetEta3to5Down_2=tree->j2pt_JetEta3to5Down;
    jpt_JetRelativeSampleUp_2=tree->j2pt_JetRelativeSampleUp;
    jpt_JetRelativeSampleDown_2=tree->j2pt_JetRelativeSampleDown;
    jpt_JetRelativeBalUp_2=tree->j2pt_JetRelativeBalUp;
    jpt_JetRelativeBalDown_2=tree->j2pt_JetRelativeBalDown;
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

  mjj_JetRelativeBalUp=tree->vbfMass_JetRelativeBalUp;
  mjj_JetRelativeBalDown=tree->vbfMass_JetRelativeBalDown;
  mjj_JetRelativeSampleUp=tree->vbfMass_JetRelativeSampleUp;
  mjj_JetRelativeSampleDown=tree->vbfMass_JetRelativeSampleDown;
  mjj_JetEta0to3Up=tree->vbfMass_JetEta0to3Up;
  mjj_JetEta0to3Down=tree->vbfMass_JetEta0to3Down;
  mjj_JetEC2Up=tree->vbfMass_JetEC2Up;
  mjj_JetEC2Down=tree->vbfMass_JetEC2Down;
  mjj_JetEta3to5Up=tree->vbfMass_JetEta3to5Up;
  mjj_JetEta3to5Down=tree->vbfMass_JetEta3to5Down;
  mjj_JetEta0to5Up=tree->vbfMass_JetEta0to5Up;
  mjj_JetEta0to5Down=tree->vbfMass_JetEta0to5Down;

  L1iso=tree->tL1IsoTauMatch;
  L1pt=tree->tL1IsoTauPt;

  NUP=tree->NUP;
  npu=tree->nTruePU;
  npv=tree->nvtx;

  Run_Tree->Fill();
}

#endif


