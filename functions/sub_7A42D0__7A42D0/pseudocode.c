int __thiscall sub_7A42D0(_DWORD *this, unsigned int *a2)
{
  int *v3; // eax
  unsigned int v4; // edi
  int v5; // esi
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // edi
  _DWORD *v9; // esi
  int result; // eax
  int i; // eax
  float *v12; // eax
  unsigned int *v13; // esi
  unsigned int v14; // ecx
  float **v15; // ecx
  rsize_t v16; // [esp-4h] [ebp-80h]
  int v18; // [esp+14h] [ebp-68h]
  int v19; // [esp+18h] [ebp-64h]
  int v20; // [esp+1Ch] [ebp-60h] BYREF
  int v21; // [esp+20h] [ebp-5Ch] BYREF
  int v22; // [esp+28h] [ebp-54h] BYREF
  char v23; // [esp+2Ch] [ebp-50h]
  int v24; // [esp+3Ch] [ebp-40h]
  int v25; // [esp+40h] [ebp-3Ch]
  _BYTE v26[44]; // [esp+44h] [ebp-38h] BYREF
  int v27; // [esp+78h] [ebp-4h]

  v18 = 0;
  *(this + 0x30) = sub_78EB40(a2);
  v3 = (int *)*(this + 0x35);
  if ( v3 )
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFF);
    _LN21(v3, 0x10u, v3[0xFFFFFFFF], (void (__thiscall *)(void *))sub_794EB0);
    FormHeapFree(v4);
  }
  v5 = *(this + 0x30);
  v6 = (unsigned __int64)(unsigned int)v5 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v5;
  v7 = (int *)FormHeapAlloc(__CFADD__(v6, 4) ? 0xFFFFFFFF : v6 + 4);
  v20 = (int)v7;
  v8 = 0;
  v27 = 0;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 + 1);
    *v7 = v5;
    ArrayConstructor(v7 + 1, 0x10u, v5, (int)sub_6EF4A0, (void (__thiscall *)(void *))sub_794EB0);
  }
  v9 = this;
  v27 = 0xFFFFFFFF;
  *(this + 0x35) = v8;
  result = sub_78EB40(a2);
  if ( result != 0x1B59 )
  {
    v19 = 0;
    do
    {
      if ( v18 >= v9[0x30] )
      {
        LODWORD(v16) = 0x18;
        v25 = 0xF;
        v24 = 0;
        v23 = 0;
        sub_414500(&v22, v8, "too many leaf lod levels", v16);
        v27 = 1;
        sub_789190((std::exception *)v26, &v22, 0);
        ThrowException__((int)v26, &_TI3_AVIdvFileError__);
      }
      if ( result != 0x1B5A )
      {
        LODWORD(v16) = 0x17;
        v25 = 0xF;
        v24 = 0;
        v23 = 0;
        sub_414500(&v22, v8, "malformed leaf lod data", v16);
        v27 = 2;
        sub_789190((std::exception *)v26, &v22, 0);
        ThrowException__((int)v26, &_TI3_AVIdvFileError__);
      }
      for ( i = sub_78EB40(a2); i != 0x1B5B; v9 = this )
      {
        if ( i != 0x1B5C )
        {
          LODWORD(v16) = 0x17;
          v25 = 0xF;
          v24 = 0;
          v23 = 0;
          sub_414500(&v22, v8, "malformed leaf lod data", v16);
          v27 = 3;
          sub_789190((std::exception *)v26, &v22, 0);
          ThrowException__((int)v26, &_TI3_AVIdvFileError__);
        }
        v12 = sub_7A8250(a2);
        v13 = (unsigned int *)(v19 + v9[0x35]);
        v14 = v13[1];
        v20 = (int)v12;
        if ( v14 )
          v8 = (int)(v13[2] - v14) >> 2;
        else
          v8 = 0;
        if ( v14 && v8 < (int)(v13[3] - v14) >> 2 )
        {
          v15 = (float **)v13[2];
          *v15 = v12;
          v13[2] = (unsigned int)(v15 + 1);
        }
        else
        {
          v8 = v13[2];
          if ( v14 > v8 )
            _invalid_parameter_noinfo();
          sub_7A3620(v13, (unsigned int **)&v21, v13, (_DWORD *)v8, &v20);
        }
        i = sub_78EB40(a2);
      }
      ++v18;
      v19 += 0x10;
      result = sub_78EB40(a2);
    }
    while ( result != 0x1B59 );
  }
  *((_BYTE *)v9 + 0xD8) = 1;
  return result;
}
