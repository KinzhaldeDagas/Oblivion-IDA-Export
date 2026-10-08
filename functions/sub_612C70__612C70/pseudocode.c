void __thiscall sub_612C70(unsigned int **this)
{
  unsigned int *v2; // esi
  unsigned int v3; // eax

  v2 = *(this + 0x46); /*0x612c74*/
  if ( v2 ) /*0x612c7c*/
  {
    while ( 1 ) /*0x612c84*/
    {
      v3 = *v2; /*0x612c84*/
      if ( !v2[1] ) /*0x612c80*/
        break; /*0x612c80*/
      if ( v3 ) /*0x612c90*/
        goto LABEL_6; /*0x612c90*/
LABEL_7:
      v2 = (unsigned int *)v2[1]; /*0x612c9b*/
      if ( !v2 ) /*0x612ca0*/
      {
LABEL_8:
        BSSimpleList_Clear(*(this + 0x46)); /*0x612ca2*/
        FormHeapFree((unsigned int)*(this + 0x46)); /*0x612cb4*/
        *(this + 0x46) = 0; /*0x612cbc*/
        return; /*0x612cbc*/
      }
    }
    if ( !v3 ) /*0x612c8a*/
      goto LABEL_8; /*0x612c8a*/
LABEL_6:
    FormHeapFree(*v2); /*0x612c92*/
    goto LABEL_7; /*0x612c93*/
  }
}
