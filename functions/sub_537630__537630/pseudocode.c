void __thiscall sub_537630(_DWORD *this, int a2)
{
  _DWORD *i; // esi
  int j; // edi
  int v5; // eax
  int v6; // esi

  for ( i = (_DWORD *)*(this + 7); i; i = (_DWORD *)i[1] ) /*0x537639*/
    sub_537020(i, a2); /*0x53764a*/
  for ( j = *(this + 6); j; j = *(_DWORD *)(j + 4) ) /*0x53765b*/
  {
    v5 = *(_DWORD *)(j + 0x10); /*0x537660*/
    if ( v5 ) /*0x537665*/
    {
      do /*0x53767d*/
      {
        v6 = *(_DWORD *)(v5 + 4); /*0x53766c*/
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v5 + 0xC) + 0x110))(*(_DWORD *)(v5 + 0xC), j, v5); /*0x537677*/
        v5 = v6; /*0x53767b*/
      }
      while ( v6 ); /*0x53767d*/
    }
  }
}
