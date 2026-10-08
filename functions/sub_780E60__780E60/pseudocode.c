void __thiscall sub_780E60(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // edi

  if ( (char *)*(this + 0xB) != Src ) /*0x780e6d*/
  {
    FormHeapFree(*(this + 0xB)); /*0x780e70*/
    if ( Src && *Src ) /*0x780e7c*/
    {
      v3 = strlen(Src); /*0x780e83*/
      v4 = (char *)FormHeapAlloc(v3 + 1); /*0x780e9d*/
      strcpy_s(v4, v3 + 1, Src); /*0x780ea1*/
      *(this + 0xB) = (unsigned int)v4; /*0x780ea9*/
    }
    else
    {
      *(this + 0xB) = 0; /*0x780eb3*/
    }
  }
}
