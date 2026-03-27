signed int __stdcall sub_9A3D20(int a1, _DWORD *a2, int a3)
{
  float *v3; // esi
  int v4; // ebx
  signed int result; // eax
  int v6; // ebx
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax

  v3 = (float *)a2[0xC];
  v4 = a2[5];
  if ( !byte_B4295B )
    sub_783C70();
  result = 3;
  if ( dword_B428D8[(unsigned __int8)v4] == 3 )
  {
    flt_BAAA70[4 * a1] = *v3;
  }
  else
  {
    v6 = a2[5];
    if ( !byte_B4295B )
      sub_783C70();
    result = 4;
    if ( dword_B428D8[(unsigned __int8)v6] == 4 )
    {
      flt_BAAA70[4 * a1] = *v3;
    }
    else
    {
      v7 = a2[5];
      if ( !byte_B4295B )
        sub_783C70();
      if ( dword_B428D8[(unsigned __int8)v7] == 5 )
      {
        v8 = 0x10 * a1;
        *(float *)(v8 + 0xBAAA70) = *v3;
        *(float *)(v8 + 0xBAAA74) = v3[1];
        return 5;
      }
      else
      {
        v9 = a2[5];
        if ( !byte_B4295B )
          sub_783C70();
        if ( dword_B428D8[(unsigned __int8)v9] == 6 )
        {
          v10 = (float *)(0x10 * a1);
          v10[0x2EAA9C] = *v3;
          v10[0x2EAA9D] = v3[1];
          v10[0x2EAA9E] = v3[2];
          return 6;
        }
        else if ( sub_7833A0(a2) )
        {
          v11 = (float *)(0x10 * a1);
          v11[0x2EAA9C] = *v3;
          v11[0x2EAA9D] = v3[1];
          v11[0x2EAA9E] = v3[2];
          v11[0x2EAA9F] = v3[3];
          return 7;
        }
        else if ( sub_782DE0(a2) )
        {
          v12 = (float *)(a1 << 6);
          v12[0x2EAA78] = *v3;
          v12[0x2EAA79] = v3[1];
          v12[0x2EAA7A] = v3[2];
          v12[0x2EAA7B] = 0.0;
          v12[0x2EAA7C] = v3[3];
          v12[0x2EAA7D] = v3[4];
          v12[0x2EAA7E] = v3[5];
          v12[0x2EAA7F] = 0.0;
          v12[0x2EAA80] = v3[6];
          v12[0x2EAA81] = v3[7];
          v12[0x2EAA82] = v3[8];
          v12[0x2EAA83] = 0.0;
          v12[0x2EAA84] = 0.0;
          v12[0x2EAA85] = 0.0;
          v12[0x2EAA86] = 0.0;
          v12[0x2EAA87] = 1.0;
          return 8;
        }
        else if ( sub_782E10(a2) )
        {
          v13 = (float *)(a1 << 6);
          v13[0x2EAA78] = *v3;
          v13[0x2EAA79] = v3[1];
          v13[0x2EAA7A] = v3[2];
          v13[0x2EAA7B] = v3[3];
          v13[0x2EAA7C] = v3[4];
          v13[0x2EAA7D] = v3[5];
          v13[0x2EAA7E] = v3[6];
          v13[0x2EAA7F] = v3[7];
          v13[0x2EAA80] = v3[8];
          v13[0x2EAA81] = v3[9];
          v13[0x2EAA82] = v3[0xA];
          v13[0x2EAA83] = v3[0xB];
          v13[0x2EAA84] = v3[0xC];
          v13[0x2EAA85] = v3[0xD];
          v13[0x2EAA86] = v3[0xE];
          v13[0x2EAA87] = v3[0xF];
          return 9;
        }
        else if ( sub_7833D0(a2) )
        {
          v14 = (float *)(0x10 * a1);
          v14[0x2EAA9C] = *v3;
          v14[0x2EAA9D] = v3[1];
          v14[0x2EAA9E] = v3[2];
          v14[0x2EAA9F] = v3[3];
          return 0xA;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return result;
}
