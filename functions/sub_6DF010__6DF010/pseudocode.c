void __thiscall sub_6DF010(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  FormHeapFree(*(this + 5)); /*0x6df018*/
  *(this + 5) = 0; /*0x6df026*/
  if ( Src ) /*0x6df02d*/
  {
    v3 = strlen(Src); /*0x6df031*/
    v4 = (char *)FormHeapAlloc(v3 + 1); /*0x6df044*/
    *(this + 5) = (unsigned int)v4; /*0x6df04c*/
    strcpy_s(v4, v3 + 1, Src); /*0x6df04f*/
  }
}
