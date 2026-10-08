_DWORD *__thiscall sub_91D890(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v4; // eax

  v2 = *(this + 9); /*0x91d893*/
  *this = &off_A9D7C4; /*0x91d898*/
  *(this + 2) = &off_A9D7AC; /*0x91d89e*/
  *(this + 8) = off_A9D7FC; /*0x91d8a5*/
  *(this + 0xA) = off_A9D798; /*0x91d8ac*/
  if ( v2 ) /*0x91d8b3*/
  {
    v3 = 0; /*0x91d8b9*/
    if ( *(int *)(v2 + 0x60) > 0 ) /*0x91d8bd*/
    {
      do /*0x91d8e5*/
      {
        if ( this ) /*0x91d8cd*/
          v4 = this + 0xA; /*0x91d8cf*/
        else
          v4 = 0; /*0x91d8d4*/
        sub_898AD0(*(int **)(*(_DWORD *)(*(this + 9) + 0x5C) + 4 * v3++), (int)v4); /*0x91d8d7*/
      }
      while ( v3 < *(_DWORD *)(*(this + 9) + 0x60) ); /*0x91d8e5*/
    }
  }
  *(this + 0xA) = &hkCollisionListener::`vftable'; /*0x91d8e9*/
  return sub_949180(this); /*0x91d8f2*/
}
