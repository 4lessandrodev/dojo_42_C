int calc_second (int hour, int minutes, int seconds){
	int result;	
	result = 0;
	result = hour * 60 * 60;
	result += + (minutes * 60);
	result += seconds;
	return result;
}
