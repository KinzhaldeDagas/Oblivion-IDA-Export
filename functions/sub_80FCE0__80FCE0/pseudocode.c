NiD3DShaderProgram *__thiscall sub_80FCE0(char *this)
{
  int v1; // ebp
  NiD3DShaderProgram **v2; // esi
  NiD3DShaderProgram **v3; // edi
  NiD3DShaderProgram *result; // eax
  NiD3DShaderProgram *v5; // esi
  NiD3DShaderProgram *v6; // ebp
  NiD3DShaderProgram *v7; // esi
  bool v8; // cc
  int *v9; // ebp
  NiD3DShaderProgram *VertexShader; // eax
  int v11; // esi
  NiD3DShaderProgram *v12; // edi
  _DWORD *v13; // [esp+10h] [ebp-A68h]
  char *v14; // [esp+10h] [ebp-A68h]
  int v15; // [esp+14h] [ebp-A64h]
  int v16; // [esp+14h] [ebp-A64h]
  const char *v18; // [esp+1Ch] [ebp-A5Ch]
  int v19[341]; // [esp+20h] [ebp-A58h] BYREF
  _DWORD v20[190]; // [esp+574h] [ebp-504h] BYREF
  char v21[260]; // [esp+86Ch] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+970h] [ebp-108h] BYREF

  v20[0] = "lighting\\1x\\v\\base.v.hlsl";
  v20[1] = "TREE";
  v20[2] = EmptyString;
  memset(&v20[3], 0, 0x40);
  v20[0x13] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v20[0x14] = "TREE";
  v20[0x15] = EmptyString;
  v20[0x16] = "VC";
  v20[0x17] = EmptyString;
  memset(&v20[0x18], 0, 0x38);
  v20[0x26] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  v20[0x27] = "TREE";
  v20[0x28] = EmptyString;
  v20[0x29] = "VC";
  v20[0x2A] = EmptyString;
  memset(&v20[0x2B], 0, 0x38);
  v20[0x39] = "lighting\\1x\\v\\ambDiffuseDirAndPt.v.hlsl";
  v20[0x3A] = "TREE";
  v20[0x3B] = EmptyString;
  memset(&v20[0x3C], 0, 0x40);
  v20[0x4C] = "lighting\\1x\\v\\diffuseDir.v.hlsl";
  v20[0x4D] = "TREE";
  v20[0x4E] = EmptyString;
  memset(&v20[0x4F], 0, 0x40);
  v20[0x5F] = "lighting\\1x\\v\\diffusePt.v.hlsl";
  v20[0x60] = "TREE";
  v20[0x61] = EmptyString;
  memset(&v20[0x62], 0, 0x40);
  v20[0x72] = "lighting\\1x\\v\\base.v.hlsl";
  v20[0x73] = "TREE";
  v20[0x74] = EmptyString;
  v20[0x75] = "VC";
  v20[0x76] = EmptyString;
  memset(&v20[0x77], 0, 0x38);
  v20[0x85] = "lighting\\1x\\v\\specularDir.v.hlsl";
  v20[0x86] = "TREE";
  v20[0x87] = EmptyString;
  memset(&v20[0x88], 0, 0x40);
  v20[0x98] = "lighting\\1x\\v\\specularPt.v.hlsl";
  v20[0x99] = "TREE";
  v20[0x9A] = EmptyString;
  memset(&v20[0x9B], 0, 0x40);
  v20[0xAB] = "lighting\\1x\\v\\base.v.hlsl";
  v20[0xAC] = "TREE";
  v20[0xAD] = EmptyString;
  v20[0xAE] = &off_A90D88;
  v20[0xAF] = EmptyString;
  memset(&v20[0xB0], 0, 0x38);
  v18 = "lighting\\2x\\v\\AD.v.hlsl";
  v19[0] = (int)"LIGHTS";
  v19[1] = (int)"2";
  v19[2] = (int)"TREE";
  v19[3] = (int)EmptyString;
  memset(&v19[4], 0, 0x38);
  v19[0x12] = (int)"lighting\\2x\\v\\AD.v.hlsl";
  v19[0x13] = (int)"LIGHTS";
  v19[0x14] = (int)"2";
  v19[0x15] = (int)"PROJ_SHADOW";
  v19[0x16] = (int)EmptyString;
  v19[0x17] = (int)"TREE";
  v19[0x18] = (int)EmptyString;
  memset(&v19[0x19], 0, 0x30);
  v19[0x25] = (int)"lighting\\2x\\v\\AD.v.hlsl";
  v19[0x26] = (int)"LIGHTS";
  v19[0x27] = (int)"3";
  v19[0x28] = (int)"TREE";
  v19[0x29] = (int)EmptyString;
  memset(&v19[0x2A], 0, 0x38);
  v19[0x38] = (int)"lighting\\2x\\v\\AD.v.hlsl";
  v19[0x39] = (int)"LIGHTS";
  v19[0x3A] = (int)"3";
  v19[0x3B] = (int)"PROJ_SHADOW";
  v19[0x3C] = (int)EmptyString;
  v19[0x3D] = (int)"TREE";
  v19[0x3E] = (int)EmptyString;
  memset(&v19[0x3F], 0, 0x30);
  v19[0x4B] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v19[0x4C] = (int)"TREE";
  v19[0x4D] = (int)EmptyString;
  memset(&v19[0x4E], 0, 0x40);
  v19[0x5E] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v19[0x5F] = (int)"PROJ_SHADOW";
  v19[0x60] = (int)EmptyString;
  v19[0x61] = (int)"TREE";
  v19[0x62] = (int)EmptyString;
  memset(&v19[0x63], 0, 0x38);
  v19[0x71] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v19[0x72] = (int)"LIGHTS";
  v19[0x73] = (int)"2";
  v19[0x74] = (int)"TREE";
  v19[0x75] = (int)EmptyString;
  memset(&v19[0x76], 0, 0x38);
  v19[0x84] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v19[0x85] = (int)"LIGHTS";
  v19[0x86] = (int)"2";
  v19[0x87] = (int)"PROJ_SHADOW";
  v19[0x88] = (int)EmptyString;
  v19[0x89] = (int)"TREE";
  v19[0x8A] = (int)EmptyString;
  memset(&v19[0x8B], 0, 0x30);
  v19[0x97] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v19[0x98] = (int)"SPECULAR";
  v19[0x99] = (int)EmptyString;
  v19[0x9A] = (int)"TREE";
  v19[0x9B] = (int)EmptyString;
  memset(&v19[0x9C], 0, 0x38);
  v19[0xAA] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v19[0xAB] = (int)"SPECULAR";
  v19[0xAC] = (int)EmptyString;
  v19[0xAD] = (int)"PROJ_SHADOW";
  v19[0xAE] = (int)EmptyString;
  v19[0xAF] = (int)"TREE";
  v19[0xB0] = (int)EmptyString;
  memset(&v19[0xB1], 0, 0x30);
  v19[0xBD] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v19[0xBE] = (int)"SPECULAR";
  v19[0xBF] = (int)EmptyString;
  v19[0xC0] = (int)"LIGHTS";
  v19[0xC1] = (int)"2";
  v19[0xC2] = (int)"TREE";
  v19[0xC3] = (int)EmptyString;
  memset(&v19[0xC4], 0, 0x30);
  v19[0xD0] = (int)"lighting\\2x\\v\\ADTS.v.hlsl";
  v19[0xD1] = (int)"SPECULAR";
  v19[0xD2] = (int)EmptyString;
  v19[0xD3] = (int)"LIGHTS";
  v19[0xD4] = (int)"2";
  v19[0xD5] = (int)"PROJ_SHADOW";
  v19[0xD6] = (int)EmptyString;
  v19[0xD7] = (int)"TREE";
  v19[0xD8] = (int)EmptyString;
  memset(&v19[0xD9], 0, 0x28);
  v19[0xE3] = (int)"lighting\\2x\\v\\DiffusePt.v.hlsl";
  v19[0xE4] = (int)"LIGHTS";
  v19[0xE5] = (int)"2";
  v19[0xE6] = (int)"TREE";
  v19[0xE7] = (int)EmptyString;
  memset(&v19[0xE8], 0, 0x38);
  v19[0xF6] = (int)"lighting\\2x\\v\\DiffusePt.v.hlsl";
  v19[0xF7] = (int)"LIGHTS";
  v19[0xF8] = (int)"3";
  v19[0xF9] = (int)"TREE";
  v19[0xFA] = (int)EmptyString;
  memset(&v19[0xFB], 0, 0x38);
  v19[0x109] = (int)"lighting\\2x\\v\\Specular.v.hlsl";
  v19[0x10A] = (int)"TREE";
  v19[0x10B] = (int)EmptyString;
  memset(&v19[0x10C], 0, 0x40);
  v19[0x11C] = (int)"lighting\\2x\\v\\Specular.v.hlsl";
  v19[0x11D] = (int)"PROJ_SHADOW";
  v19[0x11E] = (int)EmptyString;
  v19[0x11F] = (int)"TREE";
  v19[0x120] = (int)EmptyString;
  memset(&v19[0x121], 0, 0x38);
  v19[0x12F] = (int)"lighting\\2x\\v\\Specular.v.hlsl";
  v19[0x130] = (int)"POINT";
  v19[0x131] = (int)EmptyString;
  v19[0x132] = (int)"TREE";
  v19[0x133] = (int)EmptyString;
  memset(&v19[0x134], 0, 0x38);
  v19[0x142] = (int)"lighting\\2x\\v\\SimpleShadow.v.hlsl";
  v19[0x143] = (int)"SHADOWMAP";
  v19[0x144] = (int)EmptyString;
  v19[0x145] = (int)"TREE";
  v19[0x146] = (int)EmptyString;
  memset(&v19[0x147], 0, 0x38);
  v1 = 0;
  v2 = (NiD3DShaderProgram **)v20;
  v15 = 0;
  v13 = v20;
  v3 = (NiD3DShaderProgram **)(this + 0x9C);
  do
  {
    result = *v2;
    if ( *v2 )
    {
      sub_801030((char *)result, (int)FileName);
      _sprintf(v21, "STB1%03i.vso", v1);
      result = CreateVertexShader(FileName, v2 + 1, "vs_1_1", v21, 0, 0);
      v5 = *v3;
      v6 = result;
      if ( *v3 != result )
      {
        if ( v5 )
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v5 + 1);
          if ( !result )
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v5)(v5, 1);
        }
        *v3 = v6;
        if ( v6 )
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v6 + 1);
      }
    }
    else
    {
      v7 = *v3;
      if ( *v3 )
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v7 + 1);
        if ( !result )
        {
          if ( v7 )
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v7)(v7, 1);
        }
        *v3 = 0;
      }
    }
    v1 = v15 + 1;
    v2 = (NiD3DShaderProgram **)(v13 + 0x13);
    ++v3;
    v8 = ++v15 < 0xA;
    v13 += 0x13;
  }
  while ( v8 );
  if ( ShaderPackage >= 2 )
  {
    v16 = 0;
    v9 = v19;
    v14 = this + 0xC4;
    do
    {
      sub_801030((char *)v9[0xFFFFFFFF], (int)FileName);
      _sprintf(v21, "STB2%03i.vso", v16);
      VertexShader = CreateVertexShader(FileName, v9, "vs_2_0", v21, 0, 0);
      v11 = *(_DWORD *)v14;
      v12 = VertexShader;
      if ( *(NiD3DShaderProgram **)v14 != VertexShader )
      {
        if ( v11 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
            (**(void (__thiscall ***)(int, int))v11)(v11, 1);
        }
        *(_DWORD *)v14 = v12;
        if ( v12 )
          InterlockedIncrement((volatile LONG *)v12 + 1);
      }
      v14 += 4;
      result = (NiD3DShaderProgram *)(v16 + 1);
      v9 += 0x13;
      ++v16;
    }
    while ( v16 < 0x12 );
  }
  return result;
}
