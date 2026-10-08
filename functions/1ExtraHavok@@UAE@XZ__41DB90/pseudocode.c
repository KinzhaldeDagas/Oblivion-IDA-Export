void __thiscall ExtraHavok::~ExtraHavok(ExtraHavok *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // edi
  int v5; // edi

  *(_DWORD *)this = &ExtraHavok::`vftable'; /*0x41dbba*/
  v2 = *((_DWORD *)this + 4); /*0x41dbc0*/
  if ( v2 ) /*0x41dbd3*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x41dbd9*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x41dbeb*/
    *((_DWORD *)this + 4) = 0; /*0x41dbed*/
  }
  v3 = *((_DWORD *)this + 3); /*0x41dbf4*/
  if ( v3 ) /*0x41dbf9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x41dbff*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x41dc11*/
    *((_DWORD *)this + 3) = 0; /*0x41dc13*/
  }
  v4 = *((_DWORD *)this + 4); /*0x41dc1a*/
  if ( v4 ) /*0x41dc24*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x41dc2a*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x41dc3c*/
  }
  v5 = *((_DWORD *)this + 3); /*0x41dc3e*/
  if ( v5 ) /*0x41dc48*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x41dc4e*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x41dc60*/
  }
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x41dc62*/
}
