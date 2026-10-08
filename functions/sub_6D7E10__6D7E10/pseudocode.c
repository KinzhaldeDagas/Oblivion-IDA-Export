void __thiscall sub_6D7E10(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  FormHeapFree(*(this + 2)); /*0x6d7e18*/
  *(this + 2) = 0; /*0x6d7e26*/
  if ( Src ) /*0x6d7e2d*/
  {
    v3 = strlen(Src); /*0x6d7e31*/
    v4 = (char *)FormHeapAlloc(v3 + 1); /*0x6d7e44*/
    *(this + 2) = (unsigned int)v4; /*0x6d7e4c*/
    strcpy_s(v4, v3 + 1, Src); /*0x6d7e4f*/
  }
}
