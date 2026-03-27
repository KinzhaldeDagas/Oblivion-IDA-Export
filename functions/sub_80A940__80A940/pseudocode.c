void __thiscall sub_80A940(char *this)
{
  int *v1; // ebx
  NiD3DShaderProgram *PixelShader; // eax
  int v3; // esi
  NiD3DShaderProgram *v4; // edi
  char *v5; // [esp+10h] [ebp-510h]
  int v6; // [esp+14h] [ebp-50Ch]
  const char *v7; // [esp+1Ch] [ebp-504h]
  int v8[189]; // [esp+20h] [ebp-500h] BYREF
  char FileName[260]; // [esp+314h] [ebp-20Ch] BYREF
  char v10[260]; // [esp+418h] [ebp-108h] BYREF

  v7 = "lighting\\2x\\p\\ADTS.p.hlsl";
  v8[0] = (int)"FACEGENBLEND";
  v8[1] = (int)EmptyString;
  memset(&v8[2], 0, 0x40);
  v8[0x12] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v8[0x13] = (int)"FACEGENBLEND";
  v8[0x14] = (int)EmptyString;
  v8[0x15] = (int)"PROJ_SHADOW";
  v8[0x16] = (int)EmptyString;
  memset(&v8[0x17], 0, 0x38);
  v8[0x25] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v8[0x26] = (int)"LIGHTS";
  v8[0x27] = (int)"2";
  v8[0x28] = (int)"FACEGENBLEND";
  v8[0x29] = (int)EmptyString;
  memset(&v8[0x2A], 0, 0x38);
  v8[0x38] = (int)"lighting\\2x\\p\\ADTS.p.hlsl";
  v8[0x39] = (int)"LIGHTS";
  v8[0x3A] = (int)"2";
  v8[0x3B] = (int)"FACEGENBLEND";
  v8[0x3C] = (int)EmptyString;
  v8[0x3D] = (int)"PROJ_SHADOW";
  v8[0x3E] = (int)EmptyString;
  memset(&v8[0x3F], 0, 0x30);
  v8[0x4B] = (int)"lighting\\2x\\p\\AD.p.hlsl";
  v8[0x4C] = (int)"LIGHTS";
  v8[0x4D] = (int)"2";
  v8[0x4E] = (int)"FACEGENBLEND";
  v8[0x4F] = (int)EmptyString;
  memset(&v8[0x50], 0, 0x38);
  v8[0x5E] = (int)"lighting\\2x\\p\\AD.p.hlsl";
  v8[0x5F] = (int)"LIGHTS";
  v8[0x60] = (int)"2";
  v8[0x61] = (int)"FACEGENBLEND";
  v8[0x62] = (int)EmptyString;
  v8[0x63] = (int)"PROJ_SHADOW";
  v8[0x64] = (int)EmptyString;
  memset(&v8[0x65], 0, 0x30);
  v8[0x71] = (int)"lighting\\2x\\p\\AD.p.hlsl";
  v8[0x72] = (int)"LIGHTS";
  v8[0x73] = (int)"3";
  v8[0x74] = (int)"FACEGENBLEND";
  v8[0x75] = (int)EmptyString;
  memset(&v8[0x76], 0, 0x38);
  v8[0x84] = (int)"lighting\\2x\\p\\AD.p.hlsl";
  v8[0x85] = (int)"LIGHTS";
  v8[0x86] = (int)"3";
  v8[0x87] = (int)"FACEGENBLEND";
  v8[0x88] = (int)EmptyString;
  v8[0x89] = (int)"PROJ_SHADOW";
  v8[0x8A] = (int)EmptyString;
  memset(&v8[0x8B], 0, 0x30);
  v8[0x97] = (int)"lighting\\2x\\p\\DiffusePt.p.hlsl";
  v8[0x98] = (int)"LIGHTS";
  v8[0x99] = (int)"2";
  v8[0x9A] = (int)"FACEGENBLEND";
  v8[0x9B] = (int)EmptyString;
  memset(&v8[0x9C], 0, 0x38);
  v8[0xAA] = (int)"lighting\\2x\\p\\DiffusePt.p.hlsl";
  v8[0xAB] = (int)"LIGHTS";
  v8[0xAC] = (int)"3";
  v8[0xAD] = (int)"FACEGENBLEND";
  v8[0xAE] = (int)EmptyString;
  memset(&v8[0xAF], 0, 0x38);
  if ( ShaderPackage >= 2 )
  {
    v6 = 0;
    v1 = v8;
    v5 = this + 0xEC;
    do
    {
      sub_801030((char *)v1[0xFFFFFFFF], (int)FileName);
      _sprintf(v10, "SKIN2%03i.pso", v6);
      PixelShader = CreatePixelShader(FileName, v1, "ps_2_0", v10, 0, 0);
      v3 = *(_DWORD *)v5;
      v4 = PixelShader;
      if ( *(NiD3DShaderProgram **)v5 != PixelShader )
      {
        if ( v3 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
            (**(void (__thiscall ***)(int, int))v3)(v3, 1);
        }
        *(_DWORD *)v5 = v4;
        if ( v4 )
          InterlockedIncrement((volatile LONG *)v4 + 1);
      }
      v5 += 4;
      v1 += 0x13;
      ++v6;
    }
    while ( v6 < 0xA );
  }
}
