int main(char *argv[], int argc){
	char *prog = argv[0];
	char *opts = argv[1];
	char *msgs = argv[2];

	if(argc == 1){
		fprintf(stderr, "%s: no options and messages\n",prog );
		exit(3);
	} 
	else
    if(argc == 2){
    	fprintf(stderr, "%s:No options or message\n",prog );
    	exit(3);
    }
    else
    	if(argc == 3){
    		if(strcmp(opts,"-Ecsk") == 0){
    			CZK_encrypt(msgs);
    			// $crypt -Ecsk Msg
    			//Key: 
    			//enc:
    		}
    		//else if() Decrypt ...
    		//final// 
    		else{
    			fprintf(stderr, "%s:Illegal options %s\n",prog,opts); exit(1)
    		}
    		exit(0);
    }



}