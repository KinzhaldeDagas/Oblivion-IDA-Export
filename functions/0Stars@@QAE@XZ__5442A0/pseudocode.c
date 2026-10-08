Stars *__thiscall Stars::Stars(Stars *this)
{
  int v2; // edi

  SkyObject::SkyObject((SkyObject *)this); /*0x5442c9*/
  *(_DWORD *)this = &Stars::`vftable'; /*0x5442ce*/
  *((_DWORD *)this + 2) = 0; /*0x5442dc*/
  v2 = *((_DWORD *)this + 2); /*0x5442e3*/
  if ( v2 ) /*0x5442ed*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x5442f3*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x544309*/
    *((_DWORD *)this + 2) = 0; /*0x54430b*/
  }
  *((float *)this + 3) = 0.0; /*0x544316*/
  return this; /*0x544319*/
}
