//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jun 13 03:38:55 2019 by ROOT version 6.10/09
// from TTree Ntuple/Expression Ntuple
// found on file: /hdfs/store/user/tmitchel/SMHTT_2017_legacy_mc_v1/GluGluHToTauTau_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v2/make_ntuples_cfg-047009D4-3D21-E911-9727-6C3BE5B541F8.root
//////////////////////////////////////////////////////////

#ifndef HTauTauTree_em_h
#define HTauTauTree_em_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class HTauTauTree_em {
public :
   TTree          *_tree;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         DoubleMediumHPSTau35Pass;
   Float_t         DoubleMediumHPSTau35TightIDPass;
   Float_t         DoubleMediumHPSTau40Pass;
   Float_t         DoubleMediumHPSTau40TightIDPass;
   Float_t         DoubleMediumTau35Pass;
   Float_t         DoubleMediumTau35TightIDPass;
   Float_t         DoubleMediumTau40Pass;
   Float_t         DoubleMediumTau40TightIDPass;
   Float_t         DoubleTightHPSTau35Pass;
   Float_t         DoubleTightHPSTau35TightIDPass;
   Float_t         DoubleTightHPSTau40Pass;
   Float_t         DoubleTightHPSTau40TightIDPass;
   Float_t         DoubleTightTau35Pass;
   Float_t         DoubleTightTau35TightIDPass;
   Float_t         DoubleTightTau40Pass;
   Float_t         DoubleTightTau40TightIDPass;
   Float_t         Ele24LooseHPSTau30Pass;
   Float_t         Ele24LooseHPSTau30TightIDPass;
   Float_t         Ele24LooseTau30Pass;
   Float_t         Ele24LooseTau30TightIDPass;
   Float_t         Ele27WPTightPass;
   Float_t         Ele32WPTightPass;
   Float_t         Ele35WPTightPass;
   Float_t         Ele38WPTightPass;
   Float_t         Ele40WPTightPass;
   Float_t         EmbPtWeight;
   Float_t         Eta;
   Float_t         Flag_BadChargedCandidateFilter;
   Float_t         Flag_BadPFMuonFilter;
   Float_t         Flag_EcalDeadCellTriggerPrimitiveFilter;
   Float_t         Flag_HBHENoiseFilter;
   Float_t         Flag_HBHENoiseIsoFilter;
   Float_t         Flag_badMuons;
   Float_t         Flag_duplicateMuons;
   Float_t         Flag_ecalBadCalibFilter;
   Float_t         Flag_ecalBadCalibReducedMINIAODFilter;
   Float_t         Flag_eeBadScFilter;
   Float_t         Flag_globalSuperTightHalo2016Filter;
   Float_t         Flag_globalTightHalo2016Filter;
   Float_t         Flag_goodVertices;
   Float_t         GenWeight;
   Float_t         Ht;
   Float_t         IsoMu24Pass;
   Float_t         IsoMu27Pass;
   Float_t         LT;
   Float_t         Mass;
   Float_t         MassError;
   Float_t         MassErrord1;
   Float_t         MassErrord2;
   Float_t         MassErrord3;
   Float_t         MassErrord4;
   Float_t         Mt;
   Float_t         Mu20LooseHPSTau27Pass;
   Float_t         Mu20LooseHPSTau27TightIDPass;
   Float_t         Mu20LooseTau27Pass;
   Float_t         Mu20LooseTau27TightIDPass;
   Float_t         Mu50Pass;
   Float_t         NUP;
   Float_t         Phi;
   Float_t         Pt;
   Float_t         Rivet_VEta;
   Float_t         Rivet_VPt;
   Float_t         Rivet_errorCode;
   Float_t         Rivet_higgsEta;
   Float_t         Rivet_higgsPt;
   Float_t         Rivet_nJets25;
   Float_t         Rivet_nJets30;
   Float_t         Rivet_p4decay_VEta;
   Float_t         Rivet_p4decay_VPt;
   Float_t         Rivet_prodMode;
   Float_t         Rivet_stage0_cat;
   Float_t         Rivet_stage1_cat_pTjet25GeV;
   Float_t         Rivet_stage1_cat_pTjet30GeV;
   Float_t         Rivet_stage1p1_cat;
   Float_t         VBFDoubleLooseHPSTau20Pass;
   Float_t         VBFDoubleLooseTau20Pass;
   Float_t         VBFDoubleMediumHPSTau20Pass;
   Float_t         VBFDoubleMediumTau20Pass;
   Float_t         VBFDoubleTightHPSTau20Pass;
   Float_t         VBFDoubleTightTau20Pass;
   Float_t         bjetDeepCSVVeto20Loose_2016_DR0p5;
   Float_t         bjetDeepCSVVeto20Loose_2017_DR0p5;
   Float_t         bjetDeepCSVVeto20Loose_2018_DR0p5;
   Float_t         bjetDeepCSVVeto20Medium_2016_DR0;
   Float_t         bjetDeepCSVVeto20Medium_2016_DR0p5;
   Float_t         bjetDeepCSVVeto20Medium_2017_DR0;
   Float_t         bjetDeepCSVVeto20Medium_2017_DR0p5;
   Float_t         bjetDeepCSVVeto20Medium_2018_DR0;
   Float_t         bjetDeepCSVVeto20Medium_2018_DR0p5;
   Float_t         bjetDeepCSVVeto20Tight_2016_DR0p5;
   Float_t         bjetDeepCSVVeto20Tight_2017_DR0p5;
   Float_t         bjetDeepCSVVeto20Tight_2018_DR0p5;
   Float_t         charge;
   Float_t         dielectronVeto;
   Float_t         dimu9ele9Pass;
   Float_t         dimuonVeto;
   Float_t         doubleE25Pass;
   Float_t         doubleE33Pass;
   Float_t         doubleE_23_12Pass;
   Float_t         doubleMuDZminMass3p8Pass;
   Float_t         doubleMuDZminMass8Pass;
   Float_t         doubleMuSingleEPass;
   Float_t         doubleTau35Pass;
   Float_t         doubleTauCmbIso35RegPass;
   Float_t         eCBIDLoose;
   Float_t         eCBIDMedium;
   Float_t         eCBIDTight;
   Float_t         eCBIDVeto;
   Float_t         eCharge;
   Float_t         eChargeIdLoose;
   Float_t         eChargeIdMed;
   Float_t         eChargeIdTight;
   Float_t         eComesFromHiggs;
   Float_t         eCorrectedEt;
   Float_t         eE1x5;
   Float_t         eE2x5Max;
   Float_t         eE5x5;
   Float_t         eEcalIsoDR03;
   Float_t         eEnergyError;
   Float_t         eEnergyScaleDown;
   Float_t         eEnergyScaleGainDown;
   Float_t         eEnergyScaleGainUp;
   Float_t         eEnergyScaleStatDown;
   Float_t         eEnergyScaleStatUp;
   Float_t         eEnergyScaleSystDown;
   Float_t         eEnergyScaleSystUp;
   Float_t         eEnergyScaleUp;
   Float_t         eEnergySigmaDown;
   Float_t         eEnergySigmaPhiDown;
   Float_t         eEnergySigmaPhiUp;
   Float_t         eEnergySigmaRhoDown;
   Float_t         eEnergySigmaRhoUp;
   Float_t         eEnergySigmaUp;
   Float_t         eEta;
   Float_t         eGenCharge;
   Float_t         eGenDirectPromptTauDecay;
   Float_t         eGenEnergy;
   Float_t         eGenEta;
   Float_t         eGenIsPrompt;
   Float_t         eGenMotherPdgId;
   Float_t         eGenParticle;
   Float_t         eGenPdgId;
   Float_t         eGenPhi;
   Float_t         eGenPrompt;
   Float_t         eGenPromptTauDecay;
   Float_t         eGenPt;
   Float_t         eGenTauDecay;
   Float_t         eGenVZ;
   Float_t         eGenVtxPVMatch;
   Float_t         eHadronicDepth1OverEm;
   Float_t         eHadronicDepth2OverEm;
   Float_t         eHadronicOverEM;
   Float_t         eHcalIsoDR03;
   Float_t         eIP3D;
   Float_t         eIP3DErr;
   Float_t         eIsoDB03;
   Float_t         eJetArea;
   Float_t         eJetBtag;
   Float_t         eJetDR;
   Float_t         eJetEtaEtaMoment;
   Float_t         eJetEtaPhiMoment;
   Float_t         eJetEtaPhiSpread;
   Float_t         eJetHadronFlavour;
   Float_t         eJetPFCISVBtag;
   Float_t         eJetPartonFlavour;
   Float_t         eJetPhiPhiMoment;
   Float_t         eJetPt;
   Float_t         eLowestMll;
   Float_t         eMVAIsoWP80;
   Float_t         eMVAIsoWP90;
   Float_t         eMVAIsoWPHZZ;
   Float_t         eMVAIsoWPLoose;
   Float_t         eMVANoisoWP80;
   Float_t         eMVANoisoWP90;
   Float_t         eMVANoisoWPLoose;
   Float_t         eMass;
   Float_t         eMatchesEle24HPSTau30Filter;
   Float_t         eMatchesEle24HPSTau30Path;
   Float_t         eMatchesEle24Tau30Filter;
   Float_t         eMatchesEle24Tau30Path;
   Float_t         eMatchesEle25Filter;
   Float_t         eMatchesEle25Path;
   Float_t         eMatchesEle27Filter;
   Float_t         eMatchesEle27Path;
   Float_t         eMatchesEle32Filter;
   Float_t         eMatchesEle32Path;
   Float_t         eMatchesEle35Filter;
   Float_t         eMatchesEle35Path;
   Float_t         eMissingHits;
   Float_t         eNearMuonVeto;
   Float_t         eNearestMuonDR;
   Float_t         eNearestZMass;
   Float_t         ePFChargedIso;
   Float_t         ePFNeutralIso;
   Float_t         ePFPUChargedIso;
   Float_t         ePFPhotonIso;
   Float_t         ePVDXY;
   Float_t         ePVDZ;
   Float_t         ePassesConversionVeto;
   Float_t         ePhi;
   Float_t         ePt;
   Float_t         eRelIso;
   Float_t         eRelPFIsoDB;
   Float_t         eRelPFIsoRho;
   Float_t         eRho;
   Float_t         eSCEnergy;
   Float_t         eSCEta;
   Float_t         eSCEtaWidth;
   Float_t         eSCPhi;
   Float_t         eSCPhiWidth;
   Float_t         eSCPreshowerEnergy;
   Float_t         eSCRawEnergy;
   Float_t         eSIP2D;
   Float_t         eSIP3D;
   Float_t         eSigmaIEtaIEta;
   Float_t         eTrkIsoDR03;
   Float_t         eVZ;
   Float_t         eVetoHZZPt5;
   Float_t         eVetoZTTp001dxyz;
   Float_t         eVetoZTTp001dxyzR0;
   Float_t         eZTTGenMatching;
   Float_t         e_m_DR;
   Float_t         e_m_Mass;
   Float_t         e_m_doubleL1IsoTauMatch;
   Float_t         edeltaEtaSuperClusterTrackAtVtx;
   Float_t         edeltaPhiSuperClusterTrackAtVtx;
   Float_t         eeSuperClusterOverP;
   Float_t         eecalEnergy;
   Float_t         efBrem;
   Float_t         etrackMomentumAtVtxP;
   ULong64_t       evt;
   Float_t         genEta;
   Float_t         genHTT;
   Float_t         genM;
   Float_t         genMass;
   Float_t         genPhi;
   Float_t         genpT;
   Float_t         genpX;
   Float_t         genpY;
   Int_t           isdata;
   Int_t           isembed;
   Float_t         j1csv;
   Float_t         j1csvWoNoisyJets;
   Float_t         j1eta;
   Float_t         j1etaWoNoisyJets;
   Float_t         j1hadronflavor;
   Float_t         j1hadronflavorWoNoisyJets;
   Float_t         j1phi;
   Float_t         j1phiWoNoisyJets;
   Float_t         j1pt;
   Float_t         j1ptWoNoisyJets;
   Float_t         j1ptWoNoisyJets_JetEC2Down;
   Float_t         j1ptWoNoisyJets_JetEC2Up;
   Float_t         j1ptWoNoisyJets_JetEta0to3Down;
   Float_t         j1ptWoNoisyJets_JetEta0to3Up;
   Float_t         j1ptWoNoisyJets_JetEta0to5Down;
   Float_t         j1ptWoNoisyJets_JetEta0to5Up;
   Float_t         j1ptWoNoisyJets_JetEta3to5Down;
   Float_t         j1ptWoNoisyJets_JetEta3to5Up;
   Float_t         j1ptWoNoisyJets_JetRelativeBalDown;
   Float_t         j1ptWoNoisyJets_JetRelativeBalUp;
   Float_t         j1ptWoNoisyJets_JetRelativeSampleDown;
   Float_t         j1ptWoNoisyJets_JetRelativeSampleUp;
   Float_t         j1pt_JetEC2Down;
   Float_t         j1pt_JetEC2Up;
   Float_t         j1pt_JetEta0to3Down;
   Float_t         j1pt_JetEta0to3Up;
   Float_t         j1pt_JetEta0to5Down;
   Float_t         j1pt_JetEta0to5Up;
   Float_t         j1pt_JetEta3to5Down;
   Float_t         j1pt_JetEta3to5Up;
   Float_t         j1pt_JetRelativeBalDown;
   Float_t         j1pt_JetRelativeBalUp;
   Float_t         j1pt_JetRelativeSampleDown;
   Float_t         j1pt_JetRelativeSampleUp;
   Float_t         j2csv;
   Float_t         j2csvWoNoisyJets;
   Float_t         j2eta;
   Float_t         j2etaWoNoisyJets;
   Float_t         j2hadronflavor;
   Float_t         j2hadronflavorWoNoisyJets;
   Float_t         j2phi;
   Float_t         j2phiWoNoisyJets;
   Float_t         j2pt;
   Float_t         j2ptWoNoisyJets;
   Float_t         j2ptWoNoisyJets_JetEC2Down;
   Float_t         j2ptWoNoisyJets_JetEC2Up;
   Float_t         j2ptWoNoisyJets_JetEta0to3Down;
   Float_t         j2ptWoNoisyJets_JetEta0to3Up;
   Float_t         j2ptWoNoisyJets_JetEta0to5Down;
   Float_t         j2ptWoNoisyJets_JetEta0to5Up;
   Float_t         j2ptWoNoisyJets_JetEta3to5Down;
   Float_t         j2ptWoNoisyJets_JetEta3to5Up;
   Float_t         j2ptWoNoisyJets_JetRelativeBalDown;
   Float_t         j2ptWoNoisyJets_JetRelativeBalUp;
   Float_t         j2ptWoNoisyJets_JetRelativeSampleDown;
   Float_t         j2ptWoNoisyJets_JetRelativeSampleUp;
   Float_t         j2pt_JetEC2Down;
   Float_t         j2pt_JetEC2Up;
   Float_t         j2pt_JetEta0to3Down;
   Float_t         j2pt_JetEta0to3Up;
   Float_t         j2pt_JetEta0to5Down;
   Float_t         j2pt_JetEta0to5Up;
   Float_t         j2pt_JetEta3to5Down;
   Float_t         j2pt_JetEta3to5Up;
   Float_t         j2pt_JetRelativeBalDown;
   Float_t         j2pt_JetRelativeBalUp;
   Float_t         j2pt_JetRelativeSampleDown;
   Float_t         j2pt_JetRelativeSampleUp;
   Float_t         jb1eta_2016;
   Float_t         jb1eta_2017;
   Float_t         jb1eta_2018;
   Float_t         jb1hadronflavor_2016;
   Float_t         jb1hadronflavor_2017;
   Float_t         jb1hadronflavor_2018;
   Float_t         jb1phi_2016;
   Float_t         jb1phi_2017;
   Float_t         jb1phi_2018;
   Float_t         jb1pt_2016;
   Float_t         jb1pt_2017;
   Float_t         jb1pt_2018;
   Float_t         jb2eta_2016;
   Float_t         jb2eta_2017;
   Float_t         jb2eta_2018;
   Float_t         jb2hadronflavor_2016;
   Float_t         jb2hadronflavor_2017;
   Float_t         jb2hadronflavor_2018;
   Float_t         jb2phi_2016;
   Float_t         jb2phi_2017;
   Float_t         jb2phi_2018;
   Float_t         jb2pt_2016;
   Float_t         jb2pt_2017;
   Float_t         jb2pt_2018;
   Float_t         jetVeto20;
   Float_t         jetVeto20WoNoisyJets;
   Float_t         jetVeto20_JetEnDown;
   Float_t         jetVeto20_JetEnUp;
   Float_t         jetVeto30;
   Float_t         jetVeto30WoNoisyJets;
   Float_t         jetVeto30WoNoisyJets_JetEC2Down;
   Float_t         jetVeto30WoNoisyJets_JetEC2Up;
   Float_t         jetVeto30WoNoisyJets_JetEnDown;
   Float_t         jetVeto30WoNoisyJets_JetEnUp;
   Float_t         jetVeto30WoNoisyJets_JetEta0to3Down;
   Float_t         jetVeto30WoNoisyJets_JetEta0to3Up;
   Float_t         jetVeto30WoNoisyJets_JetEta0to5Down;
   Float_t         jetVeto30WoNoisyJets_JetEta0to5Up;
   Float_t         jetVeto30WoNoisyJets_JetEta3to5Down;
   Float_t         jetVeto30WoNoisyJets_JetEta3to5Up;
   Float_t         jetVeto30WoNoisyJets_JetRelativeBalDownWoNoisyJets;
   Float_t         jetVeto30WoNoisyJets_JetRelativeBalUpWoNoisyJets;
   Float_t         jetVeto30WoNoisyJets_JetRelativeSampleDown;
   Float_t         jetVeto30WoNoisyJets_JetRelativeSampleUp;
   Float_t         jetVeto30WoNoisyJets_JetTotalDown;
   Float_t         jetVeto30WoNoisyJets_JetTotalUp;
   Float_t         jetVeto30_JetEC2Down;
   Float_t         jetVeto30_JetEC2Up;
   Float_t         jetVeto30_JetEnDown;
   Float_t         jetVeto30_JetEnUp;
   Float_t         jetVeto30_JetEta0to3Down;
   Float_t         jetVeto30_JetEta0to3Up;
   Float_t         jetVeto30_JetEta0to5Down;
   Float_t         jetVeto30_JetEta0to5Up;
   Float_t         jetVeto30_JetEta3to5Down;
   Float_t         jetVeto30_JetEta3to5Up;
   Float_t         jetVeto30_JetRelativeBalDown;
   Float_t         jetVeto30_JetRelativeBalUp;
   Float_t         jetVeto30_JetRelativeSampleDown;
   Float_t         jetVeto30_JetRelativeSampleUp;
   Float_t         jetVeto30_JetTotalDown;
   Float_t         jetVeto30_JetTotalUp;
   Int_t           lumi;
   Float_t         mBestTrackType;
   Float_t         mCharge;
   Float_t         mChi2LocalPosition;
   Float_t         mComesFromHiggs;
   Float_t         mCutBasedIdGlobalHighPt;
   Float_t         mCutBasedIdLoose;
   Float_t         mCutBasedIdMedium;
   Float_t         mCutBasedIdMediumPrompt;
   Float_t         mCutBasedIdTight;
   Float_t         mCutBasedIdTrkHighPt;
   Float_t         mEcalIsoDR03;
   Float_t         mEffectiveArea2011;
   Float_t         mEffectiveArea2012;
   Float_t         mEta;
   Float_t         mEta_MuonEnDown;
   Float_t         mEta_MuonEnUp;
   Float_t         mGenCharge;
   Float_t         mGenDirectPromptTauDecayFinalState;
   Float_t         mGenEnergy;
   Float_t         mGenEta;
   Float_t         mGenIsPrompt;
   Float_t         mGenMotherPdgId;
   Float_t         mGenParticle;
   Float_t         mGenPdgId;
   Float_t         mGenPhi;
   Float_t         mGenPrompt;
   Float_t         mGenPromptFinalState;
   Float_t         mGenPromptTauDecay;
   Float_t         mGenPt;
   Float_t         mGenTauDecay;
   Float_t         mGenVZ;
   Float_t         mGenVtxPVMatch;
   Float_t         mHcalIsoDR03;
   Float_t         mIP3D;
   Float_t         mIP3DErr;
   Float_t         mIsGlobal;
   Float_t         mIsPFMuon;
   Float_t         mIsTracker;
   Float_t         mIsoDB03;
   Float_t         mIsoDB04;
   Float_t         mJetArea;
   Float_t         mJetBtag;
   Float_t         mJetDR;
   Float_t         mJetEtaEtaMoment;
   Float_t         mJetEtaPhiMoment;
   Float_t         mJetEtaPhiSpread;
   Float_t         mJetHadronFlavour;
   Float_t         mJetPFCISVBtag;
   Float_t         mJetPartonFlavour;
   Float_t         mJetPhiPhiMoment;
   Float_t         mJetPt;
   Float_t         mLowestMll;
   Float_t         mMass;
   Float_t         mMatchedStations;
   Float_t         mMatchesIsoMu19Tau20Filter;
   Float_t         mMatchesIsoMu19Tau20Path;
   Float_t         mMatchesIsoMu19Tau20SingleL1Filter;
   Float_t         mMatchesIsoMu19Tau20SingleL1Path;
   Float_t         mMatchesIsoMu20HPSTau27Filter;
   Float_t         mMatchesIsoMu20HPSTau27Path;
   Float_t         mMatchesIsoMu20Tau27Filter;
   Float_t         mMatchesIsoMu20Tau27Path;
   Float_t         mMatchesIsoMu22Filter;
   Float_t         mMatchesIsoMu22Path;
   Float_t         mMatchesIsoMu22eta2p1Filter;
   Float_t         mMatchesIsoMu22eta2p1Path;
   Float_t         mMatchesIsoMu24Filter;
   Float_t         mMatchesIsoMu24Path;
   Float_t         mMatchesIsoMu27Filter;
   Float_t         mMatchesIsoMu27Path;
   Float_t         mMatchesIsoTkMu22Filter;
   Float_t         mMatchesIsoTkMu22Path;
   Float_t         mMatchesIsoTkMu22eta2p1Filter;
   Float_t         mMatchesIsoTkMu22eta2p1Path;
   Float_t         mMiniIsoLoose;
   Float_t         mMiniIsoMedium;
   Float_t         mMiniIsoTight;
   Float_t         mMiniIsoVeryTight;
   Float_t         mMuonHits;
   Float_t         mMvaLoose;
   Float_t         mMvaMedium;
   Float_t         mMvaTight;
   Float_t         mNearestZMass;
   Float_t         mNormTrkChi2;
   Float_t         mNormalizedChi2;
   Float_t         mPFChargedHadronIsoR04;
   Float_t         mPFChargedIso;
   Float_t         mPFIDLoose;
   Float_t         mPFIDMedium;
   Float_t         mPFIDTight;
   Float_t         mPFIsoLoose;
   Float_t         mPFIsoMedium;
   Float_t         mPFIsoTight;
   Float_t         mPFIsoVeryLoose;
   Float_t         mPFIsoVeryTight;
   Float_t         mPFNeutralHadronIsoR04;
   Float_t         mPFNeutralIso;
   Float_t         mPFPUChargedIso;
   Float_t         mPFPhotonIso;
   Float_t         mPFPhotonIsoR04;
   Float_t         mPFPileupIsoR04;
   Float_t         mPVDXY;
   Float_t         mPVDZ;
   Float_t         mPhi;
   Float_t         mPhi_MuonEnDown;
   Float_t         mPhi_MuonEnUp;
   Float_t         mPixHits;
   Float_t         mPt;
   Float_t         mPt_MuonEnDown;
   Float_t         mPt_MuonEnUp;
   Float_t         mRelPFIsoDBDefault;
   Float_t         mRelPFIsoDBDefaultR04;
   Float_t         mRelPFIsoRho;
   Float_t         mRho;
   Float_t         mSIP2D;
   Float_t         mSIP3D;
   Float_t         mSegmentCompatibility;
   Float_t         mSoftCutBasedId;
   Float_t         mTkIsoLoose;
   Float_t         mTkIsoTight;
   Float_t         mTkLayersWithMeasurement;
   Float_t         mTrkIsoDR03;
   Float_t         mTrkKink;
   Int_t           mTypeCode;
   Float_t         mVZ;
   Float_t         mValidFraction;
   Float_t         mZTTGenMatching;
   Float_t         metSig;
   Float_t         metcov00;
   Float_t         metcov01;
   Float_t         metcov10;
   Float_t         metcov11;
   Float_t         mu12e23DZPass;
   Float_t         mu12e23Pass;
   Float_t         mu23e12DZPass;
   Float_t         mu23e12Pass;
   Float_t         mu8diele12DZPass;
   Float_t         mu8diele12Pass;
   Float_t         mu8e23DZPass;
   Float_t         mu8e23Pass;
   Float_t         muGlbIsoVetoPt10;
   Float_t         muVeto5;
   Float_t         muVetoZTTp001dxyz;
   Float_t         muVetoZTTp001dxyzR0;
   Float_t         nTruePU;
   Float_t         npNLO;
   Float_t         numGenJets;
   Float_t         nvtx;
   Float_t         processID;
   Float_t         puppiMetEt;
   Float_t         puppiMetPhi;
   Float_t         pvChi2;
   Float_t         pvDX;
   Float_t         pvDY;
   Float_t         pvDZ;
   Int_t           pvIsFake;
   Int_t           pvIsValid;
   Float_t         pvNormChi2;
   Float_t         pvRho;
   Float_t         pvX;
   Float_t         pvY;
   Float_t         pvZ;
   Float_t         pvndof;
   Float_t         raw_pfMetEt;
   Float_t         raw_pfMetPhi;
   Float_t         recoilDaught;
   Float_t         recoilWithMet;
   Float_t         rho;
   Int_t           run;
   Float_t         singleE25eta2p1TightPass;
   Float_t         singleIsoMu22Pass;
   Float_t         singleIsoMu22eta2p1Pass;
   Float_t         singleIsoTkMu22Pass;
   Float_t         singleIsoTkMu22eta2p1Pass;
   Float_t         singleMu19eta2p1LooseTau20Pass;
   Float_t         singleMu19eta2p1LooseTau20singleL1Pass;
   Float_t         tauVetoPt20Loose3HitsVtx;
   Float_t         tauVetoPt20TightMVALTVtx;
   Float_t         topQuarkPt1;
   Float_t         topQuarkPt2;
   Float_t         tripleEPass;
   Float_t         tripleMu10_5_5Pass;
   Float_t         tripleMu12_10_5Pass;
   Float_t         type1_pfMetEt;
   Float_t         type1_pfMetPhi;
   Float_t         type1_pfMet_shiftedPhi_JetEC2Down;
   Float_t         type1_pfMet_shiftedPhi_JetEC2Up;
   Float_t         type1_pfMet_shiftedPhi_JetEnDown;
   Float_t         type1_pfMet_shiftedPhi_JetEnUp;
   Float_t         type1_pfMet_shiftedPhi_JetEta0to3Down;
   Float_t         type1_pfMet_shiftedPhi_JetEta0to3Up;
   Float_t         type1_pfMet_shiftedPhi_JetEta0to5Down;
   Float_t         type1_pfMet_shiftedPhi_JetEta0to5Up;
   Float_t         type1_pfMet_shiftedPhi_JetEta3to5Down;
   Float_t         type1_pfMet_shiftedPhi_JetEta3to5Up;
   Float_t         type1_pfMet_shiftedPhi_JetRelativeBalDown;
   Float_t         type1_pfMet_shiftedPhi_JetRelativeBalUp;
   Float_t         type1_pfMet_shiftedPhi_JetRelativeSampleDown;
   Float_t         type1_pfMet_shiftedPhi_JetRelativeSampleUp;
   Float_t         type1_pfMet_shiftedPhi_JetResDown;
   Float_t         type1_pfMet_shiftedPhi_JetResUp;
   Float_t         type1_pfMet_shiftedPhi_JetTotalDown;
   Float_t         type1_pfMet_shiftedPhi_JetTotalUp;
   Float_t         type1_pfMet_shiftedPhi_UnclusteredEnDown;
   Float_t         type1_pfMet_shiftedPhi_UnclusteredEnUp;
   Float_t         type1_pfMet_shiftedPt_JetEC2Down;
   Float_t         type1_pfMet_shiftedPt_JetEC2Up;
   Float_t         type1_pfMet_shiftedPt_JetEnDown;
   Float_t         type1_pfMet_shiftedPt_JetEnUp;
   Float_t         type1_pfMet_shiftedPt_JetEta0to3Down;
   Float_t         type1_pfMet_shiftedPt_JetEta0to3Up;
   Float_t         type1_pfMet_shiftedPt_JetEta0to5Down;
   Float_t         type1_pfMet_shiftedPt_JetEta0to5Up;
   Float_t         type1_pfMet_shiftedPt_JetEta3to5Down;
   Float_t         type1_pfMet_shiftedPt_JetEta3to5Up;
   Float_t         type1_pfMet_shiftedPt_JetRelativeBalDown;
   Float_t         type1_pfMet_shiftedPt_JetRelativeBalUp;
   Float_t         type1_pfMet_shiftedPt_JetRelativeSampleDown;
   Float_t         type1_pfMet_shiftedPt_JetRelativeSampleUp;
   Float_t         type1_pfMet_shiftedPt_JetResDown;
   Float_t         type1_pfMet_shiftedPt_JetResUp;
   Float_t         type1_pfMet_shiftedPt_JetTotalDown;
   Float_t         type1_pfMet_shiftedPt_JetTotalUp;
   Float_t         type1_pfMet_shiftedPt_UnclusteredEnDown;
   Float_t         type1_pfMet_shiftedPt_UnclusteredEnUp;
   Float_t         vbfDeta;
   Float_t         vbfJetVeto20;
   Float_t         vbfJetVeto30;
   Float_t         vbfMass;
   Float_t         vbfMassWoNoisyJets;
   Float_t         vbfMassWoNoisyJets_JetEC2Down;
   Float_t         vbfMassWoNoisyJets_JetEC2Up;
   Float_t         vbfMassWoNoisyJets_JetEta0to3Down;
   Float_t         vbfMassWoNoisyJets_JetEta0to3Up;
   Float_t         vbfMassWoNoisyJets_JetEta0to5Down;
   Float_t         vbfMassWoNoisyJets_JetEta0to5Up;
   Float_t         vbfMassWoNoisyJets_JetEta3to5Down;
   Float_t         vbfMassWoNoisyJets_JetEta3to5Up;
   Float_t         vbfMassWoNoisyJets_JetRelativeBalDown;
   Float_t         vbfMassWoNoisyJets_JetRelativeBalUp;
   Float_t         vbfMassWoNoisyJets_JetRelativeSampleDown;
   Float_t         vbfMassWoNoisyJets_JetRelativeSampleUp;
   Float_t         vbfMassWoNoisyJets_JetTotalDown;
   Float_t         vbfMassWoNoisyJets_JetTotalUp;
   Float_t         vbfMass_JetEC2Down;
   Float_t         vbfMass_JetEC2Up;
   Float_t         vbfMass_JetEta0to3Down;
   Float_t         vbfMass_JetEta0to3Up;
   Float_t         vbfMass_JetEta0to5Down;
   Float_t         vbfMass_JetEta0to5Up;
   Float_t         vbfMass_JetEta3to5Down;
   Float_t         vbfMass_JetEta3to5Up;
   Float_t         vbfMass_JetRelativeBalDown;
   Float_t         vbfMass_JetRelativeBalUp;
   Float_t         vbfMass_JetRelativeSampleDown;
   Float_t         vbfMass_JetRelativeSampleUp;
   Float_t         vbfMass_JetTotalDown;
   Float_t         vbfMass_JetTotalUp;
   Float_t         vbfNJets20;
   Float_t         vbfNJets30;
   Float_t         vbfj1eta;
   Float_t         vbfj1pt;
   Float_t         vbfj2eta;
   Float_t         vbfj2pt;
   Float_t         vispX;
   Float_t         vispY;
   Int_t           idx;

   // List of branches
   TBranch        *b_DoubleMediumHPSTau35Pass;   //!
   TBranch        *b_DoubleMediumHPSTau35TightIDPass;   //!
   TBranch        *b_DoubleMediumHPSTau40Pass;   //!
   TBranch        *b_DoubleMediumHPSTau40TightIDPass;   //!
   TBranch        *b_DoubleMediumTau35Pass;   //!
   TBranch        *b_DoubleMediumTau35TightIDPass;   //!
   TBranch        *b_DoubleMediumTau40Pass;   //!
   TBranch        *b_DoubleMediumTau40TightIDPass;   //!
   TBranch        *b_DoubleTightHPSTau35Pass;   //!
   TBranch        *b_DoubleTightHPSTau35TightIDPass;   //!
   TBranch        *b_DoubleTightHPSTau40Pass;   //!
   TBranch        *b_DoubleTightHPSTau40TightIDPass;   //!
   TBranch        *b_DoubleTightTau35Pass;   //!
   TBranch        *b_DoubleTightTau35TightIDPass;   //!
   TBranch        *b_DoubleTightTau40Pass;   //!
   TBranch        *b_DoubleTightTau40TightIDPass;   //!
   TBranch        *b_Ele24LooseHPSTau30Pass;   //!
   TBranch        *b_Ele24LooseHPSTau30TightIDPass;   //!
   TBranch        *b_Ele24LooseTau30Pass;   //!
   TBranch        *b_Ele24LooseTau30TightIDPass;   //!
   TBranch        *b_Ele27WPTightPass;   //!
   TBranch        *b_Ele32WPTightPass;   //!
   TBranch        *b_Ele35WPTightPass;   //!
   TBranch        *b_Ele38WPTightPass;   //!
   TBranch        *b_Ele40WPTightPass;   //!
   TBranch        *b_EmbPtWeight;   //!
   TBranch        *b_Eta;   //!
   TBranch        *b_Flag_BadChargedCandidateFilter;   //!
   TBranch        *b_Flag_BadPFMuonFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_badMuons;   //!
   TBranch        *b_Flag_duplicateMuons;   //!
   TBranch        *b_Flag_ecalBadCalibFilter;   //!
   TBranch        *b_Flag_ecalBadCalibReducedMINIAODFilter;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_Flag_globalTightHalo2016Filter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_GenWeight;   //!
   TBranch        *b_Ht;   //!
   TBranch        *b_IsoMu24Pass;   //!
   TBranch        *b_IsoMu27Pass;   //!
   TBranch        *b_LT;   //!
   TBranch        *b_Mass;   //!
   TBranch        *b_MassError;   //!
   TBranch        *b_MassErrord1;   //!
   TBranch        *b_MassErrord2;   //!
   TBranch        *b_MassErrord3;   //!
   TBranch        *b_MassErrord4;   //!
   TBranch        *b_Mt;   //!
   TBranch        *b_Mu20LooseHPSTau27Pass;   //!
   TBranch        *b_Mu20LooseHPSTau27TightIDPass;   //!
   TBranch        *b_Mu20LooseTau27Pass;   //!
   TBranch        *b_Mu20LooseTau27TightIDPass;   //!
   TBranch        *b_Mu50Pass;   //!
   TBranch        *b_NUP;   //!
   TBranch        *b_Phi;   //!
   TBranch        *b_Pt;   //!
   TBranch        *b_Rivet_VEta;   //!
   TBranch        *b_Rivet_VPt;   //!
   TBranch        *b_Rivet_errorCode;   //!
   TBranch        *b_Rivet_higgsEta;   //!
   TBranch        *b_Rivet_higgsPt;   //!
   TBranch        *b_Rivet_nJets25;   //!
   TBranch        *b_Rivet_nJets30;   //!
   TBranch        *b_Rivet_p4decay_VEta;   //!
   TBranch        *b_Rivet_p4decay_VPt;   //!
   TBranch        *b_Rivet_prodMode;   //!
   TBranch        *b_Rivet_stage0_cat;   //!
   TBranch        *b_Rivet_stage1_cat_pTjet25GeV;   //!
   TBranch        *b_Rivet_stage1_cat_pTjet30GeV;   //!
   TBranch        *b_Rivet_stage1p1_cat;   //!
   TBranch        *b_VBFDoubleLooseHPSTau20Pass;   //!
   TBranch        *b_VBFDoubleLooseTau20Pass;   //!
   TBranch        *b_VBFDoubleMediumHPSTau20Pass;   //!
   TBranch        *b_VBFDoubleMediumTau20Pass;   //!
   TBranch        *b_VBFDoubleTightHPSTau20Pass;   //!
   TBranch        *b_VBFDoubleTightTau20Pass;   //!
   TBranch        *b_bjetDeepCSVVeto20Loose_2016_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Loose_2017_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Loose_2018_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Medium_2016_DR0;   //!
   TBranch        *b_bjetDeepCSVVeto20Medium_2016_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Medium_2017_DR0;   //!
   TBranch        *b_bjetDeepCSVVeto20Medium_2017_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Medium_2018_DR0;   //!
   TBranch        *b_bjetDeepCSVVeto20Medium_2018_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Tight_2016_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Tight_2017_DR0p5;   //!
   TBranch        *b_bjetDeepCSVVeto20Tight_2018_DR0p5;   //!
   TBranch        *b_charge;   //!
   TBranch        *b_dielectronVeto;   //!
   TBranch        *b_dimu9ele9Pass;   //!
   TBranch        *b_dimuonVeto;   //!
   TBranch        *b_doubleE25Pass;   //!
   TBranch        *b_doubleE33Pass;   //!
   TBranch        *b_doubleE_23_12Pass;   //!
   TBranch        *b_doubleMuDZminMass3p8Pass;   //!
   TBranch        *b_doubleMuDZminMass8Pass;   //!
   TBranch        *b_doubleMuSingleEPass;   //!
   TBranch        *b_doubleTau35Pass;   //!
   TBranch        *b_doubleTauCmbIso35RegPass;   //!
   TBranch        *b_eCBIDLoose;   //!
   TBranch        *b_eCBIDMedium;   //!
   TBranch        *b_eCBIDTight;   //!
   TBranch        *b_eCBIDVeto;   //!
   TBranch        *b_eCharge;   //!
   TBranch        *b_eChargeIdLoose;   //!
   TBranch        *b_eChargeIdMed;   //!
   TBranch        *b_eChargeIdTight;   //!
   TBranch        *b_eComesFromHiggs;   //!
   TBranch        *b_eCorrectedEt;   //!
   TBranch        *b_eE1x5;   //!
   TBranch        *b_eE2x5Max;   //!
   TBranch        *b_eE5x5;   //!
   TBranch        *b_eEcalIsoDR03;   //!
   TBranch        *b_eEnergyError;   //!
   TBranch        *b_eEnergyScaleDown;   //!
   TBranch        *b_eEnergyScaleGainDown;   //!
   TBranch        *b_eEnergyScaleGainUp;   //!
   TBranch        *b_eEnergyScaleStatDown;   //!
   TBranch        *b_eEnergyScaleStatUp;   //!
   TBranch        *b_eEnergyScaleSystDown;   //!
   TBranch        *b_eEnergyScaleSystUp;   //!
   TBranch        *b_eEnergyScaleUp;   //!
   TBranch        *b_eEnergySigmaDown;   //!
   TBranch        *b_eEnergySigmaPhiDown;   //!
   TBranch        *b_eEnergySigmaPhiUp;   //!
   TBranch        *b_eEnergySigmaRhoDown;   //!
   TBranch        *b_eEnergySigmaRhoUp;   //!
   TBranch        *b_eEnergySigmaUp;   //!
   TBranch        *b_eEta;   //!
   TBranch        *b_eGenCharge;   //!
   TBranch        *b_eGenDirectPromptTauDecay;   //!
   TBranch        *b_eGenEnergy;   //!
   TBranch        *b_eGenEta;   //!
   TBranch        *b_eGenIsPrompt;   //!
   TBranch        *b_eGenMotherPdgId;   //!
   TBranch        *b_eGenParticle;   //!
   TBranch        *b_eGenPdgId;   //!
   TBranch        *b_eGenPhi;   //!
   TBranch        *b_eGenPrompt;   //!
   TBranch        *b_eGenPromptTauDecay;   //!
   TBranch        *b_eGenPt;   //!
   TBranch        *b_eGenTauDecay;   //!
   TBranch        *b_eGenVZ;   //!
   TBranch        *b_eGenVtxPVMatch;   //!
   TBranch        *b_eHadronicDepth1OverEm;   //!
   TBranch        *b_eHadronicDepth2OverEm;   //!
   TBranch        *b_eHadronicOverEM;   //!
   TBranch        *b_eHcalIsoDR03;   //!
   TBranch        *b_eIP3D;   //!
   TBranch        *b_eIP3DErr;   //!
   TBranch        *b_eIsoDB03;   //!
   TBranch        *b_eJetArea;   //!
   TBranch        *b_eJetBtag;   //!
   TBranch        *b_eJetDR;   //!
   TBranch        *b_eJetEtaEtaMoment;   //!
   TBranch        *b_eJetEtaPhiMoment;   //!
   TBranch        *b_eJetEtaPhiSpread;   //!
   TBranch        *b_eJetHadronFlavour;   //!
   TBranch        *b_eJetPFCISVBtag;   //!
   TBranch        *b_eJetPartonFlavour;   //!
   TBranch        *b_eJetPhiPhiMoment;   //!
   TBranch        *b_eJetPt;   //!
   TBranch        *b_eLowestMll;   //!
   TBranch        *b_eMVAIsoWP80;   //!
   TBranch        *b_eMVAIsoWP90;   //!
   TBranch        *b_eMVAIsoWPHZZ;   //!
   TBranch        *b_eMVAIsoWPLoose;   //!
   TBranch        *b_eMVANoisoWP80;   //!
   TBranch        *b_eMVANoisoWP90;   //!
   TBranch        *b_eMVANoisoWPLoose;   //!
   TBranch        *b_eMass;   //!
   TBranch        *b_eMatchesEle24HPSTau30Filter;   //!
   TBranch        *b_eMatchesEle24HPSTau30Path;   //!
   TBranch        *b_eMatchesEle24Tau30Filter;   //!
   TBranch        *b_eMatchesEle24Tau30Path;   //!
   TBranch        *b_eMatchesEle25Filter;   //!
   TBranch        *b_eMatchesEle25Path;   //!
   TBranch        *b_eMatchesEle27Filter;   //!
   TBranch        *b_eMatchesEle27Path;   //!
   TBranch        *b_eMatchesEle32Filter;   //!
   TBranch        *b_eMatchesEle32Path;   //!
   TBranch        *b_eMatchesEle35Filter;   //!
   TBranch        *b_eMatchesEle35Path;   //!
   TBranch        *b_eMissingHits;   //!
   TBranch        *b_eNearMuonVeto;   //!
   TBranch        *b_eNearestMuonDR;   //!
   TBranch        *b_eNearestZMass;   //!
   TBranch        *b_ePFChargedIso;   //!
   TBranch        *b_ePFNeutralIso;   //!
   TBranch        *b_ePFPUChargedIso;   //!
   TBranch        *b_ePFPhotonIso;   //!
   TBranch        *b_ePVDXY;   //!
   TBranch        *b_ePVDZ;   //!
   TBranch        *b_ePassesConversionVeto;   //!
   TBranch        *b_ePhi;   //!
   TBranch        *b_ePt;   //!
   TBranch        *b_eRelIso;   //!
   TBranch        *b_eRelPFIsoDB;   //!
   TBranch        *b_eRelPFIsoRho;   //!
   TBranch        *b_eRho;   //!
   TBranch        *b_eSCEnergy;   //!
   TBranch        *b_eSCEta;   //!
   TBranch        *b_eSCEtaWidth;   //!
   TBranch        *b_eSCPhi;   //!
   TBranch        *b_eSCPhiWidth;   //!
   TBranch        *b_eSCPreshowerEnergy;   //!
   TBranch        *b_eSCRawEnergy;   //!
   TBranch        *b_eSIP2D;   //!
   TBranch        *b_eSIP3D;   //!
   TBranch        *b_eSigmaIEtaIEta;   //!
   TBranch        *b_eTrkIsoDR03;   //!
   TBranch        *b_eVZ;   //!
   TBranch        *b_eVetoHZZPt5;   //!
   TBranch        *b_eVetoZTTp001dxyz;   //!
   TBranch        *b_eVetoZTTp001dxyzR0;   //!
   TBranch        *b_eZTTGenMatching;   //!
   TBranch        *b_e_m_DR;   //!
   TBranch        *b_e_m_Mass;   //!
   TBranch        *b_e_m_doubleL1IsoTauMatch;   //!
   TBranch        *b_edeltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_edeltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_eeSuperClusterOverP;   //!
   TBranch        *b_eecalEnergy;   //!
   TBranch        *b_efBrem;   //!
   TBranch        *b_etrackMomentumAtVtxP;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_genEta;   //!
   TBranch        *b_genHTT;   //!
   TBranch        *b_genM;   //!
   TBranch        *b_genMass;   //!
   TBranch        *b_genPhi;   //!
   TBranch        *b_genpT;   //!
   TBranch        *b_genpX;   //!
   TBranch        *b_genpY;   //!
   TBranch        *b_isdata;   //!
   TBranch        *b_isembed;   //!
   TBranch        *b_j1csv;   //!
   TBranch        *b_j1csvWoNoisyJets;   //!
   TBranch        *b_j1eta;   //!
   TBranch        *b_j1etaWoNoisyJets;   //!
   TBranch        *b_j1hadronflavor;   //!
   TBranch        *b_j1hadronflavorWoNoisyJets;   //!
   TBranch        *b_j1phi;   //!
   TBranch        *b_j1phiWoNoisyJets;   //!
   TBranch        *b_j1pt;   //!
   TBranch        *b_j1ptWoNoisyJets;   //!
   TBranch        *b_j1ptWoNoisyJets_JetEC2Down;   //!
   TBranch        *b_j1ptWoNoisyJets_JetEC2Up;   //!
   TBranch        *b_j1ptWoNoisyJets_JetEta0to3Down;   //!
   TBranch        *b_j1ptWoNoisyJets_JetEta0to3Up;   //!
   TBranch        *b_j1ptWoNoisyJets_JetEta0to5Down;   //!
   TBranch        *b_j1ptWoNoisyJets_JetEta0to5Up;   //!
   TBranch        *b_j1ptWoNoisyJets_JetEta3to5Down;   //!
   TBranch        *b_j1ptWoNoisyJets_JetEta3to5Up;   //!
   TBranch        *b_j1ptWoNoisyJets_JetRelativeBalDown;   //!
   TBranch        *b_j1ptWoNoisyJets_JetRelativeBalUp;   //!
   TBranch        *b_j1ptWoNoisyJets_JetRelativeSampleDown;   //!
   TBranch        *b_j1ptWoNoisyJets_JetRelativeSampleUp;   //!
   TBranch        *b_j1pt_JetEC2Down;   //!
   TBranch        *b_j1pt_JetEC2Up;   //!
   TBranch        *b_j1pt_JetEta0to3Down;   //!
   TBranch        *b_j1pt_JetEta0to3Up;   //!
   TBranch        *b_j1pt_JetEta0to5Down;   //!
   TBranch        *b_j1pt_JetEta0to5Up;   //!
   TBranch        *b_j1pt_JetEta3to5Down;   //!
   TBranch        *b_j1pt_JetEta3to5Up;   //!
   TBranch        *b_j1pt_JetRelativeBalDown;   //!
   TBranch        *b_j1pt_JetRelativeBalUp;   //!
   TBranch        *b_j1pt_JetRelativeSampleDown;   //!
   TBranch        *b_j1pt_JetRelativeSampleUp;   //!
   TBranch        *b_j2csv;   //!
   TBranch        *b_j2csvWoNoisyJets;   //!
   TBranch        *b_j2eta;   //!
   TBranch        *b_j2etaWoNoisyJets;   //!
   TBranch        *b_j2hadronflavor;   //!
   TBranch        *b_j2hadronflavorWoNoisyJets;   //!
   TBranch        *b_j2phi;   //!
   TBranch        *b_j2phiWoNoisyJets;   //!
   TBranch        *b_j2pt;   //!
   TBranch        *b_j2ptWoNoisyJets;   //!
   TBranch        *b_j2ptWoNoisyJets_JetEC2Down;   //!
   TBranch        *b_j2ptWoNoisyJets_JetEC2Up;   //!
   TBranch        *b_j2ptWoNoisyJets_JetEta0to3Down;   //!
   TBranch        *b_j2ptWoNoisyJets_JetEta0to3Up;   //!
   TBranch        *b_j2ptWoNoisyJets_JetEta0to5Down;   //!
   TBranch        *b_j2ptWoNoisyJets_JetEta0to5Up;   //!
   TBranch        *b_j2ptWoNoisyJets_JetEta3to5Down;   //!
   TBranch        *b_j2ptWoNoisyJets_JetEta3to5Up;   //!
   TBranch        *b_j2ptWoNoisyJets_JetRelativeBalDown;   //!
   TBranch        *b_j2ptWoNoisyJets_JetRelativeBalUp;   //!
   TBranch        *b_j2ptWoNoisyJets_JetRelativeSampleDown;   //!
   TBranch        *b_j2ptWoNoisyJets_JetRelativeSampleUp;   //!
   TBranch        *b_j2pt_JetEC2Down;   //!
   TBranch        *b_j2pt_JetEC2Up;   //!
   TBranch        *b_j2pt_JetEta0to3Down;   //!
   TBranch        *b_j2pt_JetEta0to3Up;   //!
   TBranch        *b_j2pt_JetEta0to5Down;   //!
   TBranch        *b_j2pt_JetEta0to5Up;   //!
   TBranch        *b_j2pt_JetEta3to5Down;   //!
   TBranch        *b_j2pt_JetEta3to5Up;   //!
   TBranch        *b_j2pt_JetRelativeBalDown;   //!
   TBranch        *b_j2pt_JetRelativeBalUp;   //!
   TBranch        *b_j2pt_JetRelativeSampleDown;   //!
   TBranch        *b_j2pt_JetRelativeSampleUp;   //!
   TBranch        *b_jb1eta_2016;   //!
   TBranch        *b_jb1eta_2017;   //!
   TBranch        *b_jb1eta_2018;   //!
   TBranch        *b_jb1hadronflavor_2016;   //!
   TBranch        *b_jb1hadronflavor_2017;   //!
   TBranch        *b_jb1hadronflavor_2018;   //!
   TBranch        *b_jb1phi_2016;   //!
   TBranch        *b_jb1phi_2017;   //!
   TBranch        *b_jb1phi_2018;   //!
   TBranch        *b_jb1pt_2016;   //!
   TBranch        *b_jb1pt_2017;   //!
   TBranch        *b_jb1pt_2018;   //!
   TBranch        *b_jb2eta_2016;   //!
   TBranch        *b_jb2eta_2017;   //!
   TBranch        *b_jb2eta_2018;   //!
   TBranch        *b_jb2hadronflavor_2016;   //!
   TBranch        *b_jb2hadronflavor_2017;   //!
   TBranch        *b_jb2hadronflavor_2018;   //!
   TBranch        *b_jb2phi_2016;   //!
   TBranch        *b_jb2phi_2017;   //!
   TBranch        *b_jb2phi_2018;   //!
   TBranch        *b_jb2pt_2016;   //!
   TBranch        *b_jb2pt_2017;   //!
   TBranch        *b_jb2pt_2018;   //!
   TBranch        *b_jetVeto20;   //!
   TBranch        *b_jetVeto20WoNoisyJets;   //!
   TBranch        *b_jetVeto20_JetEnDown;   //!
   TBranch        *b_jetVeto20_JetEnUp;   //!
   TBranch        *b_jetVeto30;   //!
   TBranch        *b_jetVeto30WoNoisyJets;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEC2Down;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEC2Up;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEnDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEnUp;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEta0to3Down;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEta0to3Up;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEta0to5Down;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEta0to5Up;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEta3to5Down;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetEta3to5Up;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetRelativeBalDownWoNoisyJets;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetRelativeBalUpWoNoisyJets;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetRelativeSampleDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetRelativeSampleUp;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetTotalDown;   //!
   TBranch        *b_jetVeto30WoNoisyJets_JetTotalUp;   //!
   TBranch        *b_jetVeto30_JetEC2Down;   //!
   TBranch        *b_jetVeto30_JetEC2Up;   //!
   TBranch        *b_jetVeto30_JetEnDown;   //!
   TBranch        *b_jetVeto30_JetEnUp;   //!
   TBranch        *b_jetVeto30_JetEta0to3Down;   //!
   TBranch        *b_jetVeto30_JetEta0to3Up;   //!
   TBranch        *b_jetVeto30_JetEta0to5Down;   //!
   TBranch        *b_jetVeto30_JetEta0to5Up;   //!
   TBranch        *b_jetVeto30_JetEta3to5Down;   //!
   TBranch        *b_jetVeto30_JetEta3to5Up;   //!
   TBranch        *b_jetVeto30_JetRelativeBalDown;   //!
   TBranch        *b_jetVeto30_JetRelativeBalUp;   //!
   TBranch        *b_jetVeto30_JetRelativeSampleDown;   //!
   TBranch        *b_jetVeto30_JetRelativeSampleUp;   //!
   TBranch        *b_jetVeto30_JetTotalDown;   //!
   TBranch        *b_jetVeto30_JetTotalUp;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_mBestTrackType;   //!
   TBranch        *b_mCharge;   //!
   TBranch        *b_mChi2LocalPosition;   //!
   TBranch        *b_mComesFromHiggs;   //!
   TBranch        *b_mCutBasedIdGlobalHighPt;   //!
   TBranch        *b_mCutBasedIdLoose;   //!
   TBranch        *b_mCutBasedIdMedium;   //!
   TBranch        *b_mCutBasedIdMediumPrompt;   //!
   TBranch        *b_mCutBasedIdTight;   //!
   TBranch        *b_mCutBasedIdTrkHighPt;   //!
   TBranch        *b_mEcalIsoDR03;   //!
   TBranch        *b_mEffectiveArea2011;   //!
   TBranch        *b_mEffectiveArea2012;   //!
   TBranch        *b_mEta;   //!
   TBranch        *b_mEta_MuonEnDown;   //!
   TBranch        *b_mEta_MuonEnUp;   //!
   TBranch        *b_mGenCharge;   //!
   TBranch        *b_mGenDirectPromptTauDecayFinalState;   //!
   TBranch        *b_mGenEnergy;   //!
   TBranch        *b_mGenEta;   //!
   TBranch        *b_mGenIsPrompt;   //!
   TBranch        *b_mGenMotherPdgId;   //!
   TBranch        *b_mGenParticle;   //!
   TBranch        *b_mGenPdgId;   //!
   TBranch        *b_mGenPhi;   //!
   TBranch        *b_mGenPrompt;   //!
   TBranch        *b_mGenPromptFinalState;   //!
   TBranch        *b_mGenPromptTauDecay;   //!
   TBranch        *b_mGenPt;   //!
   TBranch        *b_mGenTauDecay;   //!
   TBranch        *b_mGenVZ;   //!
   TBranch        *b_mGenVtxPVMatch;   //!
   TBranch        *b_mHcalIsoDR03;   //!
   TBranch        *b_mIP3D;   //!
   TBranch        *b_mIP3DErr;   //!
   TBranch        *b_mIsGlobal;   //!
   TBranch        *b_mIsPFMuon;   //!
   TBranch        *b_mIsTracker;   //!
   TBranch        *b_mIsoDB03;   //!
   TBranch        *b_mIsoDB04;   //!
   TBranch        *b_mJetArea;   //!
   TBranch        *b_mJetBtag;   //!
   TBranch        *b_mJetDR;   //!
   TBranch        *b_mJetEtaEtaMoment;   //!
   TBranch        *b_mJetEtaPhiMoment;   //!
   TBranch        *b_mJetEtaPhiSpread;   //!
   TBranch        *b_mJetHadronFlavour;   //!
   TBranch        *b_mJetPFCISVBtag;   //!
   TBranch        *b_mJetPartonFlavour;   //!
   TBranch        *b_mJetPhiPhiMoment;   //!
   TBranch        *b_mJetPt;   //!
   TBranch        *b_mLowestMll;   //!
   TBranch        *b_mMass;   //!
   TBranch        *b_mMatchedStations;   //!
   TBranch        *b_mMatchesIsoMu19Tau20Filter;   //!
   TBranch        *b_mMatchesIsoMu19Tau20Path;   //!
   TBranch        *b_mMatchesIsoMu19Tau20SingleL1Filter;   //!
   TBranch        *b_mMatchesIsoMu19Tau20SingleL1Path;   //!
   TBranch        *b_mMatchesIsoMu20HPSTau27Filter;   //!
   TBranch        *b_mMatchesIsoMu20HPSTau27Path;   //!
   TBranch        *b_mMatchesIsoMu20Tau27Filter;   //!
   TBranch        *b_mMatchesIsoMu20Tau27Path;   //!
   TBranch        *b_mMatchesIsoMu22Filter;   //!
   TBranch        *b_mMatchesIsoMu22Path;   //!
   TBranch        *b_mMatchesIsoMu22eta2p1Filter;   //!
   TBranch        *b_mMatchesIsoMu22eta2p1Path;   //!
   TBranch        *b_mMatchesIsoMu24Filter;   //!
   TBranch        *b_mMatchesIsoMu24Path;   //!
   TBranch        *b_mMatchesIsoMu27Filter;   //!
   TBranch        *b_mMatchesIsoMu27Path;   //!
   TBranch        *b_mMatchesIsoTkMu22Filter;   //!
   TBranch        *b_mMatchesIsoTkMu22Path;   //!
   TBranch        *b_mMatchesIsoTkMu22eta2p1Filter;   //!
   TBranch        *b_mMatchesIsoTkMu22eta2p1Path;   //!
   TBranch        *b_mMiniIsoLoose;   //!
   TBranch        *b_mMiniIsoMedium;   //!
   TBranch        *b_mMiniIsoTight;   //!
   TBranch        *b_mMiniIsoVeryTight;   //!
   TBranch        *b_mMuonHits;   //!
   TBranch        *b_mMvaLoose;   //!
   TBranch        *b_mMvaMedium;   //!
   TBranch        *b_mMvaTight;   //!
   TBranch        *b_mNearestZMass;   //!
   TBranch        *b_mNormTrkChi2;   //!
   TBranch        *b_mNormalizedChi2;   //!
   TBranch        *b_mPFChargedHadronIsoR04;   //!
   TBranch        *b_mPFChargedIso;   //!
   TBranch        *b_mPFIDLoose;   //!
   TBranch        *b_mPFIDMedium;   //!
   TBranch        *b_mPFIDTight;   //!
   TBranch        *b_mPFIsoLoose;   //!
   TBranch        *b_mPFIsoMedium;   //!
   TBranch        *b_mPFIsoTight;   //!
   TBranch        *b_mPFIsoVeryLoose;   //!
   TBranch        *b_mPFIsoVeryTight;   //!
   TBranch        *b_mPFNeutralHadronIsoR04;   //!
   TBranch        *b_mPFNeutralIso;   //!
   TBranch        *b_mPFPUChargedIso;   //!
   TBranch        *b_mPFPhotonIso;   //!
   TBranch        *b_mPFPhotonIsoR04;   //!
   TBranch        *b_mPFPileupIsoR04;   //!
   TBranch        *b_mPVDXY;   //!
   TBranch        *b_mPVDZ;   //!
   TBranch        *b_mPhi;   //!
   TBranch        *b_mPhi_MuonEnDown;   //!
   TBranch        *b_mPhi_MuonEnUp;   //!
   TBranch        *b_mPixHits;   //!
   TBranch        *b_mPt;   //!
   TBranch        *b_mPt_MuonEnDown;   //!
   TBranch        *b_mPt_MuonEnUp;   //!
   TBranch        *b_mRelPFIsoDBDefault;   //!
   TBranch        *b_mRelPFIsoDBDefaultR04;   //!
   TBranch        *b_mRelPFIsoRho;   //!
   TBranch        *b_mRho;   //!
   TBranch        *b_mSIP2D;   //!
   TBranch        *b_mSIP3D;   //!
   TBranch        *b_mSegmentCompatibility;   //!
   TBranch        *b_mSoftCutBasedId;   //!
   TBranch        *b_mTkIsoLoose;   //!
   TBranch        *b_mTkIsoTight;   //!
   TBranch        *b_mTkLayersWithMeasurement;   //!
   TBranch        *b_mTrkIsoDR03;   //!
   TBranch        *b_mTrkKink;   //!
   TBranch        *b_mTypeCode;   //!
   TBranch        *b_mVZ;   //!
   TBranch        *b_mValidFraction;   //!
   TBranch        *b_mZTTGenMatching;   //!
   TBranch        *b_metSig;   //!
   TBranch        *b_metcov00;   //!
   TBranch        *b_metcov01;   //!
   TBranch        *b_metcov10;   //!
   TBranch        *b_metcov11;   //!
   TBranch        *b_mu12e23DZPass;   //!
   TBranch        *b_mu12e23Pass;   //!
   TBranch        *b_mu23e12DZPass;   //!
   TBranch        *b_mu23e12Pass;   //!
   TBranch        *b_mu8diele12DZPass;   //!
   TBranch        *b_mu8diele12Pass;   //!
   TBranch        *b_mu8e23DZPass;   //!
   TBranch        *b_mu8e23Pass;   //!
   TBranch        *b_muGlbIsoVetoPt10;   //!
   TBranch        *b_muVeto5;   //!
   TBranch        *b_muVetoZTTp001dxyz;   //!
   TBranch        *b_muVetoZTTp001dxyzR0;   //!
   TBranch        *b_nTruePU;   //!
   TBranch        *b_npNLO;   //!
   TBranch        *b_numGenJets;   //!
   TBranch        *b_nvtx;   //!
   TBranch        *b_processID;   //!
   TBranch        *b_puppiMetEt;   //!
   TBranch        *b_puppiMetPhi;   //!
   TBranch        *b_pvChi2;   //!
   TBranch        *b_pvDX;   //!
   TBranch        *b_pvDY;   //!
   TBranch        *b_pvDZ;   //!
   TBranch        *b_pvIsFake;   //!
   TBranch        *b_pvIsValid;   //!
   TBranch        *b_pvNormChi2;   //!
   TBranch        *b_pvRho;   //!
   TBranch        *b_pvX;   //!
   TBranch        *b_pvY;   //!
   TBranch        *b_pvZ;   //!
   TBranch        *b_pvndof;   //!
   TBranch        *b_raw_pfMetEt;   //!
   TBranch        *b_raw_pfMetPhi;   //!
   TBranch        *b_recoilDaught;   //!
   TBranch        *b_recoilWithMet;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_run;   //!
   TBranch        *b_singleE25eta2p1TightPass;   //!
   TBranch        *b_singleIsoMu22Pass;   //!
   TBranch        *b_singleIsoMu22eta2p1Pass;   //!
   TBranch        *b_singleIsoTkMu22Pass;   //!
   TBranch        *b_singleIsoTkMu22eta2p1Pass;   //!
   TBranch        *b_singleMu19eta2p1LooseTau20Pass;   //!
   TBranch        *b_singleMu19eta2p1LooseTau20singleL1Pass;   //!
   TBranch        *b_tauVetoPt20Loose3HitsVtx;   //!
   TBranch        *b_tauVetoPt20TightMVALTVtx;   //!
   TBranch        *b_topQuarkPt1;   //!
   TBranch        *b_topQuarkPt2;   //!
   TBranch        *b_tripleEPass;   //!
   TBranch        *b_tripleMu10_5_5Pass;   //!
   TBranch        *b_tripleMu12_10_5Pass;   //!
   TBranch        *b_type1_pfMetEt;   //!
   TBranch        *b_type1_pfMetPhi;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEC2Down;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEC2Up;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEta0to3Down;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEta0to3Up;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEta0to5Down;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEta0to5Up;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEta3to5Down;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEta3to5Up;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetRelativeBalDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetRelativeBalUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetRelativeSampleDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetRelativeSampleUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetResDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetResUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetTotalDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetTotalUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_UnclusteredEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_UnclusteredEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEC2Down;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEC2Up;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEta0to3Down;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEta0to3Up;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEta0to5Down;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEta0to5Up;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEta3to5Down;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEta3to5Up;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetRelativeBalDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetRelativeBalUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetRelativeSampleDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetRelativeSampleUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetResDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetResUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetTotalDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetTotalUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_UnclusteredEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_UnclusteredEnUp;   //!
   TBranch        *b_vbfDeta;   //!
   TBranch        *b_vbfJetVeto20;   //!
   TBranch        *b_vbfJetVeto30;   //!
   TBranch        *b_vbfMass;   //!
   TBranch        *b_vbfMassWoNoisyJets;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetEC2Down;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetEC2Up;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetEta0to3Down;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetEta0to3Up;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetEta0to5Down;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetEta0to5Up;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetEta3to5Down;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetEta3to5Up;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetRelativeBalDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetRelativeBalUp;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetRelativeSampleDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetRelativeSampleUp;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetTotalDown;   //!
   TBranch        *b_vbfMassWoNoisyJets_JetTotalUp;   //!
   TBranch        *b_vbfMass_JetEC2Down;   //!
   TBranch        *b_vbfMass_JetEC2Up;   //!
   TBranch        *b_vbfMass_JetEta0to3Down;   //!
   TBranch        *b_vbfMass_JetEta0to3Up;   //!
   TBranch        *b_vbfMass_JetEta0to5Down;   //!
   TBranch        *b_vbfMass_JetEta0to5Up;   //!
   TBranch        *b_vbfMass_JetEta3to5Down;   //!
   TBranch        *b_vbfMass_JetEta3to5Up;   //!
   TBranch        *b_vbfMass_JetRelativeBalDown;   //!
   TBranch        *b_vbfMass_JetRelativeBalUp;   //!
   TBranch        *b_vbfMass_JetRelativeSampleDown;   //!
   TBranch        *b_vbfMass_JetRelativeSampleUp;   //!
   TBranch        *b_vbfMass_JetTotalDown;   //!
   TBranch        *b_vbfMass_JetTotalUp;   //!
   TBranch        *b_vbfNJets20;   //!
   TBranch        *b_vbfNJets30;   //!
   TBranch        *b_vbfj1eta;   //!
   TBranch        *b_vbfj1pt;   //!
   TBranch        *b_vbfj2eta;   //!
   TBranch        *b_vbfj2pt;   //!
   TBranch        *b_vispX;   //!
   TBranch        *b_vispY;   //!
   TBranch        *b_idx;   //!

   // methods
   HTauTauTree_em (TTree* tree); //ctor
   ~HTauTauTree_em();
   void Init(TTree* tree);
   Int_t GetEntry(int entry);
   Long64_t GetEntries();
   TTree* GetTree();
};

HTauTauTree_em::HTauTauTree_em (TTree* tree)
{
    Init(tree);
}

HTauTauTree_em::~HTauTauTree_em() {}

void HTauTauTree_em::Init(TTree* tree)
{
   // Set object pointer

   // Set branch addresses and branch pointers
   if (!tree) return;
   _tree = tree;
   _tree->SetMakeClass(1); // needed especially when compiling

   _tree->SetBranchAddress("DoubleMediumHPSTau35Pass", &DoubleMediumHPSTau35Pass, &b_DoubleMediumHPSTau35Pass);
   _tree->SetBranchAddress("DoubleMediumHPSTau35TightIDPass", &DoubleMediumHPSTau35TightIDPass, &b_DoubleMediumHPSTau35TightIDPass);
   _tree->SetBranchAddress("DoubleMediumHPSTau40Pass", &DoubleMediumHPSTau40Pass, &b_DoubleMediumHPSTau40Pass);
   _tree->SetBranchAddress("DoubleMediumHPSTau40TightIDPass", &DoubleMediumHPSTau40TightIDPass, &b_DoubleMediumHPSTau40TightIDPass);
   _tree->SetBranchAddress("DoubleMediumTau35Pass", &DoubleMediumTau35Pass, &b_DoubleMediumTau35Pass);
   _tree->SetBranchAddress("DoubleMediumTau35TightIDPass", &DoubleMediumTau35TightIDPass, &b_DoubleMediumTau35TightIDPass);
   _tree->SetBranchAddress("DoubleMediumTau40Pass", &DoubleMediumTau40Pass, &b_DoubleMediumTau40Pass);
   _tree->SetBranchAddress("DoubleMediumTau40TightIDPass", &DoubleMediumTau40TightIDPass, &b_DoubleMediumTau40TightIDPass);
   _tree->SetBranchAddress("DoubleTightHPSTau35Pass", &DoubleTightHPSTau35Pass, &b_DoubleTightHPSTau35Pass);
   _tree->SetBranchAddress("DoubleTightHPSTau35TightIDPass", &DoubleTightHPSTau35TightIDPass, &b_DoubleTightHPSTau35TightIDPass);
   _tree->SetBranchAddress("DoubleTightHPSTau40Pass", &DoubleTightHPSTau40Pass, &b_DoubleTightHPSTau40Pass);
   _tree->SetBranchAddress("DoubleTightHPSTau40TightIDPass", &DoubleTightHPSTau40TightIDPass, &b_DoubleTightHPSTau40TightIDPass);
   _tree->SetBranchAddress("DoubleTightTau35Pass", &DoubleTightTau35Pass, &b_DoubleTightTau35Pass);
   _tree->SetBranchAddress("DoubleTightTau35TightIDPass", &DoubleTightTau35TightIDPass, &b_DoubleTightTau35TightIDPass);
   _tree->SetBranchAddress("DoubleTightTau40Pass", &DoubleTightTau40Pass, &b_DoubleTightTau40Pass);
   _tree->SetBranchAddress("DoubleTightTau40TightIDPass", &DoubleTightTau40TightIDPass, &b_DoubleTightTau40TightIDPass);
   _tree->SetBranchAddress("Ele24LooseHPSTau30Pass", &Ele24LooseHPSTau30Pass, &b_Ele24LooseHPSTau30Pass);
   _tree->SetBranchAddress("Ele24LooseHPSTau30TightIDPass", &Ele24LooseHPSTau30TightIDPass, &b_Ele24LooseHPSTau30TightIDPass);
   _tree->SetBranchAddress("Ele24LooseTau30Pass", &Ele24LooseTau30Pass, &b_Ele24LooseTau30Pass);
   _tree->SetBranchAddress("Ele24LooseTau30TightIDPass", &Ele24LooseTau30TightIDPass, &b_Ele24LooseTau30TightIDPass);
   _tree->SetBranchAddress("Ele27WPTightPass", &Ele27WPTightPass, &b_Ele27WPTightPass);
   _tree->SetBranchAddress("Ele32WPTightPass", &Ele32WPTightPass, &b_Ele32WPTightPass);
   _tree->SetBranchAddress("Ele35WPTightPass", &Ele35WPTightPass, &b_Ele35WPTightPass);
   _tree->SetBranchAddress("Ele38WPTightPass", &Ele38WPTightPass, &b_Ele38WPTightPass);
   _tree->SetBranchAddress("Ele40WPTightPass", &Ele40WPTightPass, &b_Ele40WPTightPass);
   _tree->SetBranchAddress("EmbPtWeight", &EmbPtWeight, &b_EmbPtWeight);
   _tree->SetBranchAddress("Eta", &Eta, &b_Eta);
   _tree->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
   _tree->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
   _tree->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   _tree->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   _tree->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   _tree->SetBranchAddress("Flag_badMuons", &Flag_badMuons, &b_Flag_badMuons);
   _tree->SetBranchAddress("Flag_duplicateMuons", &Flag_duplicateMuons, &b_Flag_duplicateMuons);
   _tree->SetBranchAddress("Flag_ecalBadCalibFilter", &Flag_ecalBadCalibFilter, &b_Flag_ecalBadCalibFilter);
   _tree->SetBranchAddress("Flag_ecalBadCalibReducedMINIAODFilter", &Flag_ecalBadCalibReducedMINIAODFilter, &b_Flag_ecalBadCalibReducedMINIAODFilter);
   _tree->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   _tree->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
   _tree->SetBranchAddress("Flag_globalTightHalo2016Filter", &Flag_globalTightHalo2016Filter, &b_Flag_globalTightHalo2016Filter);
   _tree->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   _tree->SetBranchAddress("GenWeight", &GenWeight, &b_GenWeight);
   _tree->SetBranchAddress("Ht", &Ht, &b_Ht);
   _tree->SetBranchAddress("IsoMu24Pass", &IsoMu24Pass, &b_IsoMu24Pass);
   _tree->SetBranchAddress("IsoMu27Pass", &IsoMu27Pass, &b_IsoMu27Pass);
   _tree->SetBranchAddress("LT", &LT, &b_LT);
   _tree->SetBranchAddress("Mass", &Mass, &b_Mass);
   _tree->SetBranchAddress("MassError", &MassError, &b_MassError);
   _tree->SetBranchAddress("MassErrord1", &MassErrord1, &b_MassErrord1);
   _tree->SetBranchAddress("MassErrord2", &MassErrord2, &b_MassErrord2);
   _tree->SetBranchAddress("MassErrord3", &MassErrord3, &b_MassErrord3);
   _tree->SetBranchAddress("MassErrord4", &MassErrord4, &b_MassErrord4);
   _tree->SetBranchAddress("Mt", &Mt, &b_Mt);
   _tree->SetBranchAddress("Mu20LooseHPSTau27Pass", &Mu20LooseHPSTau27Pass, &b_Mu20LooseHPSTau27Pass);
   _tree->SetBranchAddress("Mu20LooseHPSTau27TightIDPass", &Mu20LooseHPSTau27TightIDPass, &b_Mu20LooseHPSTau27TightIDPass);
   _tree->SetBranchAddress("Mu20LooseTau27Pass", &Mu20LooseTau27Pass, &b_Mu20LooseTau27Pass);
   _tree->SetBranchAddress("Mu20LooseTau27TightIDPass", &Mu20LooseTau27TightIDPass, &b_Mu20LooseTau27TightIDPass);
   _tree->SetBranchAddress("Mu50Pass", &Mu50Pass, &b_Mu50Pass);
   _tree->SetBranchAddress("NUP", &NUP, &b_NUP);
   _tree->SetBranchAddress("Phi", &Phi, &b_Phi);
   _tree->SetBranchAddress("Pt", &Pt, &b_Pt);
   _tree->SetBranchAddress("Rivet_VEta", &Rivet_VEta, &b_Rivet_VEta);
   _tree->SetBranchAddress("Rivet_VPt", &Rivet_VPt, &b_Rivet_VPt);
   _tree->SetBranchAddress("Rivet_errorCode", &Rivet_errorCode, &b_Rivet_errorCode);
   _tree->SetBranchAddress("Rivet_higgsEta", &Rivet_higgsEta, &b_Rivet_higgsEta);
   _tree->SetBranchAddress("Rivet_higgsPt", &Rivet_higgsPt, &b_Rivet_higgsPt);
   _tree->SetBranchAddress("Rivet_nJets25", &Rivet_nJets25, &b_Rivet_nJets25);
   _tree->SetBranchAddress("Rivet_nJets30", &Rivet_nJets30, &b_Rivet_nJets30);
   _tree->SetBranchAddress("Rivet_p4decay_VEta", &Rivet_p4decay_VEta, &b_Rivet_p4decay_VEta);
   _tree->SetBranchAddress("Rivet_p4decay_VPt", &Rivet_p4decay_VPt, &b_Rivet_p4decay_VPt);
   _tree->SetBranchAddress("Rivet_prodMode", &Rivet_prodMode, &b_Rivet_prodMode);
   _tree->SetBranchAddress("Rivet_stage0_cat", &Rivet_stage0_cat, &b_Rivet_stage0_cat);
   _tree->SetBranchAddress("Rivet_stage1_cat_pTjet25GeV", &Rivet_stage1_cat_pTjet25GeV, &b_Rivet_stage1_cat_pTjet25GeV);
   _tree->SetBranchAddress("Rivet_stage1_cat_pTjet30GeV", &Rivet_stage1_cat_pTjet30GeV, &b_Rivet_stage1_cat_pTjet30GeV);
   _tree->SetBranchAddress("Rivet_stage1p1_cat", &Rivet_stage1p1_cat, &b_Rivet_stage1p1_cat);
   _tree->SetBranchAddress("VBFDoubleLooseHPSTau20Pass", &VBFDoubleLooseHPSTau20Pass, &b_VBFDoubleLooseHPSTau20Pass);
   _tree->SetBranchAddress("VBFDoubleLooseTau20Pass", &VBFDoubleLooseTau20Pass, &b_VBFDoubleLooseTau20Pass);
   _tree->SetBranchAddress("VBFDoubleMediumHPSTau20Pass", &VBFDoubleMediumHPSTau20Pass, &b_VBFDoubleMediumHPSTau20Pass);
   _tree->SetBranchAddress("VBFDoubleMediumTau20Pass", &VBFDoubleMediumTau20Pass, &b_VBFDoubleMediumTau20Pass);
   _tree->SetBranchAddress("VBFDoubleTightHPSTau20Pass", &VBFDoubleTightHPSTau20Pass, &b_VBFDoubleTightHPSTau20Pass);
   _tree->SetBranchAddress("VBFDoubleTightTau20Pass", &VBFDoubleTightTau20Pass, &b_VBFDoubleTightTau20Pass);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Loose_2016_DR0p5", &bjetDeepCSVVeto20Loose_2016_DR0p5, &b_bjetDeepCSVVeto20Loose_2016_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Loose_2017_DR0p5", &bjetDeepCSVVeto20Loose_2017_DR0p5, &b_bjetDeepCSVVeto20Loose_2017_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Loose_2018_DR0p5", &bjetDeepCSVVeto20Loose_2018_DR0p5, &b_bjetDeepCSVVeto20Loose_2018_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Medium_2016_DR0", &bjetDeepCSVVeto20Medium_2016_DR0, &b_bjetDeepCSVVeto20Medium_2016_DR0);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Medium_2016_DR0p5", &bjetDeepCSVVeto20Medium_2016_DR0p5, &b_bjetDeepCSVVeto20Medium_2016_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Medium_2017_DR0", &bjetDeepCSVVeto20Medium_2017_DR0, &b_bjetDeepCSVVeto20Medium_2017_DR0);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Medium_2017_DR0p5", &bjetDeepCSVVeto20Medium_2017_DR0p5, &b_bjetDeepCSVVeto20Medium_2017_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Medium_2018_DR0", &bjetDeepCSVVeto20Medium_2018_DR0, &b_bjetDeepCSVVeto20Medium_2018_DR0);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Medium_2018_DR0p5", &bjetDeepCSVVeto20Medium_2018_DR0p5, &b_bjetDeepCSVVeto20Medium_2018_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Tight_2016_DR0p5", &bjetDeepCSVVeto20Tight_2016_DR0p5, &b_bjetDeepCSVVeto20Tight_2016_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Tight_2017_DR0p5", &bjetDeepCSVVeto20Tight_2017_DR0p5, &b_bjetDeepCSVVeto20Tight_2017_DR0p5);
   _tree->SetBranchAddress("bjetDeepCSVVeto20Tight_2018_DR0p5", &bjetDeepCSVVeto20Tight_2018_DR0p5, &b_bjetDeepCSVVeto20Tight_2018_DR0p5);
   _tree->SetBranchAddress("charge", &charge, &b_charge);
   _tree->SetBranchAddress("dielectronVeto", &dielectronVeto, &b_dielectronVeto);
   _tree->SetBranchAddress("dimu9ele9Pass", &dimu9ele9Pass, &b_dimu9ele9Pass);
   _tree->SetBranchAddress("dimuonVeto", &dimuonVeto, &b_dimuonVeto);
   _tree->SetBranchAddress("doubleE25Pass", &doubleE25Pass, &b_doubleE25Pass);
   _tree->SetBranchAddress("doubleE33Pass", &doubleE33Pass, &b_doubleE33Pass);
   _tree->SetBranchAddress("doubleE_23_12Pass", &doubleE_23_12Pass, &b_doubleE_23_12Pass);
   _tree->SetBranchAddress("doubleMuDZminMass3p8Pass", &doubleMuDZminMass3p8Pass, &b_doubleMuDZminMass3p8Pass);
   _tree->SetBranchAddress("doubleMuDZminMass8Pass", &doubleMuDZminMass8Pass, &b_doubleMuDZminMass8Pass);
   _tree->SetBranchAddress("doubleMuSingleEPass", &doubleMuSingleEPass, &b_doubleMuSingleEPass);
   _tree->SetBranchAddress("doubleTau35Pass", &doubleTau35Pass, &b_doubleTau35Pass);
   _tree->SetBranchAddress("doubleTauCmbIso35RegPass", &doubleTauCmbIso35RegPass, &b_doubleTauCmbIso35RegPass);
   _tree->SetBranchAddress("eCBIDLoose", &eCBIDLoose, &b_eCBIDLoose);
   _tree->SetBranchAddress("eCBIDMedium", &eCBIDMedium, &b_eCBIDMedium);
   _tree->SetBranchAddress("eCBIDTight", &eCBIDTight, &b_eCBIDTight);
   _tree->SetBranchAddress("eCBIDVeto", &eCBIDVeto, &b_eCBIDVeto);
   _tree->SetBranchAddress("eCharge", &eCharge, &b_eCharge);
   _tree->SetBranchAddress("eChargeIdLoose", &eChargeIdLoose, &b_eChargeIdLoose);
   _tree->SetBranchAddress("eChargeIdMed", &eChargeIdMed, &b_eChargeIdMed);
   _tree->SetBranchAddress("eChargeIdTight", &eChargeIdTight, &b_eChargeIdTight);
   _tree->SetBranchAddress("eComesFromHiggs", &eComesFromHiggs, &b_eComesFromHiggs);
   _tree->SetBranchAddress("eCorrectedEt", &eCorrectedEt, &b_eCorrectedEt);
   _tree->SetBranchAddress("eE1x5", &eE1x5, &b_eE1x5);
   _tree->SetBranchAddress("eE2x5Max", &eE2x5Max, &b_eE2x5Max);
   _tree->SetBranchAddress("eE5x5", &eE5x5, &b_eE5x5);
   _tree->SetBranchAddress("eEcalIsoDR03", &eEcalIsoDR03, &b_eEcalIsoDR03);
   _tree->SetBranchAddress("eEnergyError", &eEnergyError, &b_eEnergyError);
   _tree->SetBranchAddress("eEnergyScaleDown", &eEnergyScaleDown, &b_eEnergyScaleDown);
   _tree->SetBranchAddress("eEnergyScaleGainDown", &eEnergyScaleGainDown, &b_eEnergyScaleGainDown);
   _tree->SetBranchAddress("eEnergyScaleGainUp", &eEnergyScaleGainUp, &b_eEnergyScaleGainUp);
   _tree->SetBranchAddress("eEnergyScaleStatDown", &eEnergyScaleStatDown, &b_eEnergyScaleStatDown);
   _tree->SetBranchAddress("eEnergyScaleStatUp", &eEnergyScaleStatUp, &b_eEnergyScaleStatUp);
   _tree->SetBranchAddress("eEnergyScaleSystDown", &eEnergyScaleSystDown, &b_eEnergyScaleSystDown);
   _tree->SetBranchAddress("eEnergyScaleSystUp", &eEnergyScaleSystUp, &b_eEnergyScaleSystUp);
   _tree->SetBranchAddress("eEnergyScaleUp", &eEnergyScaleUp, &b_eEnergyScaleUp);
   _tree->SetBranchAddress("eEnergySigmaDown", &eEnergySigmaDown, &b_eEnergySigmaDown);
   _tree->SetBranchAddress("eEnergySigmaPhiDown", &eEnergySigmaPhiDown, &b_eEnergySigmaPhiDown);
   _tree->SetBranchAddress("eEnergySigmaPhiUp", &eEnergySigmaPhiUp, &b_eEnergySigmaPhiUp);
   _tree->SetBranchAddress("eEnergySigmaRhoDown", &eEnergySigmaRhoDown, &b_eEnergySigmaRhoDown);
   _tree->SetBranchAddress("eEnergySigmaRhoUp", &eEnergySigmaRhoUp, &b_eEnergySigmaRhoUp);
   _tree->SetBranchAddress("eEnergySigmaUp", &eEnergySigmaUp, &b_eEnergySigmaUp);
   _tree->SetBranchAddress("eEta", &eEta, &b_eEta);
   _tree->SetBranchAddress("eGenCharge", &eGenCharge, &b_eGenCharge);
   _tree->SetBranchAddress("eGenDirectPromptTauDecay", &eGenDirectPromptTauDecay, &b_eGenDirectPromptTauDecay);
   _tree->SetBranchAddress("eGenEnergy", &eGenEnergy, &b_eGenEnergy);
   _tree->SetBranchAddress("eGenEta", &eGenEta, &b_eGenEta);
   _tree->SetBranchAddress("eGenIsPrompt", &eGenIsPrompt, &b_eGenIsPrompt);
   _tree->SetBranchAddress("eGenMotherPdgId", &eGenMotherPdgId, &b_eGenMotherPdgId);
   _tree->SetBranchAddress("eGenParticle", &eGenParticle, &b_eGenParticle);
   _tree->SetBranchAddress("eGenPdgId", &eGenPdgId, &b_eGenPdgId);
   _tree->SetBranchAddress("eGenPhi", &eGenPhi, &b_eGenPhi);
   _tree->SetBranchAddress("eGenPrompt", &eGenPrompt, &b_eGenPrompt);
   _tree->SetBranchAddress("eGenPromptTauDecay", &eGenPromptTauDecay, &b_eGenPromptTauDecay);
   _tree->SetBranchAddress("eGenPt", &eGenPt, &b_eGenPt);
   _tree->SetBranchAddress("eGenTauDecay", &eGenTauDecay, &b_eGenTauDecay);
   _tree->SetBranchAddress("eGenVZ", &eGenVZ, &b_eGenVZ);
   _tree->SetBranchAddress("eGenVtxPVMatch", &eGenVtxPVMatch, &b_eGenVtxPVMatch);
   _tree->SetBranchAddress("eHadronicDepth1OverEm", &eHadronicDepth1OverEm, &b_eHadronicDepth1OverEm);
   _tree->SetBranchAddress("eHadronicDepth2OverEm", &eHadronicDepth2OverEm, &b_eHadronicDepth2OverEm);
   _tree->SetBranchAddress("eHadronicOverEM", &eHadronicOverEM, &b_eHadronicOverEM);
   _tree->SetBranchAddress("eHcalIsoDR03", &eHcalIsoDR03, &b_eHcalIsoDR03);
   _tree->SetBranchAddress("eIP3D", &eIP3D, &b_eIP3D);
   _tree->SetBranchAddress("eIP3DErr", &eIP3DErr, &b_eIP3DErr);
   _tree->SetBranchAddress("eIsoDB03", &eIsoDB03, &b_eIsoDB03);
   _tree->SetBranchAddress("eJetArea", &eJetArea, &b_eJetArea);
   _tree->SetBranchAddress("eJetBtag", &eJetBtag, &b_eJetBtag);
   _tree->SetBranchAddress("eJetDR", &eJetDR, &b_eJetDR);
   _tree->SetBranchAddress("eJetEtaEtaMoment", &eJetEtaEtaMoment, &b_eJetEtaEtaMoment);
   _tree->SetBranchAddress("eJetEtaPhiMoment", &eJetEtaPhiMoment, &b_eJetEtaPhiMoment);
   _tree->SetBranchAddress("eJetEtaPhiSpread", &eJetEtaPhiSpread, &b_eJetEtaPhiSpread);
   _tree->SetBranchAddress("eJetHadronFlavour", &eJetHadronFlavour, &b_eJetHadronFlavour);
   _tree->SetBranchAddress("eJetPFCISVBtag", &eJetPFCISVBtag, &b_eJetPFCISVBtag);
   _tree->SetBranchAddress("eJetPartonFlavour", &eJetPartonFlavour, &b_eJetPartonFlavour);
   _tree->SetBranchAddress("eJetPhiPhiMoment", &eJetPhiPhiMoment, &b_eJetPhiPhiMoment);
   _tree->SetBranchAddress("eJetPt", &eJetPt, &b_eJetPt);
   _tree->SetBranchAddress("eLowestMll", &eLowestMll, &b_eLowestMll);
   _tree->SetBranchAddress("eMVAIsoWP80", &eMVAIsoWP80, &b_eMVAIsoWP80);
   _tree->SetBranchAddress("eMVAIsoWP90", &eMVAIsoWP90, &b_eMVAIsoWP90);
   _tree->SetBranchAddress("eMVAIsoWPHZZ", &eMVAIsoWPHZZ, &b_eMVAIsoWPHZZ);
   _tree->SetBranchAddress("eMVAIsoWPLoose", &eMVAIsoWPLoose, &b_eMVAIsoWPLoose);
   _tree->SetBranchAddress("eMVANoisoWP80", &eMVANoisoWP80, &b_eMVANoisoWP80);
   _tree->SetBranchAddress("eMVANoisoWP90", &eMVANoisoWP90, &b_eMVANoisoWP90);
   _tree->SetBranchAddress("eMVANoisoWPLoose", &eMVANoisoWPLoose, &b_eMVANoisoWPLoose);
   _tree->SetBranchAddress("eMass", &eMass, &b_eMass);
   _tree->SetBranchAddress("eMatchesEle24HPSTau30Filter", &eMatchesEle24HPSTau30Filter, &b_eMatchesEle24HPSTau30Filter);
   _tree->SetBranchAddress("eMatchesEle24HPSTau30Path", &eMatchesEle24HPSTau30Path, &b_eMatchesEle24HPSTau30Path);
   _tree->SetBranchAddress("eMatchesEle24Tau30Filter", &eMatchesEle24Tau30Filter, &b_eMatchesEle24Tau30Filter);
   _tree->SetBranchAddress("eMatchesEle24Tau30Path", &eMatchesEle24Tau30Path, &b_eMatchesEle24Tau30Path);
   _tree->SetBranchAddress("eMatchesEle25Filter", &eMatchesEle25Filter, &b_eMatchesEle25Filter);
   _tree->SetBranchAddress("eMatchesEle25Path", &eMatchesEle25Path, &b_eMatchesEle25Path);
   _tree->SetBranchAddress("eMatchesEle27Filter", &eMatchesEle27Filter, &b_eMatchesEle27Filter);
   _tree->SetBranchAddress("eMatchesEle27Path", &eMatchesEle27Path, &b_eMatchesEle27Path);
   _tree->SetBranchAddress("eMatchesEle32Filter", &eMatchesEle32Filter, &b_eMatchesEle32Filter);
   _tree->SetBranchAddress("eMatchesEle32Path", &eMatchesEle32Path, &b_eMatchesEle32Path);
   _tree->SetBranchAddress("eMatchesEle35Filter", &eMatchesEle35Filter, &b_eMatchesEle35Filter);
   _tree->SetBranchAddress("eMatchesEle35Path", &eMatchesEle35Path, &b_eMatchesEle35Path);
   _tree->SetBranchAddress("eMissingHits", &eMissingHits, &b_eMissingHits);
   _tree->SetBranchAddress("eNearMuonVeto", &eNearMuonVeto, &b_eNearMuonVeto);
   _tree->SetBranchAddress("eNearestMuonDR", &eNearestMuonDR, &b_eNearestMuonDR);
   _tree->SetBranchAddress("eNearestZMass", &eNearestZMass, &b_eNearestZMass);
   _tree->SetBranchAddress("ePFChargedIso", &ePFChargedIso, &b_ePFChargedIso);
   _tree->SetBranchAddress("ePFNeutralIso", &ePFNeutralIso, &b_ePFNeutralIso);
   _tree->SetBranchAddress("ePFPUChargedIso", &ePFPUChargedIso, &b_ePFPUChargedIso);
   _tree->SetBranchAddress("ePFPhotonIso", &ePFPhotonIso, &b_ePFPhotonIso);
   _tree->SetBranchAddress("ePVDXY", &ePVDXY, &b_ePVDXY);
   _tree->SetBranchAddress("ePVDZ", &ePVDZ, &b_ePVDZ);
   _tree->SetBranchAddress("ePassesConversionVeto", &ePassesConversionVeto, &b_ePassesConversionVeto);
   _tree->SetBranchAddress("ePhi", &ePhi, &b_ePhi);
   _tree->SetBranchAddress("ePt", &ePt, &b_ePt);
   _tree->SetBranchAddress("eRelIso", &eRelIso, &b_eRelIso);
   _tree->SetBranchAddress("eRelPFIsoDB", &eRelPFIsoDB, &b_eRelPFIsoDB);
   _tree->SetBranchAddress("eRelPFIsoRho", &eRelPFIsoRho, &b_eRelPFIsoRho);
   _tree->SetBranchAddress("eRho", &eRho, &b_eRho);
   _tree->SetBranchAddress("eSCEnergy", &eSCEnergy, &b_eSCEnergy);
   _tree->SetBranchAddress("eSCEta", &eSCEta, &b_eSCEta);
   _tree->SetBranchAddress("eSCEtaWidth", &eSCEtaWidth, &b_eSCEtaWidth);
   _tree->SetBranchAddress("eSCPhi", &eSCPhi, &b_eSCPhi);
   _tree->SetBranchAddress("eSCPhiWidth", &eSCPhiWidth, &b_eSCPhiWidth);
   _tree->SetBranchAddress("eSCPreshowerEnergy", &eSCPreshowerEnergy, &b_eSCPreshowerEnergy);
   _tree->SetBranchAddress("eSCRawEnergy", &eSCRawEnergy, &b_eSCRawEnergy);
   _tree->SetBranchAddress("eSIP2D", &eSIP2D, &b_eSIP2D);
   _tree->SetBranchAddress("eSIP3D", &eSIP3D, &b_eSIP3D);
   _tree->SetBranchAddress("eSigmaIEtaIEta", &eSigmaIEtaIEta, &b_eSigmaIEtaIEta);
   _tree->SetBranchAddress("eTrkIsoDR03", &eTrkIsoDR03, &b_eTrkIsoDR03);
   _tree->SetBranchAddress("eVZ", &eVZ, &b_eVZ);
   _tree->SetBranchAddress("eVetoHZZPt5", &eVetoHZZPt5, &b_eVetoHZZPt5);
   _tree->SetBranchAddress("eVetoZTTp001dxyz", &eVetoZTTp001dxyz, &b_eVetoZTTp001dxyz);
   _tree->SetBranchAddress("eVetoZTTp001dxyzR0", &eVetoZTTp001dxyzR0, &b_eVetoZTTp001dxyzR0);
   _tree->SetBranchAddress("eZTTGenMatching", &eZTTGenMatching, &b_eZTTGenMatching);
   _tree->SetBranchAddress("e_m_DR", &e_m_DR, &b_e_m_DR);
   _tree->SetBranchAddress("e_m_Mass", &e_m_Mass, &b_e_m_Mass);
   _tree->SetBranchAddress("e_m_doubleL1IsoTauMatch", &e_m_doubleL1IsoTauMatch, &b_e_m_doubleL1IsoTauMatch);
   _tree->SetBranchAddress("edeltaEtaSuperClusterTrackAtVtx", &edeltaEtaSuperClusterTrackAtVtx, &b_edeltaEtaSuperClusterTrackAtVtx);
   _tree->SetBranchAddress("edeltaPhiSuperClusterTrackAtVtx", &edeltaPhiSuperClusterTrackAtVtx, &b_edeltaPhiSuperClusterTrackAtVtx);
   _tree->SetBranchAddress("eeSuperClusterOverP", &eeSuperClusterOverP, &b_eeSuperClusterOverP);
   _tree->SetBranchAddress("eecalEnergy", &eecalEnergy, &b_eecalEnergy);
   _tree->SetBranchAddress("efBrem", &efBrem, &b_efBrem);
   _tree->SetBranchAddress("etrackMomentumAtVtxP", &etrackMomentumAtVtxP, &b_etrackMomentumAtVtxP);
   _tree->SetBranchAddress("evt", &evt, &b_evt);
   _tree->SetBranchAddress("genEta", &genEta, &b_genEta);
   _tree->SetBranchAddress("genHTT", &genHTT, &b_genHTT);
   _tree->SetBranchAddress("genM", &genM, &b_genM);
   _tree->SetBranchAddress("genMass", &genMass, &b_genMass);
   _tree->SetBranchAddress("genPhi", &genPhi, &b_genPhi);
   _tree->SetBranchAddress("genpT", &genpT, &b_genpT);
   _tree->SetBranchAddress("genpX", &genpX, &b_genpX);
   _tree->SetBranchAddress("genpY", &genpY, &b_genpY);
   _tree->SetBranchAddress("isdata", &isdata, &b_isdata);
   _tree->SetBranchAddress("isembed", &isembed, &b_isembed);
   _tree->SetBranchAddress("j1csv", &j1csv, &b_j1csv);
   _tree->SetBranchAddress("j1csvWoNoisyJets", &j1csvWoNoisyJets, &b_j1csvWoNoisyJets);
   _tree->SetBranchAddress("j1eta", &j1eta, &b_j1eta);
   _tree->SetBranchAddress("j1etaWoNoisyJets", &j1etaWoNoisyJets, &b_j1etaWoNoisyJets);
   _tree->SetBranchAddress("j1hadronflavor", &j1hadronflavor, &b_j1hadronflavor);
   _tree->SetBranchAddress("j1hadronflavorWoNoisyJets", &j1hadronflavorWoNoisyJets, &b_j1hadronflavorWoNoisyJets);
   _tree->SetBranchAddress("j1phi", &j1phi, &b_j1phi);
   _tree->SetBranchAddress("j1phiWoNoisyJets", &j1phiWoNoisyJets, &b_j1phiWoNoisyJets);
   _tree->SetBranchAddress("j1pt", &j1pt, &b_j1pt);
   _tree->SetBranchAddress("j1ptWoNoisyJets", &j1ptWoNoisyJets, &b_j1ptWoNoisyJets);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetEC2Down", &j1ptWoNoisyJets_JetEC2Down, &b_j1ptWoNoisyJets_JetEC2Down);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetEC2Up", &j1ptWoNoisyJets_JetEC2Up, &b_j1ptWoNoisyJets_JetEC2Up);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetEta0to3Down", &j1ptWoNoisyJets_JetEta0to3Down, &b_j1ptWoNoisyJets_JetEta0to3Down);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetEta0to3Up", &j1ptWoNoisyJets_JetEta0to3Up, &b_j1ptWoNoisyJets_JetEta0to3Up);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetEta0to5Down", &j1ptWoNoisyJets_JetEta0to5Down, &b_j1ptWoNoisyJets_JetEta0to5Down);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetEta0to5Up", &j1ptWoNoisyJets_JetEta0to5Up, &b_j1ptWoNoisyJets_JetEta0to5Up);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetEta3to5Down", &j1ptWoNoisyJets_JetEta3to5Down, &b_j1ptWoNoisyJets_JetEta3to5Down);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetEta3to5Up", &j1ptWoNoisyJets_JetEta3to5Up, &b_j1ptWoNoisyJets_JetEta3to5Up);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetRelativeBalDown", &j1ptWoNoisyJets_JetRelativeBalDown, &b_j1ptWoNoisyJets_JetRelativeBalDown);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetRelativeBalUp", &j1ptWoNoisyJets_JetRelativeBalUp, &b_j1ptWoNoisyJets_JetRelativeBalUp);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetRelativeSampleDown", &j1ptWoNoisyJets_JetRelativeSampleDown, &b_j1ptWoNoisyJets_JetRelativeSampleDown);
   _tree->SetBranchAddress("j1ptWoNoisyJets_JetRelativeSampleUp", &j1ptWoNoisyJets_JetRelativeSampleUp, &b_j1ptWoNoisyJets_JetRelativeSampleUp);
   _tree->SetBranchAddress("j1pt_JetEC2Down", &j1pt_JetEC2Down, &b_j1pt_JetEC2Down);
   _tree->SetBranchAddress("j1pt_JetEC2Up", &j1pt_JetEC2Up, &b_j1pt_JetEC2Up);
   _tree->SetBranchAddress("j1pt_JetEta0to3Down", &j1pt_JetEta0to3Down, &b_j1pt_JetEta0to3Down);
   _tree->SetBranchAddress("j1pt_JetEta0to3Up", &j1pt_JetEta0to3Up, &b_j1pt_JetEta0to3Up);
   _tree->SetBranchAddress("j1pt_JetEta0to5Down", &j1pt_JetEta0to5Down, &b_j1pt_JetEta0to5Down);
   _tree->SetBranchAddress("j1pt_JetEta0to5Up", &j1pt_JetEta0to5Up, &b_j1pt_JetEta0to5Up);
   _tree->SetBranchAddress("j1pt_JetEta3to5Down", &j1pt_JetEta3to5Down, &b_j1pt_JetEta3to5Down);
   _tree->SetBranchAddress("j1pt_JetEta3to5Up", &j1pt_JetEta3to5Up, &b_j1pt_JetEta3to5Up);
   _tree->SetBranchAddress("j1pt_JetRelativeBalDown", &j1pt_JetRelativeBalDown, &b_j1pt_JetRelativeBalDown);
   _tree->SetBranchAddress("j1pt_JetRelativeBalUp", &j1pt_JetRelativeBalUp, &b_j1pt_JetRelativeBalUp);
   _tree->SetBranchAddress("j1pt_JetRelativeSampleDown", &j1pt_JetRelativeSampleDown, &b_j1pt_JetRelativeSampleDown);
   _tree->SetBranchAddress("j1pt_JetRelativeSampleUp", &j1pt_JetRelativeSampleUp, &b_j1pt_JetRelativeSampleUp);
   _tree->SetBranchAddress("j2csv", &j2csv, &b_j2csv);
   _tree->SetBranchAddress("j2csvWoNoisyJets", &j2csvWoNoisyJets, &b_j2csvWoNoisyJets);
   _tree->SetBranchAddress("j2eta", &j2eta, &b_j2eta);
   _tree->SetBranchAddress("j2etaWoNoisyJets", &j2etaWoNoisyJets, &b_j2etaWoNoisyJets);
   _tree->SetBranchAddress("j2hadronflavor", &j2hadronflavor, &b_j2hadronflavor);
   _tree->SetBranchAddress("j2hadronflavorWoNoisyJets", &j2hadronflavorWoNoisyJets, &b_j2hadronflavorWoNoisyJets);
   _tree->SetBranchAddress("j2phi", &j2phi, &b_j2phi);
   _tree->SetBranchAddress("j2phiWoNoisyJets", &j2phiWoNoisyJets, &b_j2phiWoNoisyJets);
   _tree->SetBranchAddress("j2pt", &j2pt, &b_j2pt);
   _tree->SetBranchAddress("j2ptWoNoisyJets", &j2ptWoNoisyJets, &b_j2ptWoNoisyJets);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetEC2Down", &j2ptWoNoisyJets_JetEC2Down, &b_j2ptWoNoisyJets_JetEC2Down);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetEC2Up", &j2ptWoNoisyJets_JetEC2Up, &b_j2ptWoNoisyJets_JetEC2Up);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetEta0to3Down", &j2ptWoNoisyJets_JetEta0to3Down, &b_j2ptWoNoisyJets_JetEta0to3Down);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetEta0to3Up", &j2ptWoNoisyJets_JetEta0to3Up, &b_j2ptWoNoisyJets_JetEta0to3Up);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetEta0to5Down", &j2ptWoNoisyJets_JetEta0to5Down, &b_j2ptWoNoisyJets_JetEta0to5Down);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetEta0to5Up", &j2ptWoNoisyJets_JetEta0to5Up, &b_j2ptWoNoisyJets_JetEta0to5Up);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetEta3to5Down", &j2ptWoNoisyJets_JetEta3to5Down, &b_j2ptWoNoisyJets_JetEta3to5Down);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetEta3to5Up", &j2ptWoNoisyJets_JetEta3to5Up, &b_j2ptWoNoisyJets_JetEta3to5Up);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetRelativeBalDown", &j2ptWoNoisyJets_JetRelativeBalDown, &b_j2ptWoNoisyJets_JetRelativeBalDown);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetRelativeBalUp", &j2ptWoNoisyJets_JetRelativeBalUp, &b_j2ptWoNoisyJets_JetRelativeBalUp);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetRelativeSampleDown", &j2ptWoNoisyJets_JetRelativeSampleDown, &b_j2ptWoNoisyJets_JetRelativeSampleDown);
   _tree->SetBranchAddress("j2ptWoNoisyJets_JetRelativeSampleUp", &j2ptWoNoisyJets_JetRelativeSampleUp, &b_j2ptWoNoisyJets_JetRelativeSampleUp);
   _tree->SetBranchAddress("j2pt_JetEC2Down", &j2pt_JetEC2Down, &b_j2pt_JetEC2Down);
   _tree->SetBranchAddress("j2pt_JetEC2Up", &j2pt_JetEC2Up, &b_j2pt_JetEC2Up);
   _tree->SetBranchAddress("j2pt_JetEta0to3Down", &j2pt_JetEta0to3Down, &b_j2pt_JetEta0to3Down);
   _tree->SetBranchAddress("j2pt_JetEta0to3Up", &j2pt_JetEta0to3Up, &b_j2pt_JetEta0to3Up);
   _tree->SetBranchAddress("j2pt_JetEta0to5Down", &j2pt_JetEta0to5Down, &b_j2pt_JetEta0to5Down);
   _tree->SetBranchAddress("j2pt_JetEta0to5Up", &j2pt_JetEta0to5Up, &b_j2pt_JetEta0to5Up);
   _tree->SetBranchAddress("j2pt_JetEta3to5Down", &j2pt_JetEta3to5Down, &b_j2pt_JetEta3to5Down);
   _tree->SetBranchAddress("j2pt_JetEta3to5Up", &j2pt_JetEta3to5Up, &b_j2pt_JetEta3to5Up);
   _tree->SetBranchAddress("j2pt_JetRelativeBalDown", &j2pt_JetRelativeBalDown, &b_j2pt_JetRelativeBalDown);
   _tree->SetBranchAddress("j2pt_JetRelativeBalUp", &j2pt_JetRelativeBalUp, &b_j2pt_JetRelativeBalUp);
   _tree->SetBranchAddress("j2pt_JetRelativeSampleDown", &j2pt_JetRelativeSampleDown, &b_j2pt_JetRelativeSampleDown);
   _tree->SetBranchAddress("j2pt_JetRelativeSampleUp", &j2pt_JetRelativeSampleUp, &b_j2pt_JetRelativeSampleUp);
   _tree->SetBranchAddress("jb1eta_2016", &jb1eta_2016, &b_jb1eta_2016);
   _tree->SetBranchAddress("jb1eta_2017", &jb1eta_2017, &b_jb1eta_2017);
   _tree->SetBranchAddress("jb1eta_2018", &jb1eta_2018, &b_jb1eta_2018);
   _tree->SetBranchAddress("jb1hadronflavor_2016", &jb1hadronflavor_2016, &b_jb1hadronflavor_2016);
   _tree->SetBranchAddress("jb1hadronflavor_2017", &jb1hadronflavor_2017, &b_jb1hadronflavor_2017);
   _tree->SetBranchAddress("jb1hadronflavor_2018", &jb1hadronflavor_2018, &b_jb1hadronflavor_2018);
   _tree->SetBranchAddress("jb1phi_2016", &jb1phi_2016, &b_jb1phi_2016);
   _tree->SetBranchAddress("jb1phi_2017", &jb1phi_2017, &b_jb1phi_2017);
   _tree->SetBranchAddress("jb1phi_2018", &jb1phi_2018, &b_jb1phi_2018);
   _tree->SetBranchAddress("jb1pt_2016", &jb1pt_2016, &b_jb1pt_2016);
   _tree->SetBranchAddress("jb1pt_2017", &jb1pt_2017, &b_jb1pt_2017);
   _tree->SetBranchAddress("jb1pt_2018", &jb1pt_2018, &b_jb1pt_2018);
   _tree->SetBranchAddress("jb2eta_2016", &jb2eta_2016, &b_jb2eta_2016);
   _tree->SetBranchAddress("jb2eta_2017", &jb2eta_2017, &b_jb2eta_2017);
   _tree->SetBranchAddress("jb2eta_2018", &jb2eta_2018, &b_jb2eta_2018);
   _tree->SetBranchAddress("jb2hadronflavor_2016", &jb2hadronflavor_2016, &b_jb2hadronflavor_2016);
   _tree->SetBranchAddress("jb2hadronflavor_2017", &jb2hadronflavor_2017, &b_jb2hadronflavor_2017);
   _tree->SetBranchAddress("jb2hadronflavor_2018", &jb2hadronflavor_2018, &b_jb2hadronflavor_2018);
   _tree->SetBranchAddress("jb2phi_2016", &jb2phi_2016, &b_jb2phi_2016);
   _tree->SetBranchAddress("jb2phi_2017", &jb2phi_2017, &b_jb2phi_2017);
   _tree->SetBranchAddress("jb2phi_2018", &jb2phi_2018, &b_jb2phi_2018);
   _tree->SetBranchAddress("jb2pt_2016", &jb2pt_2016, &b_jb2pt_2016);
   _tree->SetBranchAddress("jb2pt_2017", &jb2pt_2017, &b_jb2pt_2017);
   _tree->SetBranchAddress("jb2pt_2018", &jb2pt_2018, &b_jb2pt_2018);
   _tree->SetBranchAddress("jetVeto20", &jetVeto20, &b_jetVeto20);
   _tree->SetBranchAddress("jetVeto20WoNoisyJets", &jetVeto20WoNoisyJets, &b_jetVeto20WoNoisyJets);
   _tree->SetBranchAddress("jetVeto20_JetEnDown", &jetVeto20_JetEnDown, &b_jetVeto20_JetEnDown);
   _tree->SetBranchAddress("jetVeto20_JetEnUp", &jetVeto20_JetEnUp, &b_jetVeto20_JetEnUp);
   _tree->SetBranchAddress("jetVeto30", &jetVeto30, &b_jetVeto30);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets", &jetVeto30WoNoisyJets, &b_jetVeto30WoNoisyJets);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEC2Down", &jetVeto30WoNoisyJets_JetEC2Down, &b_jetVeto30WoNoisyJets_JetEC2Down);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEC2Up", &jetVeto30WoNoisyJets_JetEC2Up, &b_jetVeto30WoNoisyJets_JetEC2Up);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEnDown", &jetVeto30WoNoisyJets_JetEnDown, &b_jetVeto30WoNoisyJets_JetEnDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEnUp", &jetVeto30WoNoisyJets_JetEnUp, &b_jetVeto30WoNoisyJets_JetEnUp);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEta0to3Down", &jetVeto30WoNoisyJets_JetEta0to3Down, &b_jetVeto30WoNoisyJets_JetEta0to3Down);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEta0to3Up", &jetVeto30WoNoisyJets_JetEta0to3Up, &b_jetVeto30WoNoisyJets_JetEta0to3Up);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEta0to5Down", &jetVeto30WoNoisyJets_JetEta0to5Down, &b_jetVeto30WoNoisyJets_JetEta0to5Down);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEta0to5Up", &jetVeto30WoNoisyJets_JetEta0to5Up, &b_jetVeto30WoNoisyJets_JetEta0to5Up);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEta3to5Down", &jetVeto30WoNoisyJets_JetEta3to5Down, &b_jetVeto30WoNoisyJets_JetEta3to5Down);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetEta3to5Up", &jetVeto30WoNoisyJets_JetEta3to5Up, &b_jetVeto30WoNoisyJets_JetEta3to5Up);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetRelativeBalDownWoNoisyJets", &jetVeto30WoNoisyJets_JetRelativeBalDownWoNoisyJets, &b_jetVeto30WoNoisyJets_JetRelativeBalDownWoNoisyJets);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetRelativeBalUpWoNoisyJets", &jetVeto30WoNoisyJets_JetRelativeBalUpWoNoisyJets, &b_jetVeto30WoNoisyJets_JetRelativeBalUpWoNoisyJets);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetRelativeSampleDown", &jetVeto30WoNoisyJets_JetRelativeSampleDown, &b_jetVeto30WoNoisyJets_JetRelativeSampleDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetRelativeSampleUp", &jetVeto30WoNoisyJets_JetRelativeSampleUp, &b_jetVeto30WoNoisyJets_JetRelativeSampleUp);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetTotalDown", &jetVeto30WoNoisyJets_JetTotalDown, &b_jetVeto30WoNoisyJets_JetTotalDown);
   _tree->SetBranchAddress("jetVeto30WoNoisyJets_JetTotalUp", &jetVeto30WoNoisyJets_JetTotalUp, &b_jetVeto30WoNoisyJets_JetTotalUp);
   _tree->SetBranchAddress("jetVeto30_JetEC2Down", &jetVeto30_JetEC2Down, &b_jetVeto30_JetEC2Down);
   _tree->SetBranchAddress("jetVeto30_JetEC2Up", &jetVeto30_JetEC2Up, &b_jetVeto30_JetEC2Up);
   _tree->SetBranchAddress("jetVeto30_JetEnDown", &jetVeto30_JetEnDown, &b_jetVeto30_JetEnDown);
   _tree->SetBranchAddress("jetVeto30_JetEnUp", &jetVeto30_JetEnUp, &b_jetVeto30_JetEnUp);
   _tree->SetBranchAddress("jetVeto30_JetEta0to3Down", &jetVeto30_JetEta0to3Down, &b_jetVeto30_JetEta0to3Down);
   _tree->SetBranchAddress("jetVeto30_JetEta0to3Up", &jetVeto30_JetEta0to3Up, &b_jetVeto30_JetEta0to3Up);
   _tree->SetBranchAddress("jetVeto30_JetEta0to5Down", &jetVeto30_JetEta0to5Down, &b_jetVeto30_JetEta0to5Down);
   _tree->SetBranchAddress("jetVeto30_JetEta0to5Up", &jetVeto30_JetEta0to5Up, &b_jetVeto30_JetEta0to5Up);
   _tree->SetBranchAddress("jetVeto30_JetEta3to5Down", &jetVeto30_JetEta3to5Down, &b_jetVeto30_JetEta3to5Down);
   _tree->SetBranchAddress("jetVeto30_JetEta3to5Up", &jetVeto30_JetEta3to5Up, &b_jetVeto30_JetEta3to5Up);
   _tree->SetBranchAddress("jetVeto30_JetRelativeBalDown", &jetVeto30_JetRelativeBalDown, &b_jetVeto30_JetRelativeBalDown);
   _tree->SetBranchAddress("jetVeto30_JetRelativeBalUp", &jetVeto30_JetRelativeBalUp, &b_jetVeto30_JetRelativeBalUp);
   _tree->SetBranchAddress("jetVeto30_JetRelativeSampleDown", &jetVeto30_JetRelativeSampleDown, &b_jetVeto30_JetRelativeSampleDown);
   _tree->SetBranchAddress("jetVeto30_JetRelativeSampleUp", &jetVeto30_JetRelativeSampleUp, &b_jetVeto30_JetRelativeSampleUp);
   _tree->SetBranchAddress("jetVeto30_JetTotalDown", &jetVeto30_JetTotalDown, &b_jetVeto30_JetTotalDown);
   _tree->SetBranchAddress("jetVeto30_JetTotalUp", &jetVeto30_JetTotalUp, &b_jetVeto30_JetTotalUp);
   _tree->SetBranchAddress("lumi", &lumi, &b_lumi);
   _tree->SetBranchAddress("mBestTrackType", &mBestTrackType, &b_mBestTrackType);
   _tree->SetBranchAddress("mCharge", &mCharge, &b_mCharge);
   _tree->SetBranchAddress("mChi2LocalPosition", &mChi2LocalPosition, &b_mChi2LocalPosition);
   _tree->SetBranchAddress("mComesFromHiggs", &mComesFromHiggs, &b_mComesFromHiggs);
   _tree->SetBranchAddress("mCutBasedIdGlobalHighPt", &mCutBasedIdGlobalHighPt, &b_mCutBasedIdGlobalHighPt);
   _tree->SetBranchAddress("mCutBasedIdLoose", &mCutBasedIdLoose, &b_mCutBasedIdLoose);
   _tree->SetBranchAddress("mCutBasedIdMedium", &mCutBasedIdMedium, &b_mCutBasedIdMedium);
   _tree->SetBranchAddress("mCutBasedIdMediumPrompt", &mCutBasedIdMediumPrompt, &b_mCutBasedIdMediumPrompt);
   _tree->SetBranchAddress("mCutBasedIdTight", &mCutBasedIdTight, &b_mCutBasedIdTight);
   _tree->SetBranchAddress("mCutBasedIdTrkHighPt", &mCutBasedIdTrkHighPt, &b_mCutBasedIdTrkHighPt);
   _tree->SetBranchAddress("mEcalIsoDR03", &mEcalIsoDR03, &b_mEcalIsoDR03);
   _tree->SetBranchAddress("mEffectiveArea2011", &mEffectiveArea2011, &b_mEffectiveArea2011);
   _tree->SetBranchAddress("mEffectiveArea2012", &mEffectiveArea2012, &b_mEffectiveArea2012);
   _tree->SetBranchAddress("mEta", &mEta, &b_mEta);
   _tree->SetBranchAddress("mEta_MuonEnDown", &mEta_MuonEnDown, &b_mEta_MuonEnDown);
   _tree->SetBranchAddress("mEta_MuonEnUp", &mEta_MuonEnUp, &b_mEta_MuonEnUp);
   _tree->SetBranchAddress("mGenCharge", &mGenCharge, &b_mGenCharge);
   _tree->SetBranchAddress("mGenDirectPromptTauDecayFinalState", &mGenDirectPromptTauDecayFinalState, &b_mGenDirectPromptTauDecayFinalState);
   _tree->SetBranchAddress("mGenEnergy", &mGenEnergy, &b_mGenEnergy);
   _tree->SetBranchAddress("mGenEta", &mGenEta, &b_mGenEta);
   _tree->SetBranchAddress("mGenIsPrompt", &mGenIsPrompt, &b_mGenIsPrompt);
   _tree->SetBranchAddress("mGenMotherPdgId", &mGenMotherPdgId, &b_mGenMotherPdgId);
   _tree->SetBranchAddress("mGenParticle", &mGenParticle, &b_mGenParticle);
   _tree->SetBranchAddress("mGenPdgId", &mGenPdgId, &b_mGenPdgId);
   _tree->SetBranchAddress("mGenPhi", &mGenPhi, &b_mGenPhi);
   _tree->SetBranchAddress("mGenPrompt", &mGenPrompt, &b_mGenPrompt);
   _tree->SetBranchAddress("mGenPromptFinalState", &mGenPromptFinalState, &b_mGenPromptFinalState);
   _tree->SetBranchAddress("mGenPromptTauDecay", &mGenPromptTauDecay, &b_mGenPromptTauDecay);
   _tree->SetBranchAddress("mGenPt", &mGenPt, &b_mGenPt);
   _tree->SetBranchAddress("mGenTauDecay", &mGenTauDecay, &b_mGenTauDecay);
   _tree->SetBranchAddress("mGenVZ", &mGenVZ, &b_mGenVZ);
   _tree->SetBranchAddress("mGenVtxPVMatch", &mGenVtxPVMatch, &b_mGenVtxPVMatch);
   _tree->SetBranchAddress("mHcalIsoDR03", &mHcalIsoDR03, &b_mHcalIsoDR03);
   _tree->SetBranchAddress("mIP3D", &mIP3D, &b_mIP3D);
   _tree->SetBranchAddress("mIP3DErr", &mIP3DErr, &b_mIP3DErr);
   _tree->SetBranchAddress("mIsGlobal", &mIsGlobal, &b_mIsGlobal);
   _tree->SetBranchAddress("mIsPFMuon", &mIsPFMuon, &b_mIsPFMuon);
   _tree->SetBranchAddress("mIsTracker", &mIsTracker, &b_mIsTracker);
   _tree->SetBranchAddress("mIsoDB03", &mIsoDB03, &b_mIsoDB03);
   _tree->SetBranchAddress("mIsoDB04", &mIsoDB04, &b_mIsoDB04);
   _tree->SetBranchAddress("mJetArea", &mJetArea, &b_mJetArea);
   _tree->SetBranchAddress("mJetBtag", &mJetBtag, &b_mJetBtag);
   _tree->SetBranchAddress("mJetDR", &mJetDR, &b_mJetDR);
   _tree->SetBranchAddress("mJetEtaEtaMoment", &mJetEtaEtaMoment, &b_mJetEtaEtaMoment);
   _tree->SetBranchAddress("mJetEtaPhiMoment", &mJetEtaPhiMoment, &b_mJetEtaPhiMoment);
   _tree->SetBranchAddress("mJetEtaPhiSpread", &mJetEtaPhiSpread, &b_mJetEtaPhiSpread);
   _tree->SetBranchAddress("mJetHadronFlavour", &mJetHadronFlavour, &b_mJetHadronFlavour);
   _tree->SetBranchAddress("mJetPFCISVBtag", &mJetPFCISVBtag, &b_mJetPFCISVBtag);
   _tree->SetBranchAddress("mJetPartonFlavour", &mJetPartonFlavour, &b_mJetPartonFlavour);
   _tree->SetBranchAddress("mJetPhiPhiMoment", &mJetPhiPhiMoment, &b_mJetPhiPhiMoment);
   _tree->SetBranchAddress("mJetPt", &mJetPt, &b_mJetPt);
   _tree->SetBranchAddress("mLowestMll", &mLowestMll, &b_mLowestMll);
   _tree->SetBranchAddress("mMass", &mMass, &b_mMass);
   _tree->SetBranchAddress("mMatchedStations", &mMatchedStations, &b_mMatchedStations);
   _tree->SetBranchAddress("mMatchesIsoMu19Tau20Filter", &mMatchesIsoMu19Tau20Filter, &b_mMatchesIsoMu19Tau20Filter);
   _tree->SetBranchAddress("mMatchesIsoMu19Tau20Path", &mMatchesIsoMu19Tau20Path, &b_mMatchesIsoMu19Tau20Path);
   _tree->SetBranchAddress("mMatchesIsoMu19Tau20SingleL1Filter", &mMatchesIsoMu19Tau20SingleL1Filter, &b_mMatchesIsoMu19Tau20SingleL1Filter);
   _tree->SetBranchAddress("mMatchesIsoMu19Tau20SingleL1Path", &mMatchesIsoMu19Tau20SingleL1Path, &b_mMatchesIsoMu19Tau20SingleL1Path);
   _tree->SetBranchAddress("mMatchesIsoMu20HPSTau27Filter", &mMatchesIsoMu20HPSTau27Filter, &b_mMatchesIsoMu20HPSTau27Filter);
   _tree->SetBranchAddress("mMatchesIsoMu20HPSTau27Path", &mMatchesIsoMu20HPSTau27Path, &b_mMatchesIsoMu20HPSTau27Path);
   _tree->SetBranchAddress("mMatchesIsoMu20Tau27Filter", &mMatchesIsoMu20Tau27Filter, &b_mMatchesIsoMu20Tau27Filter);
   _tree->SetBranchAddress("mMatchesIsoMu20Tau27Path", &mMatchesIsoMu20Tau27Path, &b_mMatchesIsoMu20Tau27Path);
   _tree->SetBranchAddress("mMatchesIsoMu22Filter", &mMatchesIsoMu22Filter, &b_mMatchesIsoMu22Filter);
   _tree->SetBranchAddress("mMatchesIsoMu22Path", &mMatchesIsoMu22Path, &b_mMatchesIsoMu22Path);
   _tree->SetBranchAddress("mMatchesIsoMu22eta2p1Filter", &mMatchesIsoMu22eta2p1Filter, &b_mMatchesIsoMu22eta2p1Filter);
   _tree->SetBranchAddress("mMatchesIsoMu22eta2p1Path", &mMatchesIsoMu22eta2p1Path, &b_mMatchesIsoMu22eta2p1Path);
   _tree->SetBranchAddress("mMatchesIsoMu24Filter", &mMatchesIsoMu24Filter, &b_mMatchesIsoMu24Filter);
   _tree->SetBranchAddress("mMatchesIsoMu24Path", &mMatchesIsoMu24Path, &b_mMatchesIsoMu24Path);
   _tree->SetBranchAddress("mMatchesIsoMu27Filter", &mMatchesIsoMu27Filter, &b_mMatchesIsoMu27Filter);
   _tree->SetBranchAddress("mMatchesIsoMu27Path", &mMatchesIsoMu27Path, &b_mMatchesIsoMu27Path);
   _tree->SetBranchAddress("mMatchesIsoTkMu22Filter", &mMatchesIsoTkMu22Filter, &b_mMatchesIsoTkMu22Filter);
   _tree->SetBranchAddress("mMatchesIsoTkMu22Path", &mMatchesIsoTkMu22Path, &b_mMatchesIsoTkMu22Path);
   _tree->SetBranchAddress("mMatchesIsoTkMu22eta2p1Filter", &mMatchesIsoTkMu22eta2p1Filter, &b_mMatchesIsoTkMu22eta2p1Filter);
   _tree->SetBranchAddress("mMatchesIsoTkMu22eta2p1Path", &mMatchesIsoTkMu22eta2p1Path, &b_mMatchesIsoTkMu22eta2p1Path);
   _tree->SetBranchAddress("mMiniIsoLoose", &mMiniIsoLoose, &b_mMiniIsoLoose);
   _tree->SetBranchAddress("mMiniIsoMedium", &mMiniIsoMedium, &b_mMiniIsoMedium);
   _tree->SetBranchAddress("mMiniIsoTight", &mMiniIsoTight, &b_mMiniIsoTight);
   _tree->SetBranchAddress("mMiniIsoVeryTight", &mMiniIsoVeryTight, &b_mMiniIsoVeryTight);
   _tree->SetBranchAddress("mMuonHits", &mMuonHits, &b_mMuonHits);
   _tree->SetBranchAddress("mMvaLoose", &mMvaLoose, &b_mMvaLoose);
   _tree->SetBranchAddress("mMvaMedium", &mMvaMedium, &b_mMvaMedium);
   _tree->SetBranchAddress("mMvaTight", &mMvaTight, &b_mMvaTight);
   _tree->SetBranchAddress("mNearestZMass", &mNearestZMass, &b_mNearestZMass);
   _tree->SetBranchAddress("mNormTrkChi2", &mNormTrkChi2, &b_mNormTrkChi2);
   _tree->SetBranchAddress("mNormalizedChi2", &mNormalizedChi2, &b_mNormalizedChi2);
   _tree->SetBranchAddress("mPFChargedHadronIsoR04", &mPFChargedHadronIsoR04, &b_mPFChargedHadronIsoR04);
   _tree->SetBranchAddress("mPFChargedIso", &mPFChargedIso, &b_mPFChargedIso);
   _tree->SetBranchAddress("mPFIDLoose", &mPFIDLoose, &b_mPFIDLoose);
   _tree->SetBranchAddress("mPFIDMedium", &mPFIDMedium, &b_mPFIDMedium);
   _tree->SetBranchAddress("mPFIDTight", &mPFIDTight, &b_mPFIDTight);
   _tree->SetBranchAddress("mPFIsoLoose", &mPFIsoLoose, &b_mPFIsoLoose);
   _tree->SetBranchAddress("mPFIsoMedium", &mPFIsoMedium, &b_mPFIsoMedium);
   _tree->SetBranchAddress("mPFIsoTight", &mPFIsoTight, &b_mPFIsoTight);
   _tree->SetBranchAddress("mPFIsoVeryLoose", &mPFIsoVeryLoose, &b_mPFIsoVeryLoose);
   _tree->SetBranchAddress("mPFIsoVeryTight", &mPFIsoVeryTight, &b_mPFIsoVeryTight);
   _tree->SetBranchAddress("mPFNeutralHadronIsoR04", &mPFNeutralHadronIsoR04, &b_mPFNeutralHadronIsoR04);
   _tree->SetBranchAddress("mPFNeutralIso", &mPFNeutralIso, &b_mPFNeutralIso);
   _tree->SetBranchAddress("mPFPUChargedIso", &mPFPUChargedIso, &b_mPFPUChargedIso);
   _tree->SetBranchAddress("mPFPhotonIso", &mPFPhotonIso, &b_mPFPhotonIso);
   _tree->SetBranchAddress("mPFPhotonIsoR04", &mPFPhotonIsoR04, &b_mPFPhotonIsoR04);
   _tree->SetBranchAddress("mPFPileupIsoR04", &mPFPileupIsoR04, &b_mPFPileupIsoR04);
   _tree->SetBranchAddress("mPVDXY", &mPVDXY, &b_mPVDXY);
   _tree->SetBranchAddress("mPVDZ", &mPVDZ, &b_mPVDZ);
   _tree->SetBranchAddress("mPhi", &mPhi, &b_mPhi);
   _tree->SetBranchAddress("mPhi_MuonEnDown", &mPhi_MuonEnDown, &b_mPhi_MuonEnDown);
   _tree->SetBranchAddress("mPhi_MuonEnUp", &mPhi_MuonEnUp, &b_mPhi_MuonEnUp);
   _tree->SetBranchAddress("mPixHits", &mPixHits, &b_mPixHits);
   _tree->SetBranchAddress("mPt", &mPt, &b_mPt);
   _tree->SetBranchAddress("mPt_MuonEnDown", &mPt_MuonEnDown, &b_mPt_MuonEnDown);
   _tree->SetBranchAddress("mPt_MuonEnUp", &mPt_MuonEnUp, &b_mPt_MuonEnUp);
   _tree->SetBranchAddress("mRelPFIsoDBDefault", &mRelPFIsoDBDefault, &b_mRelPFIsoDBDefault);
   _tree->SetBranchAddress("mRelPFIsoDBDefaultR04", &mRelPFIsoDBDefaultR04, &b_mRelPFIsoDBDefaultR04);
   _tree->SetBranchAddress("mRelPFIsoRho", &mRelPFIsoRho, &b_mRelPFIsoRho);
   _tree->SetBranchAddress("mRho", &mRho, &b_mRho);
   _tree->SetBranchAddress("mSIP2D", &mSIP2D, &b_mSIP2D);
   _tree->SetBranchAddress("mSIP3D", &mSIP3D, &b_mSIP3D);
   _tree->SetBranchAddress("mSegmentCompatibility", &mSegmentCompatibility, &b_mSegmentCompatibility);
   _tree->SetBranchAddress("mSoftCutBasedId", &mSoftCutBasedId, &b_mSoftCutBasedId);
   _tree->SetBranchAddress("mTkIsoLoose", &mTkIsoLoose, &b_mTkIsoLoose);
   _tree->SetBranchAddress("mTkIsoTight", &mTkIsoTight, &b_mTkIsoTight);
   _tree->SetBranchAddress("mTkLayersWithMeasurement", &mTkLayersWithMeasurement, &b_mTkLayersWithMeasurement);
   _tree->SetBranchAddress("mTrkIsoDR03", &mTrkIsoDR03, &b_mTrkIsoDR03);
   _tree->SetBranchAddress("mTrkKink", &mTrkKink, &b_mTrkKink);
   _tree->SetBranchAddress("mTypeCode", &mTypeCode, &b_mTypeCode);
   _tree->SetBranchAddress("mVZ", &mVZ, &b_mVZ);
   _tree->SetBranchAddress("mValidFraction", &mValidFraction, &b_mValidFraction);
   _tree->SetBranchAddress("mZTTGenMatching", &mZTTGenMatching, &b_mZTTGenMatching);
   _tree->SetBranchAddress("metSig", &metSig, &b_metSig);
   _tree->SetBranchAddress("metcov00", &metcov00, &b_metcov00);
   _tree->SetBranchAddress("metcov01", &metcov01, &b_metcov01);
   _tree->SetBranchAddress("metcov10", &metcov10, &b_metcov10);
   _tree->SetBranchAddress("metcov11", &metcov11, &b_metcov11);
   _tree->SetBranchAddress("mu12e23DZPass", &mu12e23DZPass, &b_mu12e23DZPass);
   _tree->SetBranchAddress("mu12e23Pass", &mu12e23Pass, &b_mu12e23Pass);
   _tree->SetBranchAddress("mu23e12DZPass", &mu23e12DZPass, &b_mu23e12DZPass);
   _tree->SetBranchAddress("mu23e12Pass", &mu23e12Pass, &b_mu23e12Pass);
   _tree->SetBranchAddress("mu8diele12DZPass", &mu8diele12DZPass, &b_mu8diele12DZPass);
   _tree->SetBranchAddress("mu8diele12Pass", &mu8diele12Pass, &b_mu8diele12Pass);
   _tree->SetBranchAddress("mu8e23DZPass", &mu8e23DZPass, &b_mu8e23DZPass);
   _tree->SetBranchAddress("mu8e23Pass", &mu8e23Pass, &b_mu8e23Pass);
   _tree->SetBranchAddress("muGlbIsoVetoPt10", &muGlbIsoVetoPt10, &b_muGlbIsoVetoPt10);
   _tree->SetBranchAddress("muVeto5", &muVeto5, &b_muVeto5);
   _tree->SetBranchAddress("muVetoZTTp001dxyz", &muVetoZTTp001dxyz, &b_muVetoZTTp001dxyz);
   _tree->SetBranchAddress("muVetoZTTp001dxyzR0", &muVetoZTTp001dxyzR0, &b_muVetoZTTp001dxyzR0);
   _tree->SetBranchAddress("nTruePU", &nTruePU, &b_nTruePU);
   _tree->SetBranchAddress("npNLO", &npNLO, &b_npNLO);
   _tree->SetBranchAddress("numGenJets", &numGenJets, &b_numGenJets);
   _tree->SetBranchAddress("nvtx", &nvtx, &b_nvtx);
   _tree->SetBranchAddress("processID", &processID, &b_processID);
   _tree->SetBranchAddress("puppiMetEt", &puppiMetEt, &b_puppiMetEt);
   _tree->SetBranchAddress("puppiMetPhi", &puppiMetPhi, &b_puppiMetPhi);
   _tree->SetBranchAddress("pvChi2", &pvChi2, &b_pvChi2);
   _tree->SetBranchAddress("pvDX", &pvDX, &b_pvDX);
   _tree->SetBranchAddress("pvDY", &pvDY, &b_pvDY);
   _tree->SetBranchAddress("pvDZ", &pvDZ, &b_pvDZ);
   _tree->SetBranchAddress("pvIsFake", &pvIsFake, &b_pvIsFake);
   _tree->SetBranchAddress("pvIsValid", &pvIsValid, &b_pvIsValid);
   _tree->SetBranchAddress("pvNormChi2", &pvNormChi2, &b_pvNormChi2);
   _tree->SetBranchAddress("pvRho", &pvRho, &b_pvRho);
   _tree->SetBranchAddress("pvX", &pvX, &b_pvX);
   _tree->SetBranchAddress("pvY", &pvY, &b_pvY);
   _tree->SetBranchAddress("pvZ", &pvZ, &b_pvZ);
   _tree->SetBranchAddress("pvndof", &pvndof, &b_pvndof);
   _tree->SetBranchAddress("raw_pfMetEt", &raw_pfMetEt, &b_raw_pfMetEt);
   _tree->SetBranchAddress("raw_pfMetPhi", &raw_pfMetPhi, &b_raw_pfMetPhi);
   _tree->SetBranchAddress("recoilDaught", &recoilDaught, &b_recoilDaught);
   _tree->SetBranchAddress("recoilWithMet", &recoilWithMet, &b_recoilWithMet);
   _tree->SetBranchAddress("rho", &rho, &b_rho);
   _tree->SetBranchAddress("run", &run, &b_run);
   _tree->SetBranchAddress("singleE25eta2p1TightPass", &singleE25eta2p1TightPass, &b_singleE25eta2p1TightPass);
   _tree->SetBranchAddress("singleIsoMu22Pass", &singleIsoMu22Pass, &b_singleIsoMu22Pass);
   _tree->SetBranchAddress("singleIsoMu22eta2p1Pass", &singleIsoMu22eta2p1Pass, &b_singleIsoMu22eta2p1Pass);
   _tree->SetBranchAddress("singleIsoTkMu22Pass", &singleIsoTkMu22Pass, &b_singleIsoTkMu22Pass);
   _tree->SetBranchAddress("singleIsoTkMu22eta2p1Pass", &singleIsoTkMu22eta2p1Pass, &b_singleIsoTkMu22eta2p1Pass);
   _tree->SetBranchAddress("singleMu19eta2p1LooseTau20Pass", &singleMu19eta2p1LooseTau20Pass, &b_singleMu19eta2p1LooseTau20Pass);
   _tree->SetBranchAddress("singleMu19eta2p1LooseTau20singleL1Pass", &singleMu19eta2p1LooseTau20singleL1Pass, &b_singleMu19eta2p1LooseTau20singleL1Pass);
   _tree->SetBranchAddress("tauVetoPt20Loose3HitsVtx", &tauVetoPt20Loose3HitsVtx, &b_tauVetoPt20Loose3HitsVtx);
   _tree->SetBranchAddress("tauVetoPt20TightMVALTVtx", &tauVetoPt20TightMVALTVtx, &b_tauVetoPt20TightMVALTVtx);
   _tree->SetBranchAddress("topQuarkPt1", &topQuarkPt1, &b_topQuarkPt1);
   _tree->SetBranchAddress("topQuarkPt2", &topQuarkPt2, &b_topQuarkPt2);
   _tree->SetBranchAddress("tripleEPass", &tripleEPass, &b_tripleEPass);
   _tree->SetBranchAddress("tripleMu10_5_5Pass", &tripleMu10_5_5Pass, &b_tripleMu10_5_5Pass);
   _tree->SetBranchAddress("tripleMu12_10_5Pass", &tripleMu12_10_5Pass, &b_tripleMu12_10_5Pass);
   _tree->SetBranchAddress("type1_pfMetEt", &type1_pfMetEt, &b_type1_pfMetEt);
   _tree->SetBranchAddress("type1_pfMetPhi", &type1_pfMetPhi, &b_type1_pfMetPhi);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEC2Down", &type1_pfMet_shiftedPhi_JetEC2Down, &b_type1_pfMet_shiftedPhi_JetEC2Down);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEC2Up", &type1_pfMet_shiftedPhi_JetEC2Up, &b_type1_pfMet_shiftedPhi_JetEC2Up);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEnDown", &type1_pfMet_shiftedPhi_JetEnDown, &b_type1_pfMet_shiftedPhi_JetEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEnUp", &type1_pfMet_shiftedPhi_JetEnUp, &b_type1_pfMet_shiftedPhi_JetEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEta0to3Down", &type1_pfMet_shiftedPhi_JetEta0to3Down, &b_type1_pfMet_shiftedPhi_JetEta0to3Down);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEta0to3Up", &type1_pfMet_shiftedPhi_JetEta0to3Up, &b_type1_pfMet_shiftedPhi_JetEta0to3Up);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEta0to5Down", &type1_pfMet_shiftedPhi_JetEta0to5Down, &b_type1_pfMet_shiftedPhi_JetEta0to5Down);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEta0to5Up", &type1_pfMet_shiftedPhi_JetEta0to5Up, &b_type1_pfMet_shiftedPhi_JetEta0to5Up);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEta3to5Down", &type1_pfMet_shiftedPhi_JetEta3to5Down, &b_type1_pfMet_shiftedPhi_JetEta3to5Down);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEta3to5Up", &type1_pfMet_shiftedPhi_JetEta3to5Up, &b_type1_pfMet_shiftedPhi_JetEta3to5Up);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetRelativeBalDown", &type1_pfMet_shiftedPhi_JetRelativeBalDown, &b_type1_pfMet_shiftedPhi_JetRelativeBalDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetRelativeBalUp", &type1_pfMet_shiftedPhi_JetRelativeBalUp, &b_type1_pfMet_shiftedPhi_JetRelativeBalUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetRelativeSampleDown", &type1_pfMet_shiftedPhi_JetRelativeSampleDown, &b_type1_pfMet_shiftedPhi_JetRelativeSampleDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetRelativeSampleUp", &type1_pfMet_shiftedPhi_JetRelativeSampleUp, &b_type1_pfMet_shiftedPhi_JetRelativeSampleUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetResDown", &type1_pfMet_shiftedPhi_JetResDown, &b_type1_pfMet_shiftedPhi_JetResDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetResUp", &type1_pfMet_shiftedPhi_JetResUp, &b_type1_pfMet_shiftedPhi_JetResUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetTotalDown", &type1_pfMet_shiftedPhi_JetTotalDown, &b_type1_pfMet_shiftedPhi_JetTotalDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetTotalUp", &type1_pfMet_shiftedPhi_JetTotalUp, &b_type1_pfMet_shiftedPhi_JetTotalUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_UnclusteredEnDown", &type1_pfMet_shiftedPhi_UnclusteredEnDown, &b_type1_pfMet_shiftedPhi_UnclusteredEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_UnclusteredEnUp", &type1_pfMet_shiftedPhi_UnclusteredEnUp, &b_type1_pfMet_shiftedPhi_UnclusteredEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEC2Down", &type1_pfMet_shiftedPt_JetEC2Down, &b_type1_pfMet_shiftedPt_JetEC2Down);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEC2Up", &type1_pfMet_shiftedPt_JetEC2Up, &b_type1_pfMet_shiftedPt_JetEC2Up);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEnDown", &type1_pfMet_shiftedPt_JetEnDown, &b_type1_pfMet_shiftedPt_JetEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEnUp", &type1_pfMet_shiftedPt_JetEnUp, &b_type1_pfMet_shiftedPt_JetEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEta0to3Down", &type1_pfMet_shiftedPt_JetEta0to3Down, &b_type1_pfMet_shiftedPt_JetEta0to3Down);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEta0to3Up", &type1_pfMet_shiftedPt_JetEta0to3Up, &b_type1_pfMet_shiftedPt_JetEta0to3Up);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEta0to5Down", &type1_pfMet_shiftedPt_JetEta0to5Down, &b_type1_pfMet_shiftedPt_JetEta0to5Down);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEta0to5Up", &type1_pfMet_shiftedPt_JetEta0to5Up, &b_type1_pfMet_shiftedPt_JetEta0to5Up);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEta3to5Down", &type1_pfMet_shiftedPt_JetEta3to5Down, &b_type1_pfMet_shiftedPt_JetEta3to5Down);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEta3to5Up", &type1_pfMet_shiftedPt_JetEta3to5Up, &b_type1_pfMet_shiftedPt_JetEta3to5Up);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetRelativeBalDown", &type1_pfMet_shiftedPt_JetRelativeBalDown, &b_type1_pfMet_shiftedPt_JetRelativeBalDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetRelativeBalUp", &type1_pfMet_shiftedPt_JetRelativeBalUp, &b_type1_pfMet_shiftedPt_JetRelativeBalUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetRelativeSampleDown", &type1_pfMet_shiftedPt_JetRelativeSampleDown, &b_type1_pfMet_shiftedPt_JetRelativeSampleDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetRelativeSampleUp", &type1_pfMet_shiftedPt_JetRelativeSampleUp, &b_type1_pfMet_shiftedPt_JetRelativeSampleUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetResDown", &type1_pfMet_shiftedPt_JetResDown, &b_type1_pfMet_shiftedPt_JetResDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetResUp", &type1_pfMet_shiftedPt_JetResUp, &b_type1_pfMet_shiftedPt_JetResUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetTotalDown", &type1_pfMet_shiftedPt_JetTotalDown, &b_type1_pfMet_shiftedPt_JetTotalDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetTotalUp", &type1_pfMet_shiftedPt_JetTotalUp, &b_type1_pfMet_shiftedPt_JetTotalUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_UnclusteredEnDown", &type1_pfMet_shiftedPt_UnclusteredEnDown, &b_type1_pfMet_shiftedPt_UnclusteredEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_UnclusteredEnUp", &type1_pfMet_shiftedPt_UnclusteredEnUp, &b_type1_pfMet_shiftedPt_UnclusteredEnUp);
   _tree->SetBranchAddress("vbfDeta", &vbfDeta, &b_vbfDeta);
   _tree->SetBranchAddress("vbfJetVeto20", &vbfJetVeto20, &b_vbfJetVeto20);
   _tree->SetBranchAddress("vbfJetVeto30", &vbfJetVeto30, &b_vbfJetVeto30);
   _tree->SetBranchAddress("vbfMass", &vbfMass, &b_vbfMass);
   _tree->SetBranchAddress("vbfMassWoNoisyJets", &vbfMassWoNoisyJets, &b_vbfMassWoNoisyJets);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetEC2Down", &vbfMassWoNoisyJets_JetEC2Down, &b_vbfMassWoNoisyJets_JetEC2Down);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetEC2Up", &vbfMassWoNoisyJets_JetEC2Up, &b_vbfMassWoNoisyJets_JetEC2Up);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetEta0to3Down", &vbfMassWoNoisyJets_JetEta0to3Down, &b_vbfMassWoNoisyJets_JetEta0to3Down);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetEta0to3Up", &vbfMassWoNoisyJets_JetEta0to3Up, &b_vbfMassWoNoisyJets_JetEta0to3Up);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetEta0to5Down", &vbfMassWoNoisyJets_JetEta0to5Down, &b_vbfMassWoNoisyJets_JetEta0to5Down);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetEta0to5Up", &vbfMassWoNoisyJets_JetEta0to5Up, &b_vbfMassWoNoisyJets_JetEta0to5Up);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetEta3to5Down", &vbfMassWoNoisyJets_JetEta3to5Down, &b_vbfMassWoNoisyJets_JetEta3to5Down);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetEta3to5Up", &vbfMassWoNoisyJets_JetEta3to5Up, &b_vbfMassWoNoisyJets_JetEta3to5Up);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetRelativeBalDown", &vbfMassWoNoisyJets_JetRelativeBalDown, &b_vbfMassWoNoisyJets_JetRelativeBalDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetRelativeBalUp", &vbfMassWoNoisyJets_JetRelativeBalUp, &b_vbfMassWoNoisyJets_JetRelativeBalUp);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetRelativeSampleDown", &vbfMassWoNoisyJets_JetRelativeSampleDown, &b_vbfMassWoNoisyJets_JetRelativeSampleDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetRelativeSampleUp", &vbfMassWoNoisyJets_JetRelativeSampleUp, &b_vbfMassWoNoisyJets_JetRelativeSampleUp);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetTotalDown", &vbfMassWoNoisyJets_JetTotalDown, &b_vbfMassWoNoisyJets_JetTotalDown);
   _tree->SetBranchAddress("vbfMassWoNoisyJets_JetTotalUp", &vbfMassWoNoisyJets_JetTotalUp, &b_vbfMassWoNoisyJets_JetTotalUp);
   _tree->SetBranchAddress("vbfMass_JetEC2Down", &vbfMass_JetEC2Down, &b_vbfMass_JetEC2Down);
   _tree->SetBranchAddress("vbfMass_JetEC2Up", &vbfMass_JetEC2Up, &b_vbfMass_JetEC2Up);
   _tree->SetBranchAddress("vbfMass_JetEta0to3Down", &vbfMass_JetEta0to3Down, &b_vbfMass_JetEta0to3Down);
   _tree->SetBranchAddress("vbfMass_JetEta0to3Up", &vbfMass_JetEta0to3Up, &b_vbfMass_JetEta0to3Up);
   _tree->SetBranchAddress("vbfMass_JetEta0to5Down", &vbfMass_JetEta0to5Down, &b_vbfMass_JetEta0to5Down);
   _tree->SetBranchAddress("vbfMass_JetEta0to5Up", &vbfMass_JetEta0to5Up, &b_vbfMass_JetEta0to5Up);
   _tree->SetBranchAddress("vbfMass_JetEta3to5Down", &vbfMass_JetEta3to5Down, &b_vbfMass_JetEta3to5Down);
   _tree->SetBranchAddress("vbfMass_JetEta3to5Up", &vbfMass_JetEta3to5Up, &b_vbfMass_JetEta3to5Up);
   _tree->SetBranchAddress("vbfMass_JetRelativeBalDown", &vbfMass_JetRelativeBalDown, &b_vbfMass_JetRelativeBalDown);
   _tree->SetBranchAddress("vbfMass_JetRelativeBalUp", &vbfMass_JetRelativeBalUp, &b_vbfMass_JetRelativeBalUp);
   _tree->SetBranchAddress("vbfMass_JetRelativeSampleDown", &vbfMass_JetRelativeSampleDown, &b_vbfMass_JetRelativeSampleDown);
   _tree->SetBranchAddress("vbfMass_JetRelativeSampleUp", &vbfMass_JetRelativeSampleUp, &b_vbfMass_JetRelativeSampleUp);
   _tree->SetBranchAddress("vbfMass_JetTotalDown", &vbfMass_JetTotalDown, &b_vbfMass_JetTotalDown);
   _tree->SetBranchAddress("vbfMass_JetTotalUp", &vbfMass_JetTotalUp, &b_vbfMass_JetTotalUp);
   _tree->SetBranchAddress("vbfNJets20", &vbfNJets20, &b_vbfNJets20);
   _tree->SetBranchAddress("vbfNJets30", &vbfNJets30, &b_vbfNJets30);
   _tree->SetBranchAddress("vbfj1eta", &vbfj1eta, &b_vbfj1eta);
   _tree->SetBranchAddress("vbfj1pt", &vbfj1pt, &b_vbfj1pt);
   _tree->SetBranchAddress("vbfj2eta", &vbfj2eta, &b_vbfj2eta);
   _tree->SetBranchAddress("vbfj2pt", &vbfj2pt, &b_vbfj2pt);
   _tree->SetBranchAddress("vispX", &vispX, &b_vispX);
   _tree->SetBranchAddress("vispY", &vispY, &b_vispY);
   _tree->SetBranchAddress("idx", &idx, &b_idx);
}

Int_t HTauTauTree_em::GetEntry(int entry)
{
    return _tree->GetEntry(entry);
}

Long64_t HTauTauTree_em::GetEntries()
{
    return _tree->GetEntries();
}

TTree* HTauTauTree_em::GetTree()
{
    return _tree;
}

#endif

