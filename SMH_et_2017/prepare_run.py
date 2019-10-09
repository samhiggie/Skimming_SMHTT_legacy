import os
if __name__ == "__main__":

#    place="/hdfs/store/user/tmitchel/SMHTT_2017_legacy_data_v3/"
#    datatype="data"
#    name=[
#"data_SingleElectron_Run2017B-31Mar2018","DataB","0",
#"data_SingleElectron_Run2017C-31Mar2018","DataC","0",
#"data_SingleElectron_Run2017D-31Mar2018","DataD","0",
#"data_SingleElectron_Run2017E-31Mar2018","DataE","0",
#"data_SingleElectron_Run2017F-31Mar2018","DataF","0"
#]

#    place = "/hdfs/store/user/tmitchel/SMHTT_2017_legacy_embedded_v3/"
#    datatype="data"
#    name=[
#"embedded_EmbeddingRun2017B_ElTauFinalState","embeddedB","0",
#"embedded_EmbeddingRun2017C_ElTauFinalState","embeddedC","0",
#"embedded_EmbeddingRun2017D_ElTauFinalState","embeddedD","0",
#"embedded_EmbeddingRun2017E_ElTauFinalState","embeddedE","0",
#"embedded_EmbeddingRun2017F_ElTauFinalState","embeddedF","0"
#]


    place="/hdfs/store/user/tmitchel/SMHTT_2017_legacy_mc_v3_et/"
    datatype="mc"
    name=[
"DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v1","DY1","Z",
"DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14_ext1-v2","DY2","Z",
"DY3JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14_ext1-v2","DY3","Z",
"DY4JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_v2_94X_mc2017_realistic_v14-v2","DY4_v1","Z",
"DY4JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","DY4_v2","Z",
"DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017RECOSIMstep_12Apr2018_94X_mc2017_realistic_v14_ext1-v1","DY_v1","Z",
"DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017RECOSIMstep_12Apr2018_94X_mc2017_realistic_v14-v1","DY_v2","Z",
"EWKWMinus2Jets_WToLNu_M-50_TuneCP5_13TeV-madgraph-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v2","EWKWminus","Z",
"EWKWPlus2Jets_WToLNu_M-50_TuneCP5_13TeV-madgraph-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v2","EWKWplus","Z",
"EWKZ2Jets_ZToLL_M-50_TuneCP5_13TeV-madgraph-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v2","EWKZLL","Z",
"EWKZ2Jets_ZToNuNu_TuneCP5_13TeV-madgraph-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v2","EWKZNuNu","Z",
"GluGluHToTauTau_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v2","GGHTT","Z",
"GluGluHToWWTo2L2Nu_M125_13TeV_powheg2_JHUGenV714_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGHWW","Z",
"GluGluZH_HToWW_M125_13TeV_powheg_pythia8_TuneCP5_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZHWW","Z",
"HWminusJ_HToWW_M125_13TeV_powheg_pythia8_TuneCP5_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WminusHWW","0",
"HWplusJ_HToWW_M125_13TeV_powheg_pythia8_TuneCP5_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WplusHWW","0",
"HZJ_HToWW_M125_13TeV_powheg_jhugen714_pythia8_TuneCP5_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v4","ZHWW","0",
"ST_t-channel_antitop_4f_inclusiveDecays_TuneCP5_13TeV-powhegV2-madspin-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","ST_t_antitop_v1","0",
"ST_t-channel_antitop_4f_inclusiveDecays_TuneCP5_13TeV-powhegV2-madspin-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","ST_t_antitop_v2","0",
"ST_t-channel_top_4f_inclusiveDecays_TuneCP5_13TeV-powhegV2-madspin-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v1","ST_t_top","0",
"ST_tW_antitop_5f_inclusiveDecays_TuneCP5_13TeV-powheg-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","ST_tW_antitop","0",
"ST_tW_top_5f_inclusiveDecays_TuneCP5_13TeV-powheg-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","ST_tW_top_v1","0",
"ST_tW_top_5f_inclusiveDecays_TuneCP5_13TeV-powheg-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","ST_tW_top_v2","0",
"TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v1","TTTo2L2Nu","0",
"TTToHadronic_TuneCP5_13TeV-powheg-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v2","TTToHadronic","0",
"TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v1","TTToSemiLeptonic","0",
"VBFHToTauTau_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v1","VBFHTT","Z",
"VBFHToWWTo2L2Nu_M125_13TeV_powheg2_JHUGenV714_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","VBFHWW","Z",
"W1JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3","W1_v1","W",
"W1JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v4","W1_v2","W",
"W2JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v4","W2_v1","W",
"W2JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v5","W2_v2","W",
"W3JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","W3","W",
"W4JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v2","W4","W",
"WGToLNuG_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WG","W",
"WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","W_v1","W",
"WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3","W_v2","W",
"WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14_ext1-v2","W_v3","W",
"WminusHToTauTau_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WminusHTT","0",
"WplusHToTauTau_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WplusHTT","0",
"WW_TuneCP5_13TeV-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WW","0",
"WZ_TuneCP5_13TeV-pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","WZ","0",
"ZHToTauTau_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","ZHTT","0",
"ZZ_TuneCP5_13TeV-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v2","ZZ","0",
"ggZH_HToTauTau_ZToLL_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZHLLTT","0",
"ggZH_HToTauTau_ZToNuNu_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1","GGZHNNTT","0",
"ggZH_HToTauTau_ZToQQ_M125_13TeV_powheg_pythia8_v2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2","GGZHQQTT","0",
"ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_v2-PU2017_12Apr2018_new_pmx_94X_mc2017_realistic_v14-v1","ttHnonbb","0"
]
    
    datadir="/nfs_scratch/caillol/smhet2017_30sep/"
    all_File = open("do_submit_et.sh" , 'w')
    line=""
    for j in range(0,len(name)/3):
       print name[3*j],name[3*j+1],name[3*j+2]
       submit_File = open("Submit_"+name[3*j+1]+"_et.sh" , 'w')
       line+="mkdir -p "+datadir+"Out_"+name[3*j+1]+"\n"
       line+="sh Submit_"+name[3*j+1]+"_et.sh" +"\n"
       f=os.popen("ls -t " + place+name[3*j] + "/make* | sort")
       command1=""
       ligne=0
       for i in f.readlines():
	   command1=command1+"./skim_et.exe "+datatype+" "+datadir+"Out_"+name[3*j+1]+"/"+name[3*j+1]+str(ligne)+".root " + i[0:-1] + " " + name[3*j+2] +"\n"
           ligne=ligne+1
       submit_File.write(command1)
       submit_File.close()
    all_File.write(line)
    all_File.close()

