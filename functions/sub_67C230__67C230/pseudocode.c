int __thiscall sub_67C230(int *this)
{
  int i; // esi
  int result; // eax

  for ( i = *this; i; i = *(_DWORD *)(i + 4) ) /*0x67c231*/
  {
    if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i ) /*0x67c23d*/
      break; /*0x67c240*/
    result = sub_67BDD0(*(_DWORD **)i); /*0x67c244*/
  }
  return result; /*0x67c250*/
}
