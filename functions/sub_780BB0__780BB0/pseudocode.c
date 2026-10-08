void __thiscall sub_780BB0(unsigned int *this, char *Src)
{
  unsigned int v3; // esi

  if ( !Src || !strcmp(Src, EmptyString) ) /*0x780bcb*/
  {
    FormHeapFree(*(this + 2)); /*0x780c3d*/
    *(this + 2) = 0; /*0x780c47*/
  }
  else
  {
    v3 = strlen(Src) + 1; /*0x780be2*/
    if ( *(this + 2) ) /*0x780bdb*/
    {
      if ( strlen((const char *)*(this + 2)) < v3 ) /*0x780bfd*/
      {
        FormHeapFree(*(this + 2)); /*0x780c00*/
        *(this + 2) = 0; /*0x780c08*/
      }
    }
    if ( !*(this + 2) ) /*0x780c0f*/
      *(this + 2) = FormHeapAlloc(v3); /*0x780c1e*/
    strcpy_s((char *)*(this + 2), v3, Src); /*0x780c2b*/
  }
}
