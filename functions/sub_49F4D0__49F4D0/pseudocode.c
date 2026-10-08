void __thiscall sub_49F4D0(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  FormHeapFree(*(this + 0x17)); /*0x49f4d8*/
  *(this + 0x17) = 0; /*0x49f4e6*/
  if ( Src ) /*0x49f4ed*/
  {
    v3 = strlen(Src); /*0x49f4f1*/
    v4 = (char *)FormHeapAlloc(v3 + 1); /*0x49f504*/
    *(this + 0x17) = (unsigned int)v4; /*0x49f50c*/
    strcpy_s(v4, v3 + 1, Src); /*0x49f50f*/
  }
}
