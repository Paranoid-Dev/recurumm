int f, tab, p, k, x, y, z;

return_int (i) {
  p = tab + i - 1;
  k = *(char *)p;
  return k;
}

changevalue_int (i,v) {
  p = tab + i - 1;
  *(char *)p = v;
  return 0;
}

main () {
  f=1;
  tab = calloc(10000,40000);
  
  for (;;) {
    z=0;
    y=0;
    x=0;
    if (f==1) {
      f++;
    }
    else if (f==2) {
      f++;
    }
    else if (f==3) {
      changevalue_int(1,0);
      f++;
    }
    else if (f==4) {
      changevalue_int(2,-6);
      f++;
    }
    else if (f==5) {
      f++;
    }
    else if (f==6) {
      scanf("%d", &z);
      changevalue_int(3,z);
      f++;
    }
    else if (f==7) {
      f++;
    }
    else if (f==8) {
      f++;
    }
    else if (f==9) {
      x++;
      x++;
      printf("%d",x);
      fflush(stdout);
      f++;
    }
    else if (f==10) {
      x--;
      x--;
      printf("%d",x);
      fflush(stdout);
      f++;
    }
    else if (f==11) {
      f++;
    }
    else if (f==12) {
      x=return_int(1);
      printf("%d",x);
      fflush(stdout);
      f++;
    }
    else if (f==13) {
      x=return_int(1);
      x++;
      x++;
      printf("%d",x);
      fflush(stdout);
      f++;
    }
    else if (f==14) {
      x=return_int(2);
      printf("%d",x);
      fflush(stdout);
      f++;
    }
    else if (f==15) {
      x=return_int(3);
      printf("%d",x);
      fflush(stdout);
      f++;
    }
    else if (f==16) {
      f++;
    }
    else if (f==17) {
      x++;
      x++;
      x++;
      
      y++;
      y++;
      y++;
      
      x=x*y;
      y=0;
      
      y++;
      y++;
      y++;
      
      x=x*y;
      y=0;
      
      y++;
      y++;
      y++;
      
      x=x*y;
      y=0;
      
      printf("%c",x);
      fflush(stdout);
      f++;
    }
    else if (f==18) {
      f++;
    }
    else if (f==19) {
      x=return_int(3);
      if (x==0) {
        x=return_int(3);
        free(tab);
        return x;
      }
      f++;
    }
    else if (f==20) {
      f++;
    }
    else if (f==21) {
      x++;
      x++;
      
      y++;
      y++;
      
      x=x*y;
      y=0;
      
      y++;
      y++;
      
      x=x*y;
      y=0;
      
      y++;
      y++;
      y++;
      
      x=x*y;
      y=0;
      
      f=x-1;
      
      f++;
    }
    else if (f==22) {
      f++;
    }
    else if (f==23) {
      x++;
      free(tab);
      return x;
      f++;
    }
    else if (f==24) {
      f++;
    }
    else if (f==25) {
      x++;
      printf("%d",x);
      fflush(stdout);
      f++;
    }
    else if (f==26) {
      x++;
      x--;
      free(tab);
      return x;
      f++;
    }
    else if (f==27) {
      f++;
    }
    else if (f==28) {
      f++;
    }
  }
  
  free(tab);
  return 0;
}
