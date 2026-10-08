// Loads Oblivion ShadowLightShader pixel-program variants from lighting\\1x and lighting\\2x HLSL sources. Compile macros include runtime numeric shadow parameters and material/pass feature combinations.
void __thiscall ShadowLightShader__LoadPixelShaders(void *this)
{
  int v1; // esi
  char **v2; // ebx
  NiD3DShaderProgram *PixelShader; // eax
  volatile LONG *v4; // ebp
  int v5; // ecx
  char **v6; // ebx
  int v7; // esi
  int v8; // ebx
  NiD3DShaderProgram *v9; // eax
  volatile LONG *v10; // ebx
  NiD3DShaderProgram *v11; // ebp
  NiD3DShaderProgram *v12; // [esp+20h] [ebp-2B2Ch]
  _DWORD *v13; // [esp+20h] [ebp-2B2Ch]
  int v14; // [esp+28h] [ebp-2B24h]
  _DWORD v15[1558]; // [esp+2Ch] [ebp-2B20h] BYREF
  _DWORD v16[893]; // [esp+1884h] [ebp-12C8h] BYREF
  char Dest[8]; // [esp+2678h] [ebp-4D4h] BYREF
  char v18[260]; // [esp+2680h] [ebp-4CCh] BYREF
  char FileName[260]; // [esp+2784h] [ebp-3C8h] BYREF
  char v20[352]; // [esp+2888h] [ebp-2C4h] BYREF
  char DstBuf[352]; // [esp+29E8h] [ebp-164h] BYREF

  _gcvt(flt_B2C2BC, 0xC, DstBuf); /*0x7cf006*/
  _gcvt(flt_B2C2C0, 0xC, v20); /*0x7cf024*/
  _itoa(*(_DWORD *)&OB_DisplayDebugFlags_010201A0[4], Dest, 0xA); /*0x7cf039*/
  v16[0] = "lighting\\1x\\p\\base.p.hlsl"; /*0x7cf050*/
  memset(&v16[1], 0, 0x48); /*0x7cf057*/
  v16[0x13] = "lighting\\1x\\p\\diffusePt.p.hlsl"; /*0x7cf06e*/
  memset(&v16[0x14], 0, 0x48); /*0x7cf079*/
  v16[0x26] = "lighting\\1x\\p\\diffuseDir.p.hlsl"; /*0x7cf090*/
  memset(&v16[0x27], 0, 0x48); /*0x7cf09b*/
  v16[0x39] = "lighting\\1x\\p\\base.p.hlsl"; /*0x7cf0bf*/
  v16[0x3A] = &off_A8F8C4; /*0x7cf0c6*/
  v16[0x3B] = EmptyString; /*0x7cf0cd*/
  memset(&v16[0x3C], 0, 0x40); /*0x7cf0d4*/
  v16[0x4C] = "lighting\\1x\\p\\base.p.hlsl"; /*0x7cf0eb*/
  v16[0x4D] = &off_A8F8C4; /*0x7cf0f2*/
  v16[0x4E] = EmptyString; /*0x7cf0f9*/
  v16[0x4F] = "VC"; /*0x7cf100*/
  v16[0x50] = EmptyString; /*0x7cf10b*/
  memset(&v16[0x51], 0, 0x38); /*0x7cf112*/
  v16[0x5F] = "lighting\\1x\\p\\base.p.hlsl"; /*0x7cf120*/
  v16[0x60] = &off_A8F8C4; /*0x7cf127*/
  v16[0x61] = EmptyString; /*0x7cf12e*/
  v16[0x62] = "FACEGENBLEND"; /*0x7cf135*/
  v16[0x63] = EmptyString; /*0x7cf140*/
  memset(&v16[0x64], 0, 0x38); /*0x7cf147*/
  v16[0x72] = "lighting\\1x\\p\\base.p.hlsl"; /*0x7cf167*/
  v16[0x73] = &off_A8F8C4; /*0x7cf16e*/
  v16[0x74] = EmptyString; /*0x7cf175*/
  v16[0x75] = "HAIR"; /*0x7cf17c*/
  v16[0x76] = EmptyString; /*0x7cf187*/
  memset(&v16[0x77], 0, 0x38); /*0x7cf18e*/
  v16[0x85] = "lighting\\1x\\p\\specularPt.p.hlsl"; /*0x7cf1b1*/
  v16[0x86] = "SPECMULT"; /*0x7cf1bc*/
  v16[0x87] = DstBuf; /*0x7cf1c3*/
  memset(&v16[0x88], 0, 0x40); /*0x7cf1ca*/
  v16[0x98] = "lighting\\1x\\p\\specularDir.p.hlsl"; /*0x7cf1e8*/
  v16[0x99] = "SPECMULT"; /*0x7cf1f3*/
  v16[0x9A] = DstBuf; /*0x7cf1fa*/
  memset(&v16[0x9B], 0, 0x40); /*0x7cf201*/
  v16[0xAB] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf220*/
  memset(&v16[0xAC], 0, 0x48); /*0x7cf227*/
  v16[0xBE] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf243*/
  v16[0xBF] = &off_A90D88; /*0x7cf24a*/
  v16[0xC0] = EmptyString; /*0x7cf251*/
  memset(&v16[0xC1], 0, 0x40); /*0x7cf258*/
  v16[0xD1] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf26f*/
  v16[0xD2] = "ALPHA"; /*0x7cf276*/
  v16[0xD3] = EmptyString; /*0x7cf281*/
  memset(&v16[0xD4], 0, 0x40); /*0x7cf288*/
  v16[0xE4] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf29f*/
  v16[0xE5] = "ALPHA"; /*0x7cf2a6*/
  v16[0xE6] = EmptyString; /*0x7cf2b1*/
  v16[0xE7] = &off_A90D88; /*0x7cf2b8*/
  v16[0xE8] = EmptyString; /*0x7cf2bf*/
  memset(&v16[0xE9], 0, 0x38); /*0x7cf2c6*/
  v16[0xF7] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf2dc*/
  v16[0xF8] = "VC"; /*0x7cf2e3*/
  v16[0xF9] = EmptyString; /*0x7cf2ee*/
  memset(&v16[0xFA], 0, 0x40); /*0x7cf2f5*/
  v16[0x10A] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf30d*/
  v16[0x10B] = "VC"; /*0x7cf314*/
  v16[0x10C] = EmptyString; /*0x7cf31f*/
  v16[0x10D] = &off_A90D88; /*0x7cf326*/
  v16[0x10E] = EmptyString; /*0x7cf32d*/
  memset(&v16[0x10F], 0, 0x38); /*0x7cf334*/
  v16[0x11D] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf34e*/
  v16[0x11E] = "VC"; /*0x7cf355*/
  v16[0x11F] = EmptyString; /*0x7cf360*/
  v16[0x120] = "ALPHA"; /*0x7cf367*/
  v16[0x121] = EmptyString; /*0x7cf372*/
  memset(&v16[0x122], 0, 0x38); /*0x7cf379*/
  v16[0x130] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf390*/
  v16[0x131] = "VC"; /*0x7cf397*/
  v16[0x132] = EmptyString; /*0x7cf3a2*/
  v16[0x133] = "ALPHA"; /*0x7cf3a9*/
  v16[0x134] = EmptyString; /*0x7cf3b4*/
  v16[0x135] = &off_A90D88; /*0x7cf3bb*/
  v16[0x136] = EmptyString; /*0x7cf3c2*/
  memset(&v16[0x137], 0, 0x30); /*0x7cf3c9*/
  v16[0x143] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf3e0*/
  v16[0x144] = "FACEGENBLEND"; /*0x7cf3e7*/
  v16[0x145] = EmptyString; /*0x7cf3f2*/
  memset(&v16[0x146], 0, 0x40); /*0x7cf3f9*/
  v16[0x156] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf410*/
  v16[0x157] = "FACEGENBLEND"; /*0x7cf417*/
  v16[0x158] = EmptyString; /*0x7cf422*/
  v16[0x159] = &off_A90D88; /*0x7cf429*/
  v16[0x15A] = EmptyString; /*0x7cf430*/
  memset(&v16[0x15B], 0, 0x38); /*0x7cf437*/
  v16[0x169] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf44e*/
  v16[0x16A] = "FACEGENBLEND"; /*0x7cf455*/
  v16[0x16B] = EmptyString; /*0x7cf460*/
  v16[0x16C] = "ALPHA"; /*0x7cf467*/
  v16[0x16D] = EmptyString; /*0x7cf472*/
  memset(&v16[0x16E], 0, 0x38); /*0x7cf479*/
  v16[0x17C] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf490*/
  v16[0x17D] = "FACEGENBLEND"; /*0x7cf497*/
  v16[0x17E] = EmptyString; /*0x7cf4a2*/
  v16[0x17F] = &off_A90D88; /*0x7cf4a9*/
  v16[0x180] = EmptyString; /*0x7cf4b0*/
  v16[0x181] = "ALPHA"; /*0x7cf4b7*/
  v16[0x182] = EmptyString; /*0x7cf4c2*/
  memset(&v16[0x183], 0, 0x30); /*0x7cf4c9*/
  v16[0x18F] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf4e8*/
  v16[0x190] = "SI"; /*0x7cf4ef*/
  v16[0x191] = EmptyString; /*0x7cf4f6*/
  memset(&v16[0x192], 0, 0x40); /*0x7cf4fd*/
  v16[0x1A2] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf514*/
  v16[0x1A3] = "SI"; /*0x7cf51b*/
  v16[0x1A4] = EmptyString; /*0x7cf522*/
  v16[0x1A5] = &off_A90D88; /*0x7cf529*/
  v16[0x1A6] = EmptyString; /*0x7cf534*/
  memset(&v16[0x1A7], 0, 0x38); /*0x7cf53b*/
  v16[0x1B5] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf552*/
  v16[0x1B6] = "SI"; /*0x7cf559*/
  v16[0x1B7] = EmptyString; /*0x7cf560*/
  v16[0x1B8] = "ALPHA"; /*0x7cf567*/
  v16[0x1B9] = EmptyString; /*0x7cf572*/
  memset(&v16[0x1BA], 0, 0x38); /*0x7cf579*/
  v16[0x1C8] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf590*/
  v16[0x1C9] = "SI"; /*0x7cf597*/
  v16[0x1CA] = EmptyString; /*0x7cf59e*/
  v16[0x1CB] = "ALPHA"; /*0x7cf5a5*/
  v16[0x1CC] = EmptyString; /*0x7cf5b0*/
  v16[0x1CD] = &off_A90D88; /*0x7cf5b7*/
  v16[0x1CE] = EmptyString; /*0x7cf5c2*/
  memset(&v16[0x1CF], 0, 0x30); /*0x7cf5c9*/
  v16[0x1DB] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf5e0*/
  v16[0x1DC] = "SI"; /*0x7cf5e7*/
  v16[0x1DD] = EmptyString; /*0x7cf5ee*/
  v16[0x1DE] = "VC"; /*0x7cf5f5*/
  v16[0x1DF] = EmptyString; /*0x7cf600*/
  memset(&v16[0x1E0], 0, 0x38); /*0x7cf607*/
  v16[0x1EE] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf61e*/
  v16[0x1EF] = "SI"; /*0x7cf625*/
  v16[0x1F0] = EmptyString; /*0x7cf62c*/
  v16[0x1F1] = "VC"; /*0x7cf633*/
  v16[0x1F2] = EmptyString; /*0x7cf63e*/
  v16[0x1F3] = &off_A90D88; /*0x7cf645*/
  v16[0x1F4] = EmptyString; /*0x7cf650*/
  memset(&v16[0x1F5], 0, 0x30); /*0x7cf657*/
  v16[0x201] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf668*/
  v16[0x202] = "SI"; /*0x7cf66f*/
  v16[0x203] = EmptyString; /*0x7cf676*/
  v16[0x204] = "VC"; /*0x7cf67d*/
  v16[0x205] = EmptyString; /*0x7cf688*/
  v16[0x206] = "ALPHA"; /*0x7cf68f*/
  v16[0x207] = EmptyString; /*0x7cf69a*/
  memset(&v16[0x208], 0, 0x30); /*0x7cf6a1*/
  v16[0x214] = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl"; /*0x7cf6b8*/
  v16[0x215] = "SI"; /*0x7cf6cd*/
  v16[0x216] = EmptyString; /*0x7cf6d4*/
  v16[0x217] = "VC"; /*0x7cf6db*/
  v16[0x218] = EmptyString; /*0x7cf6e6*/
  v16[0x219] = "ALPHA"; /*0x7cf6ed*/
  v16[0x21A] = EmptyString; /*0x7cf6f8*/
  v16[0x21B] = &off_A90D88; /*0x7cf6ff*/
  v16[0x21C] = EmptyString; /*0x7cf706*/
  memset(&v16[0x21D], 0, 0x28); /*0x7cf70d*/
  v16[0x227] = "lighting\\1x\\p\\ambDiffDirAndPt.p.hlsl"; /*0x7cf753*/
  memset(&v16[0x228], 0, 0x48); /*0x7cf75e*/
  v16[0x23A] = "lighting\\1x\\p\\base.p.hlsl"; /*0x7cf775*/
  v16[0x23B] = &off_A90D88; /*0x7cf780*/
  v16[0x23C] = EmptyString; /*0x7cf787*/
  memset(&v16[0x23D], 0, 0x40); /*0x7cf78e*/
  v16[0x24D] = "lighting\\1x\\p\\base.p.hlsl"; /*0x7cf7a5*/
  v16[0x24E] = &off_A90D88; /*0x7cf7b0*/
  v16[0x24F] = EmptyString; /*0x7cf7b7*/
  v16[0x250] = &off_A8F8C4; /*0x7cf7be*/
  v16[0x251] = EmptyString; /*0x7cf7c9*/
  memset(&v16[0x252], 0, 0x38); /*0x7cf7d0*/
  v16[0x260] = "lighting\\1x\\p\\envmap.p.hlsl"; /*0x7cf7ec*/
  memset(&v16[0x261], 0, 0x48); /*0x7cf7f3*/
  v16[0x273] = "lighting\\1x\\p\\envmap.p.hlsl"; /*0x7cf80a*/
  v16[0x274] = "VC"; /*0x7cf811*/
  v16[0x275] = EmptyString; /*0x7cf81c*/
  memset(&v16[0x276], 0, 0x40); /*0x7cf823*/
  v16[0x286] = "lighting\\1x\\p\\vertDir.p.hlsl"; /*0x7cf83d*/
  memset(&v16[0x287], 0, 0x48); /*0x7cf848*/
  v16[0x299] = "lighting\\1x\\p\\vertDirAndPt.p.hlsl"; /*0x7cf85e*/
  memset(&v16[0x29A], 0, 0x48); /*0x7cf869*/
  v16[0x2AC] = "lighting\\1x\\p\\SI.p.hlsl"; /*0x7cf88d*/
  v16[0x2AD] = "AMBIENT"; /*0x7cf894*/
  v16[0x2AE] = EmptyString; /*0x7cf89f*/
  v16[0x2AF] = "EMMITMULT"; /*0x7cf8a6*/
  v16[0x2B0] = v20; /*0x7cf8b1*/
  memset(&v16[0x2B1], 0, 0x38); /*0x7cf8b8*/
  v16[0x2BF] = "lighting\\1x\\p\\SI.p.hlsl"; /*0x7cf8d6*/
  v16[0x2C0] = "EMMITMULT"; /*0x7cf8dd*/
  v16[0x2C1] = v20; /*0x7cf8e8*/
  memset(&v16[0x2C2], 0, 0x40); /*0x7cf8ef*/
  v16[0x2D2] = "lighting\\1x\\p\\SI.p.hlsl"; /*0x7cf906*/
  v16[0x2D3] = "SIBLOCK"; /*0x7cf90d*/
  memset(&v16[0x2D4], 0, 0x44); /*0x7cf918*/
  v16[0x2E5] = "lighting\\1x\\p\\base.p.hlsl"; /*0x7cf936*/
  memset(&v16[0x2E6], 0, 0x48); /*0x7cf941*/
  v16[0x2F8] = "lighting\\1x\\p\\land.p.hlsl"; /*0x7cf960*/
  memset(&v16[0x2F9], 0, 0x48); /*0x7cf967*/
  v16[0x30B] = "lighting\\1x\\p\\land.p.hlsl"; /*0x7cf97e*/
  v16[0x30C] = "LANDALPHA"; /*0x7cf985*/
  v16[0x30D] = EmptyString; /*0x7cf990*/
  memset(&v16[0x30E], 0, 0x40); /*0x7cf997*/
  v16[0x31E] = "lighting\\1x\\p\\land.p.hlsl"; /*0x7cf9ae*/
  v16[0x31F] = "SI"; /*0x7cf9b5*/
  v16[0x320] = EmptyString; /*0x7cf9bc*/
  memset(&v16[0x321], 0, 0x40); /*0x7cf9c3*/
  v16[0x331] = "lighting\\1x\\p\\land.p.hlsl"; /*0x7cf9da*/
  v16[0x332] = "LANDALPHA"; /*0x7cf9e1*/
  v16[0x333] = EmptyString; /*0x7cf9ec*/
  v16[0x334] = "SI"; /*0x7cf9f3*/
  v16[0x335] = EmptyString; /*0x7cf9fa*/
  memset(&v16[0x336], 0, 0x38); /*0x7cfa01*/
  v16[0x344] = "lighting\\1x\\p\\land.p.hlsl"; /*0x7cfa0d*/
  v16[0x345] = "PTLIGHT"; /*0x7cfa14*/
  v16[0x346] = EmptyString; /*0x7cfa1f*/
  memset(&v16[0x347], 0, 0x40); /*0x7cfa31*/
  v16[0x357] = "lighting\\1x\\p\\land.p.hlsl"; /*0x7cfa48*/
  v16[0x358] = "LANDALPHA"; /*0x7cfa4f*/
  v16[0x359] = EmptyString; /*0x7cfa5a*/
  v16[0x35A] = "PTLIGHT"; /*0x7cfa61*/
  v16[0x35B] = EmptyString; /*0x7cfa6c*/
  memset(&v16[0x35C], 0, 0x84); /*0x7cfa73*/
  v15[0] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfaa6*/
  memset(&v15[1], 0, 0x48); /*0x7cfaaa*/
  v15[0x13] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfabe*/
  v15[0x14] = "MODELSPACENORM"; /*0x7cfac5*/
  v15[0x15] = EmptyString; /*0x7cfad0*/
  v15[0x16] = "LODLANDCLIP"; /*0x7cfad7*/
  v15[0x17] = EmptyString; /*0x7cfae2*/
  memset(&v15[0x18], 0, 0x38); /*0x7cfae9*/
  v15[0x26] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfb00*/
  v15[0x27] = "SI"; /*0x7cfb07*/
  v15[0x28] = EmptyString; /*0x7cfb0e*/
  memset(&v15[0x29], 0, 0x40); /*0x7cfb15*/
  v15[0x39] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfb2c*/
  v15[0x3A] = "PROJ_SHADOW"; /*0x7cfb33*/
  v15[0x3B] = EmptyString; /*0x7cfb3e*/
  memset(&v15[0x3C], 0, 0x40); /*0x7cfb45*/
  v15[0x4C] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfb5c*/
  v15[0x4D] = "MODELSPACENORM"; /*0x7cfb63*/
  v15[0x4E] = EmptyString; /*0x7cfb6e*/
  v15[0x4F] = "PROJ_SHADOW"; /*0x7cfb75*/
  v15[0x50] = EmptyString; /*0x7cfb80*/
  v15[0x51] = "LODLANDCLIP"; /*0x7cfb87*/
  v15[0x52] = EmptyString; /*0x7cfb92*/
  memset(&v15[0x53], 0, 0x30); /*0x7cfb99*/
  v15[0x5F] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfba8*/
  v15[0x60] = "SI"; /*0x7cfbaf*/
  v15[0x61] = EmptyString; /*0x7cfbb6*/
  v15[0x62] = "PROJ_SHADOW"; /*0x7cfbbd*/
  v15[0x63] = EmptyString; /*0x7cfbc8*/
  memset(&v15[0x64], 0, 0x38); /*0x7cfbcf*/
  v15[0x72] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfbf1*/
  v15[0x73] = "STBB"; /*0x7cfbf8*/
  v15[0x74] = EmptyString; /*0x7cfc03*/
  memset(&v15[0x75], 0, 0x40); /*0x7cfc0a*/
  v15[0x85] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfc21*/
  v15[0x86] = "HAIR"; /*0x7cfc28*/
  v15[0x87] = EmptyString; /*0x7cfc33*/
  memset(&v15[0x88], 0, 0x40); /*0x7cfc3a*/
  v15[0x98] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfc51*/
  v15[0x99] = "HAIR"; /*0x7cfc58*/
  v15[0x9A] = EmptyString; /*0x7cfc63*/
  v15[0x9B] = "PROJ_SHADOW"; /*0x7cfc6a*/
  v15[0x9C] = EmptyString; /*0x7cfc75*/
  memset(&v15[0x9D], 0, 0x38); /*0x7cfc7c*/
  v15[0xAB] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfc93*/
  v15[0xAC] = "LIGHTS"; /*0x7cfc9a*/
  v15[0xAD] = "2"; /*0x7cfca5*/
  memset(&v15[0xAE], 0, 0x40); /*0x7cfcb0*/
  v15[0xBE] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfcc7*/
  v15[0xBF] = "LIGHTS"; /*0x7cfcce*/
  v15[0xC0] = "2"; /*0x7cfcd9*/
  v15[0xC1] = "SI"; /*0x7cfce4*/
  v15[0xC2] = EmptyString; /*0x7cfceb*/
  memset(&v15[0xC3], 0, 0x38); /*0x7cfcf2*/
  v15[0xD1] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfd0c*/
  v15[0xD2] = "LIGHTS"; /*0x7cfd13*/
  v15[0xD3] = "2"; /*0x7cfd1e*/
  v15[0xD4] = "HAIR"; /*0x7cfd29*/
  v15[0xD5] = EmptyString; /*0x7cfd34*/
  memset(&v15[0xD6], 0, 0x38); /*0x7cfd3b*/
  v15[0xE4] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfd52*/
  v15[0xE5] = "LIGHTS"; /*0x7cfd59*/
  v15[0xE6] = "2"; /*0x7cfd64*/
  v15[0xE7] = "PROJ_SHADOW"; /*0x7cfd6f*/
  v15[0xE8] = EmptyString; /*0x7cfd7a*/
  memset(&v15[0xE9], 0, 0x38); /*0x7cfd81*/
  v15[0xF7] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfd8d*/
  v15[0xF8] = "LIGHTS"; /*0x7cfd94*/
  v15[0xF9] = "2"; /*0x7cfd9f*/
  v15[0xFA] = "SI"; /*0x7cfdaa*/
  v15[0xFB] = EmptyString; /*0x7cfdbc*/
  v15[0xFC] = "PROJ_SHADOW"; /*0x7cfdc3*/
  v15[0xFD] = EmptyString; /*0x7cfdce*/
  memset(&v15[0xFE], 0, 0x30); /*0x7cfdd5*/
  v15[0x10A] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfdec*/
  v15[0x10B] = "LIGHTS"; /*0x7cfdf3*/
  v15[0x10C] = "2"; /*0x7cfdfe*/
  v15[0x10D] = "HAIR"; /*0x7cfe09*/
  v15[0x10E] = EmptyString; /*0x7cfe14*/
  v15[0x10F] = "PROJ_SHADOW"; /*0x7cfe1b*/
  v15[0x110] = EmptyString; /*0x7cfe26*/
  memset(&v15[0x111], 0, 0x30); /*0x7cfe2d*/
  v15[0x11D] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfe44*/
  v15[0x11E] = "SPECULAR"; /*0x7cfe4b*/
  v15[0x11F] = EmptyString; /*0x7cfe56*/
  memset(&v15[0x120], 0, 0x40); /*0x7cfe5d*/
  v15[0x130] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfe74*/
  v15[0x131] = "SPECULAR"; /*0x7cfe7b*/
  v15[0x132] = EmptyString; /*0x7cfe86*/
  v15[0x133] = "SI"; /*0x7cfe8d*/
  v15[0x134] = EmptyString; /*0x7cfe94*/
  memset(&v15[0x135], 0, 0x38); /*0x7cfe9b*/
  v15[0x143] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfeb5*/
  v15[0x144] = "SPECULAR"; /*0x7cfebc*/
  v15[0x145] = EmptyString; /*0x7cfec7*/
  v15[0x146] = "HAIR"; /*0x7cfece*/
  v15[0x147] = EmptyString; /*0x7cfed9*/
  memset(&v15[0x148], 0, 0x38); /*0x7cfee0*/
  v15[0x156] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cfef7*/
  v15[0x157] = "SPECULAR"; /*0x7cfefe*/
  v15[0x158] = EmptyString; /*0x7cff09*/
  v15[0x159] = "PROJ_SHADOW"; /*0x7cff10*/
  v15[0x15A] = EmptyString; /*0x7cff1b*/
  memset(&v15[0x15B], 0, 0x38); /*0x7cff22*/
  v15[0x169] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cff39*/
  v15[0x16A] = "SPECULAR"; /*0x7cff40*/
  v15[0x16B] = EmptyString; /*0x7cff4b*/
  v15[0x16C] = "SI"; /*0x7cff52*/
  v15[0x16D] = EmptyString; /*0x7cff59*/
  v15[0x16E] = "PROJ_SHADOW"; /*0x7cff60*/
  v15[0x16F] = EmptyString; /*0x7cff6b*/
  memset(&v15[0x170], 0, 0x30); /*0x7cff72*/
  v15[0x17C] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cff7e*/
  v15[0x17D] = "SPECULAR"; /*0x7cff85*/
  v15[0x17E] = EmptyString; /*0x7cff90*/
  v15[0x17F] = "HAIR"; /*0x7cffa2*/
  v15[0x180] = EmptyString; /*0x7cffad*/
  v15[0x181] = "PROJ_SHADOW"; /*0x7cffb4*/
  v15[0x182] = EmptyString; /*0x7cffbf*/
  memset(&v15[0x183], 0, 0x30); /*0x7cffc6*/
  v15[0x18F] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7cffdd*/
  v15[0x190] = "SPECULAR"; /*0x7cffe4*/
  v15[0x191] = EmptyString; /*0x7cffef*/
  v15[0x192] = "LIGHTS"; /*0x7cfff6*/
  v15[0x193] = "2"; /*0x7d0001*/
  memset(&v15[0x194], 0, 0x38); /*0x7d000c*/
  v15[0x1A2] = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x7d001a*/
  v15[0x1A3] = "SPECULAR"; /*0x7d002f*/
  v15[0x1A4] = EmptyString; /*0x7d003a*/
  v15[0x1A5] = "LIGHTS"; /*0x7d0041*/
  v15[0x1A6] = "2"; /*0x7d0048*/
  v15[0x1A7] = "SI"; /*0x7d0053*/
  v15[0x1A8] = EmptyString; /*0x7d005a*/
  memset(&v15[0x1A9], 0, 0x160); /*0x7d0061*/
  v15[0x201] = "lighting\\2x\\p\\AD.p.hlsl"; /*0x7d00d7*/
  v15[0x202] = "LIGHTS"; /*0x7d00e2*/
  v15[0x203] = "2"; /*0x7d00e9*/
  memset(&v15[0x204], 0, 0x40); /*0x7d00f4*/
  v15[0x214] = "lighting\\2x\\p\\AD.p.hlsl"; /*0x7d010b*/
  v15[0x215] = "LIGHTS"; /*0x7d0116*/
  v15[0x216] = "2"; /*0x7d011d*/
  v15[0x217] = "SI"; /*0x7d0128*/
  v15[0x218] = EmptyString; /*0x7d012f*/
  memset(&v15[0x219], 0, 0x38); /*0x7d0136*/
  v15[0x227] = "lighting\\2x\\p\\AD.p.hlsl"; /*0x7d0150*/
  v15[0x228] = "LIGHTS"; /*0x7d015b*/
  v15[0x229] = "2"; /*0x7d0162*/
  v15[0x22A] = "PROJ_SHADOW"; /*0x7d016d*/
  v15[0x22B] = EmptyString; /*0x7d0178*/
  memset(&v15[0x22C], 0, 0x38); /*0x7d017f*/
  v15[0x23A] = "lighting\\2x\\p\\AD.p.hlsl"; /*0x7d0196*/
  v15[0x23B] = "LIGHTS"; /*0x7d01a1*/
  v15[0x23C] = "2"; /*0x7d01a8*/
  v15[0x23D] = "SI"; /*0x7d01b3*/
  v15[0x23E] = EmptyString; /*0x7d01ba*/
  v15[0x23F] = "PROJ_SHADOW"; /*0x7d01c1*/
  v15[0x240] = EmptyString; /*0x7d01cc*/
  memset(&v15[0x241], 0, 0x30); /*0x7d01d3*/
  v15[0x24D] = "lighting\\2x\\p\\AD.p.hlsl"; /*0x7d01ea*/
  v15[0x24E] = "LIGHTS"; /*0x7d01f5*/
  v15[0x24F] = "3"; /*0x7d01fc*/
  memset(&v15[0x250], 0, 0x40); /*0x7d0207*/
  v15[0x260] = "lighting\\2x\\p\\AD.p.hlsl"; /*0x7d021e*/
  v15[0x261] = "LIGHTS"; /*0x7d0229*/
  v15[0x262] = "3"; /*0x7d0230*/
  v15[0x263] = "SI"; /*0x7d023b*/
  v15[0x264] = EmptyString; /*0x7d0242*/
  memset(&v15[0x265], 0, 0x38); /*0x7d0249*/
  v15[0x273] = "lighting\\2x\\p\\AD.p.hlsl"; /*0x7d0260*/
  v15[0x274] = "LIGHTS"; /*0x7d026b*/
  v15[0x275] = "3"; /*0x7d0272*/
  v15[0x276] = "PROJ_SHADOW"; /*0x7d027d*/
  v15[0x277] = EmptyString; /*0x7d0288*/
  memset(&v15[0x278], 0, 0x38); /*0x7d028f*/
  v15[0x286] = "lighting\\2x\\p\\AD.p.hlsl"; /*0x7d02a6*/
  v15[0x287] = "LIGHTS"; /*0x7d02b1*/
  v15[0x288] = "3"; /*0x7d02b8*/
  v15[0x289] = "SI"; /*0x7d02c3*/
  v15[0x28A] = EmptyString; /*0x7d02ca*/
  v15[0x28B] = "PROJ_SHADOW"; /*0x7d02d1*/
  v15[0x28C] = EmptyString; /*0x7d02dc*/
  memset(&v15[0x28D], 0, 0x30); /*0x7d02e3*/
  v15[0x299] = "lighting\\2x\\p\\DiffusePt.p.hlsl"; /*0x7d02fd*/
  v15[0x29A] = "LIGHTS"; /*0x7d0308*/
  v15[0x29B] = "2"; /*0x7d030f*/
  memset(&v15[0x29C], 0, 0x40); /*0x7d031a*/
  v15[0x2AC] = "lighting\\2x\\p\\DiffusePt.p.hlsl"; /*0x7d0326*/
  v15[0x2AD] = "LIGHTS"; /*0x7d0331*/
  v15[0x2AE] = "3"; /*0x7d0338*/
  memset(&v15[0x2AF], 0, 0x40); /*0x7d034e*/
  v15[0x2BF] = "lighting\\2x\\p\\Specular.p.hlsl"; /*0x7d036a*/
  memset(&v15[0x2C0], 0, 0x48); /*0x7d0371*/
  v15[0x2D2] = "lighting\\2x\\p\\Specular.p.hlsl"; /*0x7d0388*/
  v15[0x2D3] = "HAIR"; /*0x7d038f*/
  v15[0x2D4] = EmptyString; /*0x7d039a*/
  memset(&v15[0x2D5], 0, 0x40); /*0x7d03a1*/
  v15[0x2E5] = "lighting\\2x\\p\\Specular.p.hlsl"; /*0x7d03b8*/
  v15[0x2E6] = "PROJ_SHADOW"; /*0x7d03bf*/
  v15[0x2E7] = EmptyString; /*0x7d03ca*/
  memset(&v15[0x2E8], 0, 0x40); /*0x7d03d1*/
  v15[0x2F8] = "lighting\\2x\\p\\Specular.p.hlsl"; /*0x7d03e8*/
  v15[0x2F9] = "PROJ_SHADOW"; /*0x7d03ef*/
  v15[0x2FA] = EmptyString; /*0x7d03fa*/
  v15[0x2FB] = "HAIR"; /*0x7d0401*/
  v15[0x2FC] = EmptyString; /*0x7d040c*/
  memset(&v15[0x2FD], 0, 0x38); /*0x7d0413*/
  v15[0x30B] = "lighting\\2x\\p\\Specular.p.hlsl"; /*0x7d042d*/
  v15[0x30C] = "POINT"; /*0x7d0434*/
  v15[0x30D] = EmptyString; /*0x7d043f*/
  memset(&v15[0x30E], 0, 0x40); /*0x7d0446*/
  v15[0x31E] = "lighting\\2x\\p\\Specular.p.hlsl"; /*0x7d045d*/
  v15[0x31F] = "POINT"; /*0x7d0464*/
  v15[0x320] = EmptyString; /*0x7d046f*/
  v15[0x321] = "HAIR"; /*0x7d0476*/
  v15[0x322] = EmptyString; /*0x7d0481*/
  memset(&v15[0x323], 0, 0x38); /*0x7d0488*/
  v15[0x331] = "lighting\\2x\\p\\EnvMap.p.hlsl"; /*0x7d04a4*/
  memset(&v15[0x332], 0, 0x48); /*0x7d04ab*/
  v15[0x344] = "lighting\\2x\\p\\EnvMap.p.hlsl"; /*0x7d04c2*/
  v15[0x345] = "WINDOW"; /*0x7d04c9*/
  v15[0x346] = EmptyString; /*0x7d04d4*/
  memset(&v15[0x347], 0, 0x40); /*0x7d04db*/
  v15[0x357] = "lighting\\2x\\p\\EnvMap.p.hlsl"; /*0x7d04f2*/
  v15[0x358] = &off_A90BE8; /*0x7d04f9*/
  memset(&v15[0x359], 0, 0x44); /*0x7d0504*/
  v15[0x36A] = "lighting\\2x\\p\\decal.p.hlsl"; /*0x7d052e*/
  v15[0x36B] = "DECAL"; /*0x7d0539*/
  v15[0x36C] = EmptyString; /*0x7d0544*/
  v15[0x36D] = "MAXDECALS"; /*0x7d054b*/
  v15[0x36E] = Dest; /*0x7d0552*/
  memset(&v15[0x36F], 0, 0x38); /*0x7d0559*/
  v15[0x37D] = "lighting\\2x\\p\\decal.p.hlsl"; /*0x7d057a*/
  v15[0x37E] = "DECAL"; /*0x7d0585*/
  v15[0x37F] = EmptyString; /*0x7d0590*/
  v15[0x380] = "ALPHA"; /*0x7d0597*/
  v15[0x381] = EmptyString; /*0x7d05a2*/
  v15[0x382] = "MAXDECALS"; /*0x7d05a9*/
  v15[0x383] = Dest; /*0x7d05b0*/
  memset(&v15[0x384], 0, 0x30); /*0x7d05b7*/
  v15[0x390] = "lighting\\2x\\p\\land.p.hlsl"; /*0x7d05d3*/
  v15[0x391] = "PROJ_SHADOW"; /*0x7d05da*/
  v15[0x392] = EmptyString; /*0x7d05e5*/
  memset(&v15[0x393], 0, 0x40); /*0x7d05ec*/
  v15[0x3A3] = "lighting\\2x\\p\\land.p.hlsl"; /*0x7d0603*/
  v15[0x3A4] = "PROJ_SHADOW"; /*0x7d060a*/
  v15[0x3A5] = EmptyString; /*0x7d0615*/
  v15[0x3A6] = "LANDALPHA"; /*0x7d061c*/
  v15[0x3A7] = EmptyString; /*0x7d0627*/
  memset(&v15[0x3A8], 0, 0x38); /*0x7d062e*/
  v15[0x3B6] = "lighting\\2x\\p\\landlighting.p.hlsl"; /*0x7d0645*/
  v15[0x3B7] = "DIFF"; /*0x7d0650*/
  v15[0x3B8] = EmptyString; /*0x7d065b*/
  v15[0x3B9] = "PTLIGHT"; /*0x7d0662*/
  v15[0x3BA] = EmptyString; /*0x7d066d*/
  memset(&v15[0x3BB], 0, 0x38); /*0x7d0674*/
  v15[0x3C9] = "lighting\\2x\\p\\landlighting.p.hlsl"; /*0x7d068b*/
  v15[0x3CA] = "SPECULAR"; /*0x7d0696*/
  v15[0x3CB] = EmptyString; /*0x7d06a1*/
  memset(&v15[0x3CC], 0, 0x8C); /*0x7d06a8*/
  v15[0x3EF] = "lighting\\2x\\p\\landlighting.p.hlsl"; /*0x7d06d9*/
  v15[0x3F0] = "LANDALPHA"; /*0x7d06e4*/
  v15[0x3F1] = EmptyString; /*0x7d06ef*/
  v15[0x3F2] = "DIFF"; /*0x7d06f6*/
  v15[0x3F3] = EmptyString; /*0x7d0701*/
  v15[0x3F4] = "PTLIGHT"; /*0x7d0708*/
  v15[0x3F5] = EmptyString; /*0x7d0713*/
  memset(&v15[0x3F6], 0, 0x30); /*0x7d071a*/
  v15[0x402] = "lighting\\2x\\p\\landlighting.p.hlsl"; /*0x7d0731*/
  v15[0x403] = "LANDALPHA"; /*0x7d073c*/
  v15[0x404] = EmptyString; /*0x7d0747*/
  v15[0x405] = "SPECULAR"; /*0x7d074e*/
  v15[0x406] = EmptyString; /*0x7d0759*/
  memset(&v15[0x407], 0, 0x84); /*0x7d0760*/
  v15[0x428] = "lighting\\2x\\p\\landlighting.p.hlsl"; /*0x7d078e*/
  v15[0x429] = "SPECULAR"; /*0x7d0799*/
  v15[0x42A] = EmptyString; /*0x7d07a4*/
  v15[0x42B] = "PROJ_SHADOW"; /*0x7d07ab*/
  v15[0x42C] = EmptyString; /*0x7d07b6*/
  memset(&v15[0x42D], 0, 0x38); /*0x7d07bd*/
  v15[0x43B] = "lighting\\2x\\p\\landlighting.p.hlsl"; /*0x7d07d4*/
  v15[0x43C] = "LANDALPHA"; /*0x7d07df*/
  v15[0x43D] = EmptyString; /*0x7d07ea*/
  v15[0x43E] = "SPECULAR"; /*0x7d07f1*/
  v15[0x43F] = EmptyString; /*0x7d07fc*/
  v15[0x440] = "PROJ_SHADOW"; /*0x7d0803*/
  v15[0x441] = EmptyString; /*0x7d080e*/
  memset(&v15[0x442], 0, 0x30); /*0x7d0815*/
  v15[0x44E] = "lighting\\2x\\p\\depthmap.p.hlsl"; /*0x7d082c*/
  v15[0x44F] = "DEPTHMAP"; /*0x7d0837*/
  v15[0x450] = EmptyString; /*0x7d0842*/
  memset(&v15[0x451], 0, 0x40); /*0x7d0849*/
  v15[0x461] = "lighting\\2x\\p\\depthmap.p.hlsl"; /*0x7d0863*/
  v15[0x462] = "DEPTHMAP"; /*0x7d086e*/
  v15[0x463] = EmptyString; /*0x7d0879*/
  v15[0x464] = "ALPHATEST"; /*0x7d0880*/
  v15[0x465] = EmptyString; /*0x7d088b*/
  memset(&v15[0x466], 0, 0x38); /*0x7d0892*/
  v15[0x474] = "lighting\\2x\\p\\depthmap.p.hlsl"; /*0x7d089e*/
  v15[0x475] = "DEPTHMAP"; /*0x7d08a9*/
  v15[0x476] = EmptyString; /*0x7d08bf*/
  v15[0x477] = "SKIN"; /*0x7d08c6*/
  v15[0x478] = EmptyString; /*0x7d08d1*/
  memset(&v15[0x479], 0, 0x38); /*0x7d08d8*/
  v15[0x487] = "lighting\\2x\\p\\depthmap.p.hlsl"; /*0x7d08ef*/
  v15[0x488] = "DEPTHMAP"; /*0x7d08fa*/
  v15[0x489] = EmptyString; /*0x7d0905*/
  v15[0x48A] = "SKIN"; /*0x7d090c*/
  v15[0x48B] = EmptyString; /*0x7d0917*/
  v15[0x48C] = "ALPHATEST"; /*0x7d091e*/
  v15[0x48D] = EmptyString; /*0x7d0929*/
  memset(&v15[0x48E], 0, 0x30); /*0x7d0930*/
  v15[0x49A] = "lighting\\2x\\p\\depthmap.p.hlsl"; /*0x7d0947*/
  v15[0x49B] = "DEPTHMAP"; /*0x7d0952*/
  v15[0x49C] = EmptyString; /*0x7d095d*/
  v15[0x49D] = "WATERDEPTH"; /*0x7d0964*/
  v15[0x49E] = EmptyString; /*0x7d096f*/
  memset(&v15[0x49F], 0, 0x38); /*0x7d0976*/
  v15[0x4AD] = "lighting\\2x\\p\\renderNormals.p.hlsl"; /*0x7d098d*/
  memset(&v15[0x4AE], 0, 0x48); /*0x7d0998*/
  v15[0x4C0] = "lighting\\2x\\p\\renderNormals.p.hlsl"; /*0x7d09af*/
  v15[0x4C1] = "FIRE"; /*0x7d09ba*/
  v15[0x4C2] = EmptyString; /*0x7d09c5*/
  memset(&v15[0x4C3], 0, 0x40); /*0x7d09cc*/
  v15[0x4D3] = "lighting\\2x\\p\\renderNormals.p.hlsl"; /*0x7d09e6*/
  v15[0x4D4] = "CLEAR"; /*0x7d09f1*/
  v15[0x4D5] = EmptyString; /*0x7d09fc*/
  memset(&v15[0x4D6], 0, 0x40); /*0x7d0a03*/
  v15[0x4E6] = "lighting\\2x\\p\\land.p.hlsl"; /*0x7d0a1a*/
  memset(&v15[0x4E7], 0, 0x48); /*0x7d0a21*/
  v15[0x4F9] = "lighting\\2x\\p\\land.p.hlsl"; /*0x7d0a38*/
  v15[0x4FA] = "LANDALPHA"; /*0x7d0a3f*/
  v15[0x4FB] = EmptyString; /*0x7d0a4a*/
  memset(&v15[0x4FC], 0, 0x40); /*0x7d0a51*/
  v15[0x50C] = "lighting\\2x\\p\\land.p.hlsl"; /*0x7d0a5d*/
  v15[0x50D] = "LANDALPHA"; /*0x7d0a64*/
  v15[0x50E] = EmptyString; /*0x7d0a6f*/
  v15[0x50F] = "LANDLO"; /*0x7d0a76*/
  v15[0x510] = EmptyString; /*0x7d0a81*/
  memset(&v15[0x511], 0, 0x38); /*0x7d0a88*/
  v15[0x51F] = "lighting\\2x\\p\\land.p.hlsl"; /*0x7d0aaa*/
  v15[0x520] = "SI"; /*0x7d0ab1*/
  v15[0x521] = EmptyString; /*0x7d0ab8*/
  memset(&v15[0x522], 0, 0x40); /*0x7d0abf*/
  v15[0x532] = "lighting\\2x\\p\\land.p.hlsl"; /*0x7d0ad6*/
  v15[0x533] = "LANDALPHA"; /*0x7d0add*/
  v15[0x534] = EmptyString; /*0x7d0ae8*/
  v15[0x535] = "SI"; /*0x7d0aef*/
  v15[0x536] = EmptyString; /*0x7d0af6*/
  memset(&v15[0x537], 0, 0x38); /*0x7d0afd*/
  v15[0x545] = "lighting\\2x\\p\\land.p.hlsl"; /*0x7d0b1c*/
  v15[0x546] = "PTLIGHT"; /*0x7d0b23*/
  v15[0x547] = EmptyString; /*0x7d0b2a*/
  memset(&v15[0x548], 0, 0x40); /*0x7d0b31*/
  v15[0x558] = "lighting\\2x\\p\\land.p.hlsl"; /*0x7d0b48*/
  v15[0x559] = "LANDALPHA"; /*0x7d0b4f*/
  v15[0x55A] = EmptyString; /*0x7d0b5a*/
  v15[0x55B] = "PTLIGHT"; /*0x7d0b61*/
  v15[0x55C] = EmptyString; /*0x7d0b68*/
  memset(&v15[0x55D], 0, 0x38); /*0x7d0b6f*/
  v15[0x56B] = "lighting\\2x\\p\\localMap.p.hlsl"; /*0x7d0b8b*/
  memset(&v15[0x56C], 0, 0x48); /*0x7d0b92*/
  v15[0x57E] = "lighting\\2x\\p\\localMap.p.hlsl"; /*0x7d0ba9*/
  v15[0x57F] = "CLEAR"; /*0x7d0bb0*/
  v15[0x580] = EmptyString; /*0x7d0bbb*/
  memset(&v15[0x581], 0, 0x40); /*0x7d0bc2*/
  v15[0x591] = "lighting\\1x\\p\\texEffect.p.hlsl"; /*0x7d0bd9*/
  v15[0x592] = "HQ"; /*0x7d0be4*/
  v15[0x593] = EmptyString; /*0x7d0bef*/
  memset(&v15[0x594], 0, 0x40); /*0x7d0bf6*/
  v15[0x5A4] = "lighting\\2x\\p\\SimpleShadow.p.hlsl";// Verified (Oblivion): ShadowLightShader__LoadPixelShaders table entry v15[0x5A4] (entry index 76 = 0x5A4/0x13) uses source "lighting\\2x\\p\\SimpleShadow.p.hlsl". The loader formats the output name as SLS2%03i.pso, so this entry compiles as SLS2076.pso. /*0x7d0c0f*/
  v15[0x5A5] = "SHADOWMAP"; /*0x7d0c1a*/
  v15[0x5A6] = EmptyString; /*0x7d0c25*/
  v15[0x5A7] = "DEPTHBIAS"; /*0x7d0c2c*/
  v15[0x5A8] = "-0.1"; /*0x7d0c33*/
  v15[0x5A9] = "SAMPLE"; /*0x7d0c49*/
  v15[0x5AA] = "1"; /*0x7d0c50*/
  v15[0x5AB] = "PASSES"; /*0x7d0c57*/
  v15[0x5AC] = "1"; /*0x7d0c5e*/
  memset(&v15[0x5AD], 0, 0x28); /*0x7d0c65*/
  v15[0x5B7] = "lighting\\2x\\p\\SimpleShadow.p.hlsl"; /*0x7d0cab*/
  v15[0x5B8] = "SHADOWMAP"; /*0x7d0cb6*/
  v15[0x5B9] = EmptyString; /*0x7d0cc1*/
  v15[0x5BA] = "DEPTHBIAS"; /*0x7d0cc8*/
  v15[0x5BB] = "-0.1"; /*0x7d0ccf*/
  v15[0x5BC] = "SAMPLE"; /*0x7d0cd6*/
  v15[0x5BD] = "1"; /*0x7d0cdd*/
  v15[0x5BE] = "PASSES"; /*0x7d0ce4*/
  v15[0x5BF] = "1"; /*0x7d0ceb*/
  v15[0x5C0] = "ALPHATEST"; /*0x7d0cf2*/
  v15[0x5C1] = EmptyString; /*0x7d0cfd*/
  memset(&v15[0x5C2], 0, 0x20); /*0x7d0d04*/
  v15[0x5CA] = "lighting\\2x\\p\\SimpleShadow.p.hlsl"; /*0x7d0d3c*/
  v15[0x5CB] = "SHADOWMAP"; /*0x7d0d47*/
  v15[0x5CC] = EmptyString; /*0x7d0d52*/
  v15[0x5CD] = "DEPTHBIAS"; /*0x7d0d59*/
  v15[0x5CE] = "-0.1"; /*0x7d0d60*/
  v15[0x5CF] = "SAMPLE"; /*0x7d0d67*/
  v15[0x5D0] = "4"; /*0x7d0d6e*/
  v15[0x5D1] = "PASSES"; /*0x7d0d79*/
  v15[0x5D2] = "1"; /*0x7d0d80*/
  memset(&v15[0x5D3], 0, 0x28); /*0x7d0d87*/
  v15[0x5DD] = "lighting\\2x\\p\\SimpleShadow.p.hlsl"; /*0x7d0dcd*/
  v15[0x5DE] = "SHADOWMAP"; /*0x7d0dd8*/
  v15[0x5DF] = EmptyString; /*0x7d0de3*/
  v15[0x5E0] = "DEPTHBIAS"; /*0x7d0dea*/
  v15[0x5E1] = "-0.1"; /*0x7d0df1*/
  v15[0x5E2] = "SAMPLE"; /*0x7d0df8*/
  v15[0x5E3] = "4"; /*0x7d0dff*/
  v15[0x5E4] = "PASSES"; /*0x7d0e0a*/
  v15[0x5E5] = "1"; /*0x7d0e11*/
  v15[0x5E6] = "ALPHATEST"; /*0x7d0e18*/
  v15[0x5E7] = EmptyString; /*0x7d0e23*/
  memset(&v15[0x5E8], 0, 0x20); /*0x7d0e2a*/
  v15[0x5F0] = "lighting\\2x\\p\\SimpleShadow.p.hlsl"; /*0x7d0e62*/
  v15[0x5F1] = "SHADOWMAP"; /*0x7d0e6d*/
  v15[0x5F2] = EmptyString; /*0x7d0e78*/
  v15[0x5F3] = "DEPTHBIAS"; /*0x7d0e7f*/
  v15[0x5F4] = "-0.1"; /*0x7d0e86*/
  v15[0x5F5] = "SAMPLE"; /*0x7d0e8d*/
  v15[0x5F6] = "4"; /*0x7d0e94*/
  v15[0x605] = EmptyString; /*0x7d0ea4*/
  v15[0x607] = "-0.1"; /*0x7d0eab*/
  v15[0x60D] = EmptyString; /*0x7d0eb2*/
  v15[0x5F7] = "PASSES"; /*0x7d0eb9*/
  v15[0x5F8] = "2"; /*0x7d0ec0*/
  memset(&v15[0x5F9], 0, 0x28); /*0x7d0ec7*/
  v15[0x603] = "lighting\\2x\\p\\SimpleShadow.p.hlsl"; /*0x7d0f0d*/
  v15[0x604] = "SHADOWMAP"; /*0x7d0f18*/
  v15[0x606] = "DEPTHBIAS"; /*0x7d0f23*/
  v15[0x608] = "SAMPLE"; /*0x7d0f2a*/
  v15[0x609] = "4"; /*0x7d0f31*/
  v15[0x60A] = "PASSES"; /*0x7d0f3c*/
  v15[0x60B] = "2"; /*0x7d0f43*/
  v15[0x60C] = "ALPHATEST"; /*0x7d0f4a*/
  memset(&v15[0x60E], 0, 0x20); /*0x7d0f55*/
  v1 = 0; /*0x7d0f8d*/
  v2 = (char **)v16; /*0x7d0f8f*/
  do /*0x7d103b*/
  {
    if ( *v2 ) /*0x7d0f96*/
    {
      sub_801030(*v2, (int)FileName); /*0x7d0fa9*/
      _sprintf(v18, "SLS1%03i.pso", v1); /*0x7d0fbc*/
      PixelShader = CreatePixelShader(FileName, v2 + 1, "ps_2_0", v18, 0, 1); /*0x7d0fe4*/
      v4 = *(volatile LONG **)(4 * v1 + 0xB45088); /*0x7d0fe9*/
      v12 = PixelShader; /*0x7d0ff2*/
      if ( v4 != (volatile LONG *)PixelShader ) /*0x7d0ff6*/
      {
        if ( v4 ) /*0x7d0ffa*/
        {
          if ( !InterlockedDecrement(v4 + 1) ) /*0x7d1000*/
            (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1); /*0x7d1017*/
          PixelShader = v12; /*0x7d1019*/
        }
        *(_DWORD *)(4 * v1 + 0xB45088) = PixelShader; /*0x7d101f*/
        if ( PixelShader ) /*0x7d1026*/
          InterlockedIncrement((volatile LONG *)PixelShader + 1); /*0x7d102c*/
      }
    }
    ++v1; /*0x7d1032*/
    v2 += 0x13; /*0x7d1035*/
  }
  while ( v1 < 0x2F ); /*0x7d103b*/
  v5 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF]; /*0x7d1041*/
  v14 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF]; /*0x7d104a*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x7d104e*/
  {
    v6 = (char **)v15; /*0x7d1054*/
    v7 = 0; /*0x7d1058*/
    v13 = v15; /*0x7d105a*/
    while ( 1 ) /*0x7d1064*/
    {
      if ( *v6 ) /*0x7d1064*/
      {
        if ( v7 <= 0x4D || v5 >= 5 ) /*0x7d10a9*/
        {
          sub_801030(*v6, (int)FileName); /*0x7d10b8*/
          _sprintf(v18, "SLS2%03i.pso", v7);    // Verified (Oblivion): 2x pixel-program loader formats "SLS2%03i.pso" from v7; for entry 76, the source table is v15[0x5A4] = lighting\\2x\\p\\SimpleShadow.p.hlsl. Candidate resource association: the installed shaderpackage002.sdp contains a record named SLS2076.pso whose CTAB lists FillColor, RimColor, SourceTexture, and fVars, which conflicts with this loader table; do not use that record to infer fVars lane semantics until package-to-loader version/slot linkage is resolved. /*0x7d10cb*/
          v9 = CreatePixelShader(FileName, v6 + 1, "ps_2_0", v18, 0, 1); /*0x7d10f3*/
          v10 = *(volatile LONG **)(4 * v7 + 0xB45144); /*0x7d10f8*/
          v11 = v9; /*0x7d10ff*/
          if ( v10 != (volatile LONG *)v9 ) /*0x7d1103*/
          {
            if ( v10 ) /*0x7d1107*/
            {
              if ( !InterlockedDecrement(v10 + 1) ) /*0x7d110d*/
                (**(void (__thiscall ***)(volatile LONG *, int))v10)(v10, 1); /*0x7d1123*/
            }
            *(_DWORD *)(4 * v7 + 0xB45144) = v11; /*0x7d1127*/
            if ( v11 ) /*0x7d112e*/
              InterlockedIncrement((volatile LONG *)v11 + 1); /*0x7d1134*/
          }
        }
      }
      else
      {
        v8 = *(_DWORD *)(4 * v7 + 0xB45144); /*0x7d106a*/
        if ( v8 ) /*0x7d1073*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7d107d*/
            (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7d1093*/
          *(_DWORD *)(4 * v7 + 0xB45144) = 0; /*0x7d1095*/
        }
      }
      ++v7; /*0x7d113e*/
      v6 = (char **)(v13 + 0x13); /*0x7d1141*/
      v13 += 0x13; /*0x7d1147*/
      if ( v7 >= 0x52 ) /*0x7d114b*/
        break; /*0x7d114b*/
      v5 = v14; /*0x7d1060*/
    }
  }
}
