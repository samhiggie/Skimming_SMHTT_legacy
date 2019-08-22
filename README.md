To compile:
```
./Make.sh skim_et.cc
```

To run: 
```
python prepare_run_et.py
sh do_submit_et.sh
```

To change the input files: edit 
```
prepare_run_et.py
```

To add branches to the skimmed ntuples:
```
Add the branches in skim_et.cc
Declare the new variable in etau_tree_et.h
Fill the branch in etau_tree_et.h
```

To change the selection:
```
edit skim_et.cc                                                                                                       
```

To change the definition of some variables:
```
edit etau_tree_et.h                                                                                                   
```

To read new branches of the input file:
```
edit HTauTauTree_et.h                                                                                                
```

To speed up the processing, I divide the sh file in several files I submit locally using screen.

