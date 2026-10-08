void __thiscall CreatureSoundArray_ClearNthSound(_DWORD *this, unsigned int a2)
{
  unsigned int *v3; // esi
  unsigned int *v4; // eax

  if ( a2 <= 9 ) /*0x51981b*/
  {
    v3 = (unsigned int *)*(this + a2); /*0x51981e*/
    if ( v3 ) /*0x519823*/
    {
      while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v3) ) /*0x51982e*/
      {
        FormHeapFree(*v3); /*0x519833*/
        v4 = (unsigned int *)v3[1]; /*0x519838*/
        if ( v4 ) /*0x519840*/
        {
          v3[1] = v4[1]; /*0x519845*/
          *v3 = *v4; /*0x51984b*/
          FormHeapFree((unsigned int)v4); /*0x51984d*/
        }
        else
        {
          *v3 = 0; /*0x519857*/
        }
      }
    }
  }
  FormHeapFree(*(this + a2)); /*0x519864*/
  *(this + a2) = 0; /*0x51986c*/
}
