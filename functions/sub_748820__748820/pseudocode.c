_DWORD *__thiscall sub_748820(_DWORD *this, int a2, int a3)
{
  NiBinaryStream_constr(this); /*0x748823*/
  *(this + 3) = a2; /*0x748830*/
  *(this + 5) = a3; /*0x748835*/
  *this = &NiMemStream::`vftable'; /*0x74883b*/
  *(this + 4) = 0; /*0x748841*/
  *(this + 6) = 0; /*0x748844*/
  *((_BYTE *)this + 0x1D) = 0; /*0x748847*/
  sub_748CF0(this, 0); /*0x74884a*/
  return this; /*0x748851*/
}
