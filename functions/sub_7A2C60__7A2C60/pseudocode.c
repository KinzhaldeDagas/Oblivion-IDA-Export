int __thiscall sub_7A2C60(_DWORD *this, unsigned int *a2)
{
  unsigned int v2; // ebp
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // ecx
  int v6; // ebx
  int v7; // ecx
  int v8; // ebx
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  int v12; // ebx
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  int result; // eax
  rsize_t v22; // [esp-4h] [ebp-ACh]
  int v23; // [esp+14h] [ebp-94h] BYREF
  char v24; // [esp+18h] [ebp-90h]
  int v25; // [esp+28h] [ebp-80h]
  int v26; // [esp+2Ch] [ebp-7Ch]
  _BYTE v27[40]; // [esp+30h] [ebp-78h] BYREF
  int v28; // [esp+58h] [ebp-50h] BYREF
  char v29; // [esp+5Ch] [ebp-4Ch]
  int v30; // [esp+6Ch] [ebp-3Ch]
  int v31; // [esp+70h] [ebp-38h]
  _BYTE v32[40]; // [esp+74h] [ebp-34h] BYREF
  int v33; // [esp+A4h] [ebp-4h]

  v2 = 0;
  v3 = this + 0x18;
  while ( 1 )
  {
    v4 = v3[1];
    if ( !v4 || v2 >= (v3[2] - v4) >> 2 )
      break;
    if ( sub_78EB40(a2) != 0x3E82 )
    {
      LODWORD(v22) = 0x14;
      v26 = 0xF;
      v25 = 0;
      v24 = 0;
      sub_414500(&v23, (int)a2, "malformed flare info", v22);
      v33 = 0;
      sub_789190((std::exception *)v27, &v23, 0);
      ThrowException__((int)v27, &_TI3_AVIdvFileError__);
    }
    v5 = v3[1];
    if ( !v5 || v2 >= (v3[2] - v5) >> 2 )
      _invalid_parameter_noinfo();
    v6 = 4 * v2 + v3[1];
    *(float *)(*(_DWORD *)v6 + 0x24) = sub_78EB10(a2);
    if ( sub_78EB40(a2) != 0x3E83 )
    {
      LODWORD(v22) = 0x14;
      v26 = 0xF;
      v25 = 0;
      v24 = 0;
      sub_414500(&v23, (int)a2, "malformed flare info", v22);
      v33 = 1;
      sub_789190((std::exception *)v27, &v23, 0);
      ThrowException__((int)v27, &_TI3_AVIdvFileError__);
    }
    v7 = v3[1];
    if ( !v7 || v2 >= (v3[2] - v7) >> 2 )
      _invalid_parameter_noinfo();
    v8 = 4 * v2 + v3[1];
    *(_DWORD *)(*(_DWORD *)v8 + 0x28) = sub_78EB40(a2);
    if ( sub_78EB40(a2) != 0x3E84 )
    {
      LODWORD(v22) = 0x14;
      v26 = 0xF;
      v25 = 0;
      v24 = 0;
      sub_414500(&v23, (int)a2, "malformed flare info", v22);
      v33 = 2;
      sub_789190((std::exception *)v27, &v23, 0);
      ThrowException__((int)v27, &_TI3_AVIdvFileError__);
    }
    v9 = v3[1];
    if ( !v9 || v2 >= (v3[2] - v9) >> 2 )
      _invalid_parameter_noinfo();
    v10 = 4 * v2 + v3[1];
    *(float *)(*(_DWORD *)v10 + 0x2C) = sub_78EB10(a2);
    if ( sub_78EB40(a2) != 0x3E85 )
    {
      LODWORD(v22) = 0x14;
      v26 = 0xF;
      v25 = 0;
      v24 = 0;
      sub_414500(&v23, (int)a2, "malformed flare info", v22);
      v33 = 3;
      sub_789190((std::exception *)v27, &v23, 0);
      ThrowException__((int)v27, &_TI3_AVIdvFileError__);
    }
    v11 = v3[1];
    if ( !v11 || v2 >= (v3[2] - v11) >> 2 )
      _invalid_parameter_noinfo();
    v12 = 4 * v2 + v3[1];
    *(float *)(*(_DWORD *)v12 + 0x30) = sub_78EB10(a2);
    if ( sub_78EB40(a2) != 0x3E86 )
    {
      sub_414750((int)&v23, "malformed flare info");
      v33 = 4;
      sub_789190((std::exception *)v27, &v23, 0);
      ThrowException__((int)v27, &_TI3_AVIdvFileError__);
    }
    v13 = v3[1];
    if ( !v13 || v2 >= (v3[2] - v13) >> 2 )
      _invalid_parameter_noinfo();
    v14 = 4 * v2 + v3[1];
    *(float *)(*(_DWORD *)v14 + 0x34) = sub_78EB10(a2);
    if ( sub_78EB40(a2) != 0x3E87 )
    {
      sub_414750((int)&v23, "malformed flare info");
      v33 = 5;
      sub_789190((std::exception *)v27, &v23, 0);
      ThrowException__((int)v27, &_TI3_AVIdvFileError__);
    }
    v15 = sub_54F7A0(v3, v2);
    *(float *)(*(_DWORD *)v15 + 0x38) = sub_78EB10(a2);
    if ( sub_78EB40(a2) != 0x3E88 )
    {
      sub_414750((int)&v23, "malformed flare info");
      v33 = 6;
      sub_789190((std::exception *)v27, &v23, 0);
      ThrowException__((int)v27, &_TI3_AVIdvFileError__);
    }
    v16 = sub_54F7A0(v3, v2);
    *(float *)(*(_DWORD *)v16 + 0x3C) = sub_78EB10(a2);
    if ( sub_78EB40(a2) != 0x3E89 )
    {
      sub_414750((int)&v23, "malformed flare info");
      v33 = 7;
      sub_789190((std::exception *)v27, &v23, 0);
      ThrowException__((int)v27, &_TI3_AVIdvFileError__);
    }
    v17 = sub_54F7A0(v3, v2);
    *(float *)(*(_DWORD *)v17 + 0x40) = sub_78EB10(a2);
    if ( sub_78EB40(a2) != 0x3E8A )
    {
      sub_414750((int)&v23, "malformed flare info");
      v33 = 8;
      sub_789190((std::exception *)v27, &v23, 0);
      ThrowException__((int)v27, &_TI3_AVIdvFileError__);
    }
    v18 = sub_54F7A0(v3, v2);
    *(float *)(*(_DWORD *)v18 + 0x44) = sub_78EB10(a2);
    if ( sub_78EB40(a2) != 0x3E8B )
    {
      sub_414750((int)&v23, "malformed flare info");
      v33 = 9;
      sub_789190((std::exception *)v27, &v23, 0);
      ThrowException__((int)v27, &_TI3_AVIdvFileError__);
    }
    v19 = sub_54F7A0(v3, v2);
    *(float *)(*(_DWORD *)v19 + 0x48) = sub_78EB10(a2);
    if ( sub_78EB40(a2) != 0x3E8C )
    {
      sub_414750((int)&v23, "malformed flare info");
      v33 = 0xA;
      sub_789190((std::exception *)v27, &v23, 0);
      ThrowException__((int)v27, &_TI3_AVIdvFileError__);
    }
    v20 = sub_54F7A0(v3, v2);
    *(float *)(*(_DWORD *)v20 + 0x4C) = sub_78EB10(a2);
    ++v2;
  }
  result = sub_78EB40(a2);
  if ( result != 0x3E81 )
  {
    LODWORD(v22) = 0x14;
    v31 = 0xF;
    v30 = 0;
    v29 = 0;
    sub_414500(&v28, (int)a2, "malformed flare info", v22);
    v33 = 0xB;
    sub_789190((std::exception *)v32, &v28, 0);
    ThrowException__((int)v32, &_TI3_AVIdvFileError__);
  }
  return result;
}
