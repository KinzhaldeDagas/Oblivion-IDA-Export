char *__thiscall FontInfo_Construct(char *this, int a2, const char *a3, char a4)
{
  unsigned int v5; // eax
  int v6; // eax
  const char *v7; // ecx
  _BYTE *v8; // edx
  char v9; // al

  ArrayConstructor( /*0x5757db*/
    this + 0xC,
    4u,
    8,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_DWORD *)this + 1) = 0; /*0x5757ee*/
  *(_WORD *)this = 0; /*0x5757f5*/
  *((_DWORD *)this + 0xE) = 0; /*0x5757fa*/
  if ( a3 ) /*0x575801*/
  {
    v5 = strlen(a3); /*0x575805*/
    if ( v5 ) /*0x575813*/
    {
      v6 = FormHeapAlloc(v5 + 1); /*0x575819*/
      *((_DWORD *)this + 1) = v6; /*0x575821*/
      v7 = a3; /*0x575824*/
      v8 = (_BYTE *)v6; /*0x575826*/
      do /*0x575834*/
      {
        v9 = *v7; /*0x575828*/
        *v8++ = *v7++; /*0x57582a*/
      }
      while ( v9 ); /*0x575834*/
    }
    *((_DWORD *)this + 2) = a2; /*0x57583f*/
    if ( a4 ) /*0x575842*/
      FontInfo_Load(this); /*0x575846*/
  }
  return this; /*0x57584d*/
}
