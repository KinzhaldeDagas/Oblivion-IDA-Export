int __thiscall sub_808190(char *this)
{
  int result; // eax
  bool v2; // cc
  int *v3; // ebp
  NiD3DShaderProgram *PixelShader; // edi
  int v5; // esi
  int *v6; // ebp
  NiD3DShaderProgram *v7; // edi
  int v8; // esi
  char *v9; // [esp+10h] [ebp-B04h]
  char *v10; // [esp+10h] [ebp-B04h]
  int v11; // [esp+14h] [ebp-B00h]
  int v12; // [esp+14h] [ebp-B00h]
  int v14; // [esp+1Ch] [ebp-AF8h]
  const char *v15; // [esp+20h] [ebp-AF4h]
  int v16[494]; // [esp+24h] [ebp-AF0h] BYREF
  int v17[75]; // [esp+7DCh] [ebp-338h] BYREF
  char FileName[260]; // [esp+908h] [ebp-20Ch] BYREF
  char v19[260]; // [esp+A0Ch] [ebp-108h] BYREF

  v15 = "lighting\\2x\\p\\ADTS.p.hlsl";
  v16[0] = (int)"PARALLAX";
  v16[1] = (int)EmptyString;
  memset(&v16[2], 0, 0x40);
  v16[0x12] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v16[0x13] = (int)"PARALLAX";
  v16[0x14] = (int)EmptyString;
  v16[0x15] = (int)"SI";
  v16[0x16] = (int)EmptyString;
  memset(&v16[0x17], 0, 0x38);
  v16[0x25] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v16[0x26] = (int)"PARALLAX";
  v16[0x27] = (int)EmptyString;
  v16[0x28] = (int)"PROJ_SHADOW";
  v16[0x29] = (int)EmptyString;
  memset(&v16[0x2A], 0, 0x38);
  v16[0x38] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v16[0x39] = (int)"PARALLAX";
  v16[0x3A] = (int)EmptyString;
  v16[0x3B] = (int)"SI";
  v16[0x3C] = (int)EmptyString;
  v16[0x3D] = (int)"PROJ_SHADOW";
  v16[0x3E] = (int)EmptyString;
  memset(&v16[0x3F], 0, 0x30);
  v16[0x4B] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v16[0x4C] = (int)"LIGHTS";
  v16[0x4D] = (int)"2";
  v16[0x4E] = (int)"PARALLAX";
  v16[0x4F] = (int)EmptyString;
  memset(&v16[0x50], 0, 0x38);
  v16[0x5E] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v16[0x5F] = (int)"LIGHTS";
  v16[0x60] = (int)"2";
  v16[0x61] = (int)"PARALLAX";
  v16[0x62] = (int)EmptyString;
  v16[0x63] = (int)"SI";
  v16[0x64] = (int)EmptyString;
  memset(&v16[0x65], 0, 0x30);
  v16[0x71] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v16[0x72] = (int)"LIGHTS";
  v16[0x73] = (int)"2";
  v16[0x74] = (int)"PARALLAX";
  v16[0x75] = (int)EmptyString;
  v16[0x76] = (int)"PROJ_SHADOW";
  v16[0x77] = (int)EmptyString;
  memset(&v16[0x78], 0, 0x30);
  v16[0x84] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v16[0x97] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v16[0x85] = (int)"LIGHTS";
  v16[0x86] = (int)"2";
  v16[0x87] = (int)"PARALLAX";
  v16[0x88] = (int)EmptyString;
  v16[0x89] = (int)"SI";
  v16[0x8A] = (int)EmptyString;
  v16[0x8B] = (int)"PROJ_SHADOW";
  v16[0x8C] = (int)EmptyString;
  memset(&v16[0x8D], 0, 0x28);
  v16[0x98] = (int)"SPECULAR";
  v16[0x99] = (int)EmptyString;
  v16[0x9A] = (int)"PARALLAX";
  v16[0x9B] = (int)EmptyString;
  memset(&v16[0x9C], 0, 0x38);
  v16[0xAA] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v16[0xAB] = (int)"SPECULAR";
  v16[0xAC] = (int)EmptyString;
  v16[0xAD] = (int)"PARALLAX";
  v16[0xAE] = (int)EmptyString;
  v16[0xAF] = (int)"SI";
  v16[0xB0] = (int)EmptyString;
  memset(&v16[0xB1], 0, 0x30);
  v16[0xBD] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v16[0xBE] = (int)"SPECULAR";
  v16[0xBF] = (int)EmptyString;
  v16[0xC0] = (int)"PARALLAX";
  v16[0xC1] = (int)EmptyString;
  v16[0xC2] = (int)"PROJ_SHADOW";
  v16[0xC3] = (int)EmptyString;
  memset(&v16[0xC4], 0, 0x30);
  v16[0xD0] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v16[0xD1] = (int)"SPECULAR";
  v16[0xD2] = (int)EmptyString;
  v16[0xD3] = (int)"PARALLAX";
  v16[0xD4] = (int)EmptyString;
  v16[0xD5] = (int)"SI";
  v16[0xD6] = (int)EmptyString;
  v16[0xD7] = (int)"PROJ_SHADOW";
  v16[0xD8] = (int)EmptyString;
  memset(&v16[0xD9], 0, 0x28);
  v16[0xE3] = (int)"lighting\\2x\\p\\AD.p.hlsl";
  v16[0xE4] = (int)"LIGHTS";
  v16[0xE5] = (int)"2";
  v16[0xE6] = (int)"PARALLAX";
  v16[0xE7] = (int)EmptyString;
  memset(&v16[0xE8], 0, 0x38);
  v16[0xF6] = (int)"lighting\\2x\\p\\AD.p.hlsl";
  v16[0xF7] = (int)"LIGHTS";
  v16[0xF8] = (int)"2";
  v16[0xF9] = (int)"PARALLAX";
  v16[0xFA] = (int)EmptyString;
  v16[0xFB] = (int)"SI";
  v16[0xFC] = (int)EmptyString;
  memset(&v16[0xFD], 0, 0x30);
  v16[0x109] = (int)"lighting\\2x\\p\\AD.p.hlsl";
  v16[0x10A] = (int)"LIGHTS";
  v16[0x10B] = (int)"2";
  v16[0x10C] = (int)"PARALLAX";
  v16[0x10D] = (int)EmptyString;
  v16[0x10E] = (int)"PROJ_SHADOW";
  v16[0x10F] = (int)EmptyString;
  memset(&v16[0x110], 0, 0x30);
  v16[0x11C] = (int)"lighting\\2x\\p\\AD.p.hlsl";
  v16[0x12F] = (int)"lighting\\2x\\p\\AD.p.hlsl";
  v16[0x11D] = (int)"LIGHTS";
  v16[0x11E] = (int)"2";
  v16[0x11F] = (int)"PARALLAX";
  v16[0x120] = (int)EmptyString;
  v16[0x121] = (int)"SI";
  v16[0x122] = (int)EmptyString;
  v16[0x123] = (int)"PROJ_SHADOW";
  v16[0x124] = (int)EmptyString;
  memset(&v16[0x125], 0, 0x28);
  v16[0x130] = (int)"LIGHTS";
  v16[0x131] = (int)"3";
  v16[0x132] = (int)"PARALLAX";
  v16[0x133] = (int)EmptyString;
  memset(&v16[0x134], 0, 0x38);
  v16[0x142] = (int)"lighting\\2x\\p\\AD.p.hlsl";
  v16[0x143] = (int)"LIGHTS";
  v16[0x144] = (int)"3";
  v16[0x145] = (int)"PARALLAX";
  v16[0x146] = (int)EmptyString;
  v16[0x147] = (int)"SI";
  v16[0x148] = (int)EmptyString;
  memset(&v16[0x149], 0, 0x30);
  v16[0x155] = (int)"lighting\\2x\\p\\AD.p.hlsl";
  v16[0x156] = (int)"LIGHTS";
  v16[0x157] = (int)"3";
  v16[0x158] = (int)"PARALLAX";
  v16[0x159] = (int)EmptyString;
  v16[0x15A] = (int)"PROJ_SHADOW";
  v16[0x15B] = (int)EmptyString;
  memset(&v16[0x15C], 0, 0x30);
  v16[0x168] = (int)"lighting\\2x\\p\\AD.p.hlsl";
  v16[0x169] = (int)"LIGHTS";
  v16[0x16A] = (int)"3";
  v16[0x16B] = (int)"PARALLAX";
  v16[0x16C] = (int)EmptyString;
  v16[0x16D] = (int)"SI";
  v16[0x16E] = (int)EmptyString;
  v16[0x16F] = (int)"PROJ_SHADOW";
  v16[0x170] = (int)EmptyString;
  memset(&v16[0x171], 0, 0x28);
  v16[0x17B] = (int)"lighting\\2x\\p\\DiffusePt.p.hlsl";
  v16[0x17C] = (int)"LIGHTS";
  v16[0x17D] = (int)"2";
  v16[0x17E] = (int)"PARALLAX";
  v16[0x17F] = (int)EmptyString;
  memset(&v16[0x180], 0, 0x38);
  v16[0x18E] = (int)"lighting\\2x\\p\\DiffusePt.p.hlsl";
  v16[0x18F] = (int)"LIGHTS";
  v16[0x190] = (int)"3";
  v16[0x191] = (int)"PARALLAX";
  v16[0x192] = (int)EmptyString;
  memset(&v16[0x193], 0, 0x38);
  v16[0x1A1] = (int)"lighting\\2x\\p\\Texture.p.hlsl";
  v16[0x1A2] = (int)"PARALLAX";
  v16[0x1A3] = (int)EmptyString;
  memset(&v16[0x1A4], 0, 0x40);
  v16[0x1B4] = (int)"lighting\\2x\\p\\Specular.p.hlsl";
  v16[0x1B5] = (int)"PARALLAX";
  v16[0x1B6] = (int)EmptyString;
  memset(&v16[0x1B7], 0, 0x40);
  v16[0x1C7] = (int)"lighting\\2x\\p\\Specular.p.hlsl";
  v16[0x1C8] = (int)"PARALLAX";
  v16[0x1C9] = (int)EmptyString;
  v16[0x1CA] = (int)"PROJ_SHADOW";
  v16[0x1CB] = (int)EmptyString;
  memset(&v16[0x1CC], 0, 0x38);
  v16[0x1DA] = (int)"lighting\\2x\\p\\Specular.p.hlsl";
  v16[0x1DB] = (int)"POINT";
  v16[0x1DC] = (int)EmptyString;
  v16[0x1DD] = (int)"PARALLAX";
  v16[0x1DE] = (int)EmptyString;
  memset(&v16[0x1DF], 0, 0x38);
  v16[0x1ED] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v17[0] = (int)"SPECULAR";
  v17[1] = (int)EmptyString;
  v17[2] = (int)"LIGHTS";
  v17[3] = (int)"2";
  v17[4] = (int)"PARALLAX";
  v17[5] = (int)EmptyString;
  memset(&v17[6], 0, 0x30);
  v17[0x12] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v17[0x13] = (int)"SPECULAR";
  v17[0x14] = (int)EmptyString;
  v17[0x15] = (int)"LIGHTS";
  v17[0x16] = (int)"2";
  v17[0x17] = (int)"PARALLAX";
  v17[0x18] = (int)EmptyString;
  v17[0x19] = (int)"SI";
  v17[0x1A] = (int)EmptyString;
  memset(&v17[0x1B], 0, 0x28);
  v17[0x25] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v17[0x26] = (int)"SPECULAR";
  v17[0x27] = (int)EmptyString;
  v17[0x28] = (int)"LIGHTS";
  v17[0x29] = (int)"2";
  v17[0x2A] = (int)"PARALLAX";
  v17[0x2B] = (int)EmptyString;
  v17[0x2C] = (int)"PROJ_SHADOW";
  v17[0x2D] = (int)EmptyString;
  memset(&v17[0x2E], 0, 0x28);
  v17[0x38] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  result = ShaderPackage;
  v2 = ShaderPackage < 2;
  v17[0x39] = (int)"SPECULAR";
  v17[0x3A] = (int)EmptyString;
  v17[0x3B] = (int)"LIGHTS";
  v17[0x3C] = (int)"2";
  v17[0x3D] = (int)"PARALLAX";
  v17[0x3E] = (int)EmptyString;
  v17[0x3F] = (int)"SI";
  v17[0x40] = (int)EmptyString;
  v17[0x41] = (int)"PROJ_SHADOW";
  v17[0x42] = (int)EmptyString;
  memset(&v17[0x43], 0, 0x20);
  v14 = result;
  if ( !v2 )
  {
    v11 = 0;
    v3 = v16;
    v9 = this + 0x12C;
    do
    {
      sub_801030((char *)v3[0xFFFFFFFF], (int)FileName);
      _sprintf(v19, "PAR2%03i.pso", v11);
      PixelShader = CreatePixelShader(FileName, v3, "ps_2_0", v19, 0, 0);
      v5 = *(_DWORD *)v9;
      if ( *(NiD3DShaderProgram **)v9 != PixelShader )
      {
        if ( v5 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
            (**(void (__thiscall ***)(int, int))v5)(v5, 1);
        }
        *(_DWORD *)v9 = PixelShader;
        if ( PixelShader )
          InterlockedIncrement((volatile LONG *)PixelShader + 1);
      }
      v9 += 4;
      result = v11 + 1;
      v3 += 0x13;
      ++v11;
    }
    while ( v11 < 0x1A );
    if ( v14 >= 5 )
    {
      v12 = 0x1A;
      v6 = v17;
      v10 = this + 0x194;
      do
      {
        sub_801030((char *)v6[0xFFFFFFFF], (int)FileName);
        _sprintf(v19, "PAR2%03i.pso", v12);
        v7 = CreatePixelShader(FileName, v6, "ps_2_0", v19, 0, 0);
        v8 = *(_DWORD *)v10;
        if ( *(NiD3DShaderProgram **)v10 != v7 )
        {
          if ( v8 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
              (**(void (__thiscall ***)(int, int))v8)(v8, 1);
          }
          *(_DWORD *)v10 = v7;
          if ( v7 )
            InterlockedIncrement((volatile LONG *)v7 + 1);
        }
        v10 += 4;
        result = v12 + 1;
        v6 += 0x13;
        ++v12;
      }
      while ( v12 < 0x1E );
    }
  }
  return result;
}
