void __thiscall sub_80A180(char *this)
{
  int *v1; // ebp
  NiD3DShaderProgram *VertexShader; // edi
  int v3; // esi
  char *v4; // [esp+10h] [ebp-808h]
  int v5; // [esp+14h] [ebp-804h]
  const char *v6; // [esp+1Ch] [ebp-7FCh]
  int v7[379]; // [esp+20h] [ebp-7F8h] BYREF
  char FileName[260]; // [esp+60Ch] [ebp-20Ch] BYREF
  char v9[260]; // [esp+710h] [ebp-108h] BYREF

  v6 = "lighting\\2x\\v\\ADTS.v.hlsl";
  v7[0] = (int)"FACEGENBLEND";
  v7[1] = (int)EmptyString;
  memset(&v7[2], 0, 0x40);
  v7[0x12] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v7[0x13] = (int)"SKIN";
  v7[0x14] = (int)EmptyString;
  v7[0x15] = (int)"FACEGENBLEND";
  v7[0x16] = (int)EmptyString;
  memset(&v7[0x17], 0, 0x38);
  v7[0x25] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v7[0x26] = (int)"FACEGENBLEND";
  v7[0x27] = (int)EmptyString;
  v7[0x28] = (int)"PROJ_SHADOW";
  v7[0x29] = (int)EmptyString;
  memset(&v7[0x2A], 0, 0x38);
  v7[0x38] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v7[0x39] = (int)"SKIN";
  v7[0x3A] = (int)EmptyString;
  v7[0x3B] = (int)"FACEGENBLEND";
  v7[0x3C] = (int)EmptyString;
  v7[0x3D] = (int)"PROJ_SHADOW";
  v7[0x3E] = (int)EmptyString;
  memset(&v7[0x3F], 0, 0x30);
  v7[0x4B] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v7[0x4C] = (int)"LIGHTS";
  v7[0x4D] = (int)"2";
  v7[0x4E] = (int)"FACEGENBLEND";
  v7[0x4F] = (int)EmptyString;
  memset(&v7[0x50], 0, 0x38);
  v7[0x5E] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v7[0x5F] = (int)"SKIN";
  v7[0x60] = (int)EmptyString;
  v7[0x61] = (int)"LIGHTS";
  v7[0x62] = (int)"2";
  v7[0x63] = (int)"FACEGENBLEND";
  v7[0x64] = (int)EmptyString;
  memset(&v7[0x65], 0, 0x30);
  v7[0x71] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v7[0x72] = (int)"LIGHTS";
  v7[0x73] = (int)"2";
  v7[0x74] = (int)"FACEGENBLEND";
  v7[0x75] = (int)EmptyString;
  v7[0x76] = (int)"PROJ_SHADOW";
  v7[0x77] = (int)EmptyString;
  memset(&v7[0x78], 0, 0x30);
  v7[0x88] = (int)"2";
  v7[0x99] = (int)"2";
  v7[0x84] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v7[0x85] = (int)"SKIN";
  v7[0x86] = (int)EmptyString;
  v7[0x87] = (int)"LIGHTS";
  v7[0x89] = (int)"FACEGENBLEND";
  v7[0x8A] = (int)EmptyString;
  v7[0x8B] = (int)"PROJ_SHADOW";
  v7[0x8C] = (int)EmptyString;
  memset(&v7[0x8D], 0, 0x28);
  v7[0x97] = (int)"lighting\\2x\\v\\AD.v.hlsl";
  v7[0x98] = (int)"LIGHTS";
  v7[0x9A] = (int)"FACEGENBLEND";
  v7[0x9B] = (int)EmptyString;
  memset(&v7[0x9C], 0, 0x38);
  v7[0xAA] = (int)"lighting\\2x\\v\\AD.v.hlsl";
  v7[0xAB] = (int)"SKIN";
  v7[0xAC] = (int)EmptyString;
  v7[0xAD] = (int)"LIGHTS";
  v7[0xAE] = (int)"2";
  v7[0xAF] = (int)"FACEGENBLEND";
  v7[0xB0] = (int)EmptyString;
  memset(&v7[0xB1], 0, 0x30);
  v7[0xBD] = (int)"lighting\\2x\\v\\AD.v.hlsl";
  v7[0xBE] = (int)"LIGHTS";
  v7[0xBF] = (int)"2";
  v7[0xC0] = (int)"FACEGENBLEND";
  v7[0xC1] = (int)EmptyString;
  v7[0xC2] = (int)"PROJ_SHADOW";
  v7[0xC3] = (int)EmptyString;
  memset(&v7[0xC4], 0, 0x30);
  v7[0xD0] = (int)"lighting\\2x\\v\\AD.v.hlsl";
  v7[0xD1] = (int)"SKIN";
  v7[0xD2] = (int)EmptyString;
  v7[0xD3] = (int)"LIGHTS";
  v7[0xD4] = (int)"2";
  v7[0xD5] = (int)"FACEGENBLEND";
  v7[0xD6] = (int)EmptyString;
  v7[0xD7] = (int)"PROJ_SHADOW";
  v7[0xD8] = (int)EmptyString;
  memset(&v7[0xD9], 0, 0x28);
  v7[0xE3] = (int)"lighting\\2x\\v\\AD.v.hlsl";
  v7[0xE4] = (int)"LIGHTS";
  v7[0xE5] = (int)"3";
  v7[0xE6] = (int)"FACEGENBLEND";
  v7[0xE7] = (int)EmptyString;
  memset(&v7[0xE8], 0, 0x38);
  v7[0xF6] = (int)"lighting\\2x\\v\\AD.v.hlsl";
  v7[0xF7] = (int)"SKIN";
  v7[0xF8] = (int)EmptyString;
  v7[0xF9] = (int)"LIGHTS";
  v7[0xFA] = (int)"3";
  v7[0xFB] = (int)"FACEGENBLEND";
  v7[0xFC] = (int)EmptyString;
  memset(&v7[0xFD], 0, 0x30);
  v7[0x109] = (int)"lighting\\2x\\v\\AD.v.hlsl";
  v7[0x10A] = (int)"LIGHTS";
  v7[0x10B] = (int)"3";
  v7[0x10C] = (int)"FACEGENBLEND";
  v7[0x10D] = (int)EmptyString;
  v7[0x10E] = (int)"PROJ_SHADOW";
  v7[0x10F] = (int)EmptyString;
  memset(&v7[0x110], 0, 0x30);
  v7[0x11C] = (int)"lighting\\2x\\v\\AD.v.hlsl";
  v7[0x11D] = (int)"SKIN";
  v7[0x11E] = (int)EmptyString;
  v7[0x11F] = (int)"LIGHTS";
  v7[0x120] = (int)"3";
  v7[0x121] = (int)"FACEGENBLEND";
  v7[0x122] = (int)EmptyString;
  v7[0x123] = (int)"PROJ_SHADOW";
  v7[0x124] = (int)EmptyString;
  memset(&v7[0x125], 0, 0x28);
  v7[0x12F] = (int)"lighting\\2x\\v\\DiffusePt.v.hlsl";
  v7[0x130] = (int)"LIGHTS";
  v7[0x131] = (int)"2";
  v7[0x132] = (int)"FACEGENBLEND";
  v7[0x133] = (int)EmptyString;
  memset(&v7[0x134], 0, 0x38);
  v7[0x142] = (int)"lighting\\2x\\v\\DiffusePt.v.hlsl";
  v7[0x143] = (int)"LIGHTS";
  v7[0x144] = (int)"2";
  v7[0x145] = (int)"SKIN";
  v7[0x146] = (int)EmptyString;
  v7[0x147] = (int)"FACEGENBLEND";
  v7[0x148] = (int)EmptyString;
  memset(&v7[0x149], 0, 0x30);
  v7[0x155] = (int)"lighting\\2x\\v\\DiffusePt.v.hlsl";
  v7[0x156] = (int)"LIGHTS";
  v7[0x157] = (int)"3";
  v7[0x158] = (int)"FACEGENBLEND";
  v7[0x159] = (int)EmptyString;
  memset(&v7[0x15A], 0, 0x38);
  v7[0x168] = (int)"lighting\\2x\\v\\DiffusePt.v.hlsl";
  v7[0x169] = (int)"LIGHTS";
  v7[0x16A] = (int)"3";
  v7[0x16B] = (int)"SKIN";
  v7[0x16C] = (int)EmptyString;
  v7[0x16D] = (int)"FACEGENBLEND";
  v7[0x16E] = (int)EmptyString;
  memset(&v7[0x16F], 0, 0x30);
  if ( ShaderPackage >= 2 )
  {
    v5 = 0;
    v1 = v7;
    v4 = this + 0x9C;
    do
    {
      sub_801030((char *)v1[0xFFFFFFFF], (int)FileName);
      _sprintf(v9, "SKIN2%03i.vso", v5);
      VertexShader = CreateVertexShader(FileName, v1, "vs_2_0", v9, 0, 0);
      v3 = *(_DWORD *)v4;
      if ( *(NiD3DShaderProgram **)v4 != VertexShader )
      {
        if ( v3 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
            (**(void (__thiscall ***)(int, int))v3)(v3, 1);
        }
        *(_DWORD *)v4 = VertexShader;
        if ( VertexShader )
          InterlockedIncrement((volatile LONG *)VertexShader + 1);
      }
      v4 += 4;
      v1 += 0x13;
      ++v5;
    }
    while ( v5 < 0x14 );
  }
}
