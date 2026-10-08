char *__thiscall LoadWaterShaders(WaterShader *this)
{
  volatile LONG *VertexShader; // eax
  NiD3DVertexShader *v3; // ebx
  volatile LONG *v4; // eax
  NiD3DVertexShader *v5; // ebx
  int v6; // ebx
  char **v7; // esi
  char *result; // eax
  NiD3DShaderProgram *PixelShader; // ebp
  int v10; // esi
  volatile LONG *v11; // [esp+10h] [ebp-874h]
  volatile LONG *v12; // [esp+10h] [ebp-874h]
  char *Pixel; // [esp+10h] [ebp-874h]
  _DWORD *v15; // [esp+18h] [ebp-86Ch]
  char *Str1; // [esp+1Ch] [ebp-868h]
  _DWORD v17[305]; // [esp+20h] [ebp-864h] BYREF
  int v18[18]; // [esp+4E4h] [ebp-3A0h] BYREF
  char *v19; // [esp+52Ch] [ebp-358h]
  int v20[18]; // [esp+530h] [ebp-354h] BYREF
  char v21[256]; // [esp+578h] [ebp-30Ch] BYREF
  char v22[260]; // [esp+678h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+77Ch] [ebp-108h] BYREF

  v17[0x130] = "water\\2_ab\\v\\water.v.hlsl"; /*0x7db870*/
  memset(v18, 0, sizeof(v18)); /*0x7db877*/
  v19 = "water\\2_ab\\v\\water.v.hlsl"; /*0x7db893*/
  v20[0] = (int)"WADING"; /*0x7db8a8*/
  v20[1] = (int)EmptyString; /*0x7db8b3*/
  memset(&v20[2], 0, 0x40); /*0x7db8ba*/
  sub_801030("water\\2_ab\\v\\water.v.hlsl", (int)FileName); /*0x7db8d6*/
  _sprintf(v22, "WATER000.vso"); /*0x7db8e8*/
  VertexShader = (volatile LONG *)CreateVertexShader(FileName, v18, "vs_1_1", v22, 0, 0); /*0x7db911*/
  v3 = this->Vertex[0]; /*0x7db916*/
  v11 = VertexShader; /*0x7db91e*/
  if ( v3 != (NiD3DVertexShader *)VertexShader ) /*0x7db922*/
  {
    if ( v3 ) /*0x7db926*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v3 + 1) ) /*0x7db92c*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v3)(v3, 1); /*0x7db942*/
      VertexShader = v11; /*0x7db944*/
    }
    this->Vertex[0] = (NiD3DVertexShader *)VertexShader; /*0x7db94a*/
    if ( VertexShader ) /*0x7db950*/
      InterlockedIncrement(VertexShader + 1); /*0x7db956*/
  }
  sub_801030(v19, (int)FileName); /*0x7db96c*/
  _sprintf(v22, "WATER001.vso"); /*0x7db97e*/
  v4 = (volatile LONG *)CreateVertexShader(FileName, v20, "vs_1_1", v22, 0, 0); /*0x7db9a7*/
  v5 = this->Vertex[1]; /*0x7db9ac*/
  v12 = v4; /*0x7db9b4*/
  if ( v5 != (NiD3DVertexShader *)v4 ) /*0x7db9b8*/
  {
    if ( v5 ) /*0x7db9bc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v5 + 1) ) /*0x7db9c2*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v5)(v5, 1); /*0x7db9d8*/
      v4 = v12; /*0x7db9da*/
    }
    this->Vertex[1] = (NiD3DVertexShader *)v4; /*0x7db9e0*/
    if ( v4 ) /*0x7db9e6*/
      InterlockedIncrement(v4 + 1); /*0x7db9ec*/
  }
  Str1 = "ps_1_3"; /*0x7db9fa*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x7dba02*/
    Str1 = "ps_2_0"; /*0x7dba04*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] <= 4 ) /*0x7dba0f*/
    _sprintf(v21, "water\\2_0\\p\\water.p.hlsl"); /*0x7dba2d*/
  else
    _sprintf(v21, "water\\2_ab\\p\\water.p.hlsl"); /*0x7dba1e*/
  v17[0] = v21; /*0x7dba3c*/
  v17[1] = "WATER"; /*0x7dba87*/
  v17[2] = EmptyString; /*0x7dba8b*/
  v17[3] = "REFLECTIONS"; /*0x7dba8f*/
  v17[4] = EmptyString; /*0x7dba93*/
  v17[5] = "DEPTH"; /*0x7dba97*/
  v17[6] = EmptyString; /*0x7dba9f*/
  v17[7] = &off_A90D88; /*0x7dbaa3*/
  v17[8] = EmptyString; /*0x7dbaa7*/
  memset(&v17[9], 0, 0x28); /*0x7dbaab*/
  v17[0x13] = v21; /*0x7dbaaf*/
  v17[0x14] = "WATER"; /*0x7dbab3*/
  v17[0x15] = EmptyString; /*0x7dbab7*/
  v17[0x16] = "REFLECTIONS"; /*0x7dbabe*/
  v17[0x17] = EmptyString; /*0x7dbac5*/
  v17[0x18] = &off_A90D88; /*0x7dbacc*/
  v17[0x19] = EmptyString; /*0x7dbad3*/
  memset(&v17[0x1A], 0, 0x30); /*0x7dbada*/
  v17[0x26] = v21; /*0x7dbaf8*/
  v17[0x27] = "WATER"; /*0x7dbaff*/
  v17[0x28] = EmptyString; /*0x7dbb06*/
  v17[0x29] = "DEPTH"; /*0x7dbb0d*/
  v17[0x2A] = EmptyString; /*0x7dbb18*/
  v17[0x2B] = &off_A90D88; /*0x7dbb1f*/
  v17[0x2C] = EmptyString; /*0x7dbb26*/
  memset(&v17[0x2D], 0, 0x30); /*0x7dbb2d*/
  v17[0x39] = v21; /*0x7dbb4b*/
  v17[0x3A] = "WATER"; /*0x7dbb52*/
  v17[0x3B] = EmptyString; /*0x7dbb59*/
  v17[0x3C] = &off_A90D88; /*0x7dbb60*/
  v17[0x3D] = EmptyString; /*0x7dbb67*/
  memset(&v17[0x3E], 0, 0x38); /*0x7dbb6e*/
  v17[0x4C] = v21; /*0x7dbb88*/
  v17[0x4D] = "WATER"; /*0x7dbb8f*/
  v17[0x4E] = EmptyString; /*0x7dbb96*/
  v17[0x4F] = "INTERIORWATER"; /*0x7dbb9d*/
  v17[0x50] = EmptyString; /*0x7dbba4*/
  v17[0x51] = "REFLECTIONS"; /*0x7dbbab*/
  v17[0x52] = EmptyString; /*0x7dbbb6*/
  v17[0x53] = &off_A90D88; /*0x7dbbbd*/
  v17[0x54] = EmptyString; /*0x7dbbc4*/
  memset(&v17[0x55], 0, 0x28); /*0x7dbbcb*/
  v17[0x62] = "INTERIORWATER"; /*0x7dbbe2*/
  v17[0x5F] = v21; /*0x7dbc25*/
  v17[0x60] = "WATER"; /*0x7dbc2c*/
  v17[0x61] = EmptyString; /*0x7dbc33*/
  v17[0x63] = EmptyString; /*0x7dbc3a*/
  v17[0x64] = &off_A90D88; /*0x7dbc41*/
  v17[0x65] = EmptyString; /*0x7dbc48*/
  memset(&v17[0x66], 0, 0x30); /*0x7dbc4f*/
  v17[0x72] = v21; /*0x7dbc6d*/
  v17[0x73] = "UNDERWATER"; /*0x7dbc74*/
  v17[0x74] = EmptyString; /*0x7dbc7f*/
  v17[0x75] = &off_A90D88; /*0x7dbc86*/
  v17[0x76] = EmptyString; /*0x7dbc8d*/
  memset(&v17[0x77], 0, 0x38); /*0x7dbc94*/
  v17[0x85] = v21; /*0x7dbce6*/
  v17[0x8C] = "DEPTH"; /*0x7dbcf2*/
  v17[0x98] = v21; /*0x7dbcf9*/
  v17[0x9D] = "DEPTH"; /*0x7dbd02*/
  v17[0x86] = "WATER"; /*0x7dbd10*/
  v17[0x87] = EmptyString; /*0x7dbd17*/
  v17[0x88] = "REFLECTIONS"; /*0x7dbd1e*/
  v17[0x89] = EmptyString; /*0x7dbd29*/
  v17[0x8A] = "WADING"; /*0x7dbd30*/
  v17[0x8B] = EmptyString; /*0x7dbd37*/
  v17[0x8D] = EmptyString; /*0x7dbd3e*/
  v17[0x8E] = &off_A90D88; /*0x7dbd45*/
  v17[0x8F] = EmptyString; /*0x7dbd4c*/
  memset(&v17[0x90], 0, 0x20); /*0x7dbd53*/
  v17[0x99] = "WATER"; /*0x7dbd5a*/
  v17[0x9A] = EmptyString; /*0x7dbd61*/
  v17[0x9B] = "WADING"; /*0x7dbd68*/
  v17[0x9C] = EmptyString; /*0x7dbd6f*/
  v17[0x9E] = EmptyString; /*0x7dbd76*/
  v17[0x9F] = &off_A90D88; /*0x7dbd7d*/
  v17[0xA0] = EmptyString; /*0x7dbd84*/
  memset(&v17[0xA1], 0, 0x28); /*0x7dbd8b*/
  v17[0xAB] = v21; /*0x7dbdd1*/
  v17[0xAC] = "WATER"; /*0x7dbdd8*/
  v17[0xAD] = EmptyString; /*0x7dbddf*/
  v17[0xAE] = "INTERIORWATER"; /*0x7dbe25*/
  v17[0xC1] = "INTERIORWATER"; /*0x7dbe2c*/
  v17[0xB2] = "WADING"; /*0x7dbe33*/
  v17[0xBE] = v21; /*0x7dbe3a*/
  v17[0xC3] = "WADING"; /*0x7dbe43*/
  v17[0xAF] = EmptyString; /*0x7dbe5a*/
  v17[0xB0] = "REFLECTIONS"; /*0x7dbe61*/
  v17[0xB1] = EmptyString; /*0x7dbe6c*/
  v17[0xB3] = EmptyString; /*0x7dbe73*/
  v17[0xB4] = &off_A90D88; /*0x7dbe7a*/
  v17[0xB5] = EmptyString; /*0x7dbe81*/
  memset(&v17[0xB6], 0, 0x20); /*0x7dbe88*/
  v17[0xBF] = "WATER"; /*0x7dbe8f*/
  v17[0xC0] = EmptyString; /*0x7dbe96*/
  v17[0xC2] = EmptyString; /*0x7dbe9d*/
  v17[0xC4] = EmptyString; /*0x7dbea4*/
  v17[0xC5] = &off_A90D88; /*0x7dbeab*/
  v17[0xC6] = EmptyString; /*0x7dbeb2*/
  memset(&v17[0xC7], 0, 0x28); /*0x7dbeb9*/
  v17[0xD1] = v21; /*0x7dbeff*/
  v17[0xD2] = "LAVA"; /*0x7dbf06*/
  v17[0xD3] = EmptyString; /*0x7dbf11*/
  v17[0xD4] = &off_A90D88; /*0x7dbf18*/
  v17[0xD5] = EmptyString; /*0x7dbf1f*/
  memset(&v17[0xD6], 0, 0x38); /*0x7dbf26*/
  v17[0xE4] = v21; /*0x7dbf3c*/
  v17[0xE5] = "WATER"; /*0x7dbf51*/
  v17[0xE6] = EmptyString; /*0x7dbf58*/
  v17[0xE7] = "REFLECTIONS"; /*0x7dbf5f*/
  v17[0xE8] = EmptyString; /*0x7dbf6a*/
  v17[0xE9] = &off_A9186C; /*0x7dbf71*/
  v17[0xEA] = EmptyString; /*0x7dbf78*/
  v17[0xEB] = &off_A90D88; /*0x7dbf7f*/
  v17[0xEC] = EmptyString; /*0x7dbf86*/
  memset(&v17[0xED], 0, 0x28); /*0x7dbf8d*/
  v17[0xF7] = v21; /*0x7dbfd3*/
  v17[0xF8] = "WATER"; /*0x7dbfda*/
  v17[0xF9] = EmptyString; /*0x7dbfe1*/
  v17[0xFA] = &off_A9186C; /*0x7dbfe8*/
  v17[0xFB] = EmptyString; /*0x7dbfef*/
  v17[0xFC] = &off_A90D88; /*0x7dbff6*/
  v17[0xFD] = EmptyString; /*0x7dbffd*/
  memset(&v17[0xFE], 0, 0x30); /*0x7dc00f*/
  v17[0x10A] = v21; /*0x7dc02d*/
  v17[0x10B] = "LAVA"; /*0x7dc034*/
  v17[0x10C] = EmptyString; /*0x7dc03f*/
  v17[0x10D] = "LOD_LAVA"; /*0x7dc046*/
  v17[0x10E] = EmptyString; /*0x7dc051*/
  v17[0x10F] = &off_A90D88; /*0x7dc058*/
  v17[0x110] = EmptyString; /*0x7dc05f*/
  memset(&v17[0x111], 0, 0x30); /*0x7dc066*/
  v17[0x11D] = v21; /*0x7dc084*/
  v17[0x11E] = "WATER"; /*0x7dc08b*/
  v17[0x11F] = EmptyString; /*0x7dc092*/
  v17[0x120] = "REFLECTIONS"; /*0x7dc099*/
  v17[0x121] = EmptyString; /*0x7dc0a4*/
  memset(&v17[0x122], 0, 0x38); /*0x7dc0ab*/
  v6 = 0; /*0x7dc0be*/
  v7 = (char **)v17; /*0x7dc0c0*/
  v15 = v17; /*0x7dc0ca*/
  Pixel = (char *)this->Pixel; /*0x7dc0ce*/
  do /*0x7dc17b*/
  {
    result = *v7; /*0x7dc0d2*/
    if ( *v7 ) /*0x7dc0d2*/
    {
      sub_801030(result, (int)FileName); /*0x7dc0e5*/
      _sprintf(v22, "WATER%03i.pso", v6); /*0x7dc0f8*/
      PixelShader = CreatePixelShader(FileName, v7 + 1, Str1, v22, 0, 1); /*0x7dc125*/
      result = Pixel; /*0x7dc127*/
      v10 = *(_DWORD *)Pixel; /*0x7dc12b*/
      if ( *(NiD3DShaderProgram **)Pixel != PixelShader ) /*0x7dc12f*/
      {
        if ( v10 ) /*0x7dc133*/
        {
          result = (char *)InterlockedDecrement((volatile LONG *)(v10 + 4)); /*0x7dc139*/
          if ( !result ) /*0x7dc141*/
            result = (char *)(**(int (__thiscall ***)(int, int))v10)(v10, 1); /*0x7dc14f*/
        }
        *(_DWORD *)Pixel = PixelShader; /*0x7dc157*/
        if ( PixelShader ) /*0x7dc159*/
          result = (char *)InterlockedIncrement((volatile LONG *)PixelShader + 1); /*0x7dc15f*/
      }
    }
    Pixel += 4; /*0x7dc169*/
    ++v6; /*0x7dc16e*/
    v7 = (char **)(v15 + 0x13); /*0x7dc171*/
    v15 += 0x13; /*0x7dc177*/
  }
  while ( v6 < 0x10 ); /*0x7dc17b*/
  return result; /*0x7dc181*/
}
