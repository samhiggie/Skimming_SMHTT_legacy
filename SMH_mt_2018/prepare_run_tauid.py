import os
if __name__ == "__main__":

#    place="/hdfs/store/user/caillol/SMHTT_2018_data/"
#    datatype="data"
#    name=[
#"data_SingleMuon_Run2018A-17Sep2018","DataA","0",
#"data_SingleMuon_Run2018B-17Sep2018","DataB","0",
#"data_SingleMuon_Run2018C-17Sep2018","DataC","0",
#"data_SingleMuon_Run2018D-PromptReco","DataD","0"
#]
#
#    place="/hdfs/store/user/caillol/SMHTT_2018_legacy_MC_17jul/"
#    datatype="mc"
#    name=[
#"DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","DY1_v1","Z",
#"DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v2","DY1_v2","Z",
#"DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","DY2_v1","Z",
#"DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v2","DY2_v2","Z",
#"DY3JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","DY3_v1","Z",
#"DY3JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v2","DY3_v2","Z",
#"DY4JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","DY4_v1","Z",
#"DYJetsToLL_M-10to50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v2","DYlow","Z",
#"DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","DY_v1","Z",
#"ST_t-channel_antitop_4f_InclusiveDecays_TuneCP5_13TeV-powheg-madspin-pythia8_-102X_upgrade2018_realistic_v15-v1","ST_t_antitop","0",
#"ST_t-channel_top_5f_TuneCP5_13TeV-powheg-pythia8_-102X_upgrade2018_realistic_v15-v1","ST_t_top","0",
#"ST_tW_antitop_5f_inclusiveDecays_TuneCP5_13TeV-powheg-pythia8_-102X_upgrade2018_realistic_v15_ext1-v1","ST_tW_antitop","0",
#"ST_tW_top_5f_inclusiveDecays_TuneCP5_13TeV-powheg-pythia8_-102X_upgrade2018_realistic_v15_ext1-v1","ST_tW_top","0",
#"W1JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v2","W1_v1","W",
#"W2JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","W2_v1","W",
#"W2JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v2","W2_v2","W",
#"W3JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","W3_v1","W",
#"W3JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v2","W3_v2","W",
#"W4JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v1","W4_v1","W",
#"W4JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v2","W4_v2","W",
#"WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_-102X_upgrade2018_realistic_v15-v2","W_v1","W",
#"WW_TuneCP5_13TeV-pythia8_-102X_upgrade2018_realistic_v15-v1","WW_v1","0",
#"WW_TuneCP5_13TeV-pythia8_-102X_upgrade2018_realistic_v15-v2","WW_v2","0",
#"WZ_TuneCP5_13TeV-pythia8_-102X_upgrade2018_realistic_v15-v1","WZ_v1","0",
#"WZ_TuneCP5_13TeV-pythia8_-102X_upgrade2018_realistic_v15-v3","WZ_v2","0",
#"ZZ_TuneCP5_13TeV-pythia8_-102X_upgrade2018_realistic_v15-v2","ZZ_v1","0"
#]
#
    place="/hdfs/store/user/caillol/SMHTT_2018_legacy_MC_25jul/"
    datatype="mc"
    name=[
"TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8_-102X_upgrade2018_realistic_v15-v1","TTTo2L2Nu","0",
"TTToHadronic_TuneCP5_13TeV-powheg-pythia8_-102X_upgrade2018_realistic_v15-v1","TTToHadronic","0",
"TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_-102X_upgrade2018_realistic_v15-v1","TTToSemiLeptonic","0"
]

#    place="/hdfs/store/user/caillol/SMHTT_2018_embedded/"
#    datatype="data"
#    name=[
#"embedded_EmbeddingRun2018A_MuTauFinalState","EmbeddedA","0",
#"embedded_EmbeddingRun2018B_MuTauFinalState","EmbeddedB","0",
#"embedded_EmbeddingRun2018C_MuTauFinalState","EmbeddedC","0",
#"embedded_EmbeddingRun2018D_MuTauFinalState","EmbeddedD","0"
#]

    
    datadir="/nfs_scratch/caillol/tauidmt2018_7aug/"
    all_File = open("do_submit_tauid.sh" , 'w')
    line=""
    for j in range(0,len(name)/3):
       print name[3*j],name[3*j+1],name[3*j+2]
       submit_File = open("Submit_"+name[3*j+1]+"_tauid.sh" , 'w')
       line+="mkdir -p "+datadir+"Out_"+name[3*j+1]+"\n"
       line+="sh Submit_"+name[3*j+1]+"_tauid.sh" +"\n"
       f=os.popen("ls -t " + place+name[3*j] + "/make* | sort")
       command1=""
       ligne=0
       for i in f.readlines():
	   command1=command1+"./skim_tauid.exe "+datatype+" "+datadir+"Out_"+name[3*j+1]+"/"+name[3*j+1]+str(ligne)+".root " + i[0:-1] + " " + name[3*j+2] +"\n"
           ligne=ligne+1
       submit_File.write(command1)
       submit_File.close()
    all_File.write(line)
    all_File.close()

