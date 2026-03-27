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

  v1 = 0;
  v16[0] = "hair\\1x\\hair.p.hlsl";
  v16[1] = "DIRP";
  v16[2] = EmptyString;
  memset(&v16[3], 0, 0x40);
  v16[0x13] = "hair\\1x\\hair.p.hlsl";
  v16[0x14] = &off_A943B0;
  v16[0x15] = EmptyString;
  memset(&v16[0x16], 0, 0x40);
  v16[0x26] = "hair\\1x\\hair.p.hlsl";
  v16[0x27] = "DIRP";
  v16[0x28] = EmptyString;
  v16[0x29] = "NOSPECULAR";
  v16[0x2A] = EmptyString;
  memset(&v16[0x2B], 0, 0x38);
  v14 = "hair\\2x\\hair.p.hlsl";
  v15[0] = &off_A8F8C4;
  v15[1] = EmptyString;
  v15[2] = &off_A94408;
  v15[3] = EmptyString;
  memset(&v15[4], 0, 0x38);
  v15[0x12] = "hair\\2x\\hair.p.hlsl";
  v15[0x13] = &off_A8F8C4;
  v15[0x14] = EmptyString;
  v15[0x15] = &off_A94408;
  v15[0x16] = EmptyString;
  v15[0x17] = "POINT";
  v15[0x18] = "1";
  memset(&v15[0x19], 0, 0x30);
  v15[0x25] = "hair\\2x\\hair.p.hlsl";
  v15[0x26] = &off_A8F8C4;
  v15[0x27] = EmptyString;
  v15[0x28] = &off_A94408;
  v15[0x29] = EmptyString;
  v15[0x2A] = "POINT";
  v15[0x2B] = "2";
  memset(&v15[0x2C], 0, 0x30);
  v2 = (NiD3DShaderProgram **)v16;
  v11 = v16;
  v3 = this + 0x30;
  do
  {
    result = *v2;
    if ( *v2 )
    {
      sub_801030((char *)result, (int)FileName);
      _sprintf(v17, "HAIR1%03i.pso", v1);
      result = CreatePixelShader(FileName, v2 + 1, "ps_1_3", v17, 0, 0);
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
    ++v1;
    v2 = (NiD3DShaderProgram **)(v11 + 0x13);
    ++v3;
    v11 += 0x13;
  }
  while ( v1 < 3 );
  if ( ShaderPackage >= 2 )
  {
    v7 = 0;
    v8 = v15;
    v12 = (NiD3DShaderProgram *)(this + 0x3A);
    do
    {
      sub_801030((char *)v8[0xFFFFFFFF], (int)FileName);
      _sprintf(v17, "HAIR2%03i.pso", v7);
      PixelShader = CreatePixelShader(FileName, v8, "ps_2_0", v17, 0, 0);
      result = v12;
      v10 = *(_DWORD *)v12;
      if ( *(NiD3DShaderProgram **)v12 != PixelShader )
      {
        if ( v10 )
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)(v10 + 4));
          if ( !result )
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(int, int))v10)(v10, 1);
        }
        *(_DWORD *)v12 = PixelShader;
        if ( PixelShader )
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)PixelShader + 1);
      }
      v12 = (NiD3DShaderProgram *)((char *)v12 + 4);
      ++v7;
      v8 += 0x13;
    }
    while ( v7 < 3 );
  }
  return result;
}
