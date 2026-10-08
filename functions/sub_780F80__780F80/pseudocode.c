void __thiscall sub_780F80(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // edi

  if ( (char *)*(this + 0xE) != Src ) /*0x780f8d*/
  {
    FormHeapFree(*(this + 0xE)); /*0x780f90*/
    if ( Src && *Src ) /*0x780f9c*/
    {
      v3 = strlen(Src); /*0x780fa3*/
      v4 = (char *)FormHeapAlloc(v3 + 1); /*0x780fbd*/
      strcpy_s(v4, v3 + 1, Src); /*0x780fc1*/
      *(this + 0xE) = (unsigned int)v4; /*0x780fc9*/
    }
    else
    {
      *(this + 0xE) = 0; /*0x780fd3*/
    }
  }
}
