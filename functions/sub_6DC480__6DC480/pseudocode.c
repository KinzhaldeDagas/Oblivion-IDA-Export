unsigned __int16 __thiscall sub_6DC480(const void **this, int a2, _DWORD **a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  unsigned __int16 result; // ax
  int v9; // eax
  unsigned int v10; // ebp
  void *v11; // eax

  sub_6EC2A0(this, a2, a3); /*0x6dc48f*/
  *(_WORD *)(a2 + 0xC) = *((_WORD *)this + 6); /*0x6dc498*/
  v4 = (int)*(this + 6); /*0x6dc49c*/
  if ( v4 ) /*0x6dc4a1*/
  {
    v5 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v4 + 0x18))(v4, a3); /*0x6dc4a9*/
    sub_6DABA0((_DWORD *)a2, v5); /*0x6dc4ae*/
  }
  v6 = (int)*(this + 7); /*0x6dc4b3*/
  if ( v6 ) /*0x6dc4b8*/
  {
    v7 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v6 + 0x18))(v6, a3); /*0x6dc4c0*/
    sub_6DABF0((_DWORD *)a2, v7); /*0x6dc4c5*/
  }
  if ( (*(_BYTE *)(this + 3) & 4) != 0 ) /*0x6dc4d3*/
    *(_WORD *)(a2 + 0xC) |= 4u; /*0x6dc4d5*/
  else
    *(_WORD *)(a2 + 0xC) &= ~4u; /*0x6dc4dc*/
  if ( (*(_BYTE *)(this + 3) & 8) != 0 ) /*0x6dc4eb*/
    *(_WORD *)(a2 + 0xC) |= 8u; /*0x6dc4ed*/
  else
    *(_WORD *)(a2 + 0xC) &= ~8u; /*0x6dc4f4*/
  *(_DWORD *)(a2 + 0x38) = *(this + 0xE); /*0x6dc4fd*/
  if ( (*(_BYTE *)(this + 3) & 0x10) != 0 ) /*0x6dc509*/
  {
    *(_WORD *)(a2 + 0xC) |= 0x10u; /*0x6dc50b*/
    if ( (*(_BYTE *)(a2 + 0xC) & 1) != 0 ) /*0x6dc514*/
    {
      *(float *)(a2 + 0x24) = sub_6DBB10(a2); /*0x6dc51d*/
      *(_WORD *)(a2 + 0xC) &= ~1u; /*0x6dc520*/
    }
  }
  else
  {
    *(_WORD *)(a2 + 0xC) &= ~0x10u; /*0x6dc538*/
  }
  if ( (*(_BYTE *)(this + 3) & 0x20) != 0 ) /*0x6dc52f*/
    *(_WORD *)(a2 + 0xC) |= 0x20u; /*0x6dc531*/
  else
    *(_WORD *)(a2 + 0xC) &= ~0x20u; /*0x6dc540*/
  *(float *)(a2 + 0x28) = *((float *)this + 0xA); /*0x6dc549*/
  *(float *)(a2 + 0x2C) = *((float *)this + 0xB); /*0x6dc54f*/
  result = *((_WORD *)this + 0x18); /*0x6dc552*/
  *(_WORD *)(a2 + 0x30) = result; /*0x6dc556*/
  if ( (*(_BYTE *)(this + 3) & 0x40) != 0 ) /*0x6dc563*/
    *(_WORD *)(a2 + 0xC) |= 0x40u; /*0x6dc565*/
  else
    *(_WORD *)(a2 + 0xC) &= ~0x40u; /*0x6dc56c*/
  if ( (*(_BYTE *)(this + 3) & 2) != 0 ) /*0x6dc57a*/
    *(_WORD *)(a2 + 0xC) |= 2u; /*0x6dc57c*/
  else
    *(_WORD *)(a2 + 0xC) &= ~2u; /*0x6dc583*/
  if ( *(this + 8) )
  {
    v9 = (int)*(this + 6); /*0x6dc58f*/
    if ( v9 ) /*0x6dc595*/
      v10 = *(_DWORD *)(v9 + 8); /*0x6dc597*/
    else
      v10 = 0; /*0x6dc59c*/
    v11 = (void *)FormHeapAlloc((unsigned __int64)v10 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v10);
    *(_DWORD *)(a2 + 0x20) = v11; /*0x6dc5bd*/
    result = (unsigned __int16)memcpy(v11, *(this + 8), 4 * v10); /*0x6dc5c6*/
  }
  *(float *)(a2 + 0x24) = *((float *)this + 9); /*0x6dc5d3*/
  return result; /*0x6dc5d6*/
}
