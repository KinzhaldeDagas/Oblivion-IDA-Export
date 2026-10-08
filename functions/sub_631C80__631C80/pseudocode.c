void __thiscall sub_631C80(int **this, int a2)
{
  int *v2; // ecx
  int *i; // eax
  _DWORD *v4; // esi

  v2 = *(this + 0x63); /*0x631c80*/
  for ( i = v2; i; i = (int *)i[1] ) /*0x631c8a*/
  {
    v4 = (_DWORD *)*i; /*0x631c91*/
    if ( !*i ) /*0x631c91*/
      break; /*0x631c91*/
    if ( *v4 == a2 ) /*0x631c99*/
    {
      BSSimpleList_Remove(v2, *i); /*0x631ca7*/
      FormHeapFree((unsigned int)v4); /*0x631cad*/
      return; /*0x631cad*/
    }
  }
}
