_DWORD *__thiscall sub_8B3690(_DWORD *this, int a2)
{
  *this = *(_DWORD *)a2; /*0x8b3698*/
  *(this + 1) = *(_DWORD *)(a2 + 4); /*0x8b369d*/
  *((_OWORD *)this + 1) = *(_OWORD *)(a2 + 0x10); /*0x8b36a4*/
  *((_OWORD *)this + 2) = *(_OWORD *)(a2 + 0x20); /*0x8b36ac*/
  *((_OWORD *)this + 3) = *(_OWORD *)(a2 + 0x30); /*0x8b36b4*/
  *((_OWORD *)this + 4) = *(_OWORD *)(a2 + 0x40); /*0x8b36bc*/
  return this; /*0x8b36c0*/
}
