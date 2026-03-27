NiD3DShaderProgram *sub_7CD090()
{
  int v0; // esi
  char **v1; // ebx
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v3; // ebp
  NiD3DShaderProgram **v4; // esi
  int v5; // ebx
  NiD3DShaderProgram *result; // eax
  volatile LONG *v7; // esi
  NiD3DShaderProgram *v8; // ebp
  NiD3DShaderProgram **v9; // esi
  int v10; // ebx
  int v11; // esi
  volatile LONG *v12; // esi
  NiD3DShaderProgram *v13; // ebp
  NiD3DShaderProgram *v14; // [esp+10h] [ebp-2868h]
  _DWORD *v15; // [esp+10h] [ebp-2868h]
  _DWORD *v16; // [esp+10h] [ebp-2868h]
  _DWORD v17[1444]; // [esp+18h] [ebp-2860h] BYREF
  _DWORD v18[418]; // [esp+16A8h] [ebp-11D0h] BYREF
  _DWORD v19[589]; // [esp+1D30h] [ebp-B48h] BYREF
  char Dest[8]; // [esp+2664h] [ebp-214h] BYREF
  char v21[260]; // [esp+266Ch] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+2770h] [ebp-108h] BYREF

  _itoa(Value, Dest, 0xA);
  v19[0] = "lighting\\1x\\v\\base.v.hlsl";
  memset(&v19[1], 0, 0xE0);
  v19[0x39] = "lighting\\1x\\v\\diffusePt.v.hlsl";
  memset(&v19[0x3A], 0, 0x48);
  v19[0x4C] = "lighting\\1x\\v\\diffuseDir.v.hlsl";
  memset(&v19[0x4D], 0, 0x48);
  v19[0x5F] = "lighting\\1x\\v\\base.v.hlsl";
  memset(&v19[0x60], 0, 0x48);
  v19[0x72] = "lighting\\1x\\v\\base.v.hlsl";
  v19[0x73] = "VC";
  v19[0x74] = EmptyString;
  memset(&v19[0x75], 0, 0x40);
  v19[0x85] = "lighting\\1x\\v\\base.v.hlsl";
  v19[0x86] = "FACEGENBLEND";
  v19[0x87] = EmptyString;
  memset(&v19[0x88], 0, 0x40);
  v19[0x98] = "lighting\\1x\\v\\specularPt.v.hlsl";
  memset(&v19[0x99], 0, 0x48);
  v19[0xAB] = "lighting\\1x\\v\\specularDir.v.hlsl";
  memset(&v19[0xAC], 0, 0x48);
  v19[0xBE] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  memset(&v19[0xBF], 0, 0x48);
  v19[0xD1] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v19[0xD2] = &off_A90D88;
  v19[0xD3] = EmptyString;
  memset(&v19[0xD4], 0, 0x40);
  v19[0xE4] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v19[0xE5] = "VC";
  v19[0xE6] = EmptyString;
  memset(&v19[0xE7], 0, 0x40);
  v19[0xF7] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v19[0xF8] = &off_A90D88;
  v19[0xF9] = EmptyString;
  v19[0xFA] = "VC";
  v19[0xFB] = EmptyString;
  memset(&v19[0xFC], 0, 0x38);
  v19[0x10A] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v19[0x10B] = "FACEGENBLEND";
  v19[0x10C] = EmptyString;
  memset(&v19[0x10D], 0, 0x40);
  v19[0x11D] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v19[0x11E] = "FACEGENBLEND";
  v19[0x11F] = EmptyString;
  v19[0x120] = &off_A90D88;
  v19[0x121] = EmptyString;
  memset(&v19[0x122], 0, 0x38);
  v19[0x130] = "lighting\\1x\\v\\ambDiffuseDirAndPt.v.hlsl";
  memset(&v19[0x131], 0, 0x48);
  v19[0x143] = "lighting\\1x\\v\\base.v.hlsl";
  v19[0x144] = &off_A90D88;
  v19[0x145] = EmptyString;
  memset(&v19[0x146], 0, 0x40);
  v19[0x156] = "lighting\\1x\\v\\base.v.hlsl";
  v19[0x157] = &off_A90D88;
  v19[0x158] = EmptyString;
  v19[0x159] = &off_A8F8C4;
  v19[0x15A] = EmptyString;
  memset(&v19[0x15B], 0, 0x38);
  v19[0x169] = "lighting\\1x\\v\\envmap.v.hlsl";
  memset(&v19[0x16A], 0, 0x48);
  v19[0x17C] = "lighting\\1x\\v\\vertDir.v.hlsl";
  memset(&v19[0x17D], 0, 0x48);
  v19[0x18F] = "lighting\\1x\\v\\vertDir.v.hlsl";
  v19[0x190] = "VC";
  v19[0x191] = EmptyString;
  memset(&v19[0x192], 0, 0x40);
  v19[0x1A2] = "lighting\\1x\\v\\vertDirAndPt.v.hlsl";
  memset(&v19[0x1A3], 0, 0x48);
  v19[0x1B5] = "lighting\\1x\\v\\vertDirAndPt.v.hlsl";
  v19[0x1B6] = "VC";
  v19[0x1B7] = EmptyString;
  memset(&v19[0x1B8], 0, 0x40);
  v19[0x1C8] = "lighting\\1x\\v\\base.v.hlsl";
  v19[0x1C9] = "SI";
  v19[0x1CA] = EmptyString;
  memset(&v19[0x1CB], 0, 0x40);
  v19[0x1DB] = "lighting\\1x\\v\\land.v.hlsl";
  memset(&v19[0x1DC], 0, 0x48);
  v19[0x1EE] = "lighting\\1x\\v\\land.v.hlsl";
  v19[0x1EF] = "LANDALPHA";
  v19[0x1F0] = EmptyString;
  memset(&v19[0x1F1], 0, 0x40);
  v19[0x201] = "lighting\\1x\\v\\land.v.hlsl";
  v19[0x202] = "LANDALPHA";
  v19[0x203] = EmptyString;
  v19[0x204] = "SI";
  v19[0x205] = EmptyString;
  memset(&v19[0x206], 0, 0x38);
  v19[0x214] = "lighting\\1x\\v\\land.v.hlsl";
  v19[0x215] = "PTLIGHT";
  v19[0x216] = EmptyString;
  memset(&v19[0x217], 0, 0x40);
  v19[0x227] = "lighting\\1x\\v\\land.v.hlsl";
  v19[0x228] = "LANDALPHA";
  v19[0x229] = EmptyString;
  v19[0x22A] = "PTLIGHT";
  v19[0x22B] = EmptyString;
  memset(&v19[0x22C], 0, 0x84);
  v18[0] = "lighting\\1x\\v\\base.v.hlsl";
  v18[1] = "SKIN";
  v18[2] = EmptyString;
  memset(&v18[3], 0, 0x40);
  v18[0x13] = "lighting\\1x\\v\\base.v.hlsl";
  v18[0x14] = "SKIN";
  v18[0x15] = EmptyString;
  v18[0x16] = &off_A90D88;
  v18[0x17] = EmptyString;
  memset(&v18[0x18], 0, 0x38);
  v18[0x26] = "lighting\\1x\\v\\base.v.hlsl";
  v18[0x27] = "SKIN";
  v18[0x28] = EmptyString;
  v18[0x29] = &off_A90D88;
  v18[0x2A] = EmptyString;
  v18[0x2B] = &off_A8F8C4;
  v18[0x2C] = EmptyString;
  memset(&v18[0x2D], 0, 0x30);
  v18[0x39] = "lighting\\1x\\v\\diffusePt.v.hlsl";
  v18[0x3A] = "SKIN";
  v18[0x3B] = EmptyString;
  memset(&v18[0x3C], 0, 0x40);
  v18[0x4C] = "lighting\\1x\\v\\diffuseDir.v.hlsl";
  v18[0x4D] = "SKIN";
  v18[0x4E] = EmptyString;
  memset(&v18[0x4F], 0, 0x40);
  v18[0x5F] = "lighting\\1x\\v\\base.v.hlsl";
  v18[0x60] = "SKIN";
  v18[0x61] = EmptyString;
  memset(&v18[0x62], 0, 0x40);
  v18[0x72] = "lighting\\1x\\v\\base.v.hlsl";
  v18[0x73] = "SKIN";
  v18[0x74] = EmptyString;
  v18[0x75] = "VC";
  v18[0x76] = EmptyString;
  memset(&v18[0x77], 0, 0x38);
  v18[0x85] = "lighting\\1x\\v\\base.v.hlsl";
  v18[0x86] = "SKIN";
  v18[0x87] = EmptyString;
  v18[0x88] = "FACEGENBLEND";
  v18[0x89] = EmptyString;
  memset(&v18[0x8A], 0, 0x38);
  v18[0x98] = "lighting\\1x\\v\\specularPt.v.hlsl";
  v18[0x99] = "SKIN";
  v18[0x9A] = EmptyString;
  memset(&v18[0x9B], 0, 0x40);
  v18[0xAB] = "lighting\\1x\\v\\specularDir.v.hlsl";
  v18[0xAC] = "SKIN";
  v18[0xAD] = EmptyString;
  memset(&v18[0xAE], 0, 0x40);
  v18[0xBE] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v18[0xBF] = "SKIN";
  v18[0xC0] = EmptyString;
  memset(&v18[0xC1], 0, 0x40);
  v18[0xD1] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v18[0xD2] = "SKIN";
  v18[0xD3] = EmptyString;
  v18[0xD4] = "VC";
  v18[0xD5] = EmptyString;
  memset(&v18[0xD6], 0, 0x38);
  v18[0xE4] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v18[0xE5] = "SKIN";
  v18[0xE6] = EmptyString;
  v18[0xE7] = &off_A90D88;
  v18[0xE8] = EmptyString;
  memset(&v18[0xE9], 0, 0x38);
  v18[0xF7] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v18[0xF8] = "SKIN";
  v18[0xF9] = EmptyString;
  v18[0xFA] = &off_A90D88;
  v18[0xFB] = EmptyString;
  v18[0xFC] = "VC";
  v18[0xFD] = EmptyString;
  memset(&v18[0xFE], 0, 0x30);
  v18[0x10A] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v18[0x10B] = "SKIN";
  v18[0x10C] = EmptyString;
  v18[0x10D] = "FACEGENBLEND";
  v18[0x10E] = EmptyString;
  memset(&v18[0x10F], 0, 0x38);
  v18[0x11D] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v18[0x11E] = "SKIN";
  v18[0x11F] = EmptyString;
  v18[0x120] = "FACEGENBLEND";
  v18[0x121] = EmptyString;
  v18[0x122] = &off_A90D88;
  v18[0x123] = EmptyString;
  memset(&v18[0x124], 0, 0x30);
  v18[0x130] = "lighting\\1x\\v\\ambDiffuseDirAndPt.v.hlsl";
  v18[0x131] = "SKIN";
  v18[0x132] = EmptyString;
  memset(&v18[0x133], 0, 0x40);
  v18[0x143] = "lighting\\1x\\v\\envmap.v.hlsl";
  v18[0x144] = "SKIN";
  v18[0x145] = EmptyString;
  memset(&v18[0x146], 0, 0xD8);
  v18[0x17C] = "lighting\\1x\\v\\base.v.hlsl";
  v18[0x17D] = "SKIN";
  v18[0x17E] = EmptyString;
  v18[0x17F] = "SI";
  v18[0x180] = EmptyString;
  memset(&v18[0x181], 0, 0x84);
  v17[0] = "lighting\\2x\\v\\ADTS.v.hlsl";
  memset(&v17[1], 0, 0x48);
  v17[0x13] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x14] = "MODELSPACENORM";
  v17[0x15] = EmptyString;
  v17[0x16] = "LODLANDCLIP";
  v17[0x17] = EmptyString;
  memset(&v17[0x18], 0, 0x38);
  v17[0x26] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x27] = "SKIN";
  v17[0x28] = EmptyString;
  memset(&v17[0x29], 0, 0x40);
  v17[0x39] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x3A] = "PROJ_SHADOW";
  v17[0x3B] = EmptyString;
  memset(&v17[0x3C], 0, 0x40);
  v17[0x4C] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x4D] = "MODELSPACENORM";
  v17[0x4E] = EmptyString;
  v17[0x4F] = "PROJ_SHADOW";
  v17[0x50] = EmptyString;
  v17[0x51] = "LODLANDCLIP";
  v17[0x52] = EmptyString;
  memset(&v17[0x53], 0, 0x30);
  v17[0x5F] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x60] = "SKIN";
  v17[0x61] = EmptyString;
  v17[0x62] = "PROJ_SHADOW";
  v17[0x63] = EmptyString;
  memset(&v17[0x64], 0, 0x38);
  v17[0x72] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x73] = "STBB";
  v17[0x74] = EmptyString;
  memset(&v17[0x75], 0, 0x40);
  v17[0x85] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x86] = "LIGHTS";
  v17[0x87] = "2";
  memset(&v17[0x88], 0, 0x40);
  v17[0x98] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x99] = "LIGHTS";
  v17[0x9A] = "2";
  v17[0x9B] = "SKIN";
  v17[0x9C] = EmptyString;
  memset(&v17[0x9D], 0, 0x38);
  v17[0xAB] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0xAC] = "LIGHTS";
  v17[0xAD] = "2";
  v17[0xAE] = "PROJ_SHADOW";
  v17[0xAF] = EmptyString;
  memset(&v17[0xB0], 0, 0x38);
  v17[0xBE] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0xBF] = "LIGHTS";
  v17[0xC0] = "2";
  v17[0xC1] = "SKIN";
  v17[0xC2] = EmptyString;
  v17[0xC3] = "PROJ_SHADOW";
  v17[0xC4] = EmptyString;
  memset(&v17[0xC5], 0, 0x30);
  v17[0xD1] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0xD2] = "SPECULAR";
  v17[0xD3] = EmptyString;
  memset(&v17[0xD4], 0, 0x40);
  v17[0xE4] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0xE5] = "SPECULAR";
  v17[0xE6] = EmptyString;
  v17[0xE7] = "SKIN";
  v17[0xE8] = EmptyString;
  memset(&v17[0xE9], 0, 0x38);
  v17[0xF7] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0xF8] = "SPECULAR";
  v17[0xF9] = EmptyString;
  v17[0xFA] = "PROJ_SHADOW";
  v17[0xFB] = EmptyString;
  memset(&v17[0xFC], 0, 0x38);
  v17[0x10A] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x10B] = "SPECULAR";
  v17[0x10C] = EmptyString;
  v17[0x10D] = "SKIN";
  v17[0x10E] = EmptyString;
  v17[0x10F] = "PROJ_SHADOW";
  v17[0x110] = EmptyString;
  memset(&v17[0x111], 0, 0x30);
  v17[0x11D] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x11E] = "SPECULAR";
  v17[0x11F] = EmptyString;
  v17[0x120] = "LIGHTS";
  v17[0x121] = "2";
  memset(&v17[0x122], 0, 0x38);
  v17[0x130] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x131] = "SPECULAR";
  v17[0x132] = EmptyString;
  v17[0x133] = "LIGHTS";
  v17[0x134] = "2";
  v17[0x135] = "SKIN";
  v17[0x136] = EmptyString;
  memset(&v17[0x137], 0, 0x30);
  v17[0x143] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x144] = "SPECULAR";
  v17[0x145] = EmptyString;
  v17[0x146] = "LIGHTS";
  v17[0x147] = "2";
  v17[0x148] = "PROJ_SHADOW";
  v17[0x149] = EmptyString;
  memset(&v17[0x14A], 0, 0x30);
  v17[0x156] = "lighting\\2x\\v\\ADTS.v.hlsl";
  v17[0x157] = "SPECULAR";
  v17[0x158] = EmptyString;
  v17[0x159] = "LIGHTS";
  v17[0x15A] = "2";
  v17[0x15B] = "SKIN";
  v17[0x15C] = EmptyString;
  v17[0x15D] = "PROJ_SHADOW";
  v17[0x15E] = EmptyString;
  memset(&v17[0x15F], 0, 0x28);
  v17[0x169] = "lighting\\2x\\v\\AD.v.hlsl";
  v17[0x16A] = "LIGHTS";
  v17[0x16B] = "2";
  memset(&v17[0x16C], 0, 0x40);
  v17[0x17C] = "lighting\\2x\\v\\AD.v.hlsl";
  v17[0x17D] = "LIGHTS";
  v17[0x17E] = "2";
  v17[0x17F] = "SKIN";
  v17[0x180] = EmptyString;
  memset(&v17[0x181], 0, 0x38);
  v17[0x18F] = "lighting\\2x\\v\\AD.v.hlsl";
  v17[0x190] = "LIGHTS";
  v17[0x191] = "2";
  v17[0x192] = "PROJ_SHADOW";
  v17[0x193] = EmptyString;
  memset(&v17[0x194], 0, 0x38);
  v17[0x1A2] = "lighting\\2x\\v\\AD.v.hlsl";
  v17[0x1A3] = "LIGHTS";
  v17[0x1A4] = "2";
  v17[0x1A5] = "SKIN";
  v17[0x1A6] = EmptyString;
  v17[0x1A7] = "PROJ_SHADOW";
  v17[0x1A8] = EmptyString;
  memset(&v17[0x1A9], 0, 0x30);
  v17[0x1B5] = "lighting\\2x\\v\\AD.v.hlsl";
  v17[0x1B6] = "LIGHTS";
  v17[0x1B7] = "3";
  memset(&v17[0x1B8], 0, 0x40);
  v17[0x1C8] = "lighting\\2x\\v\\AD.v.hlsl";
  v17[0x1C9] = "LIGHTS";
  v17[0x1CA] = "3";
  v17[0x1CB] = "SKIN";
  v17[0x1CC] = EmptyString;
  memset(&v17[0x1CD], 0, 0x38);
  v17[0x1DB] = "lighting\\2x\\v\\AD.v.hlsl";
  v17[0x1DC] = "LIGHTS";
  v17[0x1DD] = "3";
  v17[0x1DE] = "PROJ_SHADOW";
  v17[0x1DF] = EmptyString;
  memset(&v17[0x1E0], 0, 0x38);
  v17[0x1EE] = "lighting\\2x\\v\\AD.v.hlsl";
  v17[0x1EF] = "LIGHTS";
  v17[0x1F0] = "3";
  v17[0x1F1] = "SKIN";
  v17[0x1F2] = EmptyString;
  v17[0x1F3] = "PROJ_SHADOW";
  v17[0x1F4] = EmptyString;
  memset(&v17[0x1F5], 0, 0x30);
  v17[0x201] = "lighting\\2x\\v\\DiffusePt.v.hlsl";
  v17[0x202] = "LIGHTS";
  v17[0x203] = "2";
  memset(&v17[0x204], 0, 0x40);
  v17[0x214] = "lighting\\2x\\v\\DiffusePt.v.hlsl";
  v17[0x215] = "LIGHTS";
  v17[0x216] = "2";
  v17[0x217] = "SKIN";
  v17[0x218] = EmptyString;
  memset(&v17[0x219], 0, 0x38);
  v17[0x227] = "lighting\\2x\\v\\DiffusePt.v.hlsl";
  v17[0x228] = "LIGHTS";
  v17[0x229] = "3";
  memset(&v17[0x22A], 0, 0x40);
  v17[0x23A] = "lighting\\2x\\v\\DiffusePt.v.hlsl";
  v17[0x23B] = "LIGHTS";
  v17[0x23C] = "3";
  v17[0x23D] = "SKIN";
  v17[0x23E] = EmptyString;
  memset(&v17[0x23F], 0, 0x38);
  v17[0x24D] = "lighting\\2x\\v\\Specular.v.hlsl";
  memset(&v17[0x24E], 0, 0x48);
  v17[0x260] = "lighting\\2x\\v\\Specular.v.hlsl";
  v17[0x261] = "SKIN";
  v17[0x262] = EmptyString;
  memset(&v17[0x263], 0, 0x40);
  v17[0x273] = "lighting\\2x\\v\\Specular.v.hlsl";
  v17[0x274] = "PROJ_SHADOW";
  v17[0x275] = EmptyString;
  memset(&v17[0x276], 0, 0x40);
  v17[0x286] = "lighting\\2x\\v\\Specular.v.hlsl";
  v17[0x287] = "SKIN";
  v17[0x288] = EmptyString;
  v17[0x289] = "PROJ_SHADOW";
  v17[0x28A] = EmptyString;
  memset(&v17[0x28B], 0, 0x38);
  v17[0x299] = "lighting\\2x\\v\\Specular.v.hlsl";
  v17[0x29A] = "POINT";
  v17[0x29B] = EmptyString;
  memset(&v17[0x29C], 0, 0x40);
  v17[0x2AC] = "lighting\\2x\\v\\Specular.v.hlsl";
  v17[0x2AD] = "SKIN";
  v17[0x2AE] = EmptyString;
  v17[0x2AF] = "POINT";
  v17[0x2B0] = EmptyString;
  memset(&v17[0x2B1], 0, 0x38);
  v17[0x2BF] = "lighting\\2x\\v\\EnvMap.v.hlsl";
  v17[0x2C0] = "ENVMAP";
  v17[0x2C1] = EmptyString;
  memset(&v17[0x2C2], 0, 0x40);
  v17[0x2D2] = "lighting\\2x\\v\\EnvMap.v.hlsl";
  v17[0x2D3] = "SKIN";
  v17[0x2D4] = EmptyString;
  v17[0x2D5] = "ENVMAP";
  v17[0x2D6] = EmptyString;
  memset(&v17[0x2D7], 0, 0x38);
  v17[0x2E5] = "lighting\\2x\\v\\EnvMap.v.hlsl";
  v17[0x2E6] = "ENVMAP";
  v17[0x2E7] = EmptyString;
  v17[0x2E8] = &off_A90BE8;
  memset(&v17[0x2E9], 0, 0x3C);
  v17[0x2F8] = "lighting\\2x\\v\\decal.v.hlsl";
  v17[0x2F9] = "DECAL";
  v17[0x2FA] = EmptyString;
  v17[0x2FB] = "MAXDECALS";
  v17[0x2FC] = Dest;
  memset(&v17[0x2FD], 0, 0x38);
  v17[0x30B] = "lighting\\2x\\v\\decal.v.hlsl";
  v17[0x30C] = "DECAL";
  v17[0x30D] = EmptyString;
  v17[0x30E] = "ALPHA";
  v17[0x30F] = EmptyString;
  v17[0x310] = "MAXDECALS";
  v17[0x311] = Dest;
  memset(&v17[0x312], 0, 0x30);
  v17[0x31E] = "lighting\\2x\\v\\land.v.hlsl";
  v17[0x31F] = "PROJ_SHADOW";
  v17[0x320] = EmptyString;
  memset(&v17[0x321], 0, 0x40);
  v17[0x331] = "lighting\\2x\\v\\land.v.hlsl";
  v17[0x332] = "LANDALPHA";
  v17[0x333] = EmptyString;
  v17[0x334] = "PROJ_SHADOW";
  v17[0x335] = EmptyString;
  memset(&v17[0x336], 0, 0x38);
  v17[0x344] = "lighting\\2x\\v\\landlighting.v.hlsl";
  v17[0x345] = "DIFF";
  v17[0x346] = EmptyString;
  v17[0x347] = "PTLIGHT";
  v17[0x348] = EmptyString;
  memset(&v17[0x349], 0, 0x38);
  v17[0x357] = "lighting\\2x\\v\\landlighting.v.hlsl";
  v17[0x358] = "SPECULAR";
  v17[0x359] = EmptyString;
  memset(&v17[0x35A], 0, 0x8C);
  v17[0x37D] = "lighting\\2x\\v\\landlighting.v.hlsl";
  v17[0x37E] = "LANDALPHA";
  v17[0x37F] = EmptyString;
  v17[0x380] = "DIFF";
  v17[0x381] = EmptyString;
  v17[0x382] = "PTLIGHT";
  v17[0x383] = EmptyString;
  memset(&v17[0x384], 0, 0x30);
  v17[0x390] = "lighting\\2x\\v\\landlighting.v.hlsl";
  v17[0x391] = "LANDALPHA";
  v17[0x392] = EmptyString;
  v17[0x393] = "SPECULAR";
  v17[0x394] = EmptyString;
  memset(&v17[0x395], 0, 0x84);
  v17[0x3B6] = "lighting\\2x\\v\\landlighting.v.hlsl";
  v17[0x3B7] = "SPECULAR";
  v17[0x3B8] = EmptyString;
  v17[0x3B9] = "PROJ_SHADOW";
  v17[0x3BA] = EmptyString;
  memset(&v17[0x3BB], 0, 0x38);
  v17[0x3C9] = "lighting\\2x\\v\\landlighting.v.hlsl";
  v17[0x3CA] = "LANDALPHA";
  v17[0x3CB] = EmptyString;
  v17[0x3CC] = "SPECULAR";
  v17[0x3CD] = EmptyString;
  v17[0x3CE] = "PROJ_SHADOW";
  v17[0x3CF] = EmptyString;
  memset(&v17[0x3D0], 0, 0x30);
  v17[0x3DC] = "lighting\\2x\\v\\depthmap.v.hlsl";
  v17[0x3DD] = "DEPTHMAP";
  v17[0x3DE] = EmptyString;
  memset(&v17[0x3DF], 0, 0x40);
  v17[0x3EF] = "lighting\\2x\\v\\depthmap.v.hlsl";
  v17[0x3F0] = "DEPTHMAP";
  v17[0x3F1] = EmptyString;
  v17[0x3F2] = "ALPHATEST";
  v17[0x3F3] = EmptyString;
  memset(&v17[0x3F4], 0, 0x38);
  v17[0x402] = "lighting\\2x\\v\\depthmap.v.hlsl";
  v17[0x403] = "DEPTHMAP";
  v17[0x404] = EmptyString;
  v17[0x405] = "SKIN";
  v17[0x406] = EmptyString;
  memset(&v17[0x407], 0, 0x38);
  v17[0x415] = "lighting\\2x\\v\\depthmap.v.hlsl";
  v17[0x416] = "DEPTHMAP";
  v17[0x417] = EmptyString;
  v17[0x418] = "SKIN";
  v17[0x419] = EmptyString;
  v17[0x41A] = "ALPHATEST";
  v17[0x41B] = EmptyString;
  memset(&v17[0x41C], 0, 0x30);
  v17[0x428] = "lighting\\2x\\v\\depthmap.v.hlsl";
  v17[0x429] = "DEPTHMAP";
  v17[0x42A] = EmptyString;
  v17[0x42B] = "WATERDEPTH";
  v17[0x42C] = EmptyString;
  memset(&v17[0x42D], 0, 0x38);
  v17[0x43B] = "lighting\\2x\\v\\renderNormals.v.hlsl";
  memset(&v17[0x43C], 0, 0x48);
  v17[0x44E] = "lighting\\2x\\v\\renderNormals.v.hlsl";
  v17[0x44F] = "SKIN";
  v17[0x450] = EmptyString;
  memset(&v17[0x451], 0, 0x40);
  v17[0x461] = "lighting\\2x\\v\\renderNormals.v.hlsl";
  v17[0x462] = "FIRE";
  v17[0x463] = EmptyString;
  memset(&v17[0x464], 0, 0x40);
  v17[0x474] = "lighting\\2x\\v\\renderNormals.v.hlsl";
  v17[0x475] = "CLEAR";
  v17[0x476] = EmptyString;
  memset(&v17[0x477], 0, 0x40);
  v17[0x487] = "lighting\\2x\\v\\renderNormals.v.hlsl";
  v17[0x488] = "CLEAR";
  v17[0x489] = EmptyString;
  v17[0x48A] = "SKIN";
  v17[0x48B] = EmptyString;
  memset(&v17[0x48C], 0, 0x38);
  v17[0x49A] = "lighting\\2x\\v\\land.v.hlsl";
  memset(&v17[0x49B], 0, 0x48);
  v17[0x4AD] = "lighting\\2x\\v\\land.v.hlsl";
  v17[0x4AE] = "LANDALPHA";
  v17[0x4AF] = EmptyString;
  memset(&v17[0x4B0], 0, 0x40);
  v17[0x4C0] = "lighting\\2x\\v\\land.v.hlsl";
  v17[0x4C1] = "LANDALPHA";
  v17[0x4C2] = EmptyString;
  v17[0x4C3] = "LANDLO";
  v17[0x4C4] = EmptyString;
  memset(&v17[0x4C5], 0, 0x38);
  v17[0x4D3] = "lighting\\2x\\v\\land.v.hlsl";
  v17[0x4D4] = "LANDALPHA";
  v17[0x4D5] = EmptyString;
  v17[0x4D6] = "SI";
  v17[0x4D7] = EmptyString;
  memset(&v17[0x4D8], 0, 0x38);
  v17[0x4E6] = "lighting\\2x\\v\\land.v.hlsl";
  v17[0x4E7] = "PTLIGHT";
  v17[0x4E8] = EmptyString;
  memset(&v17[0x4E9], 0, 0x40);
  v17[0x4F9] = "lighting\\2x\\v\\land.v.hlsl";
  v17[0x4FA] = "LANDALPHA";
  v17[0x4FB] = EmptyString;
  v17[0x4FC] = "PTLIGHT";
  v17[0x4FD] = EmptyString;
  memset(&v17[0x4FE], 0, 0x38);
  v17[0x50C] = "lighting\\2x\\v\\localMap.v.hlsl";
  memset(&v17[0x50D], 0, 0x48);
  v17[0x51F] = "lighting\\2x\\v\\localMap.v.hlsl";
  v17[0x520] = "SKIN";
  v17[0x521] = EmptyString;
  memset(&v17[0x522], 0, 0x40);
  v17[0x532] = "lighting\\2x\\v\\localMap.v.hlsl";
  v17[0x533] = "CLEAR";
  v17[0x534] = EmptyString;
  memset(&v17[0x535], 0, 0x40);
  v17[0x545] = "lighting\\1x\\v\\texEffect.v.hlsl";
  memset(&v17[0x546], 0, 0x48);
  v17[0x558] = "lighting\\1x\\v\\texEffect.v.hlsl";
  v17[0x559] = "SKIN";
  v17[0x55A] = EmptyString;
  memset(&v17[0x55B], 0, 0x40);
  v17[0x56B] = "lighting\\2x\\v\\SimpleShadow.v.hlsl";
  v17[0x56C] = "SHADOWMAP";
  v17[0x56D] = EmptyString;
  memset(&v17[0x56E], 0, 0x40);
  v17[0x57E] = "lighting\\2x\\v\\SimpleShadow.v.hlsl";
  v17[0x57F] = "SHADOWMAP";
  v17[0x580] = EmptyString;
  v17[0x581] = "SKIN";
  v17[0x582] = EmptyString;
  memset(&v17[0x583], 0, 0x38);
  v17[0x591] = "lighting\\2x\\v\\SimpleShadow.v.hlsl";
  v17[0x592] = "SHADOWMAP";
  v17[0x593] = EmptyString;
  v17[0x594] = "LAND";
  v17[0x595] = EmptyString;
  v17[0x596] = "VC";
  v17[0x597] = EmptyString;
  memset(&v17[0x598], 0, 0x30);
  v0 = 0;
  v1 = (char **)v19;
  do
  {
    if ( *v1 )
    {
      sub_801030(*v1, (int)FileName);
      _sprintf(v21, "SLS1%03i.vso", v0);
      VertexShader = CreateVertexShader(FileName, v1 + 1, "vs_1_1", v21, 0, 0);
      v3 = *(volatile LONG **)(4 * v0 + 0xB45290);
      v14 = VertexShader;
      if ( v3 != (volatile LONG *)VertexShader )
      {
        if ( v3 )
        {
          if ( !InterlockedDecrement(v3 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1);
          VertexShader = v14;
        }
        *(_DWORD *)(4 * v0 + 0xB45290) = VertexShader;
        if ( VertexShader )
          InterlockedIncrement((volatile LONG *)VertexShader + 1);
      }
    }
    ++v0;
    v1 += 0x13;
  }
  while ( v0 < 0x1F );
  v4 = (NiD3DShaderProgram **)v18;
  v5 = 0;
  v15 = v18;
  do
  {
    result = *v4;
    if ( *v4 )
    {
      sub_801030((char *)result, (int)FileName);
      _sprintf(v21, "SLS1S%03i.vso", v5);
      result = CreateVertexShader(FileName, v4 + 1, "vs_1_1", v21, 0, 0);
      v7 = *(volatile LONG **)(4 * v5 + 0xB4530C);
      v8 = result;
      if ( v7 != (volatile LONG *)result )
      {
        if ( v7 )
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement(v7 + 1);
          if ( !result )
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v7)(v7, 1);
        }
        *(_DWORD *)(4 * v5 + 0xB4530C) = v8;
        if ( v8 )
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v8 + 1);
      }
    }
    ++v5;
    v4 = (NiD3DShaderProgram **)(v15 + 0x13);
    v15 += 0x13;
  }
  while ( v5 < 0x16 );
  if ( ShaderPackage >= 2 )
  {
    v9 = (NiD3DShaderProgram **)v17;
    v10 = 0;
    v16 = v17;
    do
    {
      result = *v9;
      if ( *v9 )
      {
        sub_801030((char *)result, (int)FileName);
        _sprintf(v21, "SLS2%03i.vso", v10);
        result = CreateVertexShader(FileName, v9 + 1, "vs_2_0", v21, 0, 0);
        v12 = *(volatile LONG **)(4 * v10 + 0xB45364);
        v13 = result;
        if ( v12 != (volatile LONG *)result )
        {
          if ( v12 )
          {
            result = (NiD3DShaderProgram *)InterlockedDecrement(v12 + 1);
            if ( !result )
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v12)(v12, 1);
          }
          *(_DWORD *)(4 * v10 + 0xB45364) = v13;
          if ( v13 )
            result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v13 + 1);
        }
      }
      else
      {
        v11 = *(_DWORD *)(4 * v10 + 0xB45364);
        if ( v11 )
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)(v11 + 4));
          if ( !result )
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(int, int))v11)(v11, 1);
          *(_DWORD *)(4 * v10 + 0xB45364) = 0;
        }
      }
      ++v10;
      v9 = (NiD3DShaderProgram **)(v16 + 0x13);
      v16 += 0x13;
    }
    while ( v10 < 0x4C );
  }
  return result;
}
