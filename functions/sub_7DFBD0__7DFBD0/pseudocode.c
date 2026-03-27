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

  memset(v12, 0, sizeof(v12));
  sub_801030("imagespace\\1x\\v\\base.v.hlsl", (int)FileName);
  _sprintf(v15, "WATERHMAP.vso");
  VertexShader = CreateVertexShader(FileName, v12, "vs_1_1", v15, 0, 0);
  v3 = *((volatile LONG **)this + 0x2C);
  v4 = VertexShader;
  if ( v3 != (volatile LONG *)VertexShader )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement(v3 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1);
    }
    *((_DWORD *)this + 0x2C) = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)v4 + 1);
  }
  Str1 = "ps_1_3";
  if ( ShaderPackage >= 2 )
    Str1 = "ps_2_0";
  v13[0] = "water\\2_ab\\p\\waterhmap.p.hlsl";
  v13[1] = "WATER_SPECTRUM";
  v13[2] = EmptyString;
  memset(&v13[3], 0, 0x40);
  v13[0x13] = "water\\2_ab\\p\\waterhmap.p.hlsl";
  v13[0x14] = "HORIZONTAL_BUTTERFLY";
  v13[0x15] = EmptyString;
  memset(&v13[0x16], 0, 0x40);
  v13[0x26] = "water\\2_ab\\p\\waterhmap.p.hlsl";
  v13[0x27] = "VERTICAL_BUTTERFLY";
  v13[0x28] = EmptyString;
  memset(&v13[0x29], 0, 0x40);
  v13[0x39] = "water\\2_ab\\p\\waterhmap.p.hlsl";
  v13[0x3A] = "HORIZONTAL_SCRAMBLE";
  v13[0x3B] = EmptyString;
  memset(&v13[0x3C], 0, 0x40);
  v13[0x4C] = "water\\2_ab\\p\\waterhmap.p.hlsl";
  v13[0x4D] = "VERTICAL_SCRAMBLE";
  v13[0x4E] = EmptyString;
  memset(&v13[0x4F], 0, 0x40);
  v13[0x5F] = "water\\2_ab\\p\\waterhmap.p.hlsl";
  v13[0x60] = "NORMALS";
  v13[0x61] = EmptyString;
  memset(&v13[0x62], 0, 0x40);
  v13[0x72] = "water\\2_ab\\p\\waterhmap.p.hlsl";
  v13[0x73] = "FILTER";
  v13[0x74] = EmptyString;
  memset(&v13[0x75], 0, 0x40);
  v5 = 0;
  v10 = (NiD3DShaderProgram **)v13;
  v6 = (NiD3DShaderProgram **)(this + 0xB4);
  do
  {
    result = *v10;
    if ( *v10 )
    {
      sub_801030((char *)result, (int)FileName);
      _sprintf(v15, "WATERHMAP%03i.pso", v5);
      result = CreatePixelShader(FileName, v10 + 1, Str1, v15, 0, 1);
      v8 = *v6;
      v9 = result;
      if ( *v6 != result )
      {
        if ( v8 )
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v8 + 1);
          if ( !result )
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v8)(v8, 1);
        }
        *v6 = v9;
        if ( v9 )
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v9 + 1);
      }
    }
    v10 += 0x13;
    ++v5;
    ++v6;
  }
  while ( v5 < 7 );
  return result;
}
