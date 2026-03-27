NiD3DShaderProgram *__thiscall sub_7E6B10(NiD3DShaderProgram **this)
{
  bool v1; // zf
  int *v2; // ebp
  NiD3DShaderProgram *VertexShader; // eax
  NiD3DShaderProgram *v4; // esi
  volatile LONG *v5; // ebx
  int *v6; // ebp
  NiD3DShaderProgram *PixelShader; // eax
  NiD3DShaderProgram *v8; // esi
  volatile LONG *v9; // ebx
  NiD3DShaderProgram *result; // eax
  int *v11; // ebp
  NiD3DShaderProgram *v12; // ebx
  NiD3DShaderProgram *v13; // esi
  int *v14; // esi
  int v15; // ebp
  NiD3DShaderProgram *v16; // esi
  NiD3DShaderProgram *v17; // ebx
  NiD3DShaderProgram **v18; // [esp+10h] [ebp-11D4h]
  NiD3DShaderProgram **v19; // [esp+10h] [ebp-11D4h]
  NiD3DShaderProgram **v20; // [esp+10h] [ebp-11D4h]
  NiD3DShaderProgram **v21; // [esp+10h] [ebp-11D4h]
  int v22; // [esp+14h] [ebp-11D0h]
  int v23; // [esp+14h] [ebp-11D0h]
  int v24; // [esp+14h] [ebp-11D0h]
  int *v25; // [esp+14h] [ebp-11D0h]
  const char *v27; // [esp+1Ch] [ebp-11C8h]
  int v28[38]; // [esp+20h] [ebp-11C4h] BYREF
  int v29[133]; // [esp+B8h] [ebp-112Ch] BYREF
  int v30[380]; // [esp+2CCh] [ebp-F18h] BYREF
  int v31[455]; // [esp+8BCh] [ebp-928h] BYREF
  char v32[260]; // [esp+FD8h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+10DCh] [ebp-108h] BYREF

  v29[0x84] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  memset(v30, 0, 0x48);
  v30[0x12] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x13] = (int)"VERTLIT";
  v30[0x14] = (int)EmptyString;
  memset(&v30[0x15], 0, 0x40);
  v30[0x25] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x26] = (int)"FIT_TO_SLOPE";
  v30[0x27] = (int)EmptyString;
  memset(&v30[0x28], 0, 0x40);
  v30[0x38] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x39] = (int)"VERTLIT";
  v30[0x3A] = (int)EmptyString;
  v30[0x3B] = (int)"FIT_TO_SLOPE";
  v30[0x3C] = (int)EmptyString;
  memset(&v30[0x3D], 0, 0x38);
  v30[0x4B] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x4C] = (int)"PTLIGHT";
  v30[0x4D] = (int)EmptyString;
  memset(&v30[0x4E], 0, 0x40);
  v30[0x5E] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x5F] = (int)"PTLIGHT";
  v30[0x60] = (int)EmptyString;
  v30[0x61] = (int)"VERTLIT";
  v30[0x62] = (int)EmptyString;
  memset(&v30[0x63], 0, 0x38);
  v30[0x71] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x72] = (int)"PTLIGHT";
  v30[0x73] = (int)EmptyString;
  v30[0x74] = (int)"FIT_TO_SLOPE";
  v30[0x75] = (int)EmptyString;
  memset(&v30[0x76], 0, 0x38);
  v30[0x84] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x85] = (int)"PTLIGHT";
  v30[0x86] = (int)EmptyString;
  v30[0x87] = (int)"VERTLIT";
  v30[0x88] = (int)EmptyString;
  v30[0x89] = (int)"FIT_TO_SLOPE";
  v30[0x8A] = (int)EmptyString;
  memset(&v30[0x8B], 0, 0x30);
  v30[0x97] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x98] = (int)"PROJ_SHADOW";
  v30[0x99] = (int)EmptyString;
  memset(&v30[0x9A], 0, 0x40);
  v30[0xAA] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0xAB] = (int)"VERTLIT";
  v30[0xAC] = (int)EmptyString;
  v30[0xAD] = (int)"PROJ_SHADOW";
  v30[0xAE] = (int)EmptyString;
  memset(&v30[0xAF], 0, 0x38);
  v30[0xBD] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0xBE] = (int)"FIT_TO_SLOPE";
  v30[0xBF] = (int)EmptyString;
  v30[0xC0] = (int)"PROJ_SHADOW";
  v30[0xC1] = (int)EmptyString;
  memset(&v30[0xC2], 0, 0x38);
  v30[0xD0] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0xD1] = (int)"VERTLIT";
  v30[0xD2] = (int)EmptyString;
  v30[0xD3] = (int)"FIT_TO_SLOPE";
  v30[0xD4] = (int)EmptyString;
  v30[0xD5] = (int)"PROJ_SHADOW";
  v30[0xD6] = (int)EmptyString;
  memset(&v30[0xD7], 0, 0x30);
  v30[0xE3] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0xE4] = (int)"PTLIGHT";
  v30[0xE5] = (int)EmptyString;
  v30[0xE6] = (int)"PROJ_SHADOW";
  v30[0xE7] = (int)EmptyString;
  memset(&v30[0xE8], 0, 0x38);
  v30[0xF6] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0xF7] = (int)"PTLIGHT";
  v30[0xF8] = (int)EmptyString;
  v30[0xF9] = (int)"VERTLIT";
  v30[0xFA] = (int)EmptyString;
  v30[0xFB] = (int)"PROJ_SHADOW";
  v30[0xFC] = (int)EmptyString;
  memset(&v30[0xFD], 0, 0x30);
  v30[0x109] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x10A] = (int)"PTLIGHT";
  v30[0x10B] = (int)EmptyString;
  v30[0x10C] = (int)"FIT_TO_SLOPE";
  v30[0x10D] = (int)EmptyString;
  v30[0x10E] = (int)"PROJ_SHADOW";
  v30[0x10F] = (int)EmptyString;
  memset(&v30[0x110], 0, 0x30);
  v30[0x11C] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x11D] = (int)"PTLIGHT";
  v30[0x11E] = (int)EmptyString;
  v30[0x11F] = (int)"VERTLIT";
  v30[0x120] = (int)EmptyString;
  v30[0x121] = (int)"FIT_TO_SLOPE";
  v30[0x122] = (int)EmptyString;
  v30[0x123] = (int)"PROJ_SHADOW";
  v30[0x124] = (int)EmptyString;
  memset(&v30[0x125], 0, 0x28);
  v30[0x12F] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x130] = (int)"BILLBOARD";
  v30[0x131] = (int)EmptyString;
  memset(&v30[0x132], 0, 0x40);
  v30[0x142] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x143] = (int)"BILLBOARD";
  v30[0x144] = (int)EmptyString;
  v30[0x145] = (int)"FIT_TO_SLOPE";
  v30[0x146] = (int)EmptyString;
  memset(&v30[0x147], 0, 0x38);
  v30[0x155] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x156] = (int)"BILLBOARD";
  v30[0x157] = (int)EmptyString;
  v30[0x158] = (int)"PTLIGHT";
  v30[0x159] = (int)EmptyString;
  memset(&v30[0x15A], 0, 0x38);
  v30[0x168] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v30[0x169] = (int)"BILLBOARD";
  v30[0x16A] = (int)EmptyString;
  v30[0x16B] = (int)"PTLIGHT";
  v30[0x16C] = (int)EmptyString;
  v30[0x16D] = (int)"FIT_TO_SLOPE";
  v30[0x16E] = (int)EmptyString;
  memset(&v30[0x16F], 0, 0x30);
  v30[0x17B] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0] = (int)"VS_2_0";
  memset(&v31[1], 0, 0x44);
  v31[0x12] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x13] = (int)"VS_2_0";
  v31[0x14] = 0;
  v31[0x15] = (int)"VERTLIT";
  v31[0x16] = (int)EmptyString;
  memset(&v31[0x17], 0, 0x38);
  v31[0x25] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x26] = (int)"VS_2_0";
  v31[0x27] = 0;
  v31[0x28] = (int)"FIT_TO_SLOPE";
  v31[0x29] = (int)EmptyString;
  memset(&v31[0x2A], 0, 0x38);
  v31[0x38] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x39] = (int)"VS_2_0";
  v31[0x3A] = 0;
  v31[0x3B] = (int)"VERTLIT";
  v31[0x3C] = (int)EmptyString;
  v31[0x3D] = (int)"FIT_TO_SLOPE";
  v31[0x3E] = (int)EmptyString;
  memset(&v31[0x3F], 0, 0x30);
  v31[0x4B] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x4C] = (int)"VS_2_0";
  v31[0x4D] = 0;
  v31[0x4E] = (int)"PTLIGHT";
  v31[0x4F] = (int)EmptyString;
  memset(&v31[0x50], 0, 0x38);
  v31[0x5E] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x5F] = (int)"VS_2_0";
  v31[0x60] = 0;
  v31[0x61] = (int)"PTLIGHT";
  v31[0x62] = (int)EmptyString;
  v31[0x63] = (int)"VERTLIT";
  v31[0x64] = (int)EmptyString;
  memset(&v31[0x65], 0, 0x30);
  v31[0x71] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x72] = (int)"VS_2_0";
  v31[0x73] = 0;
  v31[0x74] = (int)"PTLIGHT";
  v31[0x75] = (int)EmptyString;
  v31[0x76] = (int)"FIT_TO_SLOPE";
  v31[0x77] = (int)EmptyString;
  memset(&v31[0x78], 0, 0x30);
  v31[0x84] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x85] = (int)"VS_2_0";
  v31[0x86] = 0;
  v31[0x87] = (int)"PTLIGHT";
  v31[0x88] = (int)EmptyString;
  v31[0x89] = (int)"VERTLIT";
  v31[0x8A] = (int)EmptyString;
  v31[0x8B] = (int)"FIT_TO_SLOPE";
  v31[0x8C] = (int)EmptyString;
  memset(&v31[0x8D], 0, 0x28);
  v31[0x97] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x98] = (int)"VS_2_0";
  v31[0x99] = 0;
  v31[0x9A] = (int)"PROJ_SHADOW";
  v31[0x9B] = (int)EmptyString;
  memset(&v31[0x9C], 0, 0x38);
  v31[0xAA] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0xAB] = (int)"VS_2_0";
  v31[0xAC] = 0;
  v31[0xAD] = (int)"VERTLIT";
  v31[0xAE] = (int)EmptyString;
  v31[0xAF] = (int)"PROJ_SHADOW";
  v31[0xB0] = (int)EmptyString;
  memset(&v31[0xB1], 0, 0x30);
  v31[0xBD] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0xBE] = (int)"VS_2_0";
  v31[0xBF] = 0;
  v31[0xC0] = (int)"FIT_TO_SLOPE";
  v31[0xC1] = (int)EmptyString;
  v31[0xC2] = (int)"PROJ_SHADOW";
  v31[0xC3] = (int)EmptyString;
  memset(&v31[0xC4], 0, 0x30);
  v31[0xD0] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0xD1] = (int)"VS_2_0";
  v31[0xD2] = 0;
  v31[0xD3] = (int)"VERTLIT";
  v31[0xD4] = (int)EmptyString;
  v31[0xD5] = (int)"FIT_TO_SLOPE";
  v31[0xD6] = (int)EmptyString;
  v31[0xD7] = (int)"PROJ_SHADOW";
  v31[0xD8] = (int)EmptyString;
  memset(&v31[0xD9], 0, 0x28);
  v31[0xE3] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0xE4] = (int)"VS_2_0";
  v31[0xE5] = 0;
  v31[0xE6] = (int)"PTLIGHT";
  v31[0xE7] = (int)EmptyString;
  v31[0xE8] = (int)"PROJ_SHADOW";
  v31[0xE9] = (int)EmptyString;
  memset(&v31[0xEA], 0, 0x30);
  v31[0xFD] = (int)"PROJ_SHADOW";
  v31[0x110] = (int)"PROJ_SHADOW";
  v31[0x125] = (int)"PROJ_SHADOW";
  v31[0xF6] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0xF7] = (int)"VS_2_0";
  v31[0xF8] = 0;
  v31[0xF9] = (int)"PTLIGHT";
  v31[0xFA] = (int)EmptyString;
  v31[0xFB] = (int)"VERTLIT";
  v31[0xFC] = (int)EmptyString;
  v31[0xFE] = (int)EmptyString;
  memset(&v31[0xFF], 0, 0x28);
  v31[0x109] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x10A] = (int)"VS_2_0";
  v31[0x10B] = 0;
  v31[0x10C] = (int)"PTLIGHT";
  v31[0x10D] = (int)EmptyString;
  v31[0x10E] = (int)"FIT_TO_SLOPE";
  v31[0x10F] = (int)EmptyString;
  v31[0x111] = (int)EmptyString;
  memset(&v31[0x112], 0, 0x28);
  v31[0x11C] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x11D] = (int)"VS_2_0";
  v31[0x11E] = 0;
  v31[0x11F] = (int)"PTLIGHT";
  v31[0x120] = (int)EmptyString;
  v31[0x121] = (int)"VERTLIT";
  v31[0x122] = (int)EmptyString;
  v31[0x123] = (int)"FIT_TO_SLOPE";
  v31[0x124] = (int)EmptyString;
  v31[0x126] = (int)EmptyString;
  memset(&v31[0x127], 0, 0x20);
  v31[0x12F] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x130] = (int)"VS_2_0";
  v31[0x131] = 0;
  v31[0x132] = (int)"BILLBOARD";
  v31[0x133] = (int)EmptyString;
  memset(&v31[0x134], 0, 0x38);
  v31[0x142] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x143] = (int)"VS_2_0";
  v31[0x144] = 0;
  v31[0x145] = (int)"BILLBOARD";
  v31[0x146] = (int)EmptyString;
  v31[0x147] = (int)"FIT_TO_SLOPE";
  v31[0x148] = (int)EmptyString;
  memset(&v31[0x149], 0, 0x30);
  v31[0x155] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x156] = (int)"VS_2_0";
  v31[0x157] = 0;
  v31[0x158] = (int)"BILLBOARD";
  v31[0x159] = (int)EmptyString;
  v31[0x15A] = (int)"PTLIGHT";
  v31[0x15B] = (int)EmptyString;
  memset(&v31[0x15C], 0, 0x30);
  v31[0x168] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x169] = (int)"VS_2_0";
  v31[0x16A] = 0;
  v31[0x16B] = (int)"BILLBOARD";
  v31[0x16C] = (int)EmptyString;
  v31[0x16D] = (int)"PTLIGHT";
  v31[0x16E] = (int)EmptyString;
  v31[0x16F] = (int)"FIT_TO_SLOPE";
  v31[0x170] = (int)EmptyString;
  memset(&v31[0x171], 0, 0x28);
  v31[0x17B] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x17C] = (int)"VS_2_0";
  v31[0x17D] = 0;
  v31[0x17E] = (int)"SHADOWMAP";
  v31[0x17F] = (int)EmptyString;
  memset(&v31[0x180], 0, 0x38);
  v31[0x18E] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x18F] = (int)"VS_2_0";
  v31[0x190] = 0;
  v31[0x191] = (int)"SHADOWMAP";
  v31[0x192] = (int)EmptyString;
  v31[0x193] = (int)"FIT_TO_SLOPE";
  v31[0x194] = (int)EmptyString;
  memset(&v31[0x195], 0, 0x30);
  v31[0x1A1] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x1A2] = (int)"VS_2_0";
  v31[0x1A3] = 0;
  v31[0x1A4] = (int)"SHADOWMAP";
  v31[0x1A5] = (int)EmptyString;
  v31[0x1A6] = (int)"BILLBOARD";
  v31[0x1A7] = (int)EmptyString;
  memset(&v31[0x1A8], 0, 0x30);
  v31[0x1B4] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl";
  v31[0x1B5] = (int)"VS_2_0";
  v31[0x1B6] = 0;
  v31[0x1B7] = (int)"SHADOWMAP";
  v31[0x1B8] = (int)EmptyString;
  v31[0x1B9] = (int)"BILLBOARD";
  v31[0x1BA] = (int)EmptyString;
  v31[0x1BB] = (int)"FIT_TO_SLOPE";
  v31[0x1BC] = (int)EmptyString;
  memset(&v31[0x1BD], 0, 0x28);
  v27 = "tallgrass\\1x\\p\\highDetail.p.hlsl";
  memset(v28, 0, 0x48);
  v28[0x12] = (int)"tallgrass\\1x\\p\\highDetail_1pt.p.hlsl";
  memset(&v28[0x13], 0, 0x48);
  v28[0x25] = (int)"tallgrass\\1x\\p\\highDetail.p.hlsl";
  v29[0] = (int)"PS_2_0";
  memset(&v29[1], 0, 0x44);
  v29[0x12] = (int)"tallgrass\\1x\\p\\highDetail_1pt.p.hlsl";
  v29[0x13] = (int)"PS_2_0";
  memset(&v29[0x14], 0, 0x44);
  v29[0x25] = (int)"tallgrass\\1x\\p\\highDetail.p.hlsl";
  v29[0x26] = (int)"PS_2_0";
  v29[0x27] = 0;
  v29[0x28] = (int)"PROJ_SHADOW";
  v29[0x29] = (int)EmptyString;
  memset(&v29[0x2A], 0, 0x38);
  v29[0x38] = (int)"tallgrass\\1x\\p\\highDetail_1pt.p.hlsl";
  v29[0x39] = (int)"PS_2_0";
  v29[0x3A] = 0;
  v29[0x3B] = (int)"PROJ_SHADOW";
  v29[0x3C] = (int)EmptyString;
  memset(&v29[0x3D], 0, 0x38);
  v29[0x4B] = (int)"tallgrass\\1x\\p\\highDetail.p.hlsl";
  v29[0x4C] = (int)"PS_2_0";
  v29[0x4D] = 0;
  v29[0x4E] = (int)"SHADOWMAP";
  v29[0x4F] = (int)EmptyString;
  v29[0x50] = (int)"DEPTHBIAS";
  v29[0x51] = (int)"-0.7";
  v29[0x52] = (int)"SAMPLE";
  v1 = ShaderPackage == 1;
  v29[0x53] = (int)"1";
  v29[0x54] = (int)"PASSES";
  v29[0x55] = (int)"1";
  memset(&v29[0x56], 0, 0x20);
  v29[0x5E] = (int)"tallgrass\\1x\\p\\highDetail.p.hlsl";
  v29[0x5F] = (int)"PS_2_0";
  v29[0x60] = 0;
  v29[0x61] = (int)"SHADOWMAP";
  v29[0x62] = (int)EmptyString;
  v29[0x63] = (int)"DEPTHBIAS";
  v29[0x64] = (int)"-0.7";
  v29[0x65] = (int)"SAMPLE";
  v29[0x66] = (int)"4";
  v29[0x67] = (int)"PASSES";
  v29[0x68] = (int)"1";
  memset(&v29[0x69], 0, 0x20);
  v29[0x71] = (int)"tallgrass\\1x\\p\\highDetail.p.hlsl";
  v29[0x72] = (int)"PS_2_0";
  v29[0x73] = 0;
  v29[0x74] = (int)"SHADOWMAP";
  v29[0x75] = (int)EmptyString;
  v29[0x76] = (int)"DEPTHBIAS";
  v29[0x77] = (int)"-0.7";
  v29[0x78] = (int)"SAMPLE";
  v29[0x79] = (int)"4";
  v29[0x7A] = (int)"PASSES";
  v29[0x7B] = (int)"2";
  memset(&v29[0x7C], 0, 0x20);
  if ( v1 )
  {
    v22 = 0;
    v2 = v30;
    v18 = this + 0x25;
    do
    {
      sub_801030((char *)v2[0xFFFFFFFF], (int)FileName);
      _sprintf(v32, "GRASS1%03i.vso", v22);
      VertexShader = CreateVertexShader(FileName, v2, "vs_1_1", v32, 0, 0);
      v4 = *v18;
      v5 = (volatile LONG *)VertexShader;
      if ( *v18 != VertexShader )
      {
        if ( v4 )
        {
          if ( !InterlockedDecrement((volatile LONG *)v4 + 1) )
            (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v4)(v4, 1);
        }
        *v18 = (NiD3DShaderProgram *)v5;
        if ( v5 )
          InterlockedIncrement(v5 + 1);
      }
      ++v18;
      v2 += 0x13;
      ++v22;
    }
    while ( v22 < 0x14 );
    v23 = 0;
    v6 = v28;
    v19 = this + 0x4D;
    do
    {
      sub_801030((char *)v6[0xFFFFFFFF], (int)FileName);
      _sprintf(v32, "GRASS1%03i.pso", v23);
      PixelShader = CreatePixelShader(FileName, v6, "ps_1_3", v32, 0, 0);
      v8 = *v19;
      v9 = (volatile LONG *)PixelShader;
      if ( *v19 != PixelShader )
      {
        if ( v8 )
        {
          if ( !InterlockedDecrement((volatile LONG *)v8 + 1) )
            (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v8)(v8, 1);
        }
        *v19 = (NiD3DShaderProgram *)v9;
        if ( v9 )
          InterlockedIncrement(v9 + 1);
      }
      ++v19;
      result = (NiD3DShaderProgram *)(v23 + 1);
      v6 += 0x13;
      ++v23;
    }
    while ( v23 < 2 );
  }
  else
  {
    v24 = 0x14;
    v11 = v31;
    v20 = this + 0x39;
    do
    {
      sub_801030((char *)v11[0xFFFFFFFF], (int)FileName);
      _sprintf(v32, "GRASS2%03i.vso", v24);
      v12 = CreateVertexShader(FileName, v11, "vs_2_0", v32, 0, 0);
      v13 = *v20;
      if ( *v20 != v12 )
      {
        if ( v13 )
        {
          if ( !InterlockedDecrement((volatile LONG *)v13 + 1) )
            (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v13)(v13, 1);
        }
        *v20 = v12;
        if ( v12 )
          InterlockedIncrement((volatile LONG *)v12 + 1);
      }
      ++v20;
      v11 += 0x13;
      ++v24;
    }
    while ( v24 < 0x2C );
    v14 = v29;
    v15 = 2;
    v25 = v29;
    v21 = this + 0x4F;
    do
    {
      if ( v15 < 6 || (result = (NiD3DShaderProgram *)sub_404F00(0), (int)result >= 5) )
      {
        sub_801030((char *)v14[0xFFFFFFFF], (int)FileName);
        _sprintf(v32, "GRASS2%03i.pso", v15);
        result = CreatePixelShader(FileName, v14, "ps_2_0", v32, 0, 0);
        v16 = *v21;
        v17 = result;
        if ( *v21 != result )
        {
          if ( v16 )
          {
            result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v16 + 1);
            if ( !result )
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v16)(v16, 1);
          }
          *v21 = v17;
          if ( v17 )
            result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v17 + 1);
        }
      }
      ++v21;
      ++v15;
      v14 = v25 + 0x13;
      v25 += 0x13;
    }
    while ( v15 < 9 );
  }
  return result;
}
