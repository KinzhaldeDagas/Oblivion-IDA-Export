void __thiscall sub_4FCC90(unsigned int *this)
{
  unsigned int *v1; // esi
  unsigned int *v2; // eax

  v1 = this + 0x14; /*0x4fcc91*/
  if ( this != (unsigned int *)0xFFFFFFB0 ) /*0x4fcc96*/
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v1) ) /*0x4fcca1*/
    {
      FormHeapFree(*v1); /*0x4fcca6*/
      v2 = (unsigned int *)v1[1]; /*0x4fccab*/
      if ( v2 ) /*0x4fccb3*/
      {
        v1[1] = v2[1]; /*0x4fccb8*/
        *v1 = *v2; /*0x4fccbe*/
        FormHeapFree((unsigned int)v2); /*0x4fccc0*/
      }
      else
      {
        *v1 = 0; /*0x4fccca*/
      }
    }
  }
}
