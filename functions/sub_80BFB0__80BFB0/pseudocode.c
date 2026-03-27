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

  v16[0] = "hair\\1x\\hair.v.hlsl";
  v16[1] = "DIRP";
  v16[2] = EmptyString;
  memset(&v16[3], 0, 0x40);
  v16[0x14] = "DIRP";
  v16[0x13] = "hair\\1x\\hair.v.hlsl";
  v16[0x15] = EmptyString;
  v16[0x16] = &off_A943B4;
  v16[0x17] = EmptyString;
  memset(&v16[0x18], 0, 0x38);
  v16[0x26] = "hair\\1x\\hair.v.hlsl";
  v16[0x27] = &off_A943B0;
  v16[0x28] = EmptyString;
  v16[0x29] = "DIRS";
  v16[0x2A] = EmptyString;
  memset(&v16[0x2B], 0, 0x38);
  v16[0x39] = "hair\\1x\\hair.v.hlsl";
  v16[0x3A] = "DIRP";
  v16[0x3B] = EmptyString;
  v16[0x3C] = &off_A943B4;
  v16[0x3D] = EmptyString;
  v16[0x3E] = &off_A943A4;
  v16[0x3F] = EmptyString;
  memset(&v16[0x40], 0, 0x30);
  v16[0x4C] = "hair\\1x\\hair.v.hlsl";
  v16[0x4D] = &off_A943B0;
  v16[0x4E] = EmptyString;
  v16[0x4F] = "DIRS";
  v16[0x50] = EmptyString;
  v16[0x51] = &off_A943A4;
  v16[0x52] = EmptyString;
  memset(&v16[0x53], 0, 0x30);
  v16[0x5F] = "hair\\1x\\hair.v.hlsl";
  v16[0x60] = &off_A943B0;
  v16[0x61] = EmptyString;
  v16[0x62] = &off_A943B4;
  v16[0x63] = EmptyString;
  v16[0x64] = &off_A943A4;
  v16[0x65] = EmptyString;
  memset(&v16[0x66], 0, 0x30);
  v16[0x72] = "hair\\1x\\hair.v.hlsl";
  v16[0x73] = &off_A943B0;
  v16[0x74] = EmptyString;
  v16[0x75] = &off_A943B4;
  v16[0x76] = EmptyString;
  memset(&v16[0x77], 0, 0x38);
  v14 = "hair\\2x\\hair.v.hlsl";
  v15[0] = (int)"DIRP";
  v15[1] = (int)EmptyString;
  memset(&v15[2], 0, 0x40);
  v15[0x12] = (int)"hair\\2x\\hair.v.hlsl";
  v15[0x13] = (int)"DIRP";
  v15[0x14] = (int)EmptyString;
  v15[0x15] = (int)&off_A943B4;
  v15[0x16] = (int)EmptyString;
  memset(&v15[0x17], 0, 0x38);
  v15[0x25] = (int)"hair\\2x\\hair.v.hlsl";
  v15[0x26] = (int)&off_A943B0;
  v15[0x27] = (int)EmptyString;
  v15[0x28] = (int)"DIRS";
  v15[0x29] = (int)EmptyString;
  memset(&v15[0x2A], 0, 0x38);
  v15[0x38] = (int)"hair\\2x\\hair.v.hlsl";
  v15[0x39] = (int)"DIRP";
  v15[0x3A] = (int)EmptyString;
  v15[0x3B] = (int)&off_A943B4;
  v15[0x3C] = (int)EmptyString;
  v15[0x3D] = (int)&off_A943A4;
  v15[0x3E] = (int)EmptyString;
  memset(&v15[0x3F], 0, 0x30);
  v15[0x4B] = (int)"hair\\2x\\hair.v.hlsl";
  v15[0x4C] = (int)&off_A943B0;
  v15[0x4D] = (int)EmptyString;
  v15[0x4E] = (int)"DIRS";
  v15[0x4F] = (int)EmptyString;
  v15[0x50] = (int)&off_A943A4;
  v15[0x51] = (int)EmptyString;
  memset(&v15[0x52], 0, 0x30);
  v15[0x5E] = (int)"hair\\2x\\hair.v.hlsl";
  v15[0x5F] = (int)&off_A943B0;
  v15[0x60] = (int)EmptyString;
  v15[0x61] = (int)&off_A943B4;
  v15[0x62] = (int)EmptyString;
  v15[0x63] = (int)&off_A943A4;
  v15[0x64] = (int)EmptyString;
  memset(&v15[0x65], 0, 0x30);
  v15[0x71] = (int)"hair\\2x\\hair.v.hlsl";
  v15[0x72] = (int)&off_A943B0;
  v15[0x73] = (int)EmptyString;
  v15[0x74] = (int)&off_A943B4;
  v15[0x75] = (int)EmptyString;
  memset(&v15[0x76], 0, 0x38);
  v1 = 0;
  v2 = (NiD3DShaderProgram **)v16;
  v11 = v16;
  v9 = (NiD3DShaderProgram **)(this + 0xA4);
  do
  {
    result = *v2;
    if ( *v2 )
    {
      sub_801030((char *)result, (int)FileName);
      _sprintf(v17, "HAIR1%03i.vso", v1);
      result = CreateVertexShader(FileName, v2 + 1, "vs_1_1", v17, 0, 0);
      v4 = *v9;
      v5 = result;
      if ( *v9 != result )
      {
        if ( v4 )
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v4 + 1);
          if ( !result )
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v4)(v4, 1);
        }
        *v9 = v5;
        if ( v5 )
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v5 + 1);
      }
    }
    ++v9;
    ++v1;
    v2 = (NiD3DShaderProgram **)(v11 + 0x13);
    v11 += 0x13;
  }
  while ( v1 < 7 );
  if ( ShaderPackage >= 2 )
  {
    v12 = 0;
    v6 = v15;
    v10 = this + 0xCC;
    do
    {
      sub_801030((char *)v6[0xFFFFFFFF], (int)FileName);
      _sprintf(v17, "HAIR2%03i.vso", v12);
      VertexShader = CreateVertexShader(FileName, v6, "vs_2_0", v17, 0, 0);
      v8 = *(_DWORD *)v10;
      if ( *(NiD3DShaderProgram **)v10 != VertexShader )
      {
        if ( v8 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
            (**(void (__thiscall ***)(int, int))v8)(v8, 1);
        }
        *(_DWORD *)v10 = VertexShader;
        if ( VertexShader )
          InterlockedIncrement((volatile LONG *)VertexShader + 1);
      }
      v10 += 4;
      result = (NiD3DShaderProgram *)(v12 + 1);
      v6 += 0x13;
      ++v12;
    }
    while ( v12 < 7 );
  }
  return result;
}
