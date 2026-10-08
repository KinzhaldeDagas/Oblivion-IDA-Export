NiObject *__userpurge sub_6C5D80@<eax>(NiObject *this@<ecx>, size_t Size)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-20h]

  NiObject_constr(this); /*0x6c5da8*/
  this->__vftable = (NiObjectVtbl *)&NiStringPalette::`vftable'; /*0x6c5dbb*/
  *((_DWORD *)this + 2) = 0; /*0x6c5dc1*/
  *((_DWORD *)this + 3) = Size; /*0x6c5dc8*/
  *((_DWORD *)this + 4) = 0; /*0x6c5dcb*/
  if ( (_DWORD)Size ) /*0x6c5dd2*/
  {
    v3 = FormHeapAlloc(Size); /*0x6c5dd5*/
    v5 = *((_DWORD *)this + 3); /*0x6c5ddd*/
    *((_DWORD *)this + 2) = v3; /*0x6c5de1*/
    _memset(v3, 0, v5); /*0x6c5de4*/
  }
  return this; /*0x6c5dee*/
}
