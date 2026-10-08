_DWORD *__thiscall sub_748860(_DWORD *this)
{
  NiBinaryStream_constr(this); /*0x748863*/
  *this = &NiMemStream::`vftable'; /*0x748879*/
  *(this + 6) = 0x400; /*0x74887f*/
  *(this + 3) = FormHeapAlloc(0x400u); /*0x748890*/
  *(this + 5) = 0; /*0x74889b*/
  *(this + 4) = 0; /*0x74889e*/
  *((_BYTE *)this + 0x1D) = 0; /*0x7488a1*/
  sub_748CF0(this, 0); /*0x7488a4*/
  return this; /*0x7488ab*/
}
