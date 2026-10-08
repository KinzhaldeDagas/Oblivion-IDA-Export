void __thiscall TESLeveledList_Clear(unsigned int *this)
{
  unsigned int *v1; // esi
  unsigned int *v2; // eax

  v1 = this + 1; /*0x46cba1*/
  if ( this != (unsigned int *)0xFFFFFFFC ) /*0x46cba6*/
  {
    do /*0x46cbe0*/
    {
      if ( *v1 ) /*0x46cba8*/
      {
        FormHeapFree(*v1); /*0x46cbaf*/
        v2 = (unsigned int *)v1[1]; /*0x46cbb4*/
        if ( v2 ) /*0x46cbbc*/
        {
          v1[1] = v2[1]; /*0x46cbc1*/
          *v1 = *v2; /*0x46cbc7*/
          FormHeapFree((unsigned int)v2); /*0x46cbc9*/
        }
        else
        {
          *v1 = 0; /*0x46cbd3*/
        }
      }
      else
      {
        v1 = (unsigned int *)v1[1]; /*0x46cbdb*/
      }
    }
    while ( v1 ); /*0x46cbe0*/
  }
}
