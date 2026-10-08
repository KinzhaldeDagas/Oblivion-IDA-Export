NiD3DShaderProgram *__thiscall sub_7DFBD0(char *this)
{
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v3; // ebx
  NiD3DShaderProgram *v4; // ebp
  int v5; // ebx
  NiD3DShaderProgram **v6; // ebp
  NiD3DShaderProgram *result; // eax
  NiD3DShaderProgram *v8; // esi
  NiD3DShaderProgram *v9; // edi
  NiD3DShaderProgram **v10; // [esp+10h] [ebp-478h]
  char *Str1; // [esp+14h] [ebp-474h]
  int v12[18]; // [esp+20h] [ebp-468h] BYREF
  _DWORD v13[133]; // [esp+68h] [ebp-420h] BYREF
  char FileName[260]; // [esp+27Ch] [ebp-20Ch] BYREF
  char v15[260]; // [esp+380h] [ebp-108h] BYREF

  memset(v12, 0, sizeof(v12)); /*0x7dfc00*/
  sub_801030("imagespace\\1x\\v\\base.v.hlsl", (int)FileName); /*0x7dfc1e*/
  _sprintf(v15, "WATERHMAP.vso"); /*0x7dfc30*/
  VertexShader = CreateVertexShader(FileName, v12, "vs_1_1", v15, 0, 0); /*0x7dfc56*/
  v3 = *((volatile LONG **)this + 0x2C); /*0x7dfc5b*/
  v4 = VertexShader; /*0x7dfc61*/
  if ( v3 != (volatile LONG *)VertexShader ) /*0x7dfc65*/
  {
    if ( v3 ) /*0x7dfc69*/
    {
      if ( !InterlockedDecrement(v3 + 1) ) /*0x7dfc6f*/
        (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1); /*0x7dfc85*/
    }
    *((_DWORD *)this + 0x2C) = v4; /*0x7dfc89*/
    if ( v4 ) /*0x7dfc8f*/
      InterlockedIncrement((volatile LONG *)v4 + 1); /*0x7dfc95*/
  }
  Str1 = "ps_1_3"; /*0x7dfca2*/
  if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 ) /*0x7dfcaa*/
    Str1 = "ps_2_0"; /*0x7dfcac*/
  v13[0] = "water\\2_ab\\p\\waterhmap.p.hlsl"; /*0x7dfcc6*/
  v13[1] = "WATER_SPECTRUM"; /*0x7dfcca*/
  v13[2] = EmptyString; /*0x7dfcd2*/
  memset(&v13[3], 0, 0x40); /*0x7dfcd6*/
  v13[0x13] = "water\\2_ab\\p\\waterhmap.p.hlsl"; /*0x7dfced*/
  v13[0x14] = "HORIZONTAL_BUTTERFLY"; /*0x7dfcf4*/
  v13[0x15] = EmptyString; /*0x7dfcff*/
  memset(&v13[0x16], 0, 0x40); /*0x7dfd06*/
  v13[0x26] = "water\\2_ab\\p\\waterhmap.p.hlsl"; /*0x7dfd1d*/
  v13[0x27] = "VERTICAL_BUTTERFLY"; /*0x7dfd24*/
  v13[0x28] = EmptyString; /*0x7dfd2f*/
  memset(&v13[0x29], 0, 0x40); /*0x7dfd36*/
  v13[0x39] = "water\\2_ab\\p\\waterhmap.p.hlsl"; /*0x7dfd4d*/
  v13[0x3A] = "HORIZONTAL_SCRAMBLE"; /*0x7dfd54*/
  v13[0x3B] = EmptyString; /*0x7dfd5f*/
  memset(&v13[0x3C], 0, 0x40); /*0x7dfd66*/
  v13[0x4C] = "water\\2_ab\\p\\waterhmap.p.hlsl"; /*0x7dfd7d*/
  v13[0x4D] = "VERTICAL_SCRAMBLE"; /*0x7dfd84*/
  v13[0x4E] = EmptyString; /*0x7dfd8f*/
  memset(&v13[0x4F], 0, 0x40); /*0x7dfd96*/
  v13[0x5F] = "water\\2_ab\\p\\waterhmap.p.hlsl"; /*0x7dfdad*/
  v13[0x60] = "NORMALS"; /*0x7dfdb4*/
  v13[0x61] = EmptyString; /*0x7dfdbf*/
  memset(&v13[0x62], 0, 0x40); /*0x7dfdc6*/
  v13[0x72] = "water\\2_ab\\p\\waterhmap.p.hlsl"; /*0x7dfde0*/
  v13[0x73] = "FILTER"; /*0x7dfde7*/
  v13[0x74] = EmptyString; /*0x7dfdf2*/
  memset(&v13[0x75], 0, 0x40); /*0x7dfdf9*/
  v5 = 0; /*0x7dfe0c*/
  v10 = (NiD3DShaderProgram **)v13; /*0x7dfe0e*/
  v6 = (NiD3DShaderProgram **)(this + 0xB4); /*0x7dfe12*/
  do /*0x7dfebf*/
  {
    result = *v10; /*0x7dfe1c*/
    if ( *v10 ) /*0x7dfe1c*/
    {
      sub_801030((char *)result, (int)FileName); /*0x7dfe2f*/
      _sprintf(v15, "WATERHMAP%03i.pso", v5); /*0x7dfe42*/
      result = CreatePixelShader(FileName, v10 + 1, Str1, v15, 0, 1); /*0x7dfe6c*/
      v8 = *v6; /*0x7dfe71*/
      v9 = result; /*0x7dfe74*/
      if ( *v6 != result ) /*0x7dfe78*/
      {
        if ( v8 ) /*0x7dfe7c*/
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v8 + 1); /*0x7dfe82*/
          if ( !result ) /*0x7dfe8a*/
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v8)(v8, 1); /*0x7dfe98*/
        }
        *v6 = v9; /*0x7dfe9c*/
        if ( v9 ) /*0x7dfe9f*/
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v9 + 1); /*0x7dfea5*/
      }
    }
    v10 += 0x13; /*0x7dfeb1*/
    ++v5; /*0x7dfeb6*/
    ++v6; /*0x7dfeb9*/
  }
  while ( v5 < 7 ); /*0x7dfebf*/
  return result; /*0x7dfec5*/
}
