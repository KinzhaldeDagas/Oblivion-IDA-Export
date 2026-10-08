void __thiscall sub_4416D0(int **this, int a2)
{
  int *v2; // ecx

  if ( a2 ) /*0x4416d6*/
  {
    v2 = *(this + 0x22); /*0x4416d8*/
    if ( v2 ) /*0x4416e0*/
      BSSimpleList_Remove(v2, a2); /*0x4416e6*/
  }
}
