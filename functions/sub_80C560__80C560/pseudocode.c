NiD3DShaderProgram *__thiscall sub_80C560(NiD3DShaderProgram **this)
{
  int v1; // ebx
  NiD3DShaderProgram **v2; // esi
  NiD3DShaderProgram **v3; // ebp
  NiD3DShaderProgram *result; // eax
  NiD3DShaderProgram *v5; // esi
  NiD3DShaderProgram *v6; // edi
  int v7; // ebp
  _DWORD *v8; // ebx
  NiD3DShaderProgram *PixelShader; // edi
  int v10; // esi
  _DWORD *v11; // [esp+10h] [ebp-3DCh]
  NiD3DShaderProgram *v12; // [esp+10h] [ebp-3DCh]
  const char *v14; // [esp+18h] [ebp-3D4h]
  _DWORD v15[56]; // [esp+1Ch] [ebp-3D0h] BYREF
  _DWORD v16[57]; // [esp+FCh] [ebp-2F0h] BYREF
  char v17[260]; // [esp+1E0h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+2E4h] [ebp-108h] BYREF

  v1 = 0; /*0x80c578*/
  v16[0] = "hair\\1x\\hair.p.hlsl"; /*0x80c595*/
  v16[1] = "DIRP"; /*0x80c59c*/
  v16[2] = EmptyString; /*0x80c5a7*/
  memset(&v16[3], 0, 0x40); /*0x80c5ae*/
  v16[0x13] = "hair\\1x\\hair.p.hlsl"; /*0x80c5c5*/
  v16[0x14] = &off_A943B0; /*0x80c5cc*/
  v16[0x15] = EmptyString; /*0x80c5d7*/
  memset(&v16[0x16], 0, 0x40); /*0x80c5de*/
  v16[0x26] = "hair\\1x\\hair.p.hlsl"; /*0x80c5f5*/
  v16[0x27] = "DIRP"; /*0x80c5fc*/
  v16[0x28] = EmptyString; /*0x80c607*/
  v16[0x29] = "NOSPECULAR"; /*0x80c60e*/
  v16[0x2A] = EmptyString; /*0x80c619*/
  memset(&v16[0x2B], 0, 0x38); /*0x80c620*/
  v14 = "hair\\2x\\hair.p.hlsl"; /*0x80c639*/
  v15[0] = &off_A8F8C4; /*0x80c641*/
  v15[1] = EmptyString; /*0x80c649*/
  v15[2] = &off_A94408; /*0x80c64d*/
  v15[3] = EmptyString; /*0x80c651*/
  memset(&v15[4], 0, 0x38); /*0x80c655*/
  v15[0x12] = "hair\\2x\\hair.p.hlsl"; /*0x80c669*/
  v15[0x13] = &off_A8F8C4; /*0x80c674*/
  v15[0x14] = EmptyString; /*0x80c67f*/
  v15[0x15] = &off_A94408; /*0x80c686*/
  v15[0x16] = EmptyString; /*0x80c68d*/
  v15[0x17] = "POINT"; /*0x80c694*/
  v15[0x18] = "1"; /*0x80c69f*/
  memset(&v15[0x19], 0, 0x30); /*0x80c6aa*/
  v15[0x25] = "hair\\2x\\hair.p.hlsl"; /*0x80c6c1*/
  v15[0x26] = &off_A8F8C4; /*0x80c6cc*/
  v15[0x27] = EmptyString; /*0x80c6d7*/
  v15[0x28] = &off_A94408; /*0x80c6de*/
  v15[0x29] = EmptyString; /*0x80c6e5*/
  v15[0x2A] = "POINT"; /*0x80c6ec*/
  v15[0x2B] = "2"; /*0x80c6f7*/
  memset(&v15[0x2C], 0, 0x30); /*0x80c702*/
  v2 = (NiD3DShaderProgram **)v16; /*0x80c70e*/
  v11 = v16; /*0x80c718*/
  v3 = this + 0x30; /*0x80c71c*/
  do /*0x80c7c4*/
  {
    result = *v2; /*0x80c722*/
    if ( *v2 ) /*0x80c722*/
    {
      sub_801030((char *)result, (int)FileName); /*0x80c735*/
      _sprintf(v17, "HAIR1%03i.pso", v1); /*0x80c748*/
      result = CreatePixelShader(FileName, v2 + 1, "ps_1_3", v17, 0, 0); /*0x80c771*/
      v5 = *v3; /*0x80c776*/
      v6 = result; /*0x80c779*/
      if ( *v3 != result ) /*0x80c77d*/
      {
        if ( v5 ) /*0x80c781*/
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v5 + 1); /*0x80c787*/
          if ( !result ) /*0x80c78f*/
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v5)(v5, 1); /*0x80c79d*/
        }
        *v3 = v6; /*0x80c7a1*/
        if ( v6 ) /*0x80c7a4*/
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v6 + 1); /*0x80c7aa*/
      }
    }
    ++v1; /*0x80c7b4*/
    v2 = (NiD3DShaderProgram **)(v11 + 0x13); /*0x80c7b7*/
    ++v3; /*0x80c7ba*/
    v11 += 0x13; /*0x80c7c0*/
  }
  while ( v1 < 3 ); /*0x80c7c4*/
  if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 ) /*0x80c7d1*/
  {
    v7 = 0; /*0x80c7db*/
    v8 = v15; /*0x80c7e2*/
    v12 = (NiD3DShaderProgram *)(this + 0x3A); /*0x80c7e6*/
    do /*0x80c888*/
    {
      sub_801030((char *)v8[0xFFFFFFFF], (int)FileName); /*0x80c7fc*/
      _sprintf(v17, "HAIR2%03i.pso", v7); /*0x80c80f*/
      PixelShader = CreatePixelShader(FileName, v8, "ps_2_0", v17, 0, 0); /*0x80c83a*/
      result = v12; /*0x80c83c*/
      v10 = *(_DWORD *)v12; /*0x80c840*/
      if ( *(NiD3DShaderProgram **)v12 != PixelShader ) /*0x80c844*/
      {
        if ( v10 ) /*0x80c848*/
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)(v10 + 4)); /*0x80c84e*/
          if ( !result ) /*0x80c856*/
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(int, int))v10)(v10, 1); /*0x80c864*/
        }
        *(_DWORD *)v12 = PixelShader; /*0x80c86c*/
        if ( PixelShader ) /*0x80c86e*/
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)PixelShader + 1); /*0x80c874*/
      }
      v12 = (NiD3DShaderProgram *)((char *)v12 + 4); /*0x80c87a*/
      ++v7; /*0x80c87f*/
      v8 += 0x13; /*0x80c882*/
    }
    while ( v7 < 3 ); /*0x80c888*/
  }
  return result; /*0x80c88e*/
}
