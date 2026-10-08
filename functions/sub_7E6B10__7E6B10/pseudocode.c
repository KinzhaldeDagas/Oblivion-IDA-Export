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

  v29[0x84] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6b42*/
  memset(v30, 0, 0x48); /*0x7e6b49*/
  v30[0x12] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6b65*/
  v30[0x13] = (int)"VERTLIT"; /*0x7e6b6c*/
  v30[0x14] = (int)EmptyString; /*0x7e6b77*/
  memset(&v30[0x15], 0, 0x40); /*0x7e6b7e*/
  v30[0x25] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6b9a*/
  v30[0x26] = (int)"FIT_TO_SLOPE"; /*0x7e6ba1*/
  v30[0x27] = (int)EmptyString; /*0x7e6ba8*/
  memset(&v30[0x28], 0, 0x40); /*0x7e6baf*/
  v30[0x38] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6bc6*/
  v30[0x39] = (int)"VERTLIT"; /*0x7e6bcd*/
  v30[0x3A] = (int)EmptyString; /*0x7e6bd8*/
  v30[0x3B] = (int)"FIT_TO_SLOPE"; /*0x7e6bdf*/
  v30[0x3C] = (int)EmptyString; /*0x7e6be6*/
  memset(&v30[0x3D], 0, 0x38); /*0x7e6bed*/
  v30[0x4B] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6c04*/
  v30[0x4C] = (int)"PTLIGHT"; /*0x7e6c0b*/
  v30[0x4D] = (int)EmptyString; /*0x7e6c16*/
  memset(&v30[0x4E], 0, 0x40); /*0x7e6c1d*/
  v30[0x5E] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6c34*/
  v30[0x5F] = (int)"PTLIGHT"; /*0x7e6c3b*/
  v30[0x60] = (int)EmptyString; /*0x7e6c46*/
  v30[0x61] = (int)"VERTLIT"; /*0x7e6c4d*/
  v30[0x62] = (int)EmptyString; /*0x7e6c58*/
  memset(&v30[0x63], 0, 0x38); /*0x7e6c5f*/
  v30[0x71] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6c79*/
  v30[0x72] = (int)"PTLIGHT"; /*0x7e6c80*/
  v30[0x73] = (int)EmptyString; /*0x7e6c8b*/
  v30[0x74] = (int)"FIT_TO_SLOPE"; /*0x7e6c92*/
  v30[0x75] = (int)EmptyString; /*0x7e6c99*/
  memset(&v30[0x76], 0, 0x38); /*0x7e6ca0*/
  v30[0x84] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6cac*/
  v30[0x85] = (int)"PTLIGHT"; /*0x7e6cb3*/
  v30[0x86] = (int)EmptyString; /*0x7e6cbe*/
  v30[0x87] = (int)"VERTLIT"; /*0x7e6cc5*/
  v30[0x88] = (int)EmptyString; /*0x7e6cdb*/
  v30[0x89] = (int)"FIT_TO_SLOPE"; /*0x7e6ce2*/
  v30[0x8A] = (int)EmptyString; /*0x7e6ce9*/
  memset(&v30[0x8B], 0, 0x30); /*0x7e6cf0*/
  v30[0x97] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6d07*/
  v30[0x98] = (int)"PROJ_SHADOW"; /*0x7e6d0e*/
  v30[0x99] = (int)EmptyString; /*0x7e6d19*/
  memset(&v30[0x9A], 0, 0x40); /*0x7e6d20*/
  v30[0xAA] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6d37*/
  v30[0xAB] = (int)"VERTLIT"; /*0x7e6d3e*/
  v30[0xAC] = (int)EmptyString; /*0x7e6d49*/
  v30[0xAD] = (int)"PROJ_SHADOW"; /*0x7e6d50*/
  v30[0xAE] = (int)EmptyString; /*0x7e6d5b*/
  memset(&v30[0xAF], 0, 0x38); /*0x7e6d62*/
  v30[0xBD] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6d79*/
  v30[0xBE] = (int)"FIT_TO_SLOPE"; /*0x7e6d80*/
  v30[0xBF] = (int)EmptyString; /*0x7e6d87*/
  v30[0xC0] = (int)"PROJ_SHADOW"; /*0x7e6d8e*/
  v30[0xC1] = (int)EmptyString; /*0x7e6d99*/
  memset(&v30[0xC2], 0, 0x38); /*0x7e6da0*/
  v30[0xD0] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6db7*/
  v30[0xD1] = (int)"VERTLIT"; /*0x7e6dbe*/
  v30[0xD2] = (int)EmptyString; /*0x7e6dc9*/
  v30[0xD3] = (int)"FIT_TO_SLOPE"; /*0x7e6dd0*/
  v30[0xD4] = (int)EmptyString; /*0x7e6dd7*/
  v30[0xD5] = (int)"PROJ_SHADOW"; /*0x7e6dde*/
  v30[0xD6] = (int)EmptyString; /*0x7e6de9*/
  memset(&v30[0xD7], 0, 0x30); /*0x7e6df0*/
  v30[0xE3] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6e0a*/
  v30[0xE4] = (int)"PTLIGHT"; /*0x7e6e11*/
  v30[0xE5] = (int)EmptyString; /*0x7e6e1c*/
  v30[0xE6] = (int)"PROJ_SHADOW"; /*0x7e6e23*/
  v30[0xE7] = (int)EmptyString; /*0x7e6e2e*/
  memset(&v30[0xE8], 0, 0x38); /*0x7e6e35*/
  v30[0xF6] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6e4c*/
  v30[0xF7] = (int)"PTLIGHT"; /*0x7e6e53*/
  v30[0xF8] = (int)EmptyString; /*0x7e6e5e*/
  v30[0xF9] = (int)"VERTLIT"; /*0x7e6e65*/
  v30[0xFA] = (int)EmptyString; /*0x7e6e70*/
  v30[0xFB] = (int)"PROJ_SHADOW"; /*0x7e6e77*/
  v30[0xFC] = (int)EmptyString; /*0x7e6e82*/
  memset(&v30[0xFD], 0, 0x30); /*0x7e6e89*/
  v30[0x109] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6e95*/
  v30[0x10A] = (int)"PTLIGHT"; /*0x7e6e9c*/
  v30[0x10B] = (int)EmptyString; /*0x7e6ea7*/
  v30[0x10C] = (int)"FIT_TO_SLOPE"; /*0x7e6eb9*/
  v30[0x10D] = (int)EmptyString; /*0x7e6ec0*/
  v30[0x10E] = (int)"PROJ_SHADOW"; /*0x7e6ec7*/
  v30[0x10F] = (int)EmptyString; /*0x7e6ed2*/
  memset(&v30[0x110], 0, 0x30); /*0x7e6ed9*/
  v30[0x11C] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6ef0*/
  v30[0x11D] = (int)"PTLIGHT"; /*0x7e6ef7*/
  v30[0x11E] = (int)EmptyString; /*0x7e6f02*/
  v30[0x11F] = (int)"VERTLIT"; /*0x7e6f09*/
  v30[0x120] = (int)EmptyString; /*0x7e6f14*/
  v30[0x121] = (int)"FIT_TO_SLOPE"; /*0x7e6f1b*/
  v30[0x122] = (int)EmptyString; /*0x7e6f22*/
  v30[0x123] = (int)"PROJ_SHADOW"; /*0x7e6f29*/
  v30[0x124] = (int)EmptyString; /*0x7e6f34*/
  memset(&v30[0x125], 0, 0x28); /*0x7e6f3b*/
  v30[0x12F] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6f81*/
  v30[0x130] = (int)"BILLBOARD"; /*0x7e6f88*/
  v30[0x131] = (int)EmptyString; /*0x7e6f93*/
  memset(&v30[0x132], 0, 0x40); /*0x7e6f9a*/
  v30[0x142] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6fb1*/
  v30[0x143] = (int)"BILLBOARD"; /*0x7e6fb8*/
  v30[0x144] = (int)EmptyString; /*0x7e6fc3*/
  v30[0x145] = (int)"FIT_TO_SLOPE"; /*0x7e6fca*/
  v30[0x146] = (int)EmptyString; /*0x7e6fd1*/
  memset(&v30[0x147], 0, 0x38); /*0x7e6fd8*/
  v30[0x155] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e6fef*/
  v30[0x156] = (int)"BILLBOARD"; /*0x7e6ff6*/
  v30[0x157] = (int)EmptyString; /*0x7e7001*/
  v30[0x158] = (int)"PTLIGHT"; /*0x7e7008*/
  v30[0x159] = (int)EmptyString; /*0x7e7013*/
  memset(&v30[0x15A], 0, 0x38); /*0x7e701a*/
  v30[0x168] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7034*/
  v30[0x169] = (int)"BILLBOARD"; /*0x7e703b*/
  v30[0x16A] = (int)EmptyString; /*0x7e7046*/
  v30[0x16B] = (int)"PTLIGHT"; /*0x7e704d*/
  v30[0x16C] = (int)EmptyString; /*0x7e7058*/
  v30[0x16D] = (int)"FIT_TO_SLOPE"; /*0x7e705f*/
  v30[0x16E] = (int)EmptyString; /*0x7e7066*/
  memset(&v30[0x16F], 0, 0x30); /*0x7e706d*/
  v30[0x17B] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7080*/
  v31[0] = (int)"VS_2_0"; /*0x7e7087*/
  memset(&v31[1], 0, 0x44); /*0x7e708e*/
  v31[0x12] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e70b5*/
  v31[0x13] = (int)"VS_2_0"; /*0x7e70bc*/
  v31[0x14] = 0; /*0x7e70c3*/
  v31[0x15] = (int)"VERTLIT"; /*0x7e70ca*/
  v31[0x16] = (int)EmptyString; /*0x7e70d5*/
  memset(&v31[0x17], 0, 0x38); /*0x7e70dc*/
  v31[0x25] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e70f3*/
  v31[0x26] = (int)"VS_2_0"; /*0x7e70fa*/
  v31[0x27] = 0; /*0x7e7101*/
  v31[0x28] = (int)"FIT_TO_SLOPE"; /*0x7e7108*/
  v31[0x29] = (int)EmptyString; /*0x7e7113*/
  memset(&v31[0x2A], 0, 0x38); /*0x7e711a*/
  v31[0x38] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7131*/
  v31[0x39] = (int)"VS_2_0"; /*0x7e7138*/
  v31[0x3A] = 0; /*0x7e713f*/
  v31[0x3B] = (int)"VERTLIT"; /*0x7e7146*/
  v31[0x3C] = (int)EmptyString; /*0x7e7151*/
  v31[0x3D] = (int)"FIT_TO_SLOPE"; /*0x7e7158*/
  v31[0x3E] = (int)EmptyString; /*0x7e7163*/
  memset(&v31[0x3F], 0, 0x30); /*0x7e716a*/
  v31[0x4B] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7181*/
  v31[0x4C] = (int)"VS_2_0"; /*0x7e7188*/
  v31[0x4D] = 0; /*0x7e718f*/
  v31[0x4E] = (int)"PTLIGHT"; /*0x7e7196*/
  v31[0x4F] = (int)EmptyString; /*0x7e71a1*/
  memset(&v31[0x50], 0, 0x38); /*0x7e71a8*/
  v31[0x5E] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e71c2*/
  v31[0x5F] = (int)"VS_2_0"; /*0x7e71c9*/
  v31[0x60] = 0; /*0x7e71d0*/
  v31[0x61] = (int)"PTLIGHT"; /*0x7e71d7*/
  v31[0x62] = (int)EmptyString; /*0x7e71e2*/
  v31[0x63] = (int)"VERTLIT"; /*0x7e71e9*/
  v31[0x64] = (int)EmptyString; /*0x7e71f4*/
  memset(&v31[0x65], 0, 0x30); /*0x7e71fb*/
  v31[0x71] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7212*/
  v31[0x72] = (int)"VS_2_0"; /*0x7e7219*/
  v31[0x73] = 0; /*0x7e7220*/
  v31[0x74] = (int)"PTLIGHT"; /*0x7e7227*/
  v31[0x75] = (int)EmptyString; /*0x7e7232*/
  v31[0x76] = (int)"FIT_TO_SLOPE"; /*0x7e7239*/
  v31[0x77] = (int)EmptyString; /*0x7e7244*/
  memset(&v31[0x78], 0, 0x30); /*0x7e724b*/
  v31[0x84] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7257*/
  v31[0x85] = (int)"VS_2_0"; /*0x7e725e*/
  v31[0x86] = 0; /*0x7e7265*/
  v31[0x87] = (int)"PTLIGHT"; /*0x7e726c*/
  v31[0x88] = (int)EmptyString; /*0x7e7277*/
  v31[0x89] = (int)"VERTLIT"; /*0x7e7289*/
  v31[0x8A] = (int)EmptyString; /*0x7e7294*/
  v31[0x8B] = (int)"FIT_TO_SLOPE"; /*0x7e729b*/
  v31[0x8C] = (int)EmptyString; /*0x7e72a6*/
  memset(&v31[0x8D], 0, 0x28); /*0x7e72ad*/
  v31[0x97] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e72f3*/
  v31[0x98] = (int)"VS_2_0"; /*0x7e72fa*/
  v31[0x99] = 0; /*0x7e7301*/
  v31[0x9A] = (int)"PROJ_SHADOW"; /*0x7e7308*/
  v31[0x9B] = (int)EmptyString; /*0x7e7313*/
  memset(&v31[0x9C], 0, 0x38); /*0x7e731a*/
  v31[0xAA] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7331*/
  v31[0xAB] = (int)"VS_2_0"; /*0x7e7338*/
  v31[0xAC] = 0; /*0x7e733f*/
  v31[0xAD] = (int)"VERTLIT"; /*0x7e7346*/
  v31[0xAE] = (int)EmptyString; /*0x7e7351*/
  v31[0xAF] = (int)"PROJ_SHADOW"; /*0x7e7358*/
  v31[0xB0] = (int)EmptyString; /*0x7e7363*/
  memset(&v31[0xB1], 0, 0x30); /*0x7e736a*/
  v31[0xBD] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7381*/
  v31[0xBE] = (int)"VS_2_0"; /*0x7e7388*/
  v31[0xBF] = 0; /*0x7e738f*/
  v31[0xC0] = (int)"FIT_TO_SLOPE"; /*0x7e7396*/
  v31[0xC1] = (int)EmptyString; /*0x7e73a1*/
  v31[0xC2] = (int)"PROJ_SHADOW"; /*0x7e73a8*/
  v31[0xC3] = (int)EmptyString; /*0x7e73b3*/
  memset(&v31[0xC4], 0, 0x30); /*0x7e73ba*/
  v31[0xD0] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e73cd*/
  v31[0xD1] = (int)"VS_2_0"; /*0x7e73d4*/
  v31[0xD2] = 0; /*0x7e73db*/
  v31[0xD3] = (int)"VERTLIT"; /*0x7e73e2*/
  v31[0xD4] = (int)EmptyString; /*0x7e73ed*/
  v31[0xD5] = (int)"FIT_TO_SLOPE"; /*0x7e73f4*/
  v31[0xD6] = (int)EmptyString; /*0x7e73ff*/
  v31[0xD7] = (int)"PROJ_SHADOW"; /*0x7e7406*/
  v31[0xD8] = (int)EmptyString; /*0x7e740d*/
  memset(&v31[0xD9], 0, 0x28); /*0x7e7414*/
  v31[0xE3] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e745a*/
  v31[0xE4] = (int)"VS_2_0"; /*0x7e7461*/
  v31[0xE5] = 0; /*0x7e7468*/
  v31[0xE6] = (int)"PTLIGHT"; /*0x7e746f*/
  v31[0xE7] = (int)EmptyString; /*0x7e747a*/
  v31[0xE8] = (int)"PROJ_SHADOW"; /*0x7e7481*/
  v31[0xE9] = (int)EmptyString; /*0x7e7488*/
  memset(&v31[0xEA], 0, 0x30); /*0x7e748f*/
  v31[0xFD] = (int)"PROJ_SHADOW"; /*0x7e74b3*/
  v31[0x110] = (int)"PROJ_SHADOW"; /*0x7e74ba*/
  v31[0x125] = (int)"PROJ_SHADOW"; /*0x7e74c1*/
  v31[0xF6] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e74d6*/
  v31[0xF7] = (int)"VS_2_0"; /*0x7e74dd*/
  v31[0xF8] = 0; /*0x7e74e4*/
  v31[0xF9] = (int)"PTLIGHT"; /*0x7e74eb*/
  v31[0xFA] = (int)EmptyString; /*0x7e74f2*/
  v31[0xFB] = (int)"VERTLIT"; /*0x7e74f9*/
  v31[0xFC] = (int)EmptyString; /*0x7e7504*/
  v31[0xFE] = (int)EmptyString; /*0x7e750b*/
  memset(&v31[0xFF], 0, 0x28); /*0x7e7512*/
  v31[0x109] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7558*/
  v31[0x10A] = (int)"VS_2_0"; /*0x7e755f*/
  v31[0x10B] = 0; /*0x7e7566*/
  v31[0x10C] = (int)"PTLIGHT"; /*0x7e756d*/
  v31[0x10D] = (int)EmptyString; /*0x7e7574*/
  v31[0x10E] = (int)"FIT_TO_SLOPE"; /*0x7e757b*/
  v31[0x10F] = (int)EmptyString; /*0x7e7582*/
  v31[0x111] = (int)EmptyString; /*0x7e7589*/
  memset(&v31[0x112], 0, 0x28); /*0x7e7590*/
  v31[0x11C] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e75d6*/
  v31[0x11D] = (int)"VS_2_0"; /*0x7e75dd*/
  v31[0x11E] = 0; /*0x7e75e4*/
  v31[0x11F] = (int)"PTLIGHT"; /*0x7e75eb*/
  v31[0x120] = (int)EmptyString; /*0x7e75f2*/
  v31[0x121] = (int)"VERTLIT"; /*0x7e75f9*/
  v31[0x122] = (int)EmptyString; /*0x7e7604*/
  v31[0x123] = (int)"FIT_TO_SLOPE"; /*0x7e760b*/
  v31[0x124] = (int)EmptyString; /*0x7e7612*/
  v31[0x126] = (int)EmptyString; /*0x7e7619*/
  memset(&v31[0x127], 0, 0x20); /*0x7e7620*/
  v31[0x12F] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7658*/
  v31[0x130] = (int)"VS_2_0"; /*0x7e765f*/
  v31[0x131] = 0; /*0x7e7666*/
  v31[0x132] = (int)"BILLBOARD"; /*0x7e766d*/
  v31[0x133] = (int)EmptyString; /*0x7e7678*/
  memset(&v31[0x134], 0, 0x38); /*0x7e767f*/
  v31[0x142] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e768b*/
  v31[0x143] = (int)"VS_2_0"; /*0x7e7692*/
  v31[0x144] = 0; /*0x7e7699*/
  v31[0x145] = (int)"BILLBOARD"; /*0x7e76a0*/
  v31[0x146] = (int)EmptyString; /*0x7e76ab*/
  v31[0x147] = (int)"FIT_TO_SLOPE"; /*0x7e76b2*/
  v31[0x148] = (int)EmptyString; /*0x7e76c8*/
  memset(&v31[0x149], 0, 0x30); /*0x7e76cf*/
  v31[0x155] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e76e6*/
  v31[0x156] = (int)"VS_2_0"; /*0x7e76ed*/
  v31[0x157] = 0; /*0x7e76f4*/
  v31[0x158] = (int)"BILLBOARD"; /*0x7e76fb*/
  v31[0x159] = (int)EmptyString; /*0x7e7706*/
  v31[0x15A] = (int)"PTLIGHT"; /*0x7e770d*/
  v31[0x15B] = (int)EmptyString; /*0x7e7718*/
  memset(&v31[0x15C], 0, 0x30); /*0x7e771f*/
  v31[0x168] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7736*/
  v31[0x169] = (int)"VS_2_0"; /*0x7e773d*/
  v31[0x16A] = 0; /*0x7e7744*/
  v31[0x16B] = (int)"BILLBOARD"; /*0x7e774b*/
  v31[0x16C] = (int)EmptyString; /*0x7e7756*/
  v31[0x16D] = (int)"PTLIGHT"; /*0x7e775d*/
  v31[0x16E] = (int)EmptyString; /*0x7e7768*/
  v31[0x16F] = (int)"FIT_TO_SLOPE"; /*0x7e776f*/
  v31[0x170] = (int)EmptyString; /*0x7e777a*/
  memset(&v31[0x171], 0, 0x28); /*0x7e7781*/
  v31[0x17B] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e77c7*/
  v31[0x17C] = (int)"VS_2_0"; /*0x7e77ce*/
  v31[0x17D] = 0; /*0x7e77d5*/
  v31[0x17E] = (int)"SHADOWMAP"; /*0x7e77dc*/
  v31[0x17F] = (int)EmptyString; /*0x7e77e7*/
  memset(&v31[0x180], 0, 0x38); /*0x7e77ee*/
  v31[0x18E] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7805*/
  v31[0x18F] = (int)"VS_2_0"; /*0x7e780c*/
  v31[0x190] = 0; /*0x7e7813*/
  v31[0x191] = (int)"SHADOWMAP"; /*0x7e781a*/
  v31[0x192] = (int)EmptyString; /*0x7e7825*/
  v31[0x193] = (int)"FIT_TO_SLOPE"; /*0x7e782c*/
  v31[0x194] = (int)EmptyString; /*0x7e7837*/
  memset(&v31[0x195], 0, 0x30); /*0x7e783e*/
  v31[0x1A1] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e7855*/
  v31[0x1A2] = (int)"VS_2_0"; /*0x7e785c*/
  v31[0x1A3] = 0; /*0x7e7863*/
  v31[0x1A4] = (int)"SHADOWMAP"; /*0x7e786a*/
  v31[0x1A5] = (int)EmptyString; /*0x7e7875*/
  v31[0x1A6] = (int)"BILLBOARD"; /*0x7e787c*/
  v31[0x1A7] = (int)EmptyString; /*0x7e7887*/
  memset(&v31[0x1A8], 0, 0x30); /*0x7e788e*/
  v31[0x1B4] = (int)"tallgrass\\1x\\v\\lowDetail.v.hlsl"; /*0x7e789d*/
  v31[0x1B5] = (int)"VS_2_0"; /*0x7e78a4*/
  v31[0x1B6] = 0; /*0x7e78ab*/
  v31[0x1B7] = (int)"SHADOWMAP"; /*0x7e78b2*/
  v31[0x1B8] = (int)EmptyString; /*0x7e78ca*/
  v31[0x1B9] = (int)"BILLBOARD"; /*0x7e78d1*/
  v31[0x1BA] = (int)EmptyString; /*0x7e78dc*/
  v31[0x1BB] = (int)"FIT_TO_SLOPE"; /*0x7e78e3*/
  v31[0x1BC] = (int)EmptyString; /*0x7e78ee*/
  memset(&v31[0x1BD], 0, 0x28); /*0x7e78f5*/
  v27 = "tallgrass\\1x\\p\\highDetail.p.hlsl"; /*0x7e793b*/
  memset(v28, 0, 0x48); /*0x7e793f*/
  v28[0x12] = (int)"tallgrass\\1x\\p\\highDetail_1pt.p.hlsl"; /*0x7e7953*/
  memset(&v28[0x13], 0, 0x48); /*0x7e795e*/
  v28[0x25] = (int)"tallgrass\\1x\\p\\highDetail.p.hlsl"; /*0x7e797a*/
  v29[0] = (int)"PS_2_0"; /*0x7e7981*/
  memset(&v29[1], 0, 0x44); /*0x7e7988*/
  v29[0x12] = (int)"tallgrass\\1x\\p\\highDetail_1pt.p.hlsl"; /*0x7e79a6*/
  v29[0x13] = (int)"PS_2_0"; /*0x7e79b1*/
  memset(&v29[0x14], 0, 0x44); /*0x7e79b8*/
  v29[0x25] = (int)"tallgrass\\1x\\p\\highDetail.p.hlsl"; /*0x7e79d6*/
  v29[0x26] = (int)"PS_2_0"; /*0x7e79dd*/
  v29[0x27] = 0; /*0x7e79e4*/
  v29[0x28] = (int)"PROJ_SHADOW"; /*0x7e79eb*/
  v29[0x29] = (int)EmptyString; /*0x7e79f6*/
  memset(&v29[0x2A], 0, 0x38); /*0x7e79fd*/
  v29[0x38] = (int)"tallgrass\\1x\\p\\highDetail_1pt.p.hlsl"; /*0x7e7a14*/
  v29[0x39] = (int)"PS_2_0"; /*0x7e7a1f*/
  v29[0x3A] = 0; /*0x7e7a26*/
  v29[0x3B] = (int)"PROJ_SHADOW"; /*0x7e7a2d*/
  v29[0x3C] = (int)EmptyString; /*0x7e7a38*/
  memset(&v29[0x3D], 0, 0x38); /*0x7e7a3f*/
  v29[0x4B] = (int)"tallgrass\\1x\\p\\highDetail.p.hlsl"; /*0x7e7a53*/
  v29[0x4C] = (int)"PS_2_0"; /*0x7e7a5a*/
  v29[0x4D] = 0; /*0x7e7a61*/
  v29[0x4E] = (int)"SHADOWMAP"; /*0x7e7a68*/
  v29[0x4F] = (int)EmptyString; /*0x7e7a73*/
  v29[0x50] = (int)"DEPTHBIAS"; /*0x7e7a7a*/
  v29[0x51] = (int)"-0.7"; /*0x7e7a85*/
  v29[0x52] = (int)"SAMPLE"; /*0x7e7a90*/
  v1 = MEMORY[0xB42F48] == 1; /*0x7e7a97*/
  v29[0x53] = (int)"1"; /*0x7e7aa8*/
  v29[0x54] = (int)"PASSES"; /*0x7e7aaf*/
  v29[0x55] = (int)"1"; /*0x7e7ab6*/
  memset(&v29[0x56], 0, 0x20); /*0x7e7abd*/
  v29[0x5E] = (int)"tallgrass\\1x\\p\\highDetail.p.hlsl"; /*0x7e7af5*/
  v29[0x5F] = (int)"PS_2_0"; /*0x7e7afc*/
  v29[0x60] = 0; /*0x7e7b03*/
  v29[0x61] = (int)"SHADOWMAP"; /*0x7e7b0a*/
  v29[0x62] = (int)EmptyString; /*0x7e7b15*/
  v29[0x63] = (int)"DEPTHBIAS"; /*0x7e7b1c*/
  v29[0x64] = (int)"-0.7"; /*0x7e7b27*/
  v29[0x65] = (int)"SAMPLE"; /*0x7e7b32*/
  v29[0x66] = (int)"4"; /*0x7e7b39*/
  v29[0x67] = (int)"PASSES"; /*0x7e7b44*/
  v29[0x68] = (int)"1"; /*0x7e7b4b*/
  memset(&v29[0x69], 0, 0x20); /*0x7e7b52*/
  v29[0x71] = (int)"tallgrass\\1x\\p\\highDetail.p.hlsl"; /*0x7e7b8a*/
  v29[0x72] = (int)"PS_2_0"; /*0x7e7b91*/
  v29[0x73] = 0; /*0x7e7b98*/
  v29[0x74] = (int)"SHADOWMAP"; /*0x7e7b9f*/
  v29[0x75] = (int)EmptyString; /*0x7e7baa*/
  v29[0x76] = (int)"DEPTHBIAS"; /*0x7e7bb1*/
  v29[0x77] = (int)"-0.7"; /*0x7e7bbc*/
  v29[0x78] = (int)"SAMPLE"; /*0x7e7bc7*/
  v29[0x79] = (int)"4"; /*0x7e7bce*/
  v29[0x7A] = (int)"PASSES"; /*0x7e7bd9*/
  v29[0x7B] = (int)"2"; /*0x7e7be0*/
  memset(&v29[0x7C], 0, 0x20); /*0x7e7beb*/
  if ( v1 ) /*0x7e7c23*/
  {
    v22 = 0; /*0x7e7c32*/
    v2 = v30; /*0x7e7c36*/
    v18 = this + 0x25; /*0x7e7c3d*/
    do /*0x7e7ce3*/
    {
      sub_801030((char *)v2[0xFFFFFFFF], (int)FileName); /*0x7e7c4d*/
      _sprintf(v32, "GRASS1%03i.vso", v22); /*0x7e7c64*/
      VertexShader = CreateVertexShader(FileName, v2, "vs_1_1", v32, 0, 0); /*0x7e7c88*/
      v4 = *v18; /*0x7e7c91*/
      v5 = (volatile LONG *)VertexShader; /*0x7e7c93*/
      if ( *v18 != VertexShader ) /*0x7e7c97*/
      {
        if ( v4 ) /*0x7e7c9b*/
        {
          if ( !InterlockedDecrement((volatile LONG *)v4 + 1) ) /*0x7e7ca1*/
            (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v4)(v4, 1); /*0x7e7cb7*/
        }
        *v18 = (NiD3DShaderProgram *)v5; /*0x7e7cbf*/
        if ( v5 ) /*0x7e7cc1*/
          InterlockedIncrement(v5 + 1); /*0x7e7cc7*/
      }
      ++v18; /*0x7e7cd1*/
      v2 += 0x13; /*0x7e7cd9*/
      ++v22; /*0x7e7cdf*/
    }
    while ( v22 < 0x14 ); /*0x7e7ce3*/
    v23 = 0; /*0x7e7cf3*/
    v6 = v28; /*0x7e7cf7*/
    v19 = this + 0x4D; /*0x7e7cfb*/
    do /*0x7e7da2*/
    {
      sub_801030((char *)v6[0xFFFFFFFF], (int)FileName); /*0x7e7d0c*/
      _sprintf(v32, "GRASS1%03i.pso", v23); /*0x7e7d23*/
      PixelShader = CreatePixelShader(FileName, v6, "ps_1_3", v32, 0, 0); /*0x7e7d47*/
      v8 = *v19; /*0x7e7d50*/
      v9 = (volatile LONG *)PixelShader; /*0x7e7d52*/
      if ( *v19 != PixelShader ) /*0x7e7d56*/
      {
        if ( v8 ) /*0x7e7d5a*/
        {
          if ( !InterlockedDecrement((volatile LONG *)v8 + 1) ) /*0x7e7d60*/
            (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v8)(v8, 1); /*0x7e7d76*/
        }
        *v19 = (NiD3DShaderProgram *)v9; /*0x7e7d7e*/
        if ( v9 ) /*0x7e7d80*/
          InterlockedIncrement(v9 + 1); /*0x7e7d86*/
      }
      ++v19; /*0x7e7d90*/
      result = (NiD3DShaderProgram *)(v23 + 1); /*0x7e7d95*/
      v6 += 0x13; /*0x7e7d98*/
      ++v23; /*0x7e7d9e*/
    }
    while ( v23 < 2 ); /*0x7e7da2*/
  }
  else
  {
    v24 = 0x14; /*0x7e7db7*/
    v11 = v31; /*0x7e7dbf*/
    v20 = this + 0x39; /*0x7e7dc6*/
    do /*0x7e7e72*/
    {
      sub_801030((char *)v11[0xFFFFFFFF], (int)FileName); /*0x7e7ddc*/
      _sprintf(v32, "GRASS2%03i.vso", v24); /*0x7e7df3*/
      v12 = CreateVertexShader(FileName, v11, "vs_2_0", v32, 0, 0); /*0x7e7e1c*/
      v13 = *v20; /*0x7e7e22*/
      if ( *v20 != v12 ) /*0x7e7e26*/
      {
        if ( v13 ) /*0x7e7e2a*/
        {
          if ( !InterlockedDecrement((volatile LONG *)v13 + 1) ) /*0x7e7e30*/
            (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v13)(v13, 1); /*0x7e7e46*/
        }
        *v20 = v12; /*0x7e7e4e*/
        if ( v12 ) /*0x7e7e50*/
          InterlockedIncrement((volatile LONG *)v12 + 1); /*0x7e7e56*/
      }
      ++v20; /*0x7e7e60*/
      v11 += 0x13; /*0x7e7e68*/
      ++v24; /*0x7e7e6e*/
    }
    while ( v24 < 0x2C ); /*0x7e7e72*/
    v14 = v29; /*0x7e7e7c*/
    v15 = 2; /*0x7e7e89*/
    v25 = v29; /*0x7e7e8e*/
    v21 = this + 0x4F; /*0x7e7e92*/
    do /*0x7e7f4b*/
    {
      if ( v15 < 6 || (result = (NiD3DShaderProgram *)sub_404F00(0), (int)result >= 5) ) /*0x7e7ea7*/
      {
        sub_801030((char *)v14[0xFFFFFFFF], (int)FileName); /*0x7e7eb9*/
        _sprintf(v32, "GRASS2%03i.pso", v15); /*0x7e7ecc*/
        result = CreatePixelShader(FileName, v14, "ps_2_0", v32, 0, 0); /*0x7e7ef0*/
        v16 = *v21; /*0x7e7ef9*/
        v17 = result; /*0x7e7efb*/
        if ( *v21 != result ) /*0x7e7eff*/
        {
          if ( v16 ) /*0x7e7f03*/
          {
            result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v16 + 1); /*0x7e7f09*/
            if ( !result ) /*0x7e7f11*/
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v16)(v16, 1); /*0x7e7f1f*/
          }
          *v21 = v17; /*0x7e7f27*/
          if ( v17 ) /*0x7e7f29*/
            result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v17 + 1); /*0x7e7f2f*/
        }
      }
      ++v21; /*0x7e7f39*/
      ++v15; /*0x7e7f3e*/
      v14 = v25 + 0x13; /*0x7e7f41*/
      v25 += 0x13; /*0x7e7f47*/
    }
    while ( v15 < 9 ); /*0x7e7f4b*/
  }
  return result; /*0x7e7f51*/
}
