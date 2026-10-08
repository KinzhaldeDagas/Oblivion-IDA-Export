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

  v17[0] = "water\\2_ab\\v\\displace.v.hlsl"; /*0x7dd955*/
  v17[1] = "RIPPLE_MAKER_WADING"; /*0x7dd95c*/
  v17[2] = EmptyString; /*0x7dd967*/
  memset(&v17[3], 0, 0x40); /*0x7dd96e*/
  v17[0x13] = "water\\2_ab\\v\\displace.v.hlsl"; /*0x7dd985*/
  v17[0x14] = "RIPPLE_MAKER_RAIN"; /*0x7dd98c*/
  v17[0x15] = EmptyString; /*0x7dd997*/
  memset(&v17[0x16], 0, 0x40); /*0x7dd99e*/
  v17[0x26] = "water\\2_ab\\v\\displace.v.hlsl"; /*0x7dd9b5*/
  memset(&v17[0x27], 0, 0x48); /*0x7dd9bc*/
  v17[0x39] = "water\\2_ab\\v\\displace.v.hlsl"; /*0x7dd9d3*/
  memset(&v17[0x3A], 0, 0x48); /*0x7dd9da*/
  v17[0x4C] = "water\\2_ab\\v\\displace.v.hlsl"; /*0x7dd9f1*/
  memset(&v17[0x4D], 0, 0x48); /*0x7dd9f8*/
  v17[0x5F] = "water\\2_ab\\v\\displace.v.hlsl"; /*0x7dda0f*/
  memset(&v17[0x60], 0, 0x48); /*0x7dda16*/
  v17[0x72] = "water\\2_ab\\v\\displace.v.hlsl"; /*0x7dda30*/
  memset(&v17[0x73], 0, 0x48); /*0x7dda37*/
  v17[0x85] = "water\\2_ab\\v\\displace.v.hlsl"; /*0x7dda4e*/
  memset(&v17[0x86], 0, 0x48); /*0x7dda55*/
  Str1 = "ps_1_3"; /*0x7dda6b*/
  v13 = "vs_1_1"; /*0x7dda73*/
  if ( MEMORY[0xB42F48] >= 2 ) /*0x7dda7b*/
  {
    Str1 = "ps_2_0"; /*0x7dda7d*/
    v13 = "vs_2_0"; /*0x7dda85*/
  }
  FullPath = "water\\2_ab\\p\\displace.p.hlsl"; /*0x7dda9a*/
  v16[0] = (int)"RIPPLE_MAKER_WADING"; /*0x7dda9e*/
  v16[1] = (int)EmptyString; /*0x7ddaa6*/
  memset(&v16[2], 0, 0x40); /*0x7ddaaa*/
  v16[0x12] = (int)"water\\2_ab\\p\\displace.p.hlsl"; /*0x7ddabe*/
  v16[0x13] = (int)"RIPPLE_MAKER_RAIN"; /*0x7ddac5*/
  v16[0x14] = (int)EmptyString; /*0x7ddad0*/
  memset(&v16[0x15], 0, 0x40); /*0x7ddad7*/
  v16[0x25] = (int)"water\\2_ab\\p\\displace.p.hlsl"; /*0x7ddaee*/
  v16[0x26] = (int)"HEIGHTMAP_WADING"; /*0x7ddaf5*/
  v16[0x27] = (int)EmptyString; /*0x7ddb00*/
  memset(&v16[0x28], 0, 0x40); /*0x7ddb07*/
  v16[0x38] = (int)"water\\2_ab\\p\\displace.p.hlsl"; /*0x7ddb1e*/
  v16[0x39] = (int)"HEIGHTMAP_RAIN"; /*0x7ddb25*/
  v16[0x3A] = (int)EmptyString; /*0x7ddb30*/
  memset(&v16[0x3B], 0, 0x40); /*0x7ddb37*/
  v16[0x4B] = (int)"water\\2_ab\\p\\displace.p.hlsl"; /*0x7ddb4e*/
  v16[0x4C] = (int)"HEIGHTMAP_SMOOTH"; /*0x7ddb55*/
  v16[0x4D] = (int)EmptyString; /*0x7ddb60*/
  memset(&v16[0x4E], 0, 0x40); /*0x7ddb67*/
  v16[0x5E] = (int)"water\\2_ab\\p\\displace.p.hlsl"; /*0x7ddb7e*/
  v16[0x5F] = (int)"NORMALS"; /*0x7ddb85*/
  v16[0x60] = (int)EmptyString; /*0x7ddb90*/
  memset(&v16[0x61], 0, 0x40); /*0x7ddb97*/
  v16[0x71] = (int)"water\\2_ab\\p\\displace.p.hlsl"; /*0x7ddbb1*/
  v16[0x72] = (int)"BLEND_HEIGHTMAPS"; /*0x7ddbb8*/
  v16[0x73] = (int)EmptyString; /*0x7ddbc3*/
  memset(&v16[0x74], 0, 0x40); /*0x7ddbca*/
  v16[0x84] = (int)"water\\2_ab\\p\\displace.p.hlsl"; /*0x7ddbe1*/
  v16[0x85] = (int)"TEXCOORD_OFFSET"; /*0x7ddbe8*/
  v16[0x86] = (int)EmptyString; /*0x7ddbf3*/
  memset(&v16[0x87], 0, 0x40); /*0x7ddbfa*/
  v1 = this + 0xD4; /*0x7ddc09*/
  result = 0; /*0x7ddc0f*/
  v11 = 0; /*0x7ddc11*/
  for ( i = 0; i < 0x98; i += 0x13 ) /*0x7ddc15*/
  {
    v3 = (char *)v17 + result; /*0x7ddc20*/
    if ( *(_DWORD *)((char *)v17 + result) ) /*0x7ddc27*/
    {
      sub_801030(*(char **)v3, (int)FileName); /*0x7ddc3a*/
      _sprintf(v18, "WATERDISPLACE%03i.vso", v11); /*0x7ddc51*/
      VertexShader = CreateVertexShader(FileName, (_DWORD *)v3 + 1, v13, v18, 0, 0); /*0x7ddc78*/
      v5 = *((volatile LONG **)v1 + 0xFFFFFFF8); /*0x7ddc7d*/
      v6 = VertexShader; /*0x7ddc80*/
      if ( v5 != (volatile LONG *)VertexShader ) /*0x7ddc84*/
      {
        if ( v5 ) /*0x7ddc88*/
        {
          if ( !InterlockedDecrement(v5 + 1) ) /*0x7ddc8e*/
            (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1); /*0x7ddca4*/
        }
        *((_DWORD *)v1 + 0xFFFFFFF8) = v6; /*0x7ddca8*/
        if ( v6 ) /*0x7ddcab*/
          InterlockedIncrement((volatile LONG *)v6 + 1); /*0x7ddcb1*/
      }
    }
    v7 = (char *)v16[i - 1]; /*0x7ddcbb*/
    if ( v7 ) /*0x7ddcc1*/
    {
      sub_801030(v7, (int)FileName); /*0x7ddcd0*/
      _sprintf(v18, "WATERDISPLACE%03i.pso", v11); /*0x7ddce7*/
      PixelShader = CreatePixelShader(FileName, &v16[i], Str1, v18, 0, 1); /*0x7ddd10*/
      v9 = *(_DWORD *)v1; /*0x7ddd15*/
      v10 = PixelShader; /*0x7ddd18*/
      if ( *(NiD3DShaderProgram **)v1 != PixelShader ) /*0x7ddd1c*/
      {
        if ( v9 ) /*0x7ddd20*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x7ddd26*/
            (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7ddd3c*/
        }
        *(_DWORD *)v1 = v10; /*0x7ddd40*/
        if ( v10 ) /*0x7ddd43*/
          InterlockedIncrement((volatile LONG *)v10 + 1); /*0x7ddd49*/
      }
    }
    ++v11; /*0x7ddd53*/
    result = i * 4 + 0x4C; /*0x7ddd58*/
    v1 += 4; /*0x7ddd5b*/
  }
  return result; /*0x7ddd6d*/
}
