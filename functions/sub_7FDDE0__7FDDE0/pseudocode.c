NiD3DShaderProgram *sub_7FDDE0()
{
  const char *v0; // eax
  __int16 v1; // cx
  char *v2; // ebp
  char v3; // dl
  __int16 **v4; // edi
  int v5; // esi
  int v6; // eax
  _DWORD *v7; // edi
  NiD3DShaderProgram *result; // eax
  volatile LONG *v9; // ebp
  volatile LONG *v10; // edi
  NiD3DShaderProgram *v11; // ebp
  int v12; // [esp-8h] [ebp-DE4h]
  int v13; // [esp-4h] [ebp-DE0h]
  NiD3DShaderProgram *v14; // [esp+10h] [ebp-DCCh]
  __int16 **i; // [esp+18h] [ebp-DC4h]
  __int16 v16; // [esp+1Ch] [ebp-DC0h] BYREF
  char v17; // [esp+1Eh] [ebp-DBEh]
  __int16 v18; // [esp+20h] [ebp-DBCh] BYREF
  char v19; // [esp+22h] [ebp-DBAh]
  __int16 v20; // [esp+24h] [ebp-DB8h] BYREF
  char v21; // [esp+26h] [ebp-DB6h]
  __int16 v22; // [esp+28h] [ebp-DB4h] BYREF
  char v23; // [esp+2Ah] [ebp-DB2h]
  __int16 v24; // [esp+2Ch] [ebp-DB0h] BYREF
  char v25; // [esp+2Eh] [ebp-DAEh]
  __int16 v26; // [esp+30h] [ebp-DACh] BYREF
  char v27; // [esp+32h] [ebp-DAAh]
  __int16 v28; // [esp+34h] [ebp-DA8h] BYREF
  char v29; // [esp+36h] [ebp-DA6h]
  char *Str1; // [esp+38h] [ebp-DA4h]
  const char *v31; // [esp+3Ch] [ebp-DA0h]
  const char *v32; // [esp+40h] [ebp-D9Ch]
  _DWORD v33[739]; // [esp+44h] [ebp-D98h] BYREF
  char v34[260]; // [esp+BD0h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+CD4h] [ebp-108h] BYREF

  v31 = "lighting\\3x\\SM3Lighting.p.hlsl";
  v32 = "MAXLIGHTS";
  v33[0] = "9";
  memset(&v33[1], 0, 0x40);
  v33[0x11] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x12] = "MAXLIGHTS";
  v33[0x13] = "8";
  v33[0x14] = "SPECULAR";
  memset(&v33[0x15], 0, 0x3C);
  v33[0x24] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x25] = "MAXLIGHTS";
  v33[0x26] = "8";
  v33[0x27] = "HAIR";
  v33[0x28] = "1";
  memset(&v33[0x29], 0, 0x38);
  v33[0x37] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x38] = "MAXLIGHTS";
  v33[0x39] = "7";
  v33[0x3A] = "HAIR";
  v33[0x3B] = "1";
  v33[0x3C] = "SPECULAR";
  memset(&v33[0x3D], 0, 0x34);
  v33[0x4C] = "8";
  v33[0x4A] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x4B] = "MAXLIGHTS";
  v33[0x4D] = "PARALLAX";
  v33[0x4E] = EmptyString;
  memset(&v33[0x4F], 0, 0x38);
  v33[0x5D] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x5E] = "MAXLIGHTS";
  v33[0x5F] = "8";
  v33[0x60] = "PARALLAX";
  v33[0x61] = EmptyString;
  v33[0x62] = "SPECULAR";
  memset(&v33[0x63], 0, 0x34);
  v33[0x70] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x71] = "MAXLIGHTS";
  v33[0x72] = "8";
  v33[0x73] = "FACEGENBLEND";
  v33[0x74] = EmptyString;
  memset(&v33[0x75], 0, 0x38);
  v33[0x83] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x84] = "MAXLIGHTS";
  v33[0x85] = "8";
  v33[0x86] = "FACEGENBLEND";
  v33[0x87] = EmptyString;
  v33[0x88] = "SPECULAR";
  memset(&v33[0x89], 0, 0x34);
  v33[0x96] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x97] = "MAXLIGHTS";
  v33[0x98] = "8";
  v33[0x99] = "GLOW";
  v33[0x9A] = EmptyString;
  memset(&v33[0x9B], 0, 0x38);
  v33[0xA9] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0xAA] = "MAXLIGHTS";
  v33[0xAB] = "8";
  v33[0xAC] = "GLOW";
  v33[0xAD] = EmptyString;
  v33[0xAE] = "SPECULAR";
  memset(&v33[0xAF], 0, 0x34);
  v33[0xBC] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0xBD] = "MAXLIGHTS";
  v33[0xBE] = "8";
  v33[0xBF] = "PROJSHADOW";
  v33[0xC0] = EmptyString;
  memset(&v33[0xC1], 0, 0x38);
  v33[0xCF] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0xD0] = "MAXLIGHTS";
  v33[0xD1] = "8";
  v33[0xD2] = "SPECULAR";
  v33[0xD3] = 0;
  v33[0xD4] = "PROJSHADOW";
  v33[0xD5] = EmptyString;
  memset(&v33[0xD6], 0, 0x30);
  v33[0xE2] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0xE3] = "MAXLIGHTS";
  v33[0xE4] = "8";
  v33[0xE5] = "HAIR";
  v33[0xE6] = "1";
  v33[0xE7] = "PROJSHADOW";
  v33[0xE8] = EmptyString;
  memset(&v33[0xE9], 0, 0x30);
  v33[0xFC] = "PROJSHADOW";
  v33[0x10D] = "PROJSHADOW";
  v33[0xF5] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0xF6] = "MAXLIGHTS";
  v33[0xF7] = "7";
  v33[0xF8] = "HAIR";
  v33[0xF9] = "1";
  v33[0xFA] = "SPECULAR";
  v33[0xFB] = 0;
  v33[0xFD] = EmptyString;
  memset(&v33[0xFE], 0, 0x28);
  v33[0x108] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x109] = "MAXLIGHTS";
  v33[0x10A] = "8";
  v33[0x10B] = "PARALLAX";
  v33[0x10C] = EmptyString;
  v33[0x10E] = EmptyString;
  memset(&v33[0x10F], 0, 0x30);
  v33[0x11D] = "8";
  v33[0x130] = "8";
  v33[0x11B] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x11C] = "MAXLIGHTS";
  v33[0x11E] = "PARALLAX";
  v33[0x11F] = EmptyString;
  v33[0x120] = "SPECULAR";
  v33[0x121] = 0;
  v33[0x122] = "PROJSHADOW";
  v33[0x123] = EmptyString;
  memset(&v33[0x124], 0, 0x28);
  v33[0x12E] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x12F] = "MAXLIGHTS";
  v33[0x131] = "FACEGENBLEND";
  v33[0x132] = EmptyString;
  v33[0x133] = "PROJSHADOW";
  v33[0x134] = EmptyString;
  memset(&v33[0x135], 0, 0x30);
  v33[0x141] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x142] = "MAXLIGHTS";
  v33[0x143] = "8";
  v33[0x144] = "FACEGENBLEND";
  v33[0x145] = EmptyString;
  v33[0x146] = "SPECULAR";
  v33[0x147] = 0;
  v33[0x148] = "PROJSHADOW";
  v33[0x149] = EmptyString;
  memset(&v33[0x14A], 0, 0x28);
  v33[0x154] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x155] = "MAXLIGHTS";
  v33[0x156] = "8";
  v33[0x157] = "GLOW";
  v33[0x158] = EmptyString;
  v33[0x159] = "PROJSHADOW";
  v33[0x15A] = EmptyString;
  memset(&v33[0x15B], 0, 0x30);
  v33[0x167] = "lighting\\3x\\SM3Lighting.p.hlsl";
  v33[0x168] = "MAXLIGHTS";
  v33[0x169] = "8";
  v33[0x16A] = "GLOW";
  v33[0x16B] = EmptyString;
  v33[0x16C] = "SPECULAR";
  v33[0x16D] = 0;
  v33[0x16E] = "PROJSHADOW";
  v33[0x16F] = EmptyString;
  memset(&v33[0x170], 0, 0x28);
  v33[0x17A] = "lighting\\2x\\p\\EnvMap.p.hlsl";
  v33[0x17B] = "SM3";
  v33[0x17C] = EmptyString;
  memset(&v33[0x17D], 0, 0x40);
  v33[0x18D] = "lighting\\2x\\p\\EnvMap.p.hlsl";
  v33[0x18E] = "SM3";
  v33[0x18F] = EmptyString;
  v33[0x190] = "WINDOW";
  memset(&v33[0x191], 0, 0x3C);
  v33[0x1A0] = "lighting\\2x\\p\\EnvMap.p.hlsl";
  v33[0x1A1] = "SM3";
  v33[0x1A2] = EmptyString;
  v33[0x1A3] = &off_A90BE8;
  memset(&v33[0x1A4], 0, 0x3C);
  v33[0x1B3] = "lighting\\3x\\SM3SimpleShadow.p.hlsl";
  v33[0x1B4] = "SOFTSHADOW";
  v33[0x1B5] = "4";
  v33[0x1B6] = "DEPTHBIAS";
  v33[0x1B7] = "-2";
  memset(&v33[0x1B8], 0, 0x38);
  v33[0x1C6] = "lighting\\2x\\p\\Decal.p.hlsl";
  v33[0x1C7] = "SM3";
  v33[0x1C8] = 0;
  v33[0x1C9] = "MAXDECALS";
  v33[0x1CA] = "8";
  memset(&v33[0x1CB], 0, 0x38);
  v33[0x1D9] = "lighting\\2x\\p\\Decal.p.hlsl";
  v33[0x1DA] = "SM3";
  v33[0x1DB] = 0;
  v33[0x1DC] = "MAXDECALS";
  v33[0x1DD] = "8";
  v33[0x1DE] = "ALPHA";
  memset(&v33[0x1DF], 0, 0x34);
  v33[0x1EC] = "lighting\\3x\\SM3DepthMap.p.hlsl";
  memset(&v33[0x1ED], 0, 0x48);
  v33[0x1FF] = "lighting\\3x\\SM3DepthMap.p.hlsl";
  memset(&v33[0x200], 0, 0x48);
  v33[0x212] = "lighting\\2x\\p\\renderNormals.p.hlsl";
  v33[0x213] = "SM3";
  memset(&v33[0x214], 0, 0x44);
  v33[0x225] = "lighting\\2x\\p\\renderNormals.p.hlsl";
  v33[0x226] = "SM3";
  memset(&v33[0x227], 0, 0x44);
  v33[0x238] = "lighting\\2x\\p\\renderNormals.p.hlsl";
  v33[0x239] = "SM3";
  v33[0x23A] = 0;
  v33[0x23B] = "FIRE";
  v33[0x23C] = EmptyString;
  memset(&v33[0x23D], 0, 0x38);
  v33[0x24B] = "lighting\\2x\\p\\renderNormals.p.hlsl";
  v33[0x24C] = "SM3";
  v33[0x24D] = 0;
  v33[0x24E] = "CLEAR";
  v33[0x24F] = EmptyString;
  memset(&v33[0x250], 0, 0x38);
  v33[0x25E] = "lighting\\2x\\p\\renderNormals.p.hlsl";
  v33[0x25F] = "SM3";
  v33[0x260] = 0;
  v33[0x261] = "CLEAR";
  v33[0x262] = EmptyString;
  memset(&v33[0x263], 0, 0x38);
  v33[0x271] = "lighting\\2x\\p\\localMap.p.hlsl";
  v33[0x272] = "SM3";
  memset(&v33[0x273], 0, 0x44);
  v33[0x284] = "lighting\\2x\\p\\localMap.p.hlsl";
  v33[0x285] = "SM3";
  v33[0x286] = 0;
  v33[0x287] = "CLEAR";
  memset(&v33[0x288], 0, 0x3C);
  v33[0x297] = "lighting\\1x\\p\\texEffect.p.hlsl";
  v33[0x298] = "HQ";
  v33[0x299] = EmptyString;
  memset(&v33[0x29A], 0, 0x40);
  v33[0x2AA] = "lighting\\1x\\p\\texEffect.p.hlsl";
  v33[0x2AB] = "HQ";
  v33[0x2AC] = EmptyString;
  memset(&v33[0x2AD], 0, 0x40);
  v33[0x2BD] = "lighting\\3x\\SM3ZOnly.p.hlsl";
  memset(&v33[0x2BE], 0, 0x48);
  v33[0x2D0] = "lighting\\3x\\SM3ZOnly.p.hlsl";
  memset(&v33[0x2D1], 0, 0x48);
  v0 = sub_7B4780(0);
  v1 = a15;
  v2 = (char *)v0;
  LOBYTE(v0) = byte_A93282;
  v28 = word_A93280;
  v3 = byte_A900F2;
  v29 = (char)v0;
  LOWORD(v0) = word_A9327C;
  v24 = v1;
  LOBYTE(v1) = byte_A9327E;
  v4 = (__int16 **)v33;
  Str1 = v2;
  v25 = v3;
  v20 = (__int16)v0;
  v21 = v1;
  v18 = 0x38;
  v19 = 0;
  v22 = 0x37;
  v23 = 0;
  v16 = 0x34;
  v17 = 0;
  v26 = 0x32;
  v27 = 0;
  v5 = 0;
  for ( i = (__int16 **)v33; ; v4 = i )
  {
    sub_801030((char *)v4[0xFFFFFFFE], (int)FileName);
    _sprintf(v34, "SM3%03i.pso", v5);
    v6 = sub_404F00(0);
    if ( v6 == 7 )
    {
      if ( v5 < 0x14 )
        *v4 = &v28;
      if ( v5 == 2 || v5 == 3 || v5 == 0xC || v5 == 0xD )
        v4[2] = &v26;
      if ( !v5 || v5 == 2 || v5 == 4 || v5 == 8 || v5 == 0xC || v5 == 0xE || v5 == 0x12 )
      {
        *v4 = &v24;
      }
      else
      {
        if ( v5 == 1 || v5 == 5 || v5 == 6 || v5 == 9 || v5 == 0xB || v5 == 0xF || v5 == 0x10 )
        {
          v13 = 1;
          *v4 = &v20;
          v12 = 2;
          goto LABEL_51;
        }
        if ( v5 < 0x14 )
        {
          v13 = 1;
          *v4 = &v18;
          v12 = 2;
          goto LABEL_51;
        }
      }
      v13 = 1;
      v12 = 2;
LABEL_51:
      v7 = v4 + 0xFFFFFFFF;
      result = CreatePixelShader(FileName, v7, v2, v34, v12, v13);
      v9 = *(volatile LONG **)(4 * v5 + 0xB46ED8);
      v14 = result;
      if ( v9 == (volatile LONG *)result )
        goto LABEL_58;
      if ( v9 )
      {
LABEL_53:
        if ( !InterlockedDecrement(v9 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
        result = v14;
      }
LABEL_56:
      *(_DWORD *)(4 * v5 + 0xB46ED8) = result;
      if ( result )
        result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)result + 1);
      goto LABEL_58;
    }
    if ( v6 != 5 )
    {
      v13 = 0;
      v12 = 0;
      goto LABEL_51;
    }
    if ( !v5
      || v5 == 4
      || v5 == 5
      || v5 == 8
      || v5 == 0xB
      || v5 == 0xE
      || v5 == 0xF
      || v5 == 0x10
      || v5 == 0x11
      || v5 == 9
      || v5 == 0xC
      || v5 == 0x12
      || v5 == 19
      || v5 == 6
      || v5 == 7 )
    {
      *v4 = &v22;
    }
    v7 = v4 + 0xFFFFFFFF;
    result = CreatePixelShader(FileName, v7, v2, v34, 0, 0);
    v9 = *(volatile LONG **)(4 * v5 + 0xB46ED8);
    v14 = result;
    if ( v9 != (volatile LONG *)result )
    {
      if ( v9 )
        goto LABEL_53;
      goto LABEL_56;
    }
LABEL_58:
    if ( v5 < 0x14 )
    {
      _sprintf(v34, "SM3LL%03i.pso", v5);
      *i = &v16;
      result = CreatePixelShader(FileName, v7, Str1, v34, 0, 0);
      v10 = *(volatile LONG **)(4 * v5 + 0xB46C20);
      v11 = result;
      if ( v10 != (volatile LONG *)result )
      {
        if ( v10 )
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement(v10 + 1);
          if ( !result )
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v10)(v10, 1);
        }
        *(_DWORD *)(4 * v5 + 0xB46C20) = v11;
        if ( v11 )
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v11 + 1);
      }
    }
    i += 0x13;
    if ( ++v5 >= 0x27 )
      break;
    v2 = Str1;
  }
  return result;
}
