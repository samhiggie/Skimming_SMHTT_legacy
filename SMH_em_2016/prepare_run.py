import os
if __name__ == "__main__":

    place="/hdfs/store/user/aloeliger/SMHTT_2016_data_18Sep/"
    datatype="data"
    name=[
"data_MuonEG_Run2016B_v1","DataBv1","0",
"data_MuonEG_Run2016B_v2","DataBv2","0",
"data_MuonEG_Run2016C","DataC","0",
"data_MuonEG_Run2016D","DataD","0",
"data_MuonEG_Run2016E","DataE","0",
"data_MuonEG_Run2016F","DataF","0",
"data_MuonEG_Run2016G","DataG","0",
"data_MuonEG_Run2016H","DataH","0"
]

#    place="/hdfs/store/user/aloeliger/SMHTT_2016_18Sep/"
#    datatype="mc"
#    name=[
#"DY1JetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","DY1_v1","Z",
#"DY2JetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","DY2_v1","Z",
#"DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","DY_v1","Z",
#"DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext2-v2","DY_v2","Z",
#"EWKWMinus2Jets_WToLNu_M-50_13TeV-madgraph-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","EWKWminus_v1","W",
#"EWKWMinus2Jets_WToLNu_M-50_13TeV-madgraph-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","EWKWminus_v2","W",
#"EWKWMinus2Jets_WToLNu_M-50_13TeV-madgraph-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext2-v2","EWKWminus_v3","W",
#"EWKWPlus2Jets_WToLNu_M-50_13TeV-madgraph-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","EWKWplus_v1","W",
#"EWKWPlus2Jets_WToLNu_M-50_13TeV-madgraph-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","EWKWplus_v2","W",
#"EWKWPlus2Jets_WToLNu_M-50_13TeV-madgraph-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext2-v2","EWKWplus_v3","W",
#"EWKZ2Jets_ZToLL_M-50_13TeV-madgraph-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","EWKZLL_v1","Z",
#"EWKZ2Jets_ZToLL_M-50_13TeV-madgraph-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext2-v2","EWKZLL_v2","Z",
#"EWKZ2Jets_ZToNuNu_13TeV-madgraph-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","EWKZNuNu_v1","Z",
#"EWKZ2Jets_ZToNuNu_13TeV-madgraph-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","EWKZNuNu_v2","Z",
#"EWKZ2Jets_ZToNuNu_13TeV-madgraph-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext2-v2","EWKZNuNu_v3","Z",
#"GluGluHToTauTau_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGHTT_v1","Z",
#"GluGluHToTauTau_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v3","GGHTT_v2","Z",
#"GluGluHToWWTo2L2Nu_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","GGHWW","Z",
#"VBFHToTauTau_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","VBFHTT","Z",
#"VBFHToWWTo2L2Nu_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","VBFHWW","Z",
#"W1JetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","W1","W",
#"W2JetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","W2_v1","W",
#"W2JetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","W2_v2","W",
#"W3JetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","W3_v1","W",
#"W3JetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","W3_v2","W",
#"W4JetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","W4_v1","W",
#"W4JetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","W4_v2","W",
#"W4JetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext2-v1","W4_v3","W",
#"WGToLNuG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v1","WG_v1","W",
#"WGToLNuG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext2-v1","WG_v2","W",
#"WGToLNuG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext3-v1","WG_v3","W",
#"WJetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","W_v1","W",
#"WJetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext2-v2","W_v2","W",
#"WW_TuneCUETP8M1_13TeV-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WW_v1","0",
#"WW_TuneCUETP8M1_13TeV-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","WW_v2","0",
#"WZ_TuneCUETP8M1_13TeV-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WZ_v1","0",
#"WZ_TuneCUETP8M1_13TeV-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","WZ_v2","0",
#"ZZ_TuneCUETP8M1_13TeV-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","ZZ_v1","0",
#"ZZ_TuneCUETP8M1_13TeV-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2","ZZ_v2","0"
#]

#    place="/hdfs/store/user/aloeliger/SMHTT_2016_18Sep_HighMem_em/"
#    datatype="mc"
#    name=[
#"DY3JetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","DY3","Z",
#"DY4JetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","DY4","Z",
#"ST_t-channel_antitop_4f_inclusiveDecays_13TeV-powhegV2-madspin-pythia8_TuneCUETP8M1_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","ST_t_antitop","0",
#"ST_t-channel_top_4f_inclusiveDecays_13TeV-powhegV2-madspin-pythia8_TuneCUETP8M1_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","ST_t_top","0",
#"ST_tW_antitop_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v1","ST_tW_antitop","0",
#"ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1_v3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v1","ST_tW_top","0",
#"TT_TuneCUETP8M2T4_13TeV-powheg-pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1","TT","0",
#"WminusHToTauTau_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WminusHTT","0",
#"WplusHToTauTau_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","WplusHTT","0",
#"ZHToTauTau_M125_13TeV_powheg_pythia8_v3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2","ZHTT","0"
#]

    datadir="/nfs_scratch/caillol/smhem2016_30sep/"
    all_File = open("do_submit_em.sh" , 'w')
    line=""
    for j in range(0,len(name)/3):
       print name[3*j],name[3*j+1],name[3*j+2]
       submit_File = open("Submit_"+name[3*j+1]+"_em.sh" , 'w')
       line+="mkdir -p "+datadir+"Out_"+name[3*j+1]+"\n"
       line+="sh Submit_"+name[3*j+1]+"_em.sh" +"\n"
       f=os.popen("ls -t " + place+name[3*j] + "/make* | sort")
       command1=""
       ligne=0
       for i in f.readlines():
	   command1=command1+"./skim_em.exe "+datatype + " " +datadir+"Out_"+name[3*j+1]+"/"+name[3*j+1]+str(ligne)+".root " + i[0:-1] + " " + name[3*j+2] +"\n"
           ligne=ligne+1
       submit_File.write(command1)
       submit_File.close()
    all_File.write(line)
    all_File.close()

