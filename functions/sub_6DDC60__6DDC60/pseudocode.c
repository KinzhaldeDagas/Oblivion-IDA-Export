unsigned __int16 __thiscall sub_6DDC60(float *this, int a2, int *a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  unsigned __int16 result; // ax
  int v9; // eax
  unsigned int v10; // ebp
  void *v11; // eax
  size_t v12; // [esp-Ch] [ebp-18h]

  sub_715D80(this, a2, a3);
  *(_WORD *)(a2 + 0x3C) = *((_WORD *)this + 0x1E);
  v4 = *((_DWORD *)this + 0x12);
  if ( v4 )
  {
    v5 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 0x18))(v4, a3);
    sub_6DC720((_DWORD *)a2, v5);
  }
  v6 = *((_DWORD *)this + 0x13);
  if ( v6 )
  {
    v7 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 0x18))(v6, a3);
    sub_71B140((_DWORD *)a2, v7);
  }
  if ( (*(_BYTE *)(this + 0xF) & 4) != 0 )
    *(_WORD *)(a2 + 0x3C) |= 4u;
  else
    *(_WORD *)(a2 + 0x3C) &= ~4u;
  if ( (*(_BYTE *)(this + 0xF) & 8) != 0 )
    *(_WORD *)(a2 + 0x3C) |= 8u;
  else
    *(_WORD *)(a2 + 0x3C) &= ~8u;
  *(float *)(a2 + 0x68) = *(this + 0x1A);
  if ( (*(_BYTE *)(this + 0xF) & 0x10) != 0 )
  {
    *(_WORD *)(a2 + 0x3C) |= 0x10u;
    if ( (*(_BYTE *)(a2 + 0x3C) & 1) != 0 )
    {
      *(float *)(a2 + 0x54) = sub_6DD490(a2);
      *(_WORD *)(a2 + 0x3C) &= ~1u;
    }
  }
  else
  {
    *(_WORD *)(a2 + 0x3C) &= ~0x10u;
  }
  if ( (*(_BYTE *)(this + 0xF) & 0x20) != 0 )
    *(_WORD *)(a2 + 0x3C) |= 0x20u;
  else
    *(_WORD *)(a2 + 0x3C) &= ~0x20u;
  *(float *)(a2 + 0x58) = *(this + 0x16);
  *(float *)(a2 + 0x5C) = *(this + 0x17);
  result = *((_WORD *)this + 0x30);
  *(_WORD *)(a2 + 0x60) = result;
  if ( (*(_BYTE *)(this + 0xF) & 0x40) != 0 )
    *(_WORD *)(a2 + 0x3C) |= 0x40u;
  else
    *(_WORD *)(a2 + 0x3C) &= ~0x40u;
  if ( (*(_BYTE *)(this + 0xF) & 2) != 0 )
    *(_WORD *)(a2 + 0x3C) |= 2u;
  else
    *(_WORD *)(a2 + 0x3C) &= ~2u;
  if ( *((_DWORD *)this + 0x14) )
  {
    v9 = *((_DWORD *)this + 0x12);
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 8);
    else
      v10 = 0;
    v11 = (void *)FormHeapAlloc((unsigned __int64)v10 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v10);
    *(_DWORD *)(a2 + 0x50) = v11;
    LODWORD(v12) = 4 * v10;
    result = (unsigned __int16)memcpy(v11, *((const void **)this + 0x14), v12);
  }
  *(float *)(a2 + 0x54) = *(this + 0x15);
  return result;
}
