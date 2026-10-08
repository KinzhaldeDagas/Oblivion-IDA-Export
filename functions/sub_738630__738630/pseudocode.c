void __thiscall sub_738630(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  FormHeapFree(*(this + 2)); /*0x738638*/
  *(this + 2) = 0; /*0x738646*/
  if ( Src ) /*0x73864d*/
  {
    if ( strcmp(Src, EmptyString) ) /*0x73865f*/
    {
      v3 = strlen(Src); /*0x738665*/
      v4 = (char *)FormHeapAlloc(v3 + 1); /*0x738677*/
      *(this + 2) = (unsigned int)v4; /*0x73867f*/
      strcpy_s(v4, v3 + 1, Src); /*0x738682*/
    }
  }
}
