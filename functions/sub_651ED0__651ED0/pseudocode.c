void __thiscall sub_651ED0(int **this, int a2)
{
  int *v2; // ecx

  if ( a2 ) /*0x651ed6*/
  {
    v2 = *(this + 0x5C); /*0x651ed8*/
    if ( v2 ) /*0x651ee0*/
      BSSimpleList_Remove(v2, a2); /*0x651ee6*/
  }
}
