ExtraHavok *__thiscall ExtraHavok::ExtraHavok(ExtraHavok *this, int a2)
{
  int v3; // edi
  int v4; // edi

  *((_BYTE *)this + 4) = 2; /*0x41daef*/
  *((_DWORD *)this + 2) = 0; /*0x41daf2*/
  *(_DWORD *)this = &ExtraHavok::`vftable'; /*0x41daf5*/
  *((_DWORD *)this + 3) = 0; /*0x41daff*/
  *((_DWORD *)this + 4) = 0; /*0x41db02*/
  v3 = *((_DWORD *)this + 3); /*0x41db05*/
  if ( v3 != a2 ) /*0x41db12*/
  {
    if ( v3 ) /*0x41db16*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x41db1c*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x41db32*/
    }
    *((_DWORD *)this + 3) = a2; /*0x41db36*/
    if ( a2 ) /*0x41db39*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x41db3f*/
  }
  v4 = *((_DWORD *)this + 4); /*0x41db45*/
  if ( v4 ) /*0x41db4a*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x41db50*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x41db66*/
    *((_DWORD *)this + 4) = 0; /*0x41db68*/
  }
  return this; /*0x41db6d*/
}
