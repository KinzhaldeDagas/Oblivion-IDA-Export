void __thiscall sub_65DEF0(int **this, int a2)
{
  int *v3; // ecx
  _DWORD *v4; // ecx

  v3 = *(this + 0x16B); /*0x65def3*/
  if ( v3 ) /*0x65defb*/
  {
    BSSimpleList_Remove(v3, a2); /*0x65df02*/
    v4 = *(this + 0x16B); /*0x65df07*/
    if ( !*v4 ) /*0x65df0d*/
    {
      BSSimpleList_Clear(v4); /*0x65df12*/
      FormHeapFree((unsigned int)*(this + 0x16B)); /*0x65df1e*/
      *(this + 0x16B) = 0; /*0x65df26*/
    }
  }
}
