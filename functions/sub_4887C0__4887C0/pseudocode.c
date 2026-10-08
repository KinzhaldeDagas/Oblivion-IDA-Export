void __thiscall sub_4887C0(int *this)
{
  int i; // esi

  for ( i = *this; i; i = *(_DWORD *)(i + 4) ) /*0x4887c1*/
  {
    if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i ) /*0x4887cd*/
      break; /*0x4887d0*/
    if ( *(_DWORD *)i ) /*0x4887d2*/
      sub_485BC0(*(_DWORD **)i); /*0x4887d8*/
  }
}
