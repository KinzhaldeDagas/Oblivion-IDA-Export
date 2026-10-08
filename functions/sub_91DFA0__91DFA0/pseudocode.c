_DWORD *__thiscall sub_91DFA0(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v4; // eax

  v2 = *(this + 9); /*0x91dfa3*/
  *this = &off_A9D81C; /*0x91dfa8*/
  *(this + 2) = &off_A9D804; /*0x91dfae*/
  *(this + 8) = off_A9D7FC; /*0x91dfb5*/
  *(this + 0xA) = off_A9D7E8; /*0x91dfbc*/
  if ( v2 ) /*0x91dfc3*/
  {
    v3 = 0; /*0x91dfc9*/
    if ( *(int *)(v2 + 0x60) > 0 ) /*0x91dfcd*/
    {
      do /*0x91dff5*/
      {
        if ( this ) /*0x91dfdd*/
          v4 = this + 0xA; /*0x91dfdf*/
        else
          v4 = 0; /*0x91dfe4*/
        sub_898AD0(*(int **)(*(_DWORD *)(*(this + 9) + 0x5C) + 4 * v3++), (int)v4); /*0x91dfe7*/
      }
      while ( v3 < *(_DWORD *)(*(this + 9) + 0x60) ); /*0x91dff5*/
    }
  }
  *(this + 0xA) = &hkCollisionListener::`vftable'; /*0x91dff9*/
  return sub_949180(this); /*0x91e002*/
}
