void __thiscall sub_6EF920(
        int *this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  unsigned int v19; // ecx
  int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // ebp
  float *v23; // ebp
  unsigned int v24; // ebx
  float *v25; // edi
  bool v26; // cc
  _DWORD v27[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v28; // [esp+24h] [ebp-4h]

  v19 = *(this + 1);
  v20 = 0;
  v28 = 0;
  if ( v19 )
    v21 = (int)(*(this + 2) - v19) >> 6;
  else
    v21 = 0;
  if ( v21 < a2 )
  {
    if ( v19 )
      v20 = (int)(*(this + 2) - v19) >> 6;
    v22 = *(this + 2);
    if ( v19 > v22 )
      _invalid_parameter_noinfo();
    sub_6EF660(this, (int)this, v22, a2 - v20, (float *)&a3);
  }
  if ( v19 )
  {
    v23 = (float *)*(this + 2);
    if ( a2 < (int)((int)v23 - v19) >> 6 )
    {
      if ( v19 > (unsigned int)v23 )
        _invalid_parameter_noinfo();
      v24 = *(this + 1);
      if ( v24 > *(this + 2) )
        _invalid_parameter_noinfo();
      v25 = (float *)(v24 + (a2 << 6));
      v26 = (unsigned int)v25 <= *(this + 2);
      v27[1] = v24;
      if ( !v26 || (unsigned int)v25 < *(this + 1) )
        _invalid_parameter_noinfo();
      sub_5592A0(this, v27, (int)this, v25, (int)this, v23);
    }
  }
  v28 = 0xFFFFFFFF;
  _LN21(&a7, 0x10u, 3, sub_794EB0);
}
