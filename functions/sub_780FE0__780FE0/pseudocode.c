void __thiscall sub_780FE0(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // edi

  if ( (char *)*(this + 0xF) != Src ) /*0x780fed*/
  {
    FormHeapFree(*(this + 0xF)); /*0x780ff0*/
    if ( Src ) /*0x780ffa*/
    {
      if ( *Src ) /*0x780ffc*/
      {
        v3 = strlen(Src); /*0x781003*/
        v4 = (char *)FormHeapAlloc(v3 + 1); /*0x78101d*/
        strcpy_s(v4, v3 + 1, Src); /*0x781021*/
        *(this + 0xF) = (unsigned int)v4; /*0x781029*/
      }
    }
  }
}
