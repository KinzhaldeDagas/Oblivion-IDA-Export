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

  NiTimeController_CopyMembers(this, a2, a3); /*0x6ddc6f*/
  *(_WORD *)(a2 + 0x3C) = *((_WORD *)this + 0x1E); /*0x6ddc78*/
  v4 = *((_DWORD *)this + 0x12); /*0x6ddc7c*/
  if ( v4 ) /*0x6ddc81*/
  {
    v5 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 0x18))(v4, a3); /*0x6ddc89*/
    sub_6DC720((_DWORD *)a2, v5); /*0x6ddc8e*/
  }
  v6 = *((_DWORD *)this + 0x13); /*0x6ddc93*/
  if ( v6 ) /*0x6ddc98*/
  {
    v7 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 0x18))(v6, a3); /*0x6ddca0*/
    sub_71B140((_DWORD *)a2, v7); /*0x6ddca5*/
  }
  if ( (*(_BYTE *)(this + 0xF) & 4) != 0 ) /*0x6ddcb3*/
    *(_WORD *)(a2 + 0x3C) |= 4u; /*0x6ddcb5*/
  else
    *(_WORD *)(a2 + 0x3C) &= ~4u; /*0x6ddcbc*/
  if ( (*(_BYTE *)(this + 0xF) & 8) != 0 ) /*0x6ddccb*/
    *(_WORD *)(a2 + 0x3C) |= 8u; /*0x6ddccd*/
  else
    *(_WORD *)(a2 + 0x3C) &= ~8u; /*0x6ddcd4*/
  *(float *)(a2 + 0x68) = *(this + 0x1A); /*0x6ddcdd*/
  if ( (*(_BYTE *)(this + 0xF) & 0x10) != 0 ) /*0x6ddce9*/
  {
    *(_WORD *)(a2 + 0x3C) |= 0x10u; /*0x6ddceb*/
    if ( (*(_BYTE *)(a2 + 0x3C) & 1) != 0 ) /*0x6ddcf4*/
    {
      *(float *)(a2 + 0x54) = sub_6DD490(a2); /*0x6ddcfd*/
      *(_WORD *)(a2 + 0x3C) &= ~1u; /*0x6ddd00*/
    }
  }
  else
  {
    *(_WORD *)(a2 + 0x3C) &= ~0x10u; /*0x6ddd18*/
  }
  if ( (*(_BYTE *)(this + 0xF) & 0x20) != 0 ) /*0x6ddd0f*/
    *(_WORD *)(a2 + 0x3C) |= 0x20u; /*0x6ddd11*/
  else
    *(_WORD *)(a2 + 0x3C) &= ~0x20u; /*0x6ddd20*/
  *(float *)(a2 + 0x58) = *(this + 0x16); /*0x6ddd29*/
  *(float *)(a2 + 0x5C) = *(this + 0x17); /*0x6ddd2f*/
  result = *((_WORD *)this + 0x30); /*0x6ddd32*/
  *(_WORD *)(a2 + 0x60) = result; /*0x6ddd36*/
  if ( (*(_BYTE *)(this + 0xF) & 0x40) != 0 ) /*0x6ddd43*/
    *(_WORD *)(a2 + 0x3C) |= 0x40u; /*0x6ddd45*/
  else
    *(_WORD *)(a2 + 0x3C) &= ~0x40u; /*0x6ddd4c*/
  if ( (*(_BYTE *)(this + 0xF) & 2) != 0 ) /*0x6ddd5a*/
    *(_WORD *)(a2 + 0x3C) |= 2u; /*0x6ddd5c*/
  else
    *(_WORD *)(a2 + 0x3C) &= ~2u; /*0x6ddd63*/
  if ( *((_DWORD *)this + 0x14) )
  {
    v9 = *((_DWORD *)this + 0x12); /*0x6ddd6f*/
    if ( v9 ) /*0x6ddd75*/
      v10 = *(_DWORD *)(v9 + 8); /*0x6ddd77*/
    else
      v10 = 0; /*0x6ddd7c*/
    v11 = (void *)FormHeapAlloc((unsigned __int64)v10 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v10);
    *(_DWORD *)(a2 + 0x50) = v11; /*0x6ddd9d*/
    result = (unsigned __int16)memcpy(v11, *((const void **)this + 0x14), 4 * v10); /*0x6ddda6*/
  }
  *(float *)(a2 + 0x54) = *(this + 0x15); /*0x6dddb3*/
  return result; /*0x6dddb6*/
}
