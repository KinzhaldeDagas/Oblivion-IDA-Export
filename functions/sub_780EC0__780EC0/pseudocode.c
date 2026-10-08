void __thiscall sub_780EC0(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // edi

  if ( (char *)*(this + 0xC) != Src ) /*0x780ecd*/
  {
    FormHeapFree(*(this + 0xC)); /*0x780ed0*/
    if ( Src ) /*0x780eda*/
    {
      if ( *Src ) /*0x780edc*/
      {
        v3 = strlen(Src); /*0x780ee3*/
        v4 = (char *)FormHeapAlloc(v3 + 1); /*0x780efd*/
        strcpy_s(v4, v3 + 1, Src); /*0x780f01*/
        *(this + 0xC) = (unsigned int)v4; /*0x780f09*/
      }
    }
  }
}
