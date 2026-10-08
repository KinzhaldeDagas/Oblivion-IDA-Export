void __thiscall sub_67B670(int **this, int a2)
{
  int *v2; // ecx
  int *i; // eax
  _DWORD *v4; // esi

  v2 = *this; /*0x67b670*/
  for ( i = v2; i; i = (int *)i[1] ) /*0x67b676*/
  {
    v4 = (_DWORD *)*i; /*0x67b680*/
    if ( !*i ) /*0x67b680*/
      break; /*0x67b680*/
    if ( *v4 == a2 ) /*0x67b688*/
    {
      BSSimpleList_Remove(v2, *i); /*0x67b696*/
      FormHeapFree((unsigned int)v4); /*0x67b69c*/
      return; /*0x67b69c*/
    }
  }
}
