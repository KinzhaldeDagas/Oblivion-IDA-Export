char __thiscall sub_559C40(volatile LONG *this)
{
  LONG (__stdcall *v2)(volatile LONG *, LONG, LONG); // ebx
  volatile LONG *v3; // esi
  char result; // al
  int v5; // eax
  unsigned int v6; // ebp

  v2 = InterlockedCompareExchange; /*0x559c69*/
  v3 = this + 6; /*0x559c71*/
  result = InterlockedCompareExchange(this + 6, 1, 0) == 0; /*0x559c7f*/
  if ( result ) /*0x559c90*/
  {
    v5 = *((_DWORD *)this + 3); /*0x559c92*/
    if ( v5 ) /*0x559c97*/
    {
      v6 = *(_DWORD *)(v5 + 8); /*0x559c99*/
      if ( v6 ) /*0x559c9e*/
      {
        sub_559A70(*(_DWORD **)(v5 + 8)); /*0x559ca2*/
        FormHeapFree(v6); /*0x559ca8*/
        *(_DWORD *)(*((_DWORD *)this + 3) + 8) = 0; /*0x559cb3*/
      }
    }
    return v2(v3, 0, 1); /*0x559cbf*/
  }
  return result; /*0x559cc1*/
}
