char __thiscall sub_559BA0(volatile LONG *this)
{
  LONG (__stdcall *v2)(volatile LONG *, LONG, LONG); // ebx
  volatile LONG *v3; // esi
  char result; // al
  int v5; // eax
  unsigned int v6; // ebp

  v2 = InterlockedCompareExchange; /*0x559bc9*/
  v3 = this + 5; /*0x559bd1*/
  result = InterlockedCompareExchange(this + 5, 1, 0) == 0; /*0x559bdf*/
  if ( result ) /*0x559bf0*/
  {
    v5 = *((_DWORD *)this + 2); /*0x559bf2*/
    if ( v5 ) /*0x559bf7*/
    {
      v6 = *(_DWORD *)(v5 + 8); /*0x559bf9*/
      if ( v6 ) /*0x559bfe*/
      {
        sub_5599B0(*(_DWORD **)(v5 + 8)); /*0x559c02*/
        FormHeapFree(v6); /*0x559c08*/
        *(_DWORD *)(*((_DWORD *)this + 2) + 8) = 0; /*0x559c13*/
      }
    }
    return v2(v3, 0, 1); /*0x559c1f*/
  }
  return result; /*0x559c21*/
}
