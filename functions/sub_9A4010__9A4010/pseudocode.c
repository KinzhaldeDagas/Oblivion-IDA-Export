signed int __stdcall sub_9A4010(int a1, int a2, NiObjectNET *a3, int a4, int a5, int a6, int a7, int a8)
{
  signed int result; // eax
  NiExtraData *ExtraData; // eax
  float *v10; // eax
  int v11; // ebx
  float *v12; // esi
  int v13; // ebx
  int v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax

  if ( !a3 ) /*0x9a4019*/
    return 1; /*0x9a401b*/
  ExtraData = NiObjectNET_GetExtraData(a3, *(const char **)(a2 + 0xC)); /*0x9a402d*/
  if ( !ExtraData ) /*0x9a4034*/
    return 0x80000010; /*0x9a4037*/
  v10 = sub_9A9040((_DWORD *)a2, (int)ExtraData); /*0x9a4045*/
  v11 = *(_DWORD *)(a2 + 0x14); /*0x9a4051*/
  v12 = v10; /*0x9a4054*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a4056*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a4058*/
  result = 3; /*0x9a4063*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v11] == 3 ) /*0x9a406f*/
  {
    unk_BAAA70[4 * a1] = (float)*(unsigned int *)v12; /*0x9a4088*/
  }
  else
  {
    v13 = *(_DWORD *)(a2 + 0x14); /*0x9a4099*/
    if ( !g_D3DXParameterDispatchInitialized ) /*0x9a409c*/
      NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a409e*/
    result = 4; /*0x9a40a9*/
    if ( g_D3DXParameterClassDispatch[(unsigned __int8)v13] == 4 ) /*0x9a40b5*/
    {
      unk_BAAA70[4 * a1] = *v12; /*0x9a40c2*/
    }
    else if ( sub_783340((_DWORD *)a2) ) /*0x9a40ce*/
    {
      v14 = 0x10 * a1; /*0x9a40dd*/
      *(float *)(v14 + 0xBAAA70) = *v12; /*0x9a40e0*/
      *(float *)(v14 + 0xBAAA74) = v12[1]; /*0x9a40eb*/
      return 5; /*0x9a40f1*/
    }
    else if ( sub_783370((_DWORD *)a2) ) /*0x9a40fc*/
    {
      v15 = (float *)(0x10 * a1); /*0x9a410b*/
      v15[0x2EAA9C] = *v12; /*0x9a410e*/
      v15[0x2EAA9D] = v12[1]; /*0x9a4119*/
      v15[0x2EAA9E] = v12[2]; /*0x9a4123*/
      return 6; /*0x9a4129*/
    }
    else if ( sub_7833A0((_DWORD *)a2) ) /*0x9a4133*/
    {
      v16 = (float *)(0x10 * a1); /*0x9a4142*/
      v16[0x2EAA9C] = *v12; /*0x9a4145*/
      v16[0x2EAA9D] = v12[1]; /*0x9a4150*/
      v16[0x2EAA9E] = v12[2]; /*0x9a4159*/
      v16[0x2EAA9F] = v12[3]; /*0x9a4163*/
      return 7; /*0x9a4169*/
    }
    else if ( sub_782DE0((_DWORD *)a2) ) /*0x9a4173*/
    {
      v17 = (float *)(a1 << 6); /*0x9a4186*/
      v17[0x2EAA78] = *v12; /*0x9a4189*/
      v17[0x2EAA79] = v12[1]; /*0x9a4194*/
      v17[0x2EAA7A] = v12[2]; /*0x9a419d*/
      v17[0x2EAA7B] = 0.0; /*0x9a41a5*/
      v17[0x2EAA7C] = v12[3]; /*0x9a41ae*/
      v17[0x2EAA7D] = v12[4]; /*0x9a41b7*/
      v17[0x2EAA7E] = v12[5]; /*0x9a41c0*/
      v17[0x2EAA7F] = 0.0; /*0x9a41c6*/
      v17[0x2EAA80] = v12[6]; /*0x9a41cf*/
      v17[0x2EAA81] = v12[7]; /*0x9a41d8*/
      v17[0x2EAA82] = v12[8]; /*0x9a41e2*/
      v17[0x2EAA83] = 0.0; /*0x9a41e8*/
      v17[0x2EAA84] = 0.0; /*0x9a41ee*/
      v17[0x2EAA85] = 0.0; /*0x9a41f4*/
      v17[0x2EAA86] = 0.0; /*0x9a41fa*/
      v17[0x2EAA87] = 1.0; /*0x9a4202*/
      return 8; /*0x9a4208*/
    }
    else if ( sub_782E10((_DWORD *)a2) ) /*0x9a4212*/
    {
      v18 = (float *)(a1 << 6); /*0x9a4225*/
      v18[0x2EAA78] = *v12; /*0x9a4228*/
      v18[0x2EAA79] = v12[1]; /*0x9a4233*/
      v18[0x2EAA7A] = v12[2]; /*0x9a423c*/
      v18[0x2EAA7B] = v12[3]; /*0x9a4245*/
      v18[0x2EAA7C] = v12[4]; /*0x9a424e*/
      v18[0x2EAA7D] = v12[5]; /*0x9a4257*/
      v18[0x2EAA7E] = v12[6]; /*0x9a4260*/
      v18[0x2EAA7F] = v12[7]; /*0x9a4269*/
      v18[0x2EAA80] = v12[8]; /*0x9a4272*/
      v18[0x2EAA81] = v12[9]; /*0x9a427b*/
      v18[0x2EAA82] = v12[0xA]; /*0x9a4284*/
      v18[0x2EAA83] = v12[0xB]; /*0x9a428d*/
      v18[0x2EAA84] = v12[0xC]; /*0x9a4296*/
      v18[0x2EAA85] = v12[0xD]; /*0x9a429f*/
      v18[0x2EAA86] = v12[0xE]; /*0x9a42a8*/
      v18[0x2EAA87] = v12[0xF]; /*0x9a42b2*/
      return 9; /*0x9a42b8*/
    }
    else if ( sub_7833D0((_DWORD *)a2) ) /*0x9a42c2*/
    {
      v19 = (float *)(0x10 * a1); /*0x9a42d1*/
      v19[0x2EAA9C] = *v12; /*0x9a42d4*/
      v19[0x2EAA9D] = v12[1]; /*0x9a42df*/
      v19[0x2EAA9E] = v12[2]; /*0x9a42e8*/
      v19[0x2EAA9F] = v12[3]; /*0x9a42f2*/
      return 0xA; /*0x9a42f8*/
    }
    else
    {
      return 0; /*0x9a4302*/
    }
  }
  return result; /*0x9a4020*/
}
