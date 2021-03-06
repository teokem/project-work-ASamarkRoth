//Define different scenarios

/////////////////////////////////////
// REMEMBER TO PUT IN HALF-LIVES!!!!
/////////////////////////////////////

if(scenario == 0){
	cout << "Hej hopp!" << endl;
}



else if(scenario == 3){
	//ALL 3n
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 96;
	
	nr_in_step[0] = 84;
	nr_in_step[1] = 83;
	nr_in_step[2] = 84;
	nr_in_step[3] = 77; 
	nr_in_step[4] = 67;
	nr_in_step[5] = 84;

	int k = 0;
	for(int i = 1001; i <= 1031; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1301; i <= 1322; i++){
		chains_to_consider[k] = i;
		k++; 
	}  
	for(int i = 1601; i <= 1643; i++){
		chains_to_consider[k] = i;
		k++; 
	}  
	path += "../E115_chains/";
}

else if(scenario == 4){
	//Lund + Dubna 3n
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 53;
	
	nr_in_step[0] = 47;
	nr_in_step[1] = 46;
	nr_in_step[2] = 47;
	int k = 0;
	for(int i = 1001; i <= 1031; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1301; i <= 1322; i++){
		chains_to_consider[k] = i;
		k++; 
	}   
	path += "../E115_chains/";
}

else if(scenario == 5){
	//Berkeley 3n
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 43;

	nr_in_step[0] = 37;
	nr_in_step[1] = 37;
	nr_in_step[2] = 37;

	int k = 0;
	for(int i = 1601; i <= 1643; i++){
		chains_to_consider[k] = i;
		k++; 
	}  
	path += "../E115_chains/";
}


else if(scenario == 6){
	//ALL 3n + ALL SHORT
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 110;

	nr_in_step[0] = 98;
	nr_in_step[1] = 97;
	nr_in_step[2] = 94;

	int k = 0;
	for(int i = 1001; i <= 1031; i++){
		chains_to_consider[k] = i;
		k++; 
	}   
	for(int i = 1101; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1301; i <= 1322; i++){
		chains_to_consider[k] = i;
		k++; 
	}  
	for(int i = 1401; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}  
	for(int i = 1601; i <= 1643; i++){
		chains_to_consider[k] = i;
		k++; 
	}     
	for(int i = 1701; i <= 1703; i++){
		chains_to_consider[k] = i;
		k++; 
	}  
	path += "../E115_chains/";
}

else if(scenario == 8){
	//SHORT: Dubna, Tasca, BGS
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 14;
	
	nr_in_step[0] = 14;
	nr_in_step[1] = 14;
	nr_in_step[2] = 10;
	int k = 0;
	for(int i = 1101; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1401; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	for(int i = 1701; i <= 1703; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 9){
	//SHORT: Dirks 289-115 collection: D1, D4, T4, T7
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 4;
	
	nr_in_step[0] = 4;
	nr_in_step[1] = 4;
	nr_in_step[2] = 4;
	int k = 0;
	for(int i = 1101; i <= 1101; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1104; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	for(int i = 1404; i <= 1404; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	for(int i = 1407; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 10){
	//SHORT: Dirks 288-115 collection: D2, T1, T2, T3, T5, T6, B1, B2, B3  
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 9;
	
	nr_in_step[0] = 9;
	nr_in_step[1] = 9;
	nr_in_step[2] = 5;
	int k = 0;
	for(int i = 1102; i <= 1102; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1401; i <= 1403; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	for(int i = 1405; i <= 1406; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	for(int i = 1701; i <= 1703; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}



else if(scenario == 11){
  //SHORT: Dirks 289-115 collection: D1, D4, T4, T7
        random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 4;
	
	nr_in_step[0] = 4;
	nr_in_step[1] = 4;
	nr_in_step[2] = 4;

	ref_halflife[0] = 8.0; 
	ref_halflife[1] = 8.0; 
	ref_halflife[2] = 8.0;

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/Dirks_four_short_289/sim_";  
}



else if(scenario == 12){
 
        random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 9;
	
	nr_in_step[0] = 9;
	nr_in_step[1] = 9;
	nr_in_step[2] = 5;

	ref_halflife[0] = 8.0; 
	ref_halflife[1] = 8.0; 
	ref_halflife[2] = 8.0;

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/Dirks_nine_short_288/sim_";  
}



else if(scenario == 13){
 
        random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 9;
	
	nr_in_step[0] = 9;
	nr_in_step[1] = 9;
	nr_in_step[2] = 5;

	ref_halflife[0] = 8.0; 
	ref_halflife[1] = 8.0; 
	ref_halflife[2] = 8.0;

	nr_of_sets_of_random_chains = 10000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/test_sim_chains/sim_";  
}










else if(scenario == 444){
	//SHORT: Longest times in decay step 1
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 6;
	
	nr_in_step[0] = 6;
	nr_in_step[1] = 6;
	nr_in_step[2] = 6;
	int k = 0;
	for(int i = 1403; i <= 1405; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1407; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1101; i <= 1101; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	for(int i = 1103; i <= 1103; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 445){
	//SHORT: Longest times in decay step 2
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 6;
	
	nr_in_step[0] = 6;
	nr_in_step[1] = 6;
	nr_in_step[2] = 6;
	int k = 0;
	for(int i = 1403; i <= 1403; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1407; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1101; i <= 1103; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	for(int i = 1701; i <= 1701; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 446){
	//SHORT: Longest times in decay step 3
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 6;
	
	nr_in_step[0] = 6;
	nr_in_step[1] = 6;
	nr_in_step[2] = 6;
	int k = 0;
	for(int i = 1405; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1102; i <= 1103; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1701; i <= 1701; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 447){
	//SHORT: Longest times when the two first tiems are summed
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 6;
	
	nr_in_step[0] = 6;
	nr_in_step[1] = 6;
	nr_in_step[2] = 6;
	int k = 0;
	for(int i = 1404; i <= 1404; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1407; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1101; i <= 1103; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1701; i <= 1701; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 448){
	//SHORT: Only those with 3 decay steps
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 10;
	
	nr_in_step[0] = 10;
	nr_in_step[1] = 10;
	nr_in_step[2] = 10;
	int k = 0;
	for(int i = 1403; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1101; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1701; i <= 1701; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 449){
	//SHORT: Remove T4 and B3 (Schmidt test indicates that it fits is the combination of TWO chains is removed)
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 12;
	
	nr_in_step[0] = 12;
	nr_in_step[1] = 12;
	nr_in_step[2] = 9;
	int k = 0;
	for(int i = 1401; i <= 1403; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1405; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1101; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1701; i <= 1702; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 88){
	//SHORT: Dubna
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 4;
	
	nr_in_step[0] = 4;
	nr_in_step[1] = 4;
	nr_in_step[2] = 4;
	int k = 0;
	for(int i = 1101; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	path += "../E115_chains/";
}

else if(scenario == 450){
	//SHORT: Dubna but not D3
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 3;
	
	nr_in_step[0] = 3;
	nr_in_step[1] = 3;
	nr_in_step[2] = 3;
	int k = 0;
	for(int i = 1101; i <= 1102; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1104; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	path += "../E115_chains/";
}

else if(scenario == 451){
	//SHORT: Dubna and Berkeley but not D3
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 6;
	
	nr_in_step[0] = 6;
	nr_in_step[1] = 6;
	nr_in_step[2] = 4;
	int k = 0;	
	for(int i = 1701; i <= 1703; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1101; i <= 1102; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1104; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	path += "../E115_chains/";
}

else if(scenario == 452){
	//SHORT: Dubna and Berkeley and TASISpec but not D3
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 13;
	
	nr_in_step[0] = 13;
	nr_in_step[1] = 13;
	nr_in_step[2] = 9;
	int k = 0;	
	for(int i = 1701; i <= 1703; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1401; i <= 1407; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1101; i <= 1102; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1104; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	path += "../E115_chains/";
}

else if(scenario == 453){
	//10 "full" E117 chains
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 10;
	
	nr_in_step[0] = 10;
	nr_in_step[1] = 10;
	nr_in_step[2] = 10;
	int k = 0;	
	for(int i = 2003; i <= 2006; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 2009; i <= 2014; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	path += "../E115_chains/";     //Note that E117 data has been "chopped" to contain only the 3 steps 
}

else if(scenario == 454){
	//10 "full" E117 chains  + All short from Dubna
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 14;
	
	nr_in_step[0] = 14;
	nr_in_step[1] = 14;
	nr_in_step[2] = 14;
	int k = 0;	
	for(int i = 2003; i <= 2006; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 2009; i <= 2014; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1101; i <= 1103; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1104; i <= 1104; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	path += "../E115_chains/";     //Note that E117 data has been "chopped" to contain only the 3 steps 
}

else if(scenario == 455){
	//10 "full" E117 chains  + D3
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 11;
	
	nr_in_step[0] = 11;
	nr_in_step[1] = 11;
	nr_in_step[2] = 11;
	int k = 0;	
	for(int i = 2003; i <= 2006; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 2009; i <= 2014; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1103; i <= 1103; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	path += "../E115_chains/";     //Note that E117 data has been "chopped" to contain only the 3 steps 
}

else if(scenario == 456){
	//10 "full" E117 chains  + D1,D2,D4
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 13;
	
	nr_in_step[0] = 13;
	nr_in_step[1] = 13;
	nr_in_step[2] = 13;
	int k = 0;	
	for(int i = 2003; i <= 2006; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 2009; i <= 2014; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1101; i <= 1102; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}	
	for(int i = 1104; i <= 1104; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	path += "../E115_chains/";     //Note that E117 data has been "chopped" to contain only the 3 steps 
}

else if(scenario == 457){
	//3 first "full" E117 chains
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 3;
	
	nr_in_step[0] = 3;
	nr_in_step[1] = 3;
	nr_in_step[2] = 3;
	int k = 0;	
	for(int i = 2003; i <= 2005; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	path += "../E115_chains/";     //Note that E117 data has been "chopped" to contain only the 3 steps 
}

else if(scenario == 458){
	//Dirk's 289-115 suggestion
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 4;
	
	nr_in_step[0] = 4;
	nr_in_step[1] = 4;
	nr_in_step[2] = 4;
	int k = 0;	
	for(int i = 1404; i <= 1404; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1407; i <= 1407; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1102; i <= 1102; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1104; i <= 1104; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	path += "../E115_chains/";   
}

else if(scenario == 459){
	//All six long E117 chains
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 6;
	
	nr_in_step[0] = 5; //OBS! How should this reallty eb done? When t-previous = 0 ????????????
	nr_in_step[1] = 5;
	nr_in_step[2] = 6;
	nr_in_step[3] = 6;
	nr_in_step[4] = 5;
	nr_in_step[5] = 5;

	ref_halflife[0] = 8.0; 
	ref_halflife[1] = 8.0; 
	ref_halflife[2] = 8.0;
	ref_halflife[3] = 8.0; 
	ref_halflife[4] = 8.0; 	
	ref_halflife[5] = 8.0; 

	nr_of_sets_of_random_chains = 1; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/all_long_E117/sim_";  
}


else if(scenario == 461){
	//E117 long + one short E117, v1
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 6;   ////CHECK!!!!!!!
	nr_in_step[1] = 5;
	nr_in_step[2] = 6;
	nr_in_step[3] = 7;

	ref_halflife[0] = 8.0; 
	ref_halflife[1] = 8.0; 
	ref_halflife[2] = 8.0;
	ref_halflife[3] = 8.0; 

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/all_long_E117_plus_one_short_v1/sim_";    
}

else if(scenario == 462){
	//E117 long + one short E117, v2
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 6;   ////CHECK!!!!!!!
	nr_in_step[1] = 6;
	nr_in_step[2] = 7;
	nr_in_step[3] = 7;

	ref_halflife[0] = 8.0; 
	ref_halflife[1] = 8.0; 
	ref_halflife[2] = 8.0;
	ref_halflife[3] = 8.0; 

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/all_long_E117_plus_one_short_v2/sim_";    
}



else if(scenario == 463){
	//E117 long + one short E117, v3
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 6;   ////CHECK!!!!!!!
	nr_in_step[1] = 6;
	nr_in_step[2] = 6;
	nr_in_step[3] = 6;

	ref_halflife[0] = 8.0; 
	ref_halflife[1] = 8.0; 
	ref_halflife[2] = 8.0;
	ref_halflife[3] = 8.0; 

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/all_long_E117_plus_one_short_v3/sim_";    
}



else if(scenario == 464){
	//E117 long + one short E117, v4
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 5;   ////CHECK!!!!!!!
	nr_in_step[1] = 5;
	nr_in_step[2] = 7;
	nr_in_step[3] = 7;

	ref_halflife[0] = 8.0; 
	ref_halflife[1] = 8.0; 
	ref_halflife[2] = 8.0;
	ref_halflife[3] = 8.0; 

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/all_long_E117_plus_one_short_v4/sim_";    
}




else if(scenario == 465){
	//E117 long + one short E117, v5
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 6;   ////CHECK!!!!!!!
	nr_in_step[1] = 5;
	nr_in_step[2] = 6;
	nr_in_step[3] = 6;

	ref_halflife[0] = 8.0; 
	ref_halflife[1] = 8.0; 
	ref_halflife[2] = 8.0;
	ref_halflife[3] = 8.0; 

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/all_long_E117_plus_one_short_v5/sim_";    
}

else if(scenario == 466){
	//E113_RIKEN
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 3;
	
	nr_in_step[0] = 3; 
	nr_in_step[1] = 3;
	nr_in_step[2] = 3;
	nr_in_step[3] = 3;
	nr_in_step[4] = 3;

	ref_halflife[0] = 8.0; 
	ref_halflife[1] = 8.0; 
	ref_halflife[2] = 8.0;
	ref_halflife[3] = 8.0; 
	ref_halflife[4] = 8.0; 

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/E113_RIKEN/sim_";    
}

else if(scenario == 477){
	//96 CHAINS, 6 STEPS, missing taken into account
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 96;
	
	nr_in_step[0] = 84; 
	nr_in_step[1] = 83;
	nr_in_step[2] = 84;
	nr_in_step[3] = 77;
	nr_in_step[4] = 67;
	nr_in_step[5] = 84;

	ref_halflife[0] = 8.0; 
	ref_halflife[1] = 8.0; 
	ref_halflife[2] = 8.0;
	ref_halflife[3] = 8.0; 
	ref_halflife[4] = 8.0; 
	ref_halflife[5] = 8.0; 

	nr_of_sets_of_random_chains = 1; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/All_96_chains_288-115/sim_";    
}


else if(scenario == 470){
	//6 long E117 chains, 6 steps!!!!
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 6;
	
	nr_in_step[0] = 5;
	nr_in_step[1] = 5;
	nr_in_step[2] = 6;
	nr_in_step[3] = 6;
	nr_in_step[4] = 5;
	nr_in_step[5] = 5;

	int k = 0;	
	for(int i = 2101; i <= 2106; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	path += "../E117_chains/E117_";   
}

else if(scenario == 471){
	//6 long E117 chains plus v1 short chains
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 6;
	nr_in_step[1] = 5;
	nr_in_step[2] = 6;
	nr_in_step[3] = 7;
      
	int k = 0;	
	for(int i = 2101; i <= 2106; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	chains_to_consider[k] = 2008;
	path += "../E117_chains/E117_";   
}

else if(scenario == 472){
	//6 long E117 chains plus v2 short chains
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 6;
	nr_in_step[1] = 6;
	nr_in_step[2] = 7;
	nr_in_step[3] = 7;
      
	int k = 0;	
	for(int i = 2101; i <= 2106; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	chains_to_consider[k] = 2014;
	path += "../E117_chains/E117_";   
}

else if(scenario == 473){
	//6 long E117 chains plus v3 short chains
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 6;
	nr_in_step[1] = 6;
	nr_in_step[2] = 6;
	nr_in_step[3] = 6;
      
	int k = 0;	
	for(int i = 2101; i <= 2106; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	chains_to_consider[k] = 2007;
	path += "../E117_chains/E117_";   
}

else if(scenario == 474){
	//6 long E117 chains plus v4 short chains
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 5;
	nr_in_step[1] = 5;
	nr_in_step[2] = 7;
	nr_in_step[3] = 7;
      
	int k = 0;	
	for(int i = 2101; i <= 2106; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	chains_to_consider[k] = 2015;
	path += "../E117_chains/E117_";   
}

else if(scenario == 475){
	//6 long E117 chains plus v5 short chains
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 6;
	nr_in_step[1] = 5;
	nr_in_step[2] = 6;
	nr_in_step[3] = 6;
      
	int k = 0;	
	for(int i = 2101; i <= 2106; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	chains_to_consider[k] = 2016;
	path += "../E117_chains/E117_";   
}

else if(scenario == 476){
	//E113
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 3;
	
	nr_in_step[0] = 3;
	nr_in_step[1] = 3;
	nr_in_step[2] = 3;
	nr_in_step[3] = 3;	
	nr_in_step[4] = 3;

      
	int k = 0;	
	for(int i = 5001; i <= 5003; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}

	path += "../E113_chains_RIKEN/E113_";   
}

else if(scenario == 480){
	//ALL short E117 chains
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 16;
	
	nr_in_step[0] = 15;
	nr_in_step[1] = 11;
	nr_in_step[2] = 11;
	nr_in_step[3] = 14;
      
	int k = 0;	
	for(int i = 2001; i <= 2016; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	
	path += "../E117_chains/E117_";   
}

else if(scenario == 481){
	//Full missing link (30 chains)
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 30;  //30

	nr_in_step[0] = 25;
	nr_in_step[1] = 25;
	nr_in_step[2] = 24;
	int k = 0;	
	for(int i = 2001; i <= 2016; i++){  //for(int i = 2001; i <= 2016; i++){  
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1101; i <= 1104; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1401; i <= 1407; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}	
	for(int i = 1701; i <= 1703; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	path += "../E115_chains/";     //Note that E117 data has been "chopped" to contain only the 3 steps 
}

 else if(scenario == 482){
   //Full missing link (30 chains)
   random_chains = true;
   external_reference = false;
   nr_of_chains_in_set = 30;
   
   nr_in_step[0] = 25;
   nr_in_step[1] = 25;
   nr_in_step[2] = 24;
   
   ref_halflife[0] = 8.0; 
   ref_halflife[1] = 8.0; 
   ref_halflife[2] = 8.0;
   
   nr_of_sets_of_random_chains = 100000; //100000
   
   int k = 0;
   for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
     chains_to_consider[k] = i;
     k++; 
   } 
   path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/Full_link_30chains_3step/sim_"; 
   
 }

else if(scenario == 483){
	// 287-115
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 3;
	
	nr_in_step[0] = 3;
	nr_in_step[1] = 2;
	nr_in_step[2] = 2;
	nr_in_step[3] = 3;
	nr_in_step[4] = 2;
	nr_in_step[5] = 3;

	int k = 0;	
	for(int i = 1201; i <= 1202; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	for(int i = 1501; i <= 1501; i++){
	  chains_to_consider[k] = i;
	  k++; 
	}
	path += "../E115_chains/";  
}

 else if(scenario == 484){
   // 287-115
   random_chains = true;
   external_reference = false;
   nr_of_chains_in_set = 3;
   
   nr_in_step[0] = 3;
   nr_in_step[1] = 2;
   nr_in_step[2] = 2;
   nr_in_step[3] = 3;
   nr_in_step[4] = 2;
   nr_in_step[5] = 3;
   
   ref_halflife[0] = 8.0; 
   ref_halflife[1] = 8.0; 
   ref_halflife[2] = 8.0;
   ref_halflife[3] = 8.0; 
   ref_halflife[4] = 8.0; 
   ref_halflife[5] = 8.0;

   nr_of_sets_of_random_chains = 100000; //100000
   
   int k = 0;
   for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
     chains_to_consider[k] = i;
     k++; 
   } 
   path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/3chains_6steps/sim_"; 
   
 }


else if(scenario == 490){
	//all short E117
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 16;
	
	nr_in_step[0] = 15;   ////CHECK!!!!!!!
	nr_in_step[1] = 11;
	nr_in_step[2] = 11;
	nr_in_step[3] = 14;

	ref_halflife[0] = 8.0; 
	ref_halflife[1] = 8.0; 
	ref_halflife[2] = 8.0;
	ref_halflife[3] = 8.0; 

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/all_short_E117/sim_";    
 }



else if(scenario == 89){
	//SHORT: Dubna+BGS
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 7;
	nr_in_step[1] = 7;
	nr_in_step[2] = 5;
	int k = 0;
	for(int i = 1101; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1701; i <= 1703; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 890){
	//SHORT: Dubna+BGS, SIMULATED
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 7;
	nr_in_step[1] = 7;
	nr_in_step[2] = 5;

	ref_halflife[0] = 0.45912*log(2); 
	ref_halflife[1] = 2.43210*log(2); 
	ref_halflife[2] = 9.85226*log(2);

	nr_of_sets_of_random_chains = 100; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	//path += "../E115_chains/simulated_chains/from_most_likely_tau/7chains_2missing/sim_";
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/7chains_2missing/sim_";
	//path += "../E115_chains/simulated_chains/enforce_exp_tbar/7chains_2missing/sim_";
}
else if(scenario == 891){
	//SHORT: 3chains, 0missing, SIMULATED
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 3;
	
	nr_in_step[0] = 3;
	nr_in_step[1] = 3;
	nr_in_step[2] = 3;

	ref_halflife[0] = 0.45912*log(2); 
	ref_halflife[1] = 2.43210*log(2); 
	ref_halflife[2] = 9.85226*log(2);

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	//path += "../E115_chains/simulated_chains/from_most_likely_tau/6chains_0missing/sim_";
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/3chains_0missing/sim_";
	//path += "../E115_chains/simulated_chains/enforce_exp_tbar/6chains_0missing/sim_";
}

else if(scenario == 892){
	//SHORT: 6chains, 2missing, SIMULATED
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 6;
	
	nr_in_step[0] = 6;
	nr_in_step[1] = 6;
	nr_in_step[2] = 4;

	ref_halflife[0] = 0.45912*log(2); 
	ref_halflife[1] = 2.43210*log(2); 
	ref_halflife[2] = 9.85226*log(2);

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	//path += "../E115_chains/simulated_chains/from_most_likely_tau/10chains_0missing/sim_";
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/6chains_2missing/sim_";
	//path += "../E115_chains/simulated_chains/enforce_exp_tbar/10chains_0missing/sim_";
}

else if(scenario == 893){
	//SHORT: 13chains, 0missing, SIMULATED
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 13;
	
	nr_in_step[0] = 13;
	nr_in_step[1] = 13;
	nr_in_step[2] = 13;

	ref_halflife[0] = 0.45912*log(2); 
	ref_halflife[1] = 2.43210*log(2); 
	ref_halflife[2] = 9.85226*log(2);

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	//path += "../E115_chains/simulated_chains/from_most_likely_tau/12chains_3missing/sim_";
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/13chains_0missing/sim_";
	//path += "../E115_chains/simulated_chains/enforce_exp_tbar/12chains_3missing/sim_";
}

else if(scenario == 9){
	//SHORT chains with B3 and T4 excluded
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 12;

	nr_in_step[0] = 12;
	nr_in_step[1] = 12;
	nr_in_step[2] = 9;
	int k = 0;
	for(int i = 1101; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1401; i <= 1403; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1405; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	for(int i = 1701; i <= 1702; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}


else if(scenario == 10){
	//SHORT chains with D4 and T4 excluded
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 12;
	
	nr_in_step[0] = 12;
	nr_in_step[1] = 12;
	nr_in_step[2] = 8;
	int k = 0;
	for(int i = 1101; i <= 1103; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1401; i <= 1403; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1405; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	for(int i = 1701; i <= 1703; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 7){
	//SHORT chains with D4 and B3 excluded
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 12;
	
	nr_in_step[0] = 12;
	nr_in_step[1] = 12;
	nr_in_step[2] = 9;
	int k = 0;
	for(int i = 1101; i <= 1103; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1401; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1701; i <= 1702; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}


//#include "short_chains_minus_one.cxx" 
//#include "short_chains_minus_one_as_external_for_the_excluded.cxx" 



else if(scenario == 11){
	//SHORT Dubna, Tasca, BGS compared to all 3n
	random_chains = false;
	external_reference = true;
	nr_of_chains_in_set = 14;

	ref_halflife[0] = 0.16903;    
	nr_in_step[0] = 14;
	ref_nr_in_step[0] = 85;

	ref_halflife[1] = 0.97308; 
	nr_in_step[1] = 14;
	ref_nr_in_step[1] = 83;

	ref_halflife[2] = 4.40739; 
	nr_in_step[2] = 10;
	ref_nr_in_step[2] = 84;

	int k = 0;
	for(int i = 1101; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1401; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	for(int i = 1701; i <= 1703; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}


else if(scenario == 12){
	//SHORT chains with D4, T4, and B3 excluded
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 11;

	nr_in_step[0] = 11;
	nr_in_step[1] = 11;
	nr_in_step[2] = 8;
	int k = 0;
	for(int i = 1101; i <= 1103; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1401; i <= 1403; i++){
		chains_to_consider[k] = i;
		k++; 
	}   
	for(int i = 1405; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1701; i <= 1702; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}



else if(scenario == 13){
	//SHORT chains with D4, T4, and B3 excluded
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 10;
	
	nr_in_step[0] = 10;
	nr_in_step[1] = 10;
	nr_in_step[2] = 10;
	int k = 0;
	for(int i = 1101; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1403; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}   
	for(int i = 1701; i <= 1701; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 14){
	//SHORT chains with D4, T4, and B3 excluded
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 11;
	
	nr_in_step[0] = 11;
	nr_in_step[1] = 11;
	nr_in_step[2] = 8;
	int k = 0;
	for(int i = 1101; i <= 1102; i++){
		chains_to_consider[k] = i;
		k++; 
	}   
	for(int i = 1104; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}  
	for(int i = 1401; i <= 1403; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	for(int i = 1405; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}   
	for(int i = 1701; i <= 1702; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 15){
	//SHORT chains with D4, T4, and B3 excluded
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 10;

	nr_in_step[0] = 10;
	nr_in_step[1] = 10;
	nr_in_step[2] = 7;
	int k = 0;
	for(int i = 1101; i <= 1102; i++){
		chains_to_consider[k] = i;
		k++; 
	}    
	for(int i = 1401; i <= 1403; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	for(int i = 1405; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}   
	for(int i = 1701; i <= 1702; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}
else if(scenario == 16){
	//ALL chains compared to 3n
	random_chains = false;
	external_reference = true;
	nr_of_chains_in_set = 2000;
	
	ref_halflife[0] = 0.170185; 
	nr_in_step[0] = 2000;
	ref_nr_in_step[0] = 84;

	ref_halflife[1] = 0.97308; 
	nr_in_step[1] = 2000;
	ref_nr_in_step[1] = 83;

	ref_halflife[2] = 4.40739; 
	nr_in_step[2] = 1900;
	ref_nr_in_step[2] = 84;

	int k = 0;
	for(int i = 1701; i <= 1703; i++){
		chains_to_consider[k] = i;
		k++; 
	}    

	path += "../E115_chains/";
}


else if(scenario == 17){
	//SHORT chains with D3 excluded
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 13;
	
	nr_in_step[0] = 13;
	nr_in_step[1] = 13;
	nr_in_step[2] = 9; //10 before????
	int k = 0;
	for(int i = 1101; i <= 1102; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1104; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1401; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1701; i <= 1703; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}


else if(scenario == 18){
	//SHORT chains with D3 excluded PLUS all 3n
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 109;
	
	nr_in_step[0] = 97;
	nr_in_step[1] = 96;
	nr_in_step[2] = 93;
	int k = 0;
	for(int i = 1001; i <= 1031; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1101; i <= 1102; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1104; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1301; i <= 1322; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1401; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1601; i <= 1643; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1701; i <= 1703; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}

else if(scenario == 19){
	//SHORT chains PLUS all 3n
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 110;
	
	nr_in_step[0] = 98;
	nr_in_step[1] = 97;
	nr_in_step[2] = 94;
	int k = 0;
	for(int i = 1001; i <= 1031; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1101; i <= 1102; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1103; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1301; i <= 1322; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1401; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1601; i <= 1643; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1701; i <= 1703; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/";
}


else if(scenario == 20){
	//crazy
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 6;
	
	nr_in_step[0] = 6;
	nr_in_step[1] = 5;
	nr_in_step[2] = 4;
	int k = 0;
	for(int i = 1201; i <= 1202; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1501; i <= 1501; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1104; i <= 1104; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1404; i <= 1404; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	for(int i = 1703; i <= 1703; i++){
		chains_to_consider[k] = i;
		k++; 
	}

	path += "../E115_chains/";
}

else if(scenario == 21){
	//LUND short
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 7;
	
	nr_in_step[0] = 7;
	nr_in_step[1] = 7;
	nr_in_step[2] = 5;
	int k = 0;
     
	for(int i = 1401; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	path += "../E115_chains/";
}

else if(scenario == 22){
	//LUND "3n"
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 22;
	
	//nr_in_step[0] = 7;
	//nr_in_step[1] = 7;
	//nr_in_step[2] = 5;
	int k = 0;
     
	for(int i = 1301; i <= 1322; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	path += "../E115_chains/";
}

else if(scenario == 23){
	//LUND "3n"
	random_chains = false;
	external_reference = false;
	nr_of_chains_in_set = 29;
	
	//nr_in_step[0] = 7;
	//nr_in_step[1] = 7;
	//nr_in_step[2] = 5;
	int k = 0;

  	for(int i = 1301; i <= 1322; i++){
		chains_to_consider[k] = i;
		k++; 
	}   
	for(int i = 1401; i <= 1407; i++){
		chains_to_consider[k] = i;
		k++; 
	}
	path += "../E115_chains/";
}


else if(scenario == 1000){
	//Random chains, to mimic ALL short
	random_chains = true;
	external_reference = false;   //To make strength function: Put this to "true", otherwise "false"!
	nr_of_chains_in_set = 14;
	
	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 14;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 14;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 14-4;

	ref_nr_in_step[0] = 14;
	ref_nr_in_step[1] = 14;
	ref_nr_in_step[2] = 14-4;


	nr_of_sets_of_random_chains = 10;//100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/14chains_4missing/sim_";
}
else if(scenario == 1088){
	//Random chains, to mimic ALL short
	random_chains = true;
	external_reference = false;   //To make strength function: Put this to "true", otherwise "false"!
	nr_of_chains_in_set = 4;
	
	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 4;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 4;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 4;

	ref_nr_in_step[0] = 4;
	ref_nr_in_step[1] = 4;
	ref_nr_in_step[2] = 4;


	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/4chains_0missing/sim_";
}

else if(scenario == 1089){
	//Random chains, to mimic ALL short
	random_chains = true;
	external_reference = false;   //To make strength function: Put this to "true", otherwise "false"!
	nr_of_chains_in_set = 4;
	
	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 4;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 4;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 4;

	ref_nr_in_step[0] = 4;
	ref_nr_in_step[1] = 4;
	ref_nr_in_step[2] = 4;


	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/from_most_likely_tau/4chains_0missing/sim_";
}

else if(scenario == 1001){
	//Random chains, to mimic ALL short
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 14;
	
	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 14;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 14;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 14-4;

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/enforce_exp_tbar/14chains_4missing/sim_";
}


else if(scenario == 1022){
	//Random chains
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 3;
	
	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 3;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 3;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 3;

	nr_of_sets_of_random_chains = 100000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/from_most_likely_tau/3chains_0missing/sim_";
}


else if(scenario == 1002){
	//Random chains, to mimic ALL short
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 14;
	
	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 14;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 14;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 14-4;

	nr_of_sets_of_random_chains = 10000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/from_most_likely_tau/14chains_4missing/sim_";
}

else if(scenario == 1003){
	//Random chains, to mimic ALL short
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 14;
	
	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 14;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 14;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 14-4;

	nr_of_sets_of_random_chains = 10000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_from_one_tau/14chains_4missing/sim_";
}

else if(scenario == 1004){
	//Random chains, to mimic ALL short
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 14;
	
	ref_halflife[0] = 1.0*log(2); 
	nr_in_step[0] = 14;
	ref_halflife[1] = 2.0*log(2); 
	nr_in_step[1] = 14;
	ref_halflife[2] = 3.0*log(2); 
	nr_in_step[2] = 14-4;

	nr_of_sets_of_random_chains = 10000; //100000

	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_from_one_tau/14chains_4missing/sim_";
}


else if(scenario == 1010){
	//Random chains, to mimic ALL short
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 12;

	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 12;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 12;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 12-4;
	nr_of_sets_of_random_chains = 100000;
	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_using_taus_from_tau_likelihood/12chains_4missing/sim_";
}

else if(scenario == 1012){
	//Random chains, to mimic ALL short
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 11;
	nr_of_sets_of_random_chains = 100000;

	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 11;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 11;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 11-3;
	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_using_taus_from_tau_likelihood/11chains_3missing/sim_";
} 

else if(scenario == 1013){
	//Random chains, to mimic ALL short
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 10;

	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 10;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 10;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 10;
	nr_of_sets_of_random_chains = 100000;
	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_using_taus_from_tau_likelihood/10chains_0missing/sim_";
} 

else if(scenario == 1007){
	//Random chains, to mimic ALL short
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 12;

	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 12;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 12;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 12-3;
	nr_of_sets_of_random_chains = 100000;
	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_using_taus_from_tau_likelihood/12chains_3missing/sim_";
} 

else if(scenario == 1699){
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 6;

	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 6;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 6;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 6-2;
	nr_of_sets_of_random_chains = 100000;
	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_using_taus_from_tau_likelihood/6chains_2missing/sim_";
}

else if(scenario == 2000){
	//Random chains, 13-3
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 13;

	ref_halflife[0] = 0.45912*log(2);  //0.45912 är medellivstiden , inte halveringstiden!!!!!!!!!!!!! 
	nr_in_step[0] = 13;                 // Also note that we keep using the "ALL SHORT" halflives when simulating 
	ref_halflife[1] = 2.43210*log(2);  //and using the scenarios with 13 decays (etc.). Time does not matter. 
	nr_in_step[1] = 13;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 13-3;
	nr_of_sets_of_random_chains = 100000;
	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_using_taus_from_tau_likelihood/13chains_3missing/sim_";
}

else if(scenario == 3000){
	//Random chains, 13-4
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 13;

	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 13;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 13;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 13-4;
	nr_of_sets_of_random_chains = 100000;
	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_using_taus_from_tau_likelihood/13chains_4missing/sim_";
}

else if(scenario == 5000){
	//Random chains, 12-3
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 12;

	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 12;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 12;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 12-3;
	nr_of_sets_of_random_chains = 100000;
	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_using_taus_from_tau_likelihood/12chains_3missing/sim_";
}


else if(scenario == 5008){
	//Random chains, 14-0, 14-4 etc.
	random_chains = true;
	external_reference = false;
	nr_of_chains_in_set = 14;

	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 14;
	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 14;
	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 14-8; //!!!!!!!!!!!!!!!!!!!!
	nr_of_sets_of_random_chains = 100000;
	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/taus_from_tau_likelihood/14chains_8missing/sim_"; //!!!!!!!!!!!!!!!!!!!!!!!!
}


else if(scenario == 4000){
	//Random chains, see what happens if all short are compared with all 3n
	random_chains = true;
	external_reference = true;
	nr_of_chains_in_set = 14;

	ref_halflife[0] = 0.17018; 
	nr_in_step[0] = 14;
	ref_nr_in_step[0] = 84;

	ref_halflife[1] = 0.97308; 
	nr_in_step[1] = 14;
	ref_nr_in_step[1] = 83;

	ref_halflife[2] = 4.40739; 
	nr_in_step[2] = 10;
	ref_nr_in_step[2] = 84;

	nr_of_sets_of_random_chains = 100000;
	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_using_taus_from_tau_likelihood/to_mimic_ALL_short/14chains_4missing/sim_";
}

else if(scenario == 8400){

	random_chains = true;
	external_reference = true;
	nr_of_chains_in_set = 84;

	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 84;
	ref_nr_in_step[0] = 85;

	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 84;
	ref_nr_in_step[1] = 83;

	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 84;
	ref_nr_in_step[2] = 84;

	nr_of_sets_of_random_chains = 10000;
	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_using_taus_from_tau_likelihood/84chains_0missing/sim_";
}

else if(scenario == 8500){

	random_chains = true;
	external_reference = true;
	nr_of_chains_in_set = 84;


	ref_halflife[0] = 0.45912*log(2); 
	nr_in_step[0] = 84;
	ref_nr_in_step[0] = 84;

	ref_halflife[1] = 2.43210*log(2); 
	nr_in_step[1] = 84;
	ref_nr_in_step[1] = 83;

	ref_halflife[2] = 9.85226*log(2); 
	nr_in_step[2] = 84;
	ref_nr_in_step[2] = 84;

	nr_of_sets_of_random_chains = 10000;
	int k = 0;
	for(int i = 1; i <= nr_of_sets_of_random_chains*nr_of_chains_in_set; i++){
		chains_to_consider[k] = i;
		k++; 
	} 
	path += "../E115_chains/simulated_chains/simulated_using_taus_from_tau_likelihood/84chains_0missing/sim_";
}

else {cout << "Not valid scenario!" << endl; return 0;}


//Type in values by hand
if(scenario == 0){
	cout << endl;
	cout << "halflife_ref[0] = "; 
	cin >> halflife_ref[0];
	cout << "nr in step 1 = ";
	cin >> nr_in_step[0];
	cout << endl;

	cout << "halflife_ref[1] = "; 
	cin >> halflife_ref[1];
	cout << "nr in step 2 = ";
	cin >> nr_in_step[1];
	cout << endl;

	cout << "halflife_ref[2] = "; 
	cin >> halflife_ref[2];
	cout << "nr in step 3 = ";
	cin >> nr_in_step[2];
	cout << endl;
}
