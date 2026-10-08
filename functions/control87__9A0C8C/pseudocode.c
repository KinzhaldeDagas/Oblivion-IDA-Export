unsigned int __cdecl _control87(unsigned int NewValue, unsigned int Mask)
{
  int v2; // edx
  int v3; // eax
  unsigned int result; // eax
  __int16 v5; // ax
  __int16 v6; // bx
  unsigned int v7; // edx
  int v8; // eax
  __int16 v9; // ax
  int v10; // esi
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  __int16 v16; // ax
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  __int16 v22; // [esp+14h] [ebp-Ch]
  unsigned int v23; // [esp+1Ch] [ebp-4h]
  int Maska; // [esp+28h] [ebp+8h]

  v2 = 0; /*0x9a0c9c*/
  if ( (v22 & 1) != 0 ) /*0x9a0ca1*/
    v2 = 0x10; /*0x9a0ca5*/
  if ( (v22 & 4) != 0 ) /*0x9a0ca9*/
    v2 |= 8u; /*0x9a0cab*/
  if ( (v22 & 8) != 0 ) /*0x9a0cb1*/
    v2 |= 4u; /*0x9a0cb3*/
  if ( (v22 & 0x10) != 0 ) /*0x9a0cb9*/
    v2 |= 2u; /*0x9a0cbb*/
  if ( (v22 & 0x20) != 0 ) /*0x9a0cc1*/
    v2 |= 1u; /*0x9a0cc3*/
  if ( (v22 & 2) != 0 ) /*0x9a0cc9*/
    v2 |= 0x80000u; /*0x9a0ccb*/
  v3 = v22 & 0xC00; /*0x9a0cdb*/
  if ( v3 ) /*0x9a0ce7*/
  {
    switch ( v3 ) /*0x9a0cee*/
    {
      case 0x400: /*0x9a0cee*/
        v2 |= 0x100u; /*0x9a0d03*/
        break;
      case 0x800: /*0x9a0cee*/
        v2 |= 0x200u; /*0x9a0cff*/
        break;
      case 0xC00: /*0x9a0cee*/
        v2 |= 0x300u; /*0x9a0cfb*/
        break;
    }
  }
  if ( (v22 & 0x300) != 0 ) /*0x9a0d0b*/
  {
    if ( (v22 & 0x300) == 0x200 ) /*0x9a0d0f*/
      v2 |= 0x10000u; /*0x9a0d11*/
  }
  else
  {
    v2 |= 0x20000u; /*0x9a0d19*/
  }
  if ( (v22 & 0x1000) != 0 ) /*0x9a0d24*/
    v2 |= 0x40000u; /*0x9a0d26*/
  result = Mask & NewValue | v2 & ~Mask; /*0x9a0d3c*/
  v23 = result; /*0x9a0d40*/
  if ( result != v2 ) /*0x9a0d44*/
  {
    v5 = _hw_cw(Mask & NewValue | v2 & ~Mask); /*0x9a0d4c*/
    v6 = v5; /*0x9a0d61*/
    v7 = 0; /*0x9a0d65*/
    if ( (v5 & 1) != 0 ) /*0x9a0d6a*/
      v7 = 0x10; /*0x9a0d6e*/
    if ( (v5 & 4) != 0 ) /*0x9a0d72*/
      v7 |= 8u; /*0x9a0d74*/
    if ( (v5 & 8) != 0 ) /*0x9a0d7a*/
      v7 |= 4u; /*0x9a0d7c*/
    if ( (v5 & 0x10) != 0 ) /*0x9a0d82*/
      v7 |= 2u; /*0x9a0d84*/
    if ( (v5 & 0x20) != 0 ) /*0x9a0d8a*/
      v7 |= 1u; /*0x9a0d8c*/
    if ( (v5 & 2) != 0 ) /*0x9a0d92*/
      v7 |= 0x80000u; /*0x9a0d94*/
    v8 = v5 & 0xC00; /*0x9a0d9f*/
    if ( (v6 & 0xC00) != 0 ) /*0x9a0da1*/
    {
      switch ( v8 ) /*0x9a0da8*/
      {
        case 0x400: /*0x9a0da8*/
          v7 |= 0x100u; /*0x9a0dc1*/
          break;
        case 0x800: /*0x9a0da8*/
          v7 |= 0x200u; /*0x9a0db9*/
          break;
        case 0xC00: /*0x9a0da8*/
          v7 |= 0x300u; /*0x9a0db5*/
          break;
      }
    }
    if ( (v6 & 0x300) != 0 ) /*0x9a0dc9*/
    {
      if ( (v6 & 0x300) == 0x200 ) /*0x9a0dd1*/
        v7 |= 0x10000u; /*0x9a0dd3*/
    }
    else
    {
      v7 |= 0x20000u; /*0x9a0ddb*/
    }
    if ( (v6 & 0x1000) != 0 ) /*0x9a0de6*/
      v7 |= 0x40000u; /*0x9a0de8*/
    result = v7; /*0x9a0dee*/
    v23 = v7; /*0x9a0df0*/
  }
  if ( unk_BAABE0 ) /*0x9a0dfb*/
  {
    v9 = _mm_getcsr(); /*0x9a0e0e*/
    v10 = 0; /*0x9a0e12*/
    if ( (char)v9 < 0 ) /*0x9a0e16*/
      v10 = 0x10; /*0x9a0e1a*/
    if ( (v9 & 0x200) != 0 ) /*0x9a0e1f*/
      v10 |= 8u; /*0x9a0e21*/
    if ( (v9 & 0x400) != 0 ) /*0x9a0e28*/
      v10 |= 4u; /*0x9a0e2a*/
    if ( (v9 & 0x800) != 0 ) /*0x9a0e31*/
      v10 |= 2u; /*0x9a0e33*/
    if ( (v9 & 0x1000) != 0 ) /*0x9a0e3a*/
      v10 |= 1u; /*0x9a0e3c*/
    if ( (v9 & 0x100) != 0 ) /*0x9a0e43*/
      v10 |= 0x80000u; /*0x9a0e45*/
    v11 = v9 & 0x6000; /*0x9a0e52*/
    if ( (v9 & 0x6000) != 0 ) /*0x9a0e54*/
    {
      switch ( v11 ) /*0x9a0e5c*/
      {
        case 0x2000: /*0x9a0e5c*/
          v10 |= 0x100u; /*0x9a0e7a*/
          break;
        case 0x4000: /*0x9a0e5c*/
          v10 |= 0x200u; /*0x9a0e72*/
          break;
        case 0x6000: /*0x9a0e5c*/
          v10 |= 0x300u; /*0x9a0e6a*/
          break;
      }
    }
    v12 = (v9 & 0x8040) - 0x40; /*0x9a0e87*/
    if ( v12 ) /*0x9a0e8a*/
    {
      v13 = v12 - 0x7FC0; /*0x9a0e8c*/
      if ( v13 ) /*0x9a0e91*/
      {
        if ( v13 == 0x40 ) /*0x9a0e96*/
          v10 |= 0x1000000u; /*0x9a0e98*/
      }
      else
      {
        v10 |= 0x3000000u; /*0x9a0ea0*/
      }
    }
    else
    {
      v10 |= 0x2000000u; /*0x9a0ea8*/
    }
    v14 = NewValue & Mask & 0x308031F | v10 & ~(Mask & 0x308031F); /*0x9a0eb8*/
    if ( v14 == v10 ) /*0x9a0ebc*/
    {
      v15 = v10; /*0x9a0ebe*/
    }
    else
    {
      Maska = __hw_cw_sse2(v11, v14); /*0x9a0ecb*/
      __set_fpsr_sse2(Maska); /*0x9a0ecf*/
      v16 = _mm_getcsr(); /*0x9a0eda*/
      v17 = 0; /*0x9a0ede*/
      if ( (char)v16 < 0 ) /*0x9a0ee2*/
        v17 = 0x10; /*0x9a0ee6*/
      if ( (v16 & 0x200) != 0 ) /*0x9a0eee*/
        v17 |= 8u; /*0x9a0ef0*/
      if ( (v16 & 0x400) != 0 ) /*0x9a0ef7*/
        v17 |= 4u; /*0x9a0ef9*/
      if ( (v16 & 0x800) != 0 ) /*0x9a0f00*/
        v17 |= 2u; /*0x9a0f02*/
      if ( (v16 & 0x1000) != 0 ) /*0x9a0f09*/
        v17 |= 1u; /*0x9a0f0b*/
      if ( (v16 & 0x100) != 0 ) /*0x9a0f15*/
        v17 |= 0x80000u; /*0x9a0f17*/
      v18 = v16 & 0x6000; /*0x9a0f1f*/
      if ( (v16 & 0x6000) != 0 ) /*0x9a0f21*/
      {
        switch ( v18 ) /*0x9a0f29*/
        {
          case 0x2000: /*0x9a0f29*/
            v17 |= 0x100u; /*0x9a0f43*/
            break;
          case 0x4000: /*0x9a0f29*/
            v17 |= 0x200u; /*0x9a0f3f*/
            break;
          case 0x6000: /*0x9a0f29*/
            v17 |= 0x300u; /*0x9a0f37*/
            break;
        }
      }
      v19 = (v16 & 0x8040) - 0x40; /*0x9a0f47*/
      if ( v19 ) /*0x9a0f4a*/
      {
        v20 = v19 - 0x7FC0; /*0x9a0f4c*/
        if ( v20 ) /*0x9a0f51*/
        {
          if ( v20 == 0x40 ) /*0x9a0f56*/
            v17 |= 0x1000000u; /*0x9a0f58*/
        }
        else
        {
          v17 |= 0x3000000u; /*0x9a0f60*/
        }
      }
      else
      {
        v17 |= 0x2000000u; /*0x9a0f68*/
      }
      v15 = v17; /*0x9a0f6e*/
    }
    v21 = v23 ^ v15; /*0x9a0f76*/
    result = v23 | v15; /*0x9a0f78*/
    if ( (v21 & 0x8031F) != 0 ) /*0x9a0f80*/
      result |= 0x80000000; /*0x9a0f82*/
  }
  return result; /*0x9a0f87*/
}
