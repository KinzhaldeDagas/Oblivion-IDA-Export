int __thiscall sub_7A4190(unsigned int *this, unsigned int *a2)
{
  unsigned int v2; // edi
  unsigned int *v3; // esi
  char *v4; // ebx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ecx
  int *v9; // ecx
  int result; // eax
  rsize_t v11; // [esp-4h] [ebp-78h]
  int v12[2]; // [esp+14h] [ebp-60h] BYREF
  int v13; // [esp+1Ch] [ebp-58h] BYREF
  int v14; // [esp+24h] [ebp-50h] BYREF
  char v15; // [esp+28h] [ebp-4Ch]
  int v16; // [esp+38h] [ebp-3Ch]
  int v17; // [esp+3Ch] [ebp-38h]
  _BYTE v18[40]; // [esp+40h] [ebp-34h] BYREF
  int v19; // [esp+70h] [ebp-4h]
  int v20; // [esp+78h] [ebp+4h]

  v2 = *(this + 0x1A);
  v3 = this + 0x18;
  if ( *(this + 0x19) > v2 )
    _invalid_parameter_noinfo();
  v4 = (char *)v3[1];
  if ( (unsigned int)v4 > v3[2] )
    _invalid_parameter_noinfo();
  sub_439050(v3, (int)v4, v12, (int)v3, v4, (int)v3, (char *)v2);
  v6 = sub_78EB40(a2);
  if ( v6 > 0 )
  {
    v20 = v6;
    do
    {
      v7 = sub_7A7900(a2);
      v8 = v3[1];
      v12[0] = v7;
      if ( v8 )
        v2 = (int)(v3[2] - v8) >> 2;
      else
        v2 = 0;
      if ( v8 && v2 < (int)(v3[3] - v8) >> 2 )
      {
        v9 = (int *)v3[2];
        *v9 = v7;
        v3[2] = (unsigned int)(v9 + 1);
      }
      else
      {
        v2 = v3[2];
        if ( v8 > v2 )
          _invalid_parameter_noinfo();
        sub_7A3620(v3, (unsigned int **)&v13, v3, (_DWORD *)v2, v12);
      }
      --v20;
    }
    while ( v20 );
  }
  result = sub_78EB40(a2);
  if ( result != 0x3F7 )
  {
    LODWORD(v11) = 0x15;
    v17 = 0xF;
    v16 = 0;
    v15 = 0;
    sub_414500(&v14, v2, "malformed branch data", v11);
    v19 = 0;
    sub_789190((std::exception *)v18, &v14, 0);
    ThrowException__((int)v18, &_TI3_AVIdvFileError__);
  }
  return result;
}
