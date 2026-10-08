void __thiscall sub_540590(_DWORD *this)
{
  int i; // esi

  for ( i = *(this + 0x38); i; i = *(_DWORD *)(i + 4) ) /*0x540599*/
  {
    if ( !*(_DWORD *)i ) /*0x5405a0*/
      break; /*0x5405a4*/
    sub_6B7240(**(int ***)i); /*0x5405a8*/
  }
}
