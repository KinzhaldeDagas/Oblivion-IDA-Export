NiD3DShaderProgram *sub_7FD560()
{
  int v0; // edi
  int *v1; // ebx
  NiD3DShaderProgram *result; // eax
  volatile LONG *v3; // ebp
  NiD3DShaderProgram *v4; // [esp+10h] [ebp-B98h]
  const char *v5; // [esp+18h] [ebp-B90h]
  const char *v6; // [esp+1Ch] [ebp-B8Ch]
  int v7[607]; // [esp+20h] [ebp-B88h] BYREF
  char v8[260]; // [esp+99Ch] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+AA0h] [ebp-108h] BYREF

  v6 = "lighting\\3x\\SM3Lighting.v.hlsl";
  memset(v7, 0, 0x48);
  v7[0x12] = (int)"lighting\\3x\\SM3Lighting.v.hlsl";
  v7[0x13] = (int)"SKIN";
  v7[0x14] = (int)EmptyString;
  memset(&v7[0x15], 0, 0x40);
  v7[0x25] = (int)"lighting\\3x\\SM3Lighting.v.hlsl";
  v7[0x26] = (int)"VC";
  v7[0x27] = (int)EmptyString;
  memset(&v7[0x28], 0, 0x40);
  v7[0x38] = (int)"lighting\\3x\\SM3Lighting.v.hlsl";
  v7[0x39] = (int)"SKIN";
  v7[0x3A] = (int)EmptyString;
  v7[0x3B] = (int)"VC";
  v7[0x3C] = (int)EmptyString;
  memset(&v7[0x3D], 0, 0x38);
  v7[0x4B] = (int)"lighting\\3x\\SM3Lighting.v.hlsl";
  v7[0x4C] = (int)"PROJSHADOW";
  v7[0x4D] = (int)EmptyString;
  memset(&v7[0x4E], 0, 0x40);
  v7[0x5E] = (int)"lighting\\3x\\SM3Lighting.v.hlsl";
  v7[0x5F] = (int)"SKIN";
  v7[0x60] = (int)EmptyString;
  v7[0x61] = (int)"PROJSHADOW";
  v7[0x62] = (int)EmptyString;
  memset(&v7[0x63], 0, 0x38);
  v7[0x71] = (int)"lighting\\3x\\SM3Lighting.v.hlsl";
  v7[0x72] = (int)"VC";
  v7[0x73] = (int)EmptyString;
  v7[0x74] = (int)"PROJSHADOW";
  v7[0x75] = (int)EmptyString;
  memset(&v7[0x76], 0, 0x38);
  v7[0x84] = (int)"lighting\\3x\\SM3Lighting.v.hlsl";
  v7[0x85] = (int)"SKIN";
  v7[0x86] = (int)EmptyString;
  v7[0x87] = (int)"VC";
  v7[0x88] = (int)EmptyString;
  v7[0x89] = (int)"PROJSHADOW";
  v7[0x8A] = (int)EmptyString;
  memset(&v7[0x8B], 0, 0x30);
  v7[0x97] = (int)"lighting\\2x\\v\\EnvMap.v.hlsl";
  v7[0x98] = (int)"SM3";
  v7[0x99] = (int)EmptyString;
  v7[0x9A] = (int)"ENVMAP";
  memset(&v7[0x9B], 0, 0x3C);
  v7[0xAA] = (int)"lighting\\2x\\v\\EnvMap.v.hlsl";
  v7[0xAB] = (int)"SM3";
  v7[0xAC] = (int)EmptyString;
  v7[0xAD] = (int)"ENVMAP";
  v7[0xAE] = 0;
  v7[0xAF] = (int)"VC";
  v7[0xB0] = (int)EmptyString;
  memset(&v7[0xB1], 0, 0x30);
  v7[0xBD] = (int)"lighting\\2x\\v\\EnvMap.v.hlsl";
  v7[0xBE] = (int)"SM3";
  v7[0xBF] = (int)EmptyString;
  v7[0xC0] = (int)"ENVMAP";
  v7[0xC1] = 0;
  v7[0xC2] = (int)"SKIN";
  v7[0xC3] = (int)EmptyString;
  memset(&v7[0xC4], 0, 0x30);
  v7[0xD3] = (int)"ENVMAP";
  v7[0xE6] = (int)"ENVMAP";
  v7[0xD0] = (int)"lighting\\2x\\v\\EnvMap.v.hlsl";
  v7[0xD1] = (int)"SM3";
  v7[0xD2] = (int)EmptyString;
  v7[0xD4] = 0;
  v7[0xD5] = (int)"SKIN";
  v7[0xD6] = (int)EmptyString;
  v7[0xD7] = (int)"VC";
  v7[0xD8] = (int)EmptyString;
  memset(&v7[0xD9], 0, 0x28);
  v7[0xE3] = (int)"lighting\\2x\\v\\EnvMap.v.hlsl";
  v7[0xE4] = (int)"SM3";
  v7[0xE5] = (int)EmptyString;
  v7[0xE7] = 0;
  v7[0xE8] = (int)&off_A90BE8;
  memset(&v7[0xE9], 0, 0x34);
  v7[0xF6] = (int)"lighting\\3x\\SM3SimpleShadow.v.hlsl";
  memset(&v7[0xF7], 0, 0x48);
  v7[0x109] = (int)"lighting\\3x\\SM3SimpleShadow.v.hlsl";
  v7[0x10A] = (int)"VC";
  memset(&v7[0x10B], 0, 0x44);
  v7[0x11C] = (int)"lighting\\3x\\SM3SimpleShadow.v.hlsl";
  v7[0x11D] = (int)"SKIN";
  v7[0x11E] = (int)EmptyString;
  memset(&v7[0x11F], 0, 0x40);
  v7[0x12F] = (int)"lighting\\3x\\SM3SimpleShadow.v.hlsl";
  v7[0x130] = (int)"SKIN";
  v7[0x131] = (int)EmptyString;
  v7[0x132] = (int)"VC";
  memset(&v7[0x133], 0, 0x3C);
  v7[0x142] = (int)"lighting\\2x\\v\\Decal.v.hlsl";
  v7[0x143] = (int)"SM3";
  v7[0x144] = 0;
  v7[0x145] = (int)"MAXDECALS";
  v7[0x146] = (int)"8";
  memset(&v7[0x147], 0, 0x38);
  v7[0x155] = (int)"lighting\\3x\\SM3DepthMap.v.hlsl";
  memset(&v7[0x156], 0, 0x48);
  v7[0x168] = (int)"lighting\\3x\\SM3DepthMap.v.hlsl";
  v7[0x169] = (int)"SKIN";
  v7[0x16A] = (int)EmptyString;
  memset(&v7[0x16B], 0, 0x40);
  v7[0x17B] = (int)"lighting\\2x\\v\\renderNormals.v.hlsl";
  v7[0x17C] = (int)"SM3";
  memset(&v7[0x17D], 0, 0x44);
  v7[0x18E] = (int)"lighting\\2x\\v\\renderNormals.v.hlsl";
  v7[0x18F] = (int)"SM3";
  v7[0x190] = 0;
  v7[0x191] = (int)"SKIN";
  v7[0x192] = (int)EmptyString;
  memset(&v7[0x193], 0, 0x38);
  v7[0x1A1] = (int)"lighting\\2x\\v\\renderNormals.v.hlsl";
  v7[0x1A2] = (int)"SM3";
  v7[0x1A3] = 0;
  v7[0x1A4] = (int)"FIRE";
  v7[0x1A5] = (int)EmptyString;
  memset(&v7[0x1A6], 0, 0x38);
  v7[0x1B4] = (int)"lighting\\2x\\v\\renderNormals.v.hlsl";
  v7[0x1B5] = (int)"SM3";
  v7[0x1B6] = 0;
  v7[0x1B7] = (int)"CLEAR";
  v7[0x1B8] = (int)EmptyString;
  memset(&v7[0x1B9], 0, 0x38);
  v7[0x1C7] = (int)"lighting\\2x\\v\\renderNormals.v.hlsl";
  v7[0x1C8] = (int)"SM3";
  v7[0x1C9] = 0;
  v7[0x1CA] = (int)"CLEAR";
  v7[0x1CB] = (int)EmptyString;
  v7[0x1CC] = (int)"SKIN";
  v7[0x1CD] = (int)EmptyString;
  memset(&v7[0x1CE], 0, 0x30);
  v7[0x1DA] = (int)"lighting\\2x\\v\\localMap.v.hlsl";
  v7[0x1DB] = (int)"SM3";
  memset(&v7[0x1DC], 0, 0x44);
  v7[0x1ED] = (int)"lighting\\2x\\v\\localMap.v.hlsl";
  v7[0x1EE] = (int)"SM3";
  v7[0x1EF] = 0;
  v7[0x1F0] = (int)"SKIN";
  v7[0x1F1] = (int)EmptyString;
  memset(&v7[0x1F2], 0, 0x38);
  v7[0x200] = (int)"lighting\\2x\\v\\localMap.v.hlsl";
  v7[0x201] = (int)"SM3";
  v7[0x202] = 0;
  v7[0x203] = (int)"CLEAR";
  v7[0x204] = (int)EmptyString;
  memset(&v7[0x205], 0, 0x38);
  v7[0x213] = (int)"lighting\\1x\\v\\texEffect.v.hlsl";
  memset(&v7[0x214], 0, 0x48);
  v7[0x226] = (int)"lighting\\1x\\v\\texEffect.v.hlsl";
  v7[0x227] = (int)"SKIN";
  v7[0x228] = (int)EmptyString;
  memset(&v7[0x229], 0, 0x40);
  v7[0x239] = (int)"lighting\\3x\\SM3ZOnly.v.hlsl";
  memset(&v7[0x23A], 0, 0x48);
  v7[0x24C] = (int)"lighting\\3x\\SM3ZOnly.v.hlsl";
  v7[0x24D] = (int)"SKIN";
  v7[0x24E] = (int)EmptyString;
  memset(&v7[0x24F], 0, 0x40);
  v5 = sub_7B47E0();
  v0 = 0;
  v1 = v7;
  do
  {
    sub_801030((char *)v1[0xFFFFFFFF], (int)FileName);
    _sprintf(v8, "SM3%03i.vso", v0);
    result = CreateVertexShader(FileName, v1, v5, v8, 0, 0);
    v3 = *(volatile LONG **)(4 * v0 + 0xB47288);
    v4 = result;
    if ( v3 != (volatile LONG *)result )
    {
      if ( v3 )
      {
        if ( !InterlockedDecrement(v3 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1);
        result = v4;
      }
      *(_DWORD *)(4 * v0 + 0xB47288) = result;
      if ( result )
        result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)result + 1);
    }
    ++v0;
    v1 += 0x13;
  }
  while ( v0 < 0x20 );
  return result;
}
