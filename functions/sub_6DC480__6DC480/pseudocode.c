unsigned __int16 __thiscall sub_6DC480(void *this, int a2, int a3)
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

  sub_6EC2A0(this, a2, a3);
  *(_WORD *)(a2 + 0xC) = *((_WORD *)this + 6);
  v4 = *((_DWORD *)this + 6);
  if ( v4 )
  {
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x18))(v4, a3);
    sub_6DABA0((_DWORD *)a2, v5);
  }
  v6 = *((_DWORD *)this + 7);
  if ( v6 )
  {
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x18))(v6, a3);
    sub_6DABF0((_DWORD *)a2, v7);
  }
  if ( (*((_BYTE *)this + 0xC) & 4) != 0 )
    *(_WORD *)(a2 + 0xC) |= 4u;
  else
    *(_WORD *)(a2 + 0xC) &= ~4u;
  if ( (*((_BYTE *)this + 0xC) & 8) != 0 )
    *(_WORD *)(a2 + 0xC) |= 8u;
  else
    *(_WORD *)(a2 + 0xC) &= ~8u;
  *(_DWORD *)(a2 + 0x38) = *((_DWORD *)this + 0xE);
  if ( (*((_BYTE *)this + 0xC) & 0x10) != 0 )
  {
    *(_WORD *)(a2 + 0xC) |= 0x10u;
    if ( (*(_BYTE *)(a2 + 0xC) & 1) != 0 )
    {
      *(float *)(a2 + 0x24) = sub_6DBB10(a2);
      *(_WORD *)(a2 + 0xC) &= ~1u;
    }
  }
  else
  {
    *(_WORD *)(a2 + 0xC) &= ~0x10u;
  }
  if ( (*((_BYTE *)this + 0xC) & 0x20) != 0 )
    *(_WORD *)(a2 + 0xC) |= 0x20u;
  else
    *(_WORD *)(a2 + 0xC) &= ~0x20u;
  *(float *)(a2 + 0x28) = *((float *)this + 0xA);
  *(float *)(a2 + 0x2C) = *((float *)this + 0xB);
  result = *((_WORD *)this + 0x18);
  *(_WORD *)(a2 + 0x30) = result;
  if ( (*((_BYTE *)this + 0xC) & 0x40) != 0 )
    *(_WORD *)(a2 + 0xC) |= 0x40u;
  else
    *(_WORD *)(a2 + 0xC) &= ~0x40u;
  if ( (*((_BYTE *)this + 0xC) & 2) != 0 )
    *(_WORD *)(a2 + 0xC) |= 2u;
  else
    *(_WORD *)(a2 + 0xC) &= ~2u;
  if ( *((_DWORD *)this + 8) )
  {
    v9 = *((_DWORD *)this + 6);
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 8);
    else
      v10 = 0;
    v11 = (void *)FormHeapAlloc((unsigned __int64)v10 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v10);
    *(_DWORD *)(a2 + 0x20) = v11;
    LODWORD(v12) = 4 * v10;
    result = (unsigned __int16)memcpy(v11, *((const void **)this + 8), v12);
  }
  *(float *)(a2 + 0x24) = *((float *)this + 9);
  return result;
}
