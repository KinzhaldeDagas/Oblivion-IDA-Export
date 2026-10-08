unsigned int __thiscall sub_6D83A0(unsigned __int16 *this, char *Src, int a3)
{
  const char *v4; // ebp
  unsigned int v5; // esi
  unsigned int v6; // kr00_4
  int v7; // ebp

  v4 = Src; /*0x6d83c6*/
  v5 = *(this + 0xB); /*0x6d83ca*/
  v6 = strlen(Src); /*0x6d83d0*/
  Src = (char *)FormHeapAlloc(v6 + 1); /*0x6d83ea*/
  strcpy_s(Src, v6 + 1, v4); /*0x6d83ee*/
  if ( v5 >= *(this + 0xA) ) /*0x6d83ff*/
    NiTArray_SetSize(this + 6, v5 + *(this + 0xD)); /*0x6d840a*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 6), v5, &Src); /*0x6d8417*/
  v7 = a3; /*0x6d841c*/
  Src = (char *)a3; /*0x6d8422*/
  if ( a3 ) /*0x6d8426*/
    InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x6d842c*/
  if ( v5 >= *(this + 0x12) ) /*0x6d8443*/
    sub_6C4510(this + 0xE, v5 + *(this + 0x15)); /*0x6d844e*/
  sub_6D7E90((_DWORD *)this + 7, v5, (LONG *)&Src); /*0x6d845b*/
  if ( v7 ) /*0x6d846a*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6d8470*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6d8483*/
  }
  return v5; /*0x6d8487*/
}
