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
#include "HTauTauTree_em.h"
#include "RecoilCorrector.h"
#include "MEtSys.h"

using namespace std;
float pt_1_ScaleUp, pt_1_ScaleDown, pt_1_SigmaUp, pt_1_SigmaDown;
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
float passMu8E23, passMu23E12;
float matchMu8E23_1, matchMu23E12_1, filterMu8E23_1, filterMu23E12_1;
float matchMu8E23_2, matchMu23E12_2, filterMu8E23_2, filterMu23E12_2;
float byVVLooseIsolationMVArun2v2DBoldDMwLT_2, byVLooseIsolationMVArun2v2DBoldDMwLT_2, byLooseIsolationMVArun2v2DBoldDMwLT_2, byMediumIsolationMVArun2v2DBoldDMwLT_2, byTightIsolationMVArun2v2DBoldDMwLT_2, byVTightIsolationMVArun2v2DBoldDMwLT_2, byVVTightIsolationMVArun2v2DBoldDMwLT_2, byIsolationMVArun2v2DBoldDMwLTraw_2, byIsolationMVA3oldDMwLTraw_2;
float Rivet_VEta,Rivet_VPt,Rivet_errorCode,Rivet_higgsEta,Rivet_higgsPt,Rivet_nJets25,Rivet_nJets30,Rivet_p4decay_VEta,Rivet_p4decay_VPt,Rivet_prodMode,Rivet_stage0_cat,Rivet_stage1_cat_pTjet25GeV,Rivet_stage1_cat_pTjet30GeV, Rivet_stage1p1_cat;
unsigned int run, lumi, evt, NUP = -10;
int gen_match_1, gen_match_2=0;
float npu, rho, npv=-1, puweight, weight, numGenJets,jetPt_2;
float e_1, px_1, py_1, pz_1, pt_1, phi_1, eta_1, m_1, q_1, d0_1, dZ_1, mt_1, iso_1, l1_decayMode, isoDB_1;
float e_2, px_2, py_2, pz_2, pt_2, phi_2, eta_2, m_2, q_2, d0_2, dZ_2, mt_2, iso_2, l2_decayMode;
float je_1, jmass_1, jpt_1, jpx_1, jpy_1, jpz_1, jeta_1, jphi_1, jrawf_1, jmva_1, jpfid_1, jpuid_1, jcsv_1;
float je_2, jmass_2, jpx_2, jpy_2, jpz_2, jpt_2, jeta_2, jphi_2, jrawf_2, jmva_2, jpfid_2, jpuid_2, jcsv_2;
float bpt_1, beta_1, bphi_1, brawf_1, bmva_1, bpfid_1, bpuid_1, bflavor_1;
float bpt_2, beta_2, bphi_2, brawf_2, bmva_2, bpfid_2, bpuid_2, bflavor_2;
float met, metphi, metcov00,metcov01,metcov10,metcov11;
float met_UESDown, met_UESUp, metphi_UESDown, metphi_UESUp;
float top_reweighting, gen_Higgs_pt, gen_Higgs_mass=1.0;
float extraelec_veto, extramuon_veto, dilepton_veto=false;
float met_px, met_py,genpX,genpY,vispX,vispY,metSig,genpT,genM;
float pt_top1, pt_top2, genweight, bweight;
float decayModeFinding_2, againstElectronTightMVA6_2, againstElectronVTightMVA6_2, againstElectronVLooseMVA6_2, againstElectronMediumMVA6_2, againstElectronLooseMVA6_2, againstMuonLoose3_2, againstMuonTight3_2;
float Flag_BadChargedCandidateFilter, Flag_BadPFMuonFilter, Flag_EcalDeadCellTriggerPrimitiveFilter, Flag_HBHENoiseFilter, Flag_HBHENoiseIsoFilter, Flag_badCloneMuon, Flag_badGlobalMuon, Flag_eeBadScFilter, Flag_globalTightHalo2016Filter, Flag_goodVertices, Flag_globalSuperTightHalo2016Filter, Flag_badMuons, Flag_duplicateMuons, Flag_ecalBadCalibFilter, Flag_ecalBadCalibReducedMINIAODFilter;
float genpt_1, genpt_2, geneta_1, geneta_2;

RecoilCorrector recoilPFMetCorrector("SMH_et_2016/HTT-utilities/RecoilCorrections/data/TypeI-PFMet_Run2018.root");
MEtSys metSys("SMH_et_2016/HTT-utilities/RecoilCorrections/data/PFMEtSys_2017.root");

void fillTree(TTree *Run_Tree, HTauTauTree_em *tree, int entry_tree, int recoil, bool ismc){
    tree->GetEntry(entry_tree);
    run = tree->run;
    lumi = tree->lumi;
    evt =tree->evt;
    genweight = tree->GenWeight;
    bweight=tree->bweight_2018;

    geneta_1=tree->eGenEta;
    geneta_2=tree->mGenEta;
    genpt_1=tree->eGenPt;
    genpt_2=tree->mGenPt;

    passMu8E23=tree->mu8e23DZPass;
    passMu23E12=tree->mu23e12DZPass;
    matchMu8E23_1=tree->eMatchesMu8e23DZPath;//FIXME
    matchMu23E12_1=tree->eMatchesMu23e12DZPath;//FIXME
    filterMu8E23_1=tree->eMatchesMu8e23DZFilter;//FIXME
    filterMu23E12_1=tree->eMatchesMu23e12DZFilter;//FIXME
    matchMu8E23_2=tree->mMatchesMu8e23DZPath;//FIXME
    matchMu23E12_2=tree->mMatchesMu23e12DZPath;//FIXME
    filterMu8E23_2=tree->mMatchesMu8e23DZFilter;//FIXME
    filterMu23E12_2=tree->mMatchesMu23e12DZFilter;//FIXME

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
    Flag_ecalBadCalibReducedMINIAODFilter = tree->Flag_ecalBadCalibReducedMINIAODFilter;
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

    gen_Higgs_pt=tree->genpT;
    gen_Higgs_mass=tree->genM;

    pt_top1=tree->topQuarkPt1;
    pt_top2=tree->topQuarkPt2;

    weight=tree->GenWeight;

    njets = tree->jetVeto30;
    nbtag = tree->bjetDeepCSVVeto20Medium_2018_DR0p5;
    nbtagL = tree->bjetDeepCSVVeto20Loose_2018_DR0p5;
    njets_JetRelativeSampleUp = tree->jetVeto30_JetRelativeSampleUp;
    njets_JetRelativeSampleDown = tree->jetVeto30_JetRelativeSampleDown;
    njets_JetEta3to5Up = tree->jetVeto30_JetEta3to5Up;
    njets_JetEta3to5Down = tree->jetVeto30_JetEta3to5Down;
    njets_JetEta0to5Up = tree->jetVeto30_JetEta0to5Up;
    njets_JetEta0to5Down = tree->jetVeto30_JetEta0to5Down;
    njets_JetEta0to3Up = tree->jetVeto30_JetEta0to3Up;
    njets_JetEta0to3Down = tree->jetVeto30_JetEta0to3Down;
    njets_JetRelativeBalUp = tree->jetVeto30_JetRelativeBalUp;
    njets_JetRelativeBalDown = tree->jetVeto30_JetRelativeBalDown;
    njets_JetEC2Up = tree->jetVeto30_JetEC2Up;
    njets_JetEC2Down = tree->jetVeto30_JetEC2Down;

    gen_match_1=tree->eZTTGenMatching;
    gen_match_2=tree->mZTTGenMatching;

    TLorentzVector tau1;
    TLorentzVector tau2;
    tau1.SetPtEtaPhiM(tree->ePt,tree->eEta,tree->ePhi,tree->eMass);
    tau2.SetPtEtaPhiM(tree->mPt,tree->mEta,tree->mPhi,tree->mMass);

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

    TLorentzVector mymet_JetEta0to3Up;
    mymet_JetEta0to3Up.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEta0to3Up,0,tree->type1_pfMet_shiftedPhi_JetEta0to3Up,0);
    float pfmetcorr_ex_JetEta0to3Up=mymet_JetEta0to3Up.Px();
    float pfmetcorr_ey_JetEta0to3Up=mymet_JetEta0to3Up.Py();

    TLorentzVector mymet_JetEta0to3Down;
    mymet_JetEta0to3Down.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEta0to3Down,0,tree->type1_pfMet_shiftedPhi_JetEta0to3Down,0);
    float pfmetcorr_ex_JetEta0to3Down=mymet_JetEta0to3Down.Px();
    float pfmetcorr_ey_JetEta0to3Down=mymet_JetEta0to3Down.Py();

    TLorentzVector mymet_JetEC2Up;
    mymet_JetEC2Up.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEC2Up,0,tree->type1_pfMet_shiftedPhi_JetEC2Up,0);
    float pfmetcorr_ex_JetEC2Up=mymet_JetEC2Up.Px();
    float pfmetcorr_ey_JetEC2Up=mymet_JetEC2Up.Py();

    TLorentzVector mymet_JetEC2Down;
    mymet_JetEC2Down.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEC2Down,0,tree->type1_pfMet_shiftedPhi_JetEC2Down,0);
    float pfmetcorr_ex_JetEC2Down=mymet_JetEC2Down.Px();
    float pfmetcorr_ey_JetEC2Down=mymet_JetEC2Down.Py();

    TLorentzVector mymet_JetEta0to5Up;
    mymet_JetEta0to5Up.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEta0to5Up,0,tree->type1_pfMet_shiftedPhi_JetEta0to5Up,0);
    float pfmetcorr_ex_JetEta0to5Up=mymet_JetEta0to5Up.Px();
    float pfmetcorr_ey_JetEta0to5Up=mymet_JetEta0to5Up.Py();

    TLorentzVector mymet_JetEta0to5Down;
    mymet_JetEta0to5Down.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEta0to5Down,0,tree->type1_pfMet_shiftedPhi_JetEta0to5Down,0);
    float pfmetcorr_ex_JetEta0to5Down=mymet_JetEta0to5Down.Px();
    float pfmetcorr_ey_JetEta0to5Down=mymet_JetEta0to5Down.Py();

    TLorentzVector mymet_JetEta3to5Up;
    mymet_JetEta3to5Up.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEta3to5Up,0,tree->type1_pfMet_shiftedPhi_JetEta3to5Up,0);
    float pfmetcorr_ex_JetEta3to5Up=mymet_JetEta3to5Up.Px();
    float pfmetcorr_ey_JetEta3to5Up=mymet_JetEta3to5Up.Py();

    TLorentzVector mymet_JetEta3to5Down;
    mymet_JetEta3to5Down.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetEta3to5Down,0,tree->type1_pfMet_shiftedPhi_JetEta3to5Down,0);
    float pfmetcorr_ex_JetEta3to5Down=mymet_JetEta3to5Down.Px();
    float pfmetcorr_ey_JetEta3to5Down=mymet_JetEta3to5Down.Py();

    TLorentzVector mymet_JetRelativeSampleUp;
    mymet_JetRelativeSampleUp.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetRelativeSampleUp,0,tree->type1_pfMet_shiftedPhi_JetRelativeSampleUp,0);
    float pfmetcorr_ex_JetRelativeSampleUp=mymet_JetRelativeSampleUp.Px();
    float pfmetcorr_ey_JetRelativeSampleUp=mymet_JetRelativeSampleUp.Py();

    TLorentzVector mymet_JetRelativeSampleDown;
    mymet_JetRelativeSampleDown.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetRelativeSampleDown,0,tree->type1_pfMet_shiftedPhi_JetRelativeSampleDown,0);
    float pfmetcorr_ex_JetRelativeSampleDown=mymet_JetRelativeSampleDown.Px();
    float pfmetcorr_ey_JetRelativeSampleDown=mymet_JetRelativeSampleDown.Py();

    TLorentzVector mymet_JetRelativeBalUp;
    mymet_JetRelativeBalUp.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetRelativeBalUp,0,tree->type1_pfMet_shiftedPhi_JetRelativeBalUp,0);
    float pfmetcorr_ex_JetRelativeBalUp=mymet_JetRelativeBalUp.Px();
    float pfmetcorr_ey_JetRelativeBalUp=mymet_JetRelativeBalUp.Py();

    TLorentzVector mymet_JetRelativeBalDown;
    mymet_JetRelativeBalDown.SetPtEtaPhiM(tree->type1_pfMet_shiftedPt_JetRelativeBalDown,0,tree->type1_pfMet_shiftedPhi_JetRelativeBalDown,0);
    float pfmetcorr_ex_JetRelativeBalDown=mymet_JetRelativeBalDown.Px();
    float pfmetcorr_ey_JetRelativeBalDown=mymet_JetRelativeBalDown.Py();

    TLorentzVector mymet_resolutionUp, mymet_resolutionDown, mymet_responseUp, mymet_responseDown;
    float pfmetcorr_ex_responseUp,pfmetcorr_ey_responseUp,pfmetcorr_ex_responseDown,pfmetcorr_ey_responseDown,pfmetcorr_ex_resolutionUp,pfmetcorr_ey_resolutionUp,pfmetcorr_ex_resolutionDown,pfmetcorr_ey_resolutionDown=0;

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

    float uncorrectedE=tau1.E();
    TLorentzVector myeleScaleUp=tau1*(tree->eEnergyScaleUp/uncorrectedE);
    TLorentzVector myeleScaleDown=tau1*(tree->eEnergyScaleDown/uncorrectedE);
    TLorentzVector myeleSigmaUp=tau1*(tree->eEnergySigmaUp/uncorrectedE);
    TLorentzVector myeleSigmaDown=tau1*(tree->eEnergySigmaDown/uncorrectedE);
    tau1=tau1*(tree->eCorrectedEt/uncorrectedE);
    m_1 = 0.000511;
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
    iso_1 = tree->eRelPFIsoRho;
    q_1 = tree->eCharge;

    m_2 = tau2.M();
    e_2 = tau2.E();
    pt_2 = tau2.Pt();
    phi_2 = tau2.Phi();
    eta_2 = tau2.Eta();
    dZ_2 = tree->mPVDZ;
    d0_2=tree->mPVDXY;
    iso_2=tree->mRelPFIsoDBDefault;
    q_2 = tree->mCharge;

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
    jcsv_1=tree->j1csv;
    jcsv_2=tree->j2csv;
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

  NUP=tree->NUP;
  npu=tree->nTruePU;
  npv=tree->nvtx;

  extraelec_veto=(tree->eVetoZTTp001dxyzR0>1);
  extramuon_veto=(tree->muVetoZTTp001dxyzR0>1);

  Run_Tree->Fill();
}

#endif


