_BYTE *__thiscall ExtraReferencePointer_constr(_BYTE *this, int a2)
{
  *(this + 4) = 0x22;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraReferencePointer::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
