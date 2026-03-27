unsigned int __thiscall sub_6D83A0(unsigned __int16 *this, char *Src, int a3)
{
  const char *v4; // ebp
  unsigned int v5; // esi
  unsigned int v6; // kr00_4
  int v7; // ebp

  v4 = Src;
  v5 = *(this + 0xB);
  v6 = strlen(Src);
  Src = (char *)FormHeapAlloc(v6 + 1);
  strcpy_s(Src, v6 + 1, v4);
  if ( v5 >= *(this + 0xA) )
    NiTArray_SetSize(this + 6, v5 + *(this + 0xD));
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 6), v5, &Src);
  v7 = a3;
  Src = (char *)a3;
  if ( a3 )
    InterlockedIncrement((volatile LONG *)(a3 + 4));
  if ( v5 >= *(this + 0x12) )
    sub_6C4510(this + 0xE, v5 + *(this + 0x15));
  sub_6D7E90((_DWORD *)this + 7, v5, (LONG *)&Src);
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  return v5;
}
