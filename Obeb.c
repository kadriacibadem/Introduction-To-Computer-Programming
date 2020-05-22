int obebBul(int sayi1,int sayi2){
    int kucukSayi=sayi1;
    if(sayi2<kucukSayi){
        kucukSayi=sayi2;
    }
    for(int i=kucukSayi;i>0;i--){
        if(bolunebiliyorMu(sayi1,i)==1 && bolunebiliyorMu(sayi2,i)==1){
            return i;
        }
    }
    return -1;
}
