void array_remove(double*arr,size_t *pn,size_t pos){
    /* se la pos è fuori dalla dimensione,non fare nulla */
    if(pos>=*pn)
            return;
    /*se c'è un solo elemento, fare nulla  */
    if(*pn==1)
            return;

    for(int i=pos; i<*pn;i++){
        arr[i]= arr[i+1];
    *pn=*pn - 1;//decremento la dimensione

}


}