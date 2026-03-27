int __thiscall sub_7A2A40(_DWORD *this, unsigned int *a2)
{
  unsigned int v3; // ebx
  int v4; // ecx
  unsigned int v5; // ebp
  unsigned int v6; // ecx
  int v7; // ecx
  int v8; // ebx
  int v9; // ecx
  int v10; // ebp
  int result; // eax
  rsize_t v12; // [esp-4h] [ebp-B4h]
  bool v13; // [esp+17h] [ebp-99h]
  unsigned int i; // [esp+18h] [ebp-98h]
  int v15; // [esp+1Ch] [ebp-94h] BYREF
  char v16; // [esp+20h] [ebp-90h]
  int v17; // [esp+30h] [ebp-80h]
  int v18; // [esp+34h] [ebp-7Ch]
  int v19; // [esp+38h] [ebp-78h] BYREF
  char v20; // [esp+3Ch] [ebp-74h]
  int v21; // [esp+4Ch] [ebp-64h]
  int v22; // [esp+50h] [ebp-60h]
  _BYTE v23[40]; // [esp+54h] [ebp-5Ch] BYREF
  _BYTE v24[40]; // [esp+7Ch] [ebp-34h] BYREF
  int v25; // [esp+ACh] [ebp-4h]

  v3 = 0;
  for ( i = 0; ; v3 = i )
  {
    v4 = *(this + 0x19);
    if ( !v4 || v3 >= (*(this + 0x1A) - v4) >> 2 )
      break;
    if ( sub_78EB40(a2) != 0x3A9A )
    {
      LODWORD(v12) = 0x1A;
      v18 = 0xF;
      v17 = 0;
      v16 = 0;
      sub_414500(&v15, (int)a2, "malformed texture controls", v12);
      v25 = 0;
      sub_789190((std::exception *)v23, &v15, 0);
      ThrowException__((int)v23, &_TI3_AVIdvFileError__);
    }
    v5 = (*a2)++;
    v6 = a2[2];
    if ( !v6 || v5 >= a2[3] - v6 )
      _invalid_parameter_noinfo();
    v7 = *(this + 0x19);
    v13 = *(_BYTE *)(a2[2] + v5) != 0;
    if ( !v7 || v3 >= (*(this + 0x1A) - v7) >> 2 )
      _invalid_parameter_noinfo();
    v8 = 4 * v3;
    *(_BYTE *)(*(_DWORD *)(v8 + *(this + 0x19)) + 0x1E) = v13;
    if ( sub_78EB40(a2) != 0x3A9B )
    {
      LODWORD(v12) = 0x1A;
      v18 = 0xF;
      v17 = 0;
      v16 = 0;
      sub_414500(&v15, (int)a2, "malformed texture controls", v12);
      v25 = 1;
      sub_789190((std::exception *)v23, &v15, 0);
      ThrowException__((int)v23, &_TI3_AVIdvFileError__);
    }
    v9 = *(this + 0x19);
    if ( !v9 || i >= (*(this + 0x1A) - v9) >> 2 )
      _invalid_parameter_noinfo();
    v10 = v8 + *(this + 0x19);
    ++i;
    *(float *)(*(_DWORD *)v10 + 0x20) = sub_78EB10(a2);
  }
  result = sub_78EB40(a2);
  if ( result != 0x3A99 )
  {
    LODWORD(v12) = 0x1A;
    v22 = 0xF;
    v21 = 0;
    v20 = 0;
    sub_414500(&v19, (int)a2, "malformed texture controls", v12);
    v25 = 2;
    sub_789190((std::exception *)v24, &v19, 0);
    ThrowException__((int)v24, &_TI3_AVIdvFileError__);
  }
  return result;
}
