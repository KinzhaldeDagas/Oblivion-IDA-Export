int __thiscall sub_7EA510(char *this)
{
  char *v1; // ebp
  int result; // eax
  char *v3; // edi
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v5; // edi
  NiD3DShaderProgram *v6; // ebx
  char *v7; // eax
  NiD3DShaderProgram *PixelShader; // eax
  int v9; // edi
  NiD3DShaderProgram *v10; // ebx
  int v11; // [esp+10h] [ebp-510h]
  int i; // [esp+14h] [ebp-50Ch]
  char *FullPath; // [esp+1Ch] [ebp-504h]
  int v14[94]; // [esp+20h] [ebp-500h] BYREF
  _DWORD v15[95]; // [esp+198h] [ebp-388h] BYREF
  char v16[260]; // [esp+314h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+418h] [ebp-108h] BYREF

  v15[0] = "imagespace\\1x\\v\\base.v.hlsl";
  memset(&v15[1], 0, 0x48);
  v15[0x13] = "imagespace\\1x\\v\\base.v.hlsl";
  memset(&v15[0x14], 0, 0x48);
  v15[0x26] = "imagespace\\1x\\v\\base.v.hlsl";
  memset(&v15[0x27], 0, 0x48);
  v15[0x39] = "imagespace\\1x\\v\\base.v.hlsl";
  v15[0x3A] = "TEX2";
  v15[0x3B] = EmptyString;
  memset(&v15[0x3C], 0, 0x40);
  v15[0x4C] = "imagespace\\1x\\v\\base.v.hlsl";
  memset(&v15[0x4D], 0, 0x48);
  FullPath = "imagespace\\1x\\p\\copy.p.hlsl";
  v14[0] = (int)"ALPHAMULT";
  v14[1] = (int)EmptyString;
  memset(&v14[2], 0, 0x40);
  v14[0x12] = (int)"imagespace\\1x\\p\\copy.p.hlsl";
  memset(&v14[0x13], 0, 0x48);
  v14[0x25] = (int)"imagespace\\2x\\p\\blur_20.p.hlsl";
  memset(&v14[0x26], 0, 0x48);
  v14[0x38] = (int)"imagespace\\2x\\p\\blend_P20.p.hlsl";
  memset(&v14[0x39], 0, 0x48);
  v14[0x4B] = (int)"imagespace\\1x\\p\\copy.p.hlsl";
  v14[0x4C] = (int)"BLURDEBUG";
  v14[0x4D] = (int)EmptyString;
  memset(&v14[0x4E], 0, 0x40);
  v1 = this + 0xA8;
  result = 0;
  v11 = 0;
  for ( i = 0; i < 0x5F; i += 0x13 )
  {
    v3 = (char *)v15 + result;
    if ( *(_DWORD *)((char *)v15 + result) )
    {
      sub_801030(*(char **)v3, (int)FileName);
      _sprintf(v16, "ISBLUR2%03i.vso", v11);
      VertexShader = CreateVertexShader(FileName, (_DWORD *)v3 + 1, "vs_1_1", v16, 0, 0);
      v5 = *((volatile LONG **)v1 + 0xFFFFFFFB);
      v6 = VertexShader;
      if ( v5 != (volatile LONG *)VertexShader )
      {
        if ( v5 )
        {
          if ( !InterlockedDecrement(v5 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1);
        }
        *((_DWORD *)v1 + 0xFFFFFFFB) = v6;
        if ( v6 )
          InterlockedIncrement((volatile LONG *)v6 + 1);
      }
    }
    v7 = (char *)v14[i - 1];
    if ( v7 )
    {
      sub_801030(v7, (int)FileName);
      _sprintf(v16, "ISBLUR2%03i.pso", v11);
      PixelShader = CreatePixelShader(FileName, &v14[i], "ps_2_0", v16, 0, 0);
      v9 = *(_DWORD *)v1;
      v10 = PixelShader;
      if ( *(NiD3DShaderProgram **)v1 != PixelShader )
      {
        if ( v9 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
            (**(void (__thiscall ***)(int, int))v9)(v9, 1);
        }
        *(_DWORD *)v1 = v10;
        if ( v10 )
          InterlockedIncrement((volatile LONG *)v10 + 1);
      }
    }
    ++v11;
    result = i * 4 + 0x4C;
    v1 += 4;
  }
  return result;
}
