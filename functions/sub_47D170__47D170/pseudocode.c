void __thiscall sub_47D170(float *this, int a2)
{
  double v2; // st7
  int v3; // edx
  double v4; // st6
  double v5; // st7
  int v6; // esi
  double v7; // st7
  double v8; // st7
  float v9; // [esp+Ch] [ebp+4h]

  v2 = 0.0;
  v3 = a2 - *((_DWORD *)this + 5);
  dword_B39DB4 = dword_B39DB0;
  dword_B39DB0 = v3;
  if ( !*(_BYTE *)this )
  {
    if ( 0.0 == *(this + 1) )
    {
      v6 = v3 - *((_DWORD *)this + 4);
      if ( v3 == *((_DWORD *)this + 4) )
      {
        v6 = 1;
      }
      else
      {
        v7 = (double)v6;
        if ( v6 < 0 )
          v7 = v7 + flt_A2FC78;
        if ( v7 > flt_A3D14C )
          v6 = 0xA6;
      }
      v5 = (double)v6;
      if ( v6 < 0 )
        v5 = v5 + flt_A2FC78;
    }
    else
    {
      v9 = *(this + 2) + *(this + 1);
      v4 = (double)(int)(__int64)v9;
      if ( (int)(__int64)v9 < 0 )
        v4 = v4 + flt_A2FC78;
      v3 = (__int64)v9 + *((_DWORD *)this + 4);
      *(this + 2) = v9 - v4;
      v5 = *(this + 1);
    }
    v8 = v5 * dbl_A30E40;
    *((_DWORD *)this + 4) = v3;
    *(this + 3) = v8;
    v2 = *(this + 3) * flt_B06704;
  }
  *(this + 3) = v2;
}
