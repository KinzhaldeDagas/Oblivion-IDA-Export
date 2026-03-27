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

  v17[0x130] = "water\\2_ab\\v\\water.v.hlsl";
  memset(v18, 0, sizeof(v18));
  v19 = "water\\2_ab\\v\\water.v.hlsl";
  v20[0] = (int)"WADING";
  v20[1] = (int)EmptyString;
  memset(&v20[2], 0, 0x40);
  sub_801030("water\\2_ab\\v\\water.v.hlsl", (int)FileName);
  _sprintf(v22, "WATER000.vso");
  VertexShader = (volatile LONG *)CreateVertexShader(FileName, v18, "vs_1_1", v22, 0, 0);
  v3 = this->Vertex[0];
  v11 = VertexShader;
  if ( v3 != (NiD3DVertexShader *)VertexShader )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v3 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v3)(v3, 1);
      VertexShader = v11;
    }
    this->Vertex[0] = (NiD3DVertexShader *)VertexShader;
    if ( VertexShader )
      InterlockedIncrement(VertexShader + 1);
  }
  sub_801030(v19, (int)FileName);
  _sprintf(v22, "WATER001.vso");
  v4 = (volatile LONG *)CreateVertexShader(FileName, v20, "vs_1_1", v22, 0, 0);
  v5 = this->Vertex[1];
  v12 = v4;
  if ( v5 != (NiD3DVertexShader *)v4 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v5 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v5)(v5, 1);
      v4 = v12;
    }
    this->Vertex[1] = (NiD3DVertexShader *)v4;
    if ( v4 )
      InterlockedIncrement(v4 + 1);
  }
  Str1 = "ps_1_3";
  if ( ShaderPackage >= 2 )
    Str1 = "ps_2_0";
  if ( ShaderPackage <= 4 )
    _sprintf(v21, "water\\2_0\\p\\water.p.hlsl");
  else
    _sprintf(v21, "water\\2_ab\\p\\water.p.hlsl");
  v17[0] = v21;
  v17[1] = "WATER";
  v17[2] = EmptyString;
  v17[3] = "REFLECTIONS";
  v17[4] = EmptyString;
  v17[5] = "DEPTH";
  v17[6] = EmptyString;
  v17[7] = &off_A90D88;
  v17[8] = EmptyString;
  memset(&v17[9], 0, 0x28);
  v17[0x13] = v21;
  v17[0x14] = "WATER";
  v17[0x15] = EmptyString;
  v17[0x16] = "REFLECTIONS";
  v17[0x17] = EmptyString;
  v17[0x18] = &off_A90D88;
  v17[0x19] = EmptyString;
  memset(&v17[0x1A], 0, 0x30);
  v17[0x26] = v21;
  v17[0x27] = "WATER";
  v17[0x28] = EmptyString;
  v17[0x29] = "DEPTH";
  v17[0x2A] = EmptyString;
  v17[0x2B] = &off_A90D88;
  v17[0x2C] = EmptyString;
  memset(&v17[0x2D], 0, 0x30);
  v17[0x39] = v21;
  v17[0x3A] = "WATER";
  v17[0x3B] = EmptyString;
  v17[0x3C] = &off_A90D88;
  v17[0x3D] = EmptyString;
  memset(&v17[0x3E], 0, 0x38);
  v17[0x4C] = v21;
  v17[0x4D] = "WATER";
  v17[0x4E] = EmptyString;
  v17[0x4F] = "INTERIORWATER";
  v17[0x50] = EmptyString;
  v17[0x51] = "REFLECTIONS";
  v17[0x52] = EmptyString;
  v17[0x53] = &off_A90D88;
  v17[0x54] = EmptyString;
  memset(&v17[0x55], 0, 0x28);
  v17[0x62] = "INTERIORWATER";
  v17[0x5F] = v21;
  v17[0x60] = "WATER";
  v17[0x61] = EmptyString;
  v17[0x63] = EmptyString;
  v17[0x64] = &off_A90D88;
  v17[0x65] = EmptyString;
  memset(&v17[0x66], 0, 0x30);
  v17[0x72] = v21;
  v17[0x73] = "UNDERWATER";
  v17[0x74] = EmptyString;
  v17[0x75] = &off_A90D88;
  v17[0x76] = EmptyString;
  memset(&v17[0x77], 0, 0x38);
  v17[0x85] = v21;
  v17[0x8C] = "DEPTH";
  v17[0x98] = v21;
  v17[0x9D] = "DEPTH";
  v17[0x86] = "WATER";
  v17[0x87] = EmptyString;
  v17[0x88] = "REFLECTIONS";
  v17[0x89] = EmptyString;
  v17[0x8A] = "WADING";
  v17[0x8B] = EmptyString;
  v17[0x8D] = EmptyString;
  v17[0x8E] = &off_A90D88;
  v17[0x8F] = EmptyString;
  memset(&v17[0x90], 0, 0x20);
  v17[0x99] = "WATER";
  v17[0x9A] = EmptyString;
  v17[0x9B] = "WADING";
  v17[0x9C] = EmptyString;
  v17[0x9E] = EmptyString;
  v17[0x9F] = &off_A90D88;
  v17[0xA0] = EmptyString;
  memset(&v17[0xA1], 0, 0x28);
  v17[0xAB] = v21;
  v17[0xAC] = "WATER";
  v17[0xAD] = EmptyString;
  v17[0xAE] = "INTERIORWATER";
  v17[0xC1] = "INTERIORWATER";
  v17[0xB2] = "WADING";
  v17[0xBE] = v21;
  v17[0xC3] = "WADING";
  v17[0xAF] = EmptyString;
  v17[0xB0] = "REFLECTIONS";
  v17[0xB1] = EmptyString;
  v17[0xB3] = EmptyString;
  v17[0xB4] = &off_A90D88;
  v17[0xB5] = EmptyString;
  memset(&v17[0xB6], 0, 0x20);
  v17[0xBF] = "WATER";
  v17[0xC0] = EmptyString;
  v17[0xC2] = EmptyString;
  v17[0xC4] = EmptyString;
  v17[0xC5] = &off_A90D88;
  v17[0xC6] = EmptyString;
  memset(&v17[0xC7], 0, 0x28);
  v17[0xD1] = v21;
  v17[0xD2] = "LAVA";
  v17[0xD3] = EmptyString;
  v17[0xD4] = &off_A90D88;
  v17[0xD5] = EmptyString;
  memset(&v17[0xD6], 0, 0x38);
  v17[0xE4] = v21;
  v17[0xE5] = "WATER";
  v17[0xE6] = EmptyString;
  v17[0xE7] = "REFLECTIONS";
  v17[0xE8] = EmptyString;
  v17[0xE9] = &off_A9186C;
  v17[0xEA] = EmptyString;
  v17[0xEB] = &off_A90D88;
  v17[0xEC] = EmptyString;
  memset(&v17[0xED], 0, 0x28);
  v17[0xF7] = v21;
  v17[0xF8] = "WATER";
  v17[0xF9] = EmptyString;
  v17[0xFA] = &off_A9186C;
  v17[0xFB] = EmptyString;
  v17[0xFC] = &off_A90D88;
  v17[0xFD] = EmptyString;
  memset(&v17[0xFE], 0, 0x30);
  v17[0x10A] = v21;
  v17[0x10B] = "LAVA";
  v17[0x10C] = EmptyString;
  v17[0x10D] = "LOD_LAVA";
  v17[0x10E] = EmptyString;
  v17[0x10F] = &off_A90D88;
  v17[0x110] = EmptyString;
  memset(&v17[0x111], 0, 0x30);
  v17[0x11D] = v21;
  v17[0x11E] = "WATER";
  v17[0x11F] = EmptyString;
  v17[0x120] = "REFLECTIONS";
  v17[0x121] = EmptyString;
  memset(&v17[0x122], 0, 0x38);
  v6 = 0;
  v7 = (char **)v17;
  v15 = v17;
  Pixel = (char *)this->Pixel;
  do
  {
    result = *v7;
    if ( *v7 )
    {
      sub_801030(result, (int)FileName);
      _sprintf(v22, "WATER%03i.pso", v6);
      PixelShader = CreatePixelShader(FileName, v7 + 1, Str1, v22, 0, 1);
      result = Pixel;
      v10 = *(_DWORD *)Pixel;
      if ( *(NiD3DShaderProgram **)Pixel != PixelShader )
      {
        if ( v10 )
        {
          result = (char *)InterlockedDecrement((volatile LONG *)(v10 + 4));
          if ( !result )
            result = (char *)(**(int (__thiscall ***)(int, int))v10)(v10, 1);
        }
        *(_DWORD *)Pixel = PixelShader;
        if ( PixelShader )
          result = (char *)InterlockedIncrement((volatile LONG *)PixelShader + 1);
      }
    }
    Pixel += 4;
    ++v6;
    v7 = (char **)(v15 + 0x13);
    v15 += 0x13;
  }
  while ( v6 < 0x10 );
  return result;
}
