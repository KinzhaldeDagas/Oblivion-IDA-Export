int __thiscall sub_7DD920(char *this)
{
  char *v1; // ebp
  int result; // eax
  char *v3; // esi
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v5; // esi
  NiD3DShaderProgram *v6; // ebx
  char *v7; // eax
  NiD3DShaderProgram *PixelShader; // eax
  int v9; // esi
  NiD3DShaderProgram *v10; // ebx
  int v11; // [esp+10h] [ebp-6E0h]
  int i; // [esp+14h] [ebp-6DCh]
  const char *v13; // [esp+1Ch] [ebp-6D4h]
  char *Str1; // [esp+20h] [ebp-6D0h]
  char *FullPath; // [esp+24h] [ebp-6CCh]
  int v16[151]; // [esp+28h] [ebp-6C8h] BYREF
  _DWORD v17[152]; // [esp+284h] [ebp-46Ch] BYREF
  char v18[260]; // [esp+4E4h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+5E8h] [ebp-108h] BYREF

  v17[0] = "water\\2_ab\\v\\displace.v.hlsl";
  v17[1] = "RIPPLE_MAKER_WADING";
  v17[2] = EmptyString;
  memset(&v17[3], 0, 0x40);
  v17[0x13] = "water\\2_ab\\v\\displace.v.hlsl";
  v17[0x14] = "RIPPLE_MAKER_RAIN";
  v17[0x15] = EmptyString;
  memset(&v17[0x16], 0, 0x40);
  v17[0x26] = "water\\2_ab\\v\\displace.v.hlsl";
  memset(&v17[0x27], 0, 0x48);
  v17[0x39] = "water\\2_ab\\v\\displace.v.hlsl";
  memset(&v17[0x3A], 0, 0x48);
  v17[0x4C] = "water\\2_ab\\v\\displace.v.hlsl";
  memset(&v17[0x4D], 0, 0x48);
  v17[0x5F] = "water\\2_ab\\v\\displace.v.hlsl";
  memset(&v17[0x60], 0, 0x48);
  v17[0x72] = "water\\2_ab\\v\\displace.v.hlsl";
  memset(&v17[0x73], 0, 0x48);
  v17[0x85] = "water\\2_ab\\v\\displace.v.hlsl";
  memset(&v17[0x86], 0, 0x48);
  Str1 = "ps_1_3";
  v13 = "vs_1_1";
  if ( ShaderPackage >= 2 )
  {
    Str1 = "ps_2_0";
    v13 = "vs_2_0";
  }
  FullPath = "water\\2_ab\\p\\displace.p.hlsl";
  v16[0] = (int)"RIPPLE_MAKER_WADING";
  v16[1] = (int)EmptyString;
  memset(&v16[2], 0, 0x40);
  v16[0x12] = (int)"water\\2_ab\\p\\displace.p.hlsl";
  v16[0x13] = (int)"RIPPLE_MAKER_RAIN";
  v16[0x14] = (int)EmptyString;
  memset(&v16[0x15], 0, 0x40);
  v16[0x25] = (int)"water\\2_ab\\p\\displace.p.hlsl";
  v16[0x26] = (int)"HEIGHTMAP_WADING";
  v16[0x27] = (int)EmptyString;
  memset(&v16[0x28], 0, 0x40);
  v16[0x38] = (int)"water\\2_ab\\p\\displace.p.hlsl";
  v16[0x39] = (int)"HEIGHTMAP_RAIN";
  v16[0x3A] = (int)EmptyString;
  memset(&v16[0x3B], 0, 0x40);
  v16[0x4B] = (int)"water\\2_ab\\p\\displace.p.hlsl";
  v16[0x4C] = (int)"HEIGHTMAP_SMOOTH";
  v16[0x4D] = (int)EmptyString;
  memset(&v16[0x4E], 0, 0x40);
  v16[0x5E] = (int)"water\\2_ab\\p\\displace.p.hlsl";
  v16[0x5F] = (int)"NORMALS";
  v16[0x60] = (int)EmptyString;
  memset(&v16[0x61], 0, 0x40);
  v16[0x71] = (int)"water\\2_ab\\p\\displace.p.hlsl";
  v16[0x72] = (int)"BLEND_HEIGHTMAPS";
  v16[0x73] = (int)EmptyString;
  memset(&v16[0x74], 0, 0x40);
  v16[0x84] = (int)"water\\2_ab\\p\\displace.p.hlsl";
  v16[0x85] = (int)"TEXCOORD_OFFSET";
  v16[0x86] = (int)EmptyString;
  memset(&v16[0x87], 0, 0x40);
  v1 = this + 0xD4;
  result = 0;
  v11 = 0;
  for ( i = 0; i < 0x98; i += 0x13 )
  {
    v3 = (char *)v17 + result;
    if ( *(_DWORD *)((char *)v17 + result) )
    {
      sub_801030(*(char **)v3, (int)FileName);
      _sprintf(v18, "WATERDISPLACE%03i.vso", v11);
      VertexShader = CreateVertexShader(FileName, (_DWORD *)v3 + 1, v13, v18, 0, 0);
      v5 = *((volatile LONG **)v1 + 0xFFFFFFF8);
      v6 = VertexShader;
      if ( v5 != (volatile LONG *)VertexShader )
      {
        if ( v5 )
        {
          if ( !InterlockedDecrement(v5 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1);
        }
        *((_DWORD *)v1 + 0xFFFFFFF8) = v6;
        if ( v6 )
          InterlockedIncrement((volatile LONG *)v6 + 1);
      }
    }
    v7 = (char *)v16[i - 1];
    if ( v7 )
    {
      sub_801030(v7, (int)FileName);
      _sprintf(v18, "WATERDISPLACE%03i.pso", v11);
      PixelShader = CreatePixelShader(FileName, &v16[i], Str1, v18, 0, 1);
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
