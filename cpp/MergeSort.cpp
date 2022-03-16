#ver.220316
#배열을 넘겨주고 배열로 돌려받음
 
int*mergeSort(int*_arr, int size){
	if(size == 1){
		return _arr;
	}
	int half = size/2;
	
	int*halfArr = new int[half];
	for(int i=0; i<half; i++){
		halfArr[i] = _arr[i];
	}
	
	int*otherArr = new int[size-half];
	for(int i=half; i<size; i++){
		otherArr[i-half] = _arr[i];
	}
	
	halfArr = mergeSort(halfArr, half);
	otherArr = mergeSort(otherArr, (size - half));
	
	int i = 0;
	int j = 0;
	int k =0;
	
	while(k<size){
		if(i<half&&j<(size-half)){
			if(halfArr[i]<otherArr[j]){
				_arr[k] = halfArr[i];
				i++;
			}else{
				_arr[k] = otherArr[j];
				j++;
			}
		}else if(i<half){
			_arr[k]=halfArr[i];
			i++;
		}else if(j<size-half){
			_arr[k]=otherArr[j];
			j++;
		}

		
		k++;
	}
	
	return _arr;
}

