int __thiscall sub_796320(char **this, float *a2, float a3)
{
  int v4; // ecx
  _DWORD *v5; // ebp
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  char *v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // edi
  int v15; // ecx
  unsigned int v16; // edi
  float *v17; // ebx
  int v18; // ecx
  unsigned int v19; // edi
  int v20; // ecx
  unsigned int v21; // edi
  char v22; // al
  double v23; // st7
  int v24; // ecx
  unsigned int v25; // esi
  int result; // eax
  float v27; // [esp+1Ch] [ebp+8h]

  v4 = (int)*(this + 0x2F);
  v5 = this + 0x2E;
  if ( v4 )
    v6 = (int)&(*(this + 0x30))[-v4] >> 2;
  else
    v6 = 0;
  if ( *((unsigned __int16 *)this + 0x11) == v6 >> 1 )
  {
    v7 = (int)*(this + 0x2F);
    if ( v7 )
      v8 = (int)&(*(this + 0x30))[-v7] >> 2;
    else
      v8 = 0;
    sub_527160(this + 0x2E, v8 + 2, COERCE_INT(0.0));
    if ( SLOWORD(a3) <= (__int16)0xFFFFFFFF )
      goto LABEL_29;
    if ( *(_BYTE *)this )
    {
      v9 = (int)*(this + 0x37);
      if ( v9 )
        v10 = &(*(this + 0x38))[-v9];
      else
        v10 = 0;
      sub_6EF4B0(this + 0x36, (unsigned int)(v10 + 1), 0);
      v11 = (int)*(this + 0x33);
      if ( v11 )
        v12 = (int)&(*(this + 0x34))[-v11] >> 2;
      else
        v12 = 0;
      sub_527160(this + 0x32, v12 + 2, COERCE_INT(0.0));
    }
  }
  if ( SLOWORD(a3) <= (__int16)0xFFFFFFFF || !*(_BYTE *)this )
  {
LABEL_29:
    v17 = a2;
    goto LABEL_30;
  }
  v13 = (int)*(this + 0x37);
  v14 = *((unsigned __int16 *)this + 0x11);
  if ( !v13 || v14 >= (unsigned int)&(*(this + 0x38))[-v13] )
    _invalid_parameter_noinfo();
  (*(this + 0x37))[v14] = LOBYTE(a3);
  v15 = (int)*(this + 0x33);
  v16 = 2 * *((unsigned __int16 *)this + 0x11);
  if ( !v15 || v16 >= (int)&(*(this + 0x34))[-v15] >> 2 )
    _invalid_parameter_noinfo();
  v17 = a2;
  *(float *)&(*(this + 0x33))[4 * v16] = *a2;
  v18 = (int)*(this + 0x33);
  v19 = 2 * *((unsigned __int16 *)this + 0x11) + 1;
  if ( !v18 || v19 >= (int)&(*(this + 0x34))[-v18] >> 2 )
    _invalid_parameter_noinfo();
  *(float *)&(*(this + 0x33))[4 * v19] = a2[1];
LABEL_30:
  v20 = (int)*(this + 0x2F);
  v21 = 2 * *((unsigned __int16 *)this + 0x11);
  if ( !v20 || v21 >= (int)&(*(this + 0x30))[-v20] >> 2 )
    _invalid_parameter_noinfo();
  *(float *)&(*(this + 0x2F))[4 * v21] = *v17;
  v22 = sub_787680();
  v23 = v17[1];
  if ( v22 )
    v23 = -v23;
  v24 = (int)*(this + 0x2F);
  v25 = 2 * *((unsigned __int16 *)this + 0x11) + 1;
  if ( !v24 || v25 >= (v5[2] - v24) >> 2 )
    _invalid_parameter_noinfo();
  result = v5[1];
  v27 = v23;
  *(float *)(result + 4 * v25) = v27;
  return result;
}
