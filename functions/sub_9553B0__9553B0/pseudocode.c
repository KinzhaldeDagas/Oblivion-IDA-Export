signed int __stdcall sub_9553B0(float *a1)
{
  int v1; // edx
  char v3; // fps^1
  double v4; // st7
  char v5; // ah
  bool v6; // c0
  bool v7; // c3

  if ( *a1 <= (double)flt_A2FAAC )
  {
    if ( a1[1] <= (double)flt_A2FAAC )
    {
      return 2;
    }
    else
    {
      v1 = 1;
      if ( a1[2] > (double)flt_A2FAAC )
        return 3;
      if ( a1[2] < (double)flt_A641B8 )
        return 4;
    }
  }
  else
  {
    v1 = 0;
    if ( a1[2] <= (double)flt_A2FAAC )
    {
      v4 = a1[1];
      v5 = v3;
      v6 = v4 < flt_A2FAAC;
      v7 = v4 == flt_A2FAAC;
      if ( __SETP__(v5 & 5, 0) )
      {
        if ( !v6 && !v7 )
          return 7;
        if ( a1[1] < (double)flt_A641B8 )
          return 8;
      }
      else
      {
        v1 = 6;
        if ( !v6 && !v7 )
          return 0xA;
        if ( a1[1] < (double)flt_A641B8 )
          return 0xC;
      }
    }
    else
    {
      v1 = 5;
      if ( a1[1] > (double)flt_A2FAAC )
        return 9;
      if ( a1[1] < (double)flt_A641B8 )
        return 0xB;
    }
  }
  return v1;
}
