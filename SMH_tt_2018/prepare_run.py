import os
if __name__ == "__main__":

    place="/hdfs/store/user/caillol/SMHTT_legacy_2018_020419/"
    name=[
"DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v1","DY1_v1","Z",
"DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v2","DY1_v2","Z",
"DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v1","DY2_v1","Z",
"DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v2","DY2_v2","Z",
"DY3JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v1","DY3_v1","Z",
"DY3JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v2","DY3_v2","Z",
"DY4JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v1","DY4_v1","Z",
"DYJetsToLL_M-10to50_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v2","DY_v1","Z",
"DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v1","DY_v2","Z",
"EWKWMinus2Jets_WToLNu_M-50_TuneCP5_13TeV-madgraph-pythia8_18_realistic_v15-v1","EWKWminus","W",
"EWKWPlus2Jets_WToLNu_M-50_TuneCP5_13TeV-madgraph-pythia8_18_realistic_v15-v1","EWKWplus","W",
"EWKZ2Jets_ZToLL_M-50_TuneCP5_PSweights_13TeV-madgraph-pythia8_18_realistic_v15-v1","EWKZLL","Z",
"EWKZ2Jets_ZToNuNu_TuneCP5_PSweights_13TeV-madgraph-pythia8_18_realistic_v15-v1","EWKZNuNu","Z",
"GluGluHToTauTau_M125_13TeV_powheg_pythia8_18_realistic_v15-v2","GGHTT","Z",
"ST_t-channel_antitop_4f_InclusiveDecays_TuneCP5_13TeV-powheg-madspin-pythia8_18_realistic_v15-v1","ST_t_antitop","0",
"ST_t-channel_top_5f_TuneCP5_13TeV-powheg-pythia8_18_realistic_v15-v1","ST_t_top","0",
"ST_tW_antitop_5f_inclusiveDecays_TuneCP5_13TeV-powheg-pythia8_18_realistic_v15_ext1-v1","ST_tW_antitop","0",
"ST_tW_top_5f_inclusiveDecays_TuneCP5_13TeV-powheg-pythia8_18_realistic_v15_ext1-v1","ST_tW_top","0",
"TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8_18_realistic_v15-v1","TTTo2L2Nu","0",
"TTToHadronic_TuneCP5_13TeV-powheg-pythia8_18_realistic_v15-v1","TTToHadronic","0",
"TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_18_realistic_v15-v1","TTToSemiLeptonic","0",
"VBFHToTauTau_M125_13TeV_powheg_pythia8_18_realistic_v15_ext1-v1","VBFHTT","Z",
"W1JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v2","W1_v1","W",
"W2JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v1","W2_v1","W",
"W2JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v2","W2_v2","W",
"W3JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v1","W3_v1","W",
"W3JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v2","W3_v2","W",
"W4JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v1","W4_v1","W",
"W4JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v2","W4_v2","W",
"WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_18_realistic_v15-v2","W_v1","W",
"WW_TuneCP5_13TeV-pythia8_18_realistic_v15-v1","WW_v1","0",
"WW_TuneCP5_13TeV-pythia8_18_realistic_v15-v2","WW_v2","0",
"WZ_TuneCP5_13TeV-pythia8_18_realistic_v15-v1","WZ_v1","0",
"WZ_TuneCP5_13TeV-pythia8_18_realistic_v15-v3","WZ_v2","0",
"WminusHToTauTau_M125_13TeV_powheg_pythia8_18_realistic_v15-v2","WminusHTT","0",
"WplusHToTauTau_M125_13TeV_powheg_pythia8_18_realistic_v15-v2","WplusHTT","0",
"ZHToTauTau_M125_13TeV_powheg_pythia8_18_realistic_v15-v2","ZHTT","0",
"ZZ_TuneCP5_13TeV-pythia8_18_realistic_v15-v2","ZZ_v1","0",
"ttHToTauTau_M125_TuneCP5_13TeV-powheg-pythia8_18_realistic_v15-v1","ttHTT","0"
]

    #place="/hdfs/store/user/caillol/SMH2018_28feb_data/"
    #sample=["data_SingleMuon_Run2018A-17Sep2018/","data_SingleMuon_Run2018C-17Sep2018/","data_SingleMuon_Run2018B-17Sep2018/","data_SingleMuon_Run2018D-PromptReco/"]
    #name=["DataA","DataC","DataB","DataD"]
    #recoil=["0","0","0","0"]
    
    datadir="/nfs_scratch/caillol/smhtt2018_3apr/"
    all_File = open("do_submit_tt.sh" , 'w')
    line=""
    for j in range(0,len(name)/3):
       print name[3*j],name[3*j+1],name[3*j+2]
       submit_File = open("Submit_"+name[3*j+1]+"_tt.sh" , 'w')
       line+="mkdir -p "+datadir+"Out_"+name[3*j+1]+"\n"
       line+="sh Submit_"+name[3*j+1]+"_tt.sh" +"\n"
       f=os.popen("ls -t " + place+name[3*j] + "/make* | sort")
       command1=""
       ligne=0
       for i in f.readlines():
	   command1=command1+"./skim_tt.exe mc "+datadir+"Out_"+name[3*j+1]+"/"+name[3*j+1]+str(ligne)+".root " + i[0:-1] + " " + name[3*j+2] +"\n"
           ligne=ligne+1
       submit_File.write(command1)
       submit_File.close()
    all_File.write(line)
    all_File.close()

