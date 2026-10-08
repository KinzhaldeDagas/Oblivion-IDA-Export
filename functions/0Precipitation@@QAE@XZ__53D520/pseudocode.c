Precipitation *__thiscall Precipitation::Precipitation(Precipitation *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi

  *(_DWORD *)this = &Precipitation::`vftable'; /*0x53d54d*/
  *((_DWORD *)this + 1) = 0; /*0x53d553*/
  *((_DWORD *)this + 2) = 0; /*0x53d55a*/
  v2 = *((_DWORD *)this + 1); /*0x53d55d*/
  v3 = InterlockedDecrement; /*0x53d562*/
  if ( v2 ) /*0x53d56d*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x53d573*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x53d585*/
    *((_DWORD *)this + 1) = 0; /*0x53d587*/
  }
  v4 = *((_DWORD *)this + 2); /*0x53d58a*/
  if ( v4 ) /*0x53d58f*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x53d595*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x53d5a7*/
    *((_DWORD *)this + 2) = 0; /*0x53d5a9*/
  }
  *((_DWORD *)this + 5) = 0; /*0x53d5ae*/
  *((float *)this + 4) = 0.0; /*0x53d5b1*/
  *((_DWORD *)this + 3) = 0; /*0x53d5b4*/
  return this; /*0x53d5b9*/
}
