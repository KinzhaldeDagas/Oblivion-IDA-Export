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

  v2 = 0;
  if ( (v22 & 1) != 0 )
    v2 = 0x10;
  if ( (v22 & 4) != 0 )
    v2 |= 8u;
  if ( (v22 & 8) != 0 )
    v2 |= 4u;
  if ( (v22 & 0x10) != 0 )
    v2 |= 2u;
  if ( (v22 & 0x20) != 0 )
    v2 |= 1u;
  if ( (v22 & 2) != 0 )
    v2 |= 0x80000u;
  v3 = v22 & 0xC00;
  if ( v3 )
  {
    switch ( v3 )
    {
      case 0x400:
        v2 |= 0x100u;
        break;
      case 0x800:
        v2 |= 0x200u;
        break;
      case 0xC00:
        v2 |= 0x300u;
        break;
    }
  }
  if ( (v22 & 0x300) != 0 )
  {
    if ( (v22 & 0x300) == 0x200 )
      v2 |= 0x10000u;
  }
  else
  {
    v2 |= 0x20000u;
  }
  if ( (v22 & 0x1000) != 0 )
    v2 |= 0x40000u;
  result = Mask & NewValue | v2 & ~Mask;
  v23 = result;
  if ( result != v2 )
  {
    v5 = _hw_cw(Mask & NewValue | v2 & ~Mask);
    v6 = v5;
    v7 = 0;
    if ( (v5 & 1) != 0 )
      v7 = 0x10;
    if ( (v5 & 4) != 0 )
      v7 |= 8u;
    if ( (v5 & 8) != 0 )
      v7 |= 4u;
    if ( (v5 & 0x10) != 0 )
      v7 |= 2u;
    if ( (v5 & 0x20) != 0 )
      v7 |= 1u;
    if ( (v5 & 2) != 0 )
      v7 |= 0x80000u;
    v8 = v5 & 0xC00;
    if ( (v6 & 0xC00) != 0 )
    {
      switch ( v8 )
      {
        case 0x400:
          v7 |= 0x100u;
          break;
        case 0x800:
          v7 |= 0x200u;
          break;
        case 0xC00:
          v7 |= 0x300u;
          break;
      }
    }
    if ( (v6 & 0x300) != 0 )
    {
      if ( (v6 & 0x300) == 0x200 )
        v7 |= 0x10000u;
    }
    else
    {
      v7 |= 0x20000u;
    }
    if ( (v6 & 0x1000) != 0 )
      v7 |= 0x40000u;
    result = v7;
    v23 = v7;
  }
  if ( dword_BAABE0 )
  {
    v9 = _mm_getcsr();
    v10 = 0;
    if ( (char)v9 < 0 )
      v10 = 0x10;
    if ( (v9 & 0x200) != 0 )
      v10 |= 8u;
    if ( (v9 & 0x400) != 0 )
      v10 |= 4u;
    if ( (v9 & 0x800) != 0 )
      v10 |= 2u;
    if ( (v9 & 0x1000) != 0 )
      v10 |= 1u;
    if ( (v9 & 0x100) != 0 )
      v10 |= 0x80000u;
    v11 = v9 & 0x6000;
    if ( (v9 & 0x6000) != 0 )
    {
      switch ( v11 )
      {
        case 0x2000:
          v10 |= 0x100u;
          break;
        case 0x4000:
          v10 |= 0x200u;
          break;
        case 0x6000:
          v10 |= 0x300u;
          break;
      }
    }
    v12 = (v9 & 0x8040) - 0x40;
    if ( v12 )
    {
      v13 = v12 - 0x7FC0;
      if ( v13 )
      {
        if ( v13 == 0x40 )
          v10 |= 0x1000000u;
      }
      else
      {
        v10 |= 0x3000000u;
      }
    }
    else
    {
      v10 |= 0x2000000u;
    }
    v14 = NewValue & Mask & 0x308031F | v10 & ~(Mask & 0x308031F);
    if ( v14 == v10 )
    {
      v15 = v10;
    }
    else
    {
      Maska = __hw_cw_sse2(v11, v14);
      __set_fpsr_sse2(Maska);
      v16 = _mm_getcsr();
      v17 = 0;
      if ( (char)v16 < 0 )
        v17 = 0x10;
      if ( (v16 & 0x200) != 0 )
        v17 |= 8u;
      if ( (v16 & 0x400) != 0 )
        v17 |= 4u;
      if ( (v16 & 0x800) != 0 )
        v17 |= 2u;
      if ( (v16 & 0x1000) != 0 )
        v17 |= 1u;
      if ( (v16 & 0x100) != 0 )
        v17 |= 0x80000u;
      v18 = v16 & 0x6000;
      if ( (v16 & 0x6000) != 0 )
      {
        switch ( v18 )
        {
          case 0x2000:
            v17 |= 0x100u;
            break;
          case 0x4000:
            v17 |= 0x200u;
            break;
          case 0x6000:
            v17 |= 0x300u;
            break;
        }
      }
      v19 = (v16 & 0x8040) - 0x40;
      if ( v19 )
      {
        v20 = v19 - 0x7FC0;
        if ( v20 )
        {
          if ( v20 == 0x40 )
            v17 |= 0x1000000u;
        }
        else
        {
          v17 |= 0x3000000u;
        }
      }
      else
      {
        v17 |= 0x2000000u;
      }
      v15 = v17;
    }
    v21 = v23 ^ v15;
    result = v23 | v15;
    if ( (v21 & 0x8031F) != 0 )
      result |= 0x80000000;
  }
  return result;
}
