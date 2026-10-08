void __thiscall sub_780C60(unsigned int *this, char *Src)
{
  unsigned int v3; // esi

  if ( !Src || !strcmp(Src, EmptyString) ) /*0x780c7b*/
  {
    FormHeapFree(*(this + 3)); /*0x780ced*/
    *(this + 3) = 0; /*0x780cf7*/
  }
  else
  {
    v3 = strlen(Src) + 1; /*0x780c92*/
    if ( *(this + 3) ) /*0x780c8b*/
    {
      if ( strlen((const char *)*(this + 3)) < v3 ) /*0x780cad*/
      {
        FormHeapFree(*(this + 3)); /*0x780cb0*/
        *(this + 3) = 0; /*0x780cb8*/
      }
    }
    if ( !*(this + 3) ) /*0x780cbf*/
      *(this + 3) = FormHeapAlloc(v3); /*0x780cce*/
    strcpy_s((char *)*(this + 3), v3, Src); /*0x780cdb*/
  }
}
