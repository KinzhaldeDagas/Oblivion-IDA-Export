NiD3DShaderProgram *__thiscall sub_80BFB0(char *this)
{
  int v1; // ebp
  NiD3DShaderProgram **v2; // esi
  NiD3DShaderProgram *result; // eax
  NiD3DShaderProgram *v4; // esi
  NiD3DShaderProgram *v5; // ebx
  int *v6; // ebx
  NiD3DShaderProgram *VertexShader; // ebp
  int v8; // esi
  NiD3DShaderProgram **v9; // [esp+10h] [ebp-640h]
  char *v10; // [esp+10h] [ebp-640h]
  _DWORD *v11; // [esp+14h] [ebp-63Ch]
  int v12; // [esp+14h] [ebp-63Ch]
  const char *v14; // [esp+1Ch] [ebp-634h]
  int v15[132]; // [esp+20h] [ebp-630h] BYREF
  _DWORD v16[133]; // [esp+230h] [ebp-420h] BYREF
  char v17[260]; // [esp+444h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+548h] [ebp-108h] BYREF

  v16[0] = "hair\\1x\\hair.v.hlsl"; /*0x80bfe8*/
  v16[1] = "DIRP"; /*0x80bfef*/
  v16[2] = EmptyString; /*0x80bff6*/
  memset(&v16[3], 0, 0x40); /*0x80bffd*/
  v16[0x14] = "DIRP"; /*0x80c00b*/
  v16[0x13] = "hair\\1x\\hair.v.hlsl"; /*0x80c020*/
  v16[0x15] = EmptyString; /*0x80c027*/
  v16[0x16] = &off_A943B4; /*0x80c02e*/
  v16[0x17] = EmptyString; /*0x80c035*/
  memset(&v16[0x18], 0, 0x38); /*0x80c03c*/
  v16[0x26] = "hair\\1x\\hair.v.hlsl"; /*0x80c04a*/
  v16[0x27] = &off_A943B0; /*0x80c05f*/
  v16[0x28] = EmptyString; /*0x80c066*/
  v16[0x29] = "DIRS"; /*0x80c06d*/
  v16[0x2A] = EmptyString; /*0x80c078*/
  memset(&v16[0x2B], 0, 0x38); /*0x80c07f*/
  v16[0x39] = "hair\\1x\\hair.v.hlsl"; /*0x80c096*/
  v16[0x3A] = "DIRP"; /*0x80c0a1*/
  v16[0x3B] = EmptyString; /*0x80c0ac*/
  v16[0x3C] = &off_A943B4; /*0x80c0b3*/
  v16[0x3D] = EmptyString; /*0x80c0ba*/
  v16[0x3E] = &off_A943A4; /*0x80c0c1*/
  v16[0x3F] = EmptyString; /*0x80c0cc*/
  memset(&v16[0x40], 0, 0x30); /*0x80c0d3*/
  v16[0x4C] = "hair\\1x\\hair.v.hlsl"; /*0x80c0ea*/
  v16[0x4D] = &off_A943B0; /*0x80c0f5*/
  v16[0x4E] = EmptyString; /*0x80c0fc*/
  v16[0x4F] = "DIRS"; /*0x80c103*/
  v16[0x50] = EmptyString; /*0x80c10e*/
  v16[0x51] = &off_A943A4; /*0x80c115*/
  v16[0x52] = EmptyString; /*0x80c120*/
  memset(&v16[0x53], 0, 0x30); /*0x80c127*/
  v16[0x5F] = "hair\\1x\\hair.v.hlsl"; /*0x80c13e*/
  v16[0x60] = &off_A943B0; /*0x80c149*/
  v16[0x61] = EmptyString; /*0x80c150*/
  v16[0x62] = &off_A943B4; /*0x80c157*/
  v16[0x63] = EmptyString; /*0x80c15e*/
  v16[0x64] = &off_A943A4; /*0x80c165*/
  v16[0x65] = EmptyString; /*0x80c170*/
  memset(&v16[0x66], 0, 0x30); /*0x80c177*/
  v16[0x72] = "hair\\1x\\hair.v.hlsl"; /*0x80c191*/
  v16[0x73] = &off_A943B0; /*0x80c19c*/
  v16[0x74] = EmptyString; /*0x80c1a3*/
  v16[0x75] = &off_A943B4; /*0x80c1aa*/
  v16[0x76] = EmptyString; /*0x80c1b1*/
  memset(&v16[0x77], 0, 0x38); /*0x80c1b8*/
  v14 = "hair\\2x\\hair.v.hlsl"; /*0x80c1cc*/
  v15[0] = (int)"DIRP"; /*0x80c1d4*/
  v15[1] = (int)EmptyString; /*0x80c1dc*/
  memset(&v15[2], 0, 0x40); /*0x80c1e0*/
  v15[0x12] = (int)"hair\\2x\\hair.v.hlsl"; /*0x80c1f4*/
  v15[0x13] = (int)"DIRP"; /*0x80c1ff*/
  v15[0x14] = (int)EmptyString; /*0x80c20a*/
  v15[0x15] = (int)&off_A943B4; /*0x80c211*/
  v15[0x16] = (int)EmptyString; /*0x80c218*/
  memset(&v15[0x17], 0, 0x38); /*0x80c21f*/
  v15[0x25] = (int)"hair\\2x\\hair.v.hlsl"; /*0x80c236*/
  v15[0x26] = (int)&off_A943B0; /*0x80c241*/
  v15[0x27] = (int)EmptyString; /*0x80c248*/
  v15[0x28] = (int)"DIRS"; /*0x80c24f*/
  v15[0x29] = (int)EmptyString; /*0x80c25a*/
  memset(&v15[0x2A], 0, 0x38); /*0x80c261*/
  v15[0x38] = (int)"hair\\2x\\hair.v.hlsl"; /*0x80c278*/
  v15[0x39] = (int)"DIRP"; /*0x80c283*/
  v15[0x3A] = (int)EmptyString; /*0x80c28e*/
  v15[0x3B] = (int)&off_A943B4; /*0x80c295*/
  v15[0x3C] = (int)EmptyString; /*0x80c29c*/
  v15[0x3D] = (int)&off_A943A4; /*0x80c2a3*/
  v15[0x3E] = (int)EmptyString; /*0x80c2ae*/
  memset(&v15[0x3F], 0, 0x30); /*0x80c2b5*/
  v15[0x4B] = (int)"hair\\2x\\hair.v.hlsl"; /*0x80c2cc*/
  v15[0x4C] = (int)&off_A943B0; /*0x80c2d7*/
  v15[0x4D] = (int)EmptyString; /*0x80c2de*/
  v15[0x4E] = (int)"DIRS"; /*0x80c2e5*/
  v15[0x4F] = (int)EmptyString; /*0x80c2f0*/
  v15[0x50] = (int)&off_A943A4; /*0x80c2f7*/
  v15[0x51] = (int)EmptyString; /*0x80c302*/
  memset(&v15[0x52], 0, 0x30); /*0x80c309*/
  v15[0x5E] = (int)"hair\\2x\\hair.v.hlsl"; /*0x80c31a*/
  v15[0x5F] = (int)&off_A943B0; /*0x80c325*/
  v15[0x60] = (int)EmptyString; /*0x80c32c*/
  v15[0x61] = (int)&off_A943B4; /*0x80c333*/
  v15[0x62] = (int)EmptyString; /*0x80c33a*/
  v15[0x63] = (int)&off_A943A4; /*0x80c341*/
  v15[0x64] = (int)EmptyString; /*0x80c34c*/
  memset(&v15[0x65], 0, 0x30); /*0x80c353*/
  v15[0x71] = (int)"hair\\2x\\hair.v.hlsl"; /*0x80c373*/
  v15[0x72] = (int)&off_A943B0; /*0x80c37e*/
  v15[0x73] = (int)EmptyString; /*0x80c385*/
  v15[0x74] = (int)&off_A943B4; /*0x80c38c*/
  v15[0x75] = (int)EmptyString; /*0x80c393*/
  memset(&v15[0x76], 0, 0x38); /*0x80c39a*/
  v1 = 0; /*0x80c3ad*/
  v2 = (NiD3DShaderProgram **)v16; /*0x80c3af*/
  v11 = v16; /*0x80c3bc*/
  v9 = (NiD3DShaderProgram **)(this + 0xA4); /*0x80c3c0*/
  do /*0x80c46c*/
  {
    result = *v2; /*0x80c3c4*/
    if ( *v2 ) /*0x80c3c4*/
    {
      sub_801030((char *)result, (int)FileName); /*0x80c3d7*/
      _sprintf(v17, "HAIR1%03i.vso", v1); /*0x80c3ea*/
      result = CreateVertexShader(FileName, v2 + 1, "vs_1_1", v17, 0, 0); /*0x80c411*/
      v4 = *v9; /*0x80c41a*/
      v5 = result; /*0x80c41c*/
      if ( *v9 != result ) /*0x80c420*/
      {
        if ( v4 ) /*0x80c424*/
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v4 + 1); /*0x80c42a*/
          if ( !result ) /*0x80c432*/
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v4)(v4, 1); /*0x80c440*/
        }
        *v9 = v5; /*0x80c448*/
        if ( v5 ) /*0x80c44a*/
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v5 + 1); /*0x80c450*/
      }
    }
    ++v9; /*0x80c45a*/
    ++v1; /*0x80c45f*/
    v2 = (NiD3DShaderProgram **)(v11 + 0x13); /*0x80c462*/
    v11 += 0x13; /*0x80c468*/
  }
  while ( v1 < 7 ); /*0x80c46c*/
  if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 ) /*0x80c479*/
  {
    v12 = 0; /*0x80c489*/
    v6 = v15; /*0x80c48d*/
    v10 = this + 0xCC; /*0x80c491*/
    do /*0x80c537*/
    {
      sub_801030((char *)v6[0xFFFFFFFF], (int)FileName); /*0x80c4a1*/
      _sprintf(v17, "HAIR2%03i.vso", v12); /*0x80c4b8*/
      VertexShader = CreateVertexShader(FileName, v6, "vs_2_0", v17, 0, 0); /*0x80c4e1*/
      v8 = *(_DWORD *)v10; /*0x80c4e7*/
      if ( *(NiD3DShaderProgram **)v10 != VertexShader ) /*0x80c4eb*/
      {
        if ( v8 ) /*0x80c4ef*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x80c4f5*/
            (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x80c50b*/
        }
        *(_DWORD *)v10 = VertexShader; /*0x80c513*/
        if ( VertexShader ) /*0x80c515*/
          InterlockedIncrement((volatile LONG *)VertexShader + 1); /*0x80c51b*/
      }
      v10 += 4; /*0x80c525*/
      result = (NiD3DShaderProgram *)(v12 + 1); /*0x80c52a*/
      v6 += 0x13; /*0x80c52d*/
      ++v12; /*0x80c533*/
    }
    while ( v12 < 7 ); /*0x80c537*/
  }
  return result; /*0x80c53d*/
}
