const float pi = 3.14159265;
const float pi_half = 1.57079633;

float _sin(float x){
	unsigned int i = 0;
	float result = 0;
	
	while (_abs(x) > pi_half ){
		x = x - pi_half;
		i++;
	}
	
	if (x == 0){
		return 0;
	}
	
	if (x == pi_half){
		return 1;
	}
	
	result = x - x*x*x / 6 + x*x*x*x*x / 120 - x*x*x*x*x*x*x / 5040;
	
	switch (i % 4){
		case 0:
			return result;
			break;
		case 1: 
			return (1 - result);
			break;
		case 2:
			return -result;
			break;
		case 3:
			return -(1 - result);
			break;
	}
	
	return 0;
}

float _cos(float x){
	unsigned int i = 0;
	float result;
	
	while (_abs(x) > pi_half ){
		x = x - pi_half;
		i++;
	}
	
	if (x == 0){
		return 0;
	}
	
	if (x == pi_half){
		return 1;
	}
	
	result = 1 - x*x / 2 + x*x*x*x / 24 - x*x*x*x*x*x / 720;
	
	switch (i % 4){
		case 0:
			result = result;
			break;
		case 1: 
			result = (1 - result);
			break;
		case 2:
			result = -result;
			break;
		case 3:
			result = -(1 - result);
			break;
	}
	
	return result;
}

float _abs(float x){
	if (x < 0) {
		return (x * -1);
	} else if (x > 0) {
		return x;
	} else {
		return x;
	}
}