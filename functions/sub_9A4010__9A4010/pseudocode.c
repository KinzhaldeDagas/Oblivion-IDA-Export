signed int __stdcall sub_9A4010(int a1, int a2, NiObjectNET *a3, int a4, int a5, int a6, int a7, int a8)
{
  signed int result; // eax
  NiExtraData *ExtraData; // eax
  int *v10; // eax
  int v11; // ebx
  int *v12; // esi
  int v13; // ebx
  int v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax

  if ( !a3 )
    return 1;
  ExtraData = NiObjectNET_GetExtraData(a3, *(const char **)(a2 + 0xC));
  if ( !ExtraData )
    return 0x80000010;
  v10 = sub_9A9040((_DWORD *)a2, (int)ExtraData);
  v11 = *(_DWORD *)(a2 + 0x14);
  v12 = v10;
  if ( !byte_B4295B )
    sub_783C70();
  result = 3;
  if ( dword_B428D8[(unsigned __int8)v11] == 3 )
  {
    flt_BAAA70[4 * a1] = (float)(unsigned int)*v12;
  }
  else
  {
    v13 = *(_DWORD *)(a2 + 0x14);
    if ( !byte_B4295B )
      sub_783C70();
    result = 4;
    if ( dword_B428D8[(unsigned __int8)v13] == 4 )
    {
      flt_BAAA70[4 * a1] = *(float *)v12;
    }
    else if ( sub_783340((_DWORD *)a2) )
    {
      v14 = 0x10 * a1;
      *(float *)(v14 + 0xBAAA70) = *(float *)v12;
      *(float *)(v14 + 0xBAAA74) = *((float *)v12 + 1);
      return 5;
    }
    else if ( sub_783370((_DWORD *)a2) )
    {
      v15 = (float *)(0x10 * a1);
      v15[0x2EAA9C] = *(float *)v12;
      v15[0x2EAA9D] = *((float *)v12 + 1);
      v15[0x2EAA9E] = *((float *)v12 + 2);
      return 6;
    }
    else if ( sub_7833A0((_DWORD *)a2) )
    {
      v16 = (float *)(0x10 * a1);
      v16[0x2EAA9C] = *(float *)v12;
      v16[0x2EAA9D] = *((float *)v12 + 1);
      v16[0x2EAA9E] = *((float *)v12 + 2);
      v16[0x2EAA9F] = *((float *)v12 + 3);
      return 7;
    }
    else if ( sub_782DE0((_DWORD *)a2) )
    {
      v17 = (float *)(a1 << 6);
      v17[0x2EAA78] = *(float *)v12;
      v17[0x2EAA79] = *((float *)v12 + 1);
      v17[0x2EAA7A] = *((float *)v12 + 2);
      v17[0x2EAA7B] = 0.0;
      v17[0x2EAA7C] = *((float *)v12 + 3);
      v17[0x2EAA7D] = *((float *)v12 + 4);
      v17[0x2EAA7E] = *((float *)v12 + 5);
      v17[0x2EAA7F] = 0.0;
      v17[0x2EAA80] = *((float *)v12 + 6);
      v17[0x2EAA81] = *((float *)v12 + 7);
      v17[0x2EAA82] = *((float *)v12 + 8);
      v17[0x2EAA83] = 0.0;
      v17[0x2EAA84] = 0.0;
      v17[0x2EAA85] = 0.0;
      v17[0x2EAA86] = 0.0;
      v17[0x2EAA87] = 1.0;
      return 8;
    }
    else if ( sub_782E10((_DWORD *)a2) )
    {
      v18 = (float *)(a1 << 6);
      v18[0x2EAA78] = *(float *)v12;
      v18[0x2EAA79] = *((float *)v12 + 1);
      v18[0x2EAA7A] = *((float *)v12 + 2);
      v18[0x2EAA7B] = *((float *)v12 + 3);
      v18[0x2EAA7C] = *((float *)v12 + 4);
      v18[0x2EAA7D] = *((float *)v12 + 5);
      v18[0x2EAA7E] = *((float *)v12 + 6);
      v18[0x2EAA7F] = *((float *)v12 + 7);
      v18[0x2EAA80] = *((float *)v12 + 8);
      v18[0x2EAA81] = *((float *)v12 + 9);
      v18[0x2EAA82] = *((float *)v12 + 0xA);
      v18[0x2EAA83] = *((float *)v12 + 0xB);
      v18[0x2EAA84] = *((float *)v12 + 0xC);
      v18[0x2EAA85] = *((float *)v12 + 0xD);
      v18[0x2EAA86] = *((float *)v12 + 0xE);
      v18[0x2EAA87] = *((float *)v12 + 0xF);
      return 9;
    }
    else if ( sub_7833D0((_DWORD *)a2) )
    {
      v19 = (float *)(0x10 * a1);
      v19[0x2EAA9C] = *(float *)v12;
      v19[0x2EAA9D] = *((float *)v12 + 1);
      v19[0x2EAA9E] = *((float *)v12 + 2);
      v19[0x2EAA9F] = *((float *)v12 + 3);
      return 0xA;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
