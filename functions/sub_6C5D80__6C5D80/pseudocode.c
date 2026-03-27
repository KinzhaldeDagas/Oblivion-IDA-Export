NiObject *__userpurge sub_6C5D80@<eax>(NiObject *this@<ecx>, size_t Size)
{
  int v3; // eax
  int v5; // [esp-8h] [ebp-20h]

  NiObject_constr(this);
  this->__vftable = (NiObjectVtbl *)&NiStringPalette::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = Size;
  *((_DWORD *)this + 4) = 0;
  if ( (_DWORD)Size )
  {
    v3 = FormHeapAlloc(Size);
    v5 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 2) = v3;
    _memset(v3, 0, v5);
  }
  return this;
}
