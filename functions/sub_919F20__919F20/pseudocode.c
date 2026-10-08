_WORD *__thiscall sub_919F20(_WORD *this, int a2)
{
  __int16 v3; // dx

  *(_DWORD *)this = &hkReferencedObject::`vftable'; /*0x919f26*/
  *(this + 2) = *(_WORD *)(a2 + 4); /*0x919f30*/
  v3 = *(_WORD *)(a2 + 6); /*0x919f34*/
  *(_DWORD *)this = &off_A9B2F4; /*0x919f38*/
  *(this + 3) = v3; /*0x919f3e*/
  *((_OWORD *)this + 1) = *(_OWORD *)(a2 + 0x10); /*0x919f46*/
  *((_OWORD *)this + 2) = *(_OWORD *)(a2 + 0x20); /*0x919f4e*/
  *((_OWORD *)this + 3) = *(_OWORD *)(a2 + 0x30); /*0x919f56*/
  *((_OWORD *)this + 4) = *(_OWORD *)(a2 + 0x40); /*0x919f5e*/
  *((_DWORD *)this + 0x14) = *(_DWORD *)(a2 + 0x50); /*0x919f65*/
  *((_DWORD *)this + 0x15) = *(_DWORD *)(a2 + 0x54); /*0x919f6b*/
  *(_DWORD *)this = &off_A9D378; /*0x919f6e*/
  *((_OWORD *)this + 6) = *(_OWORD *)(a2 + 0x60); /*0x919f78*/
  return this; /*0x919f7c*/
}
