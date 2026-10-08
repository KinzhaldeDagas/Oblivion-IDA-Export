void __thiscall sub_6EC6C0(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  if ( *(this + 1) ) /*0x6ec6c4*/
  {
    FormHeapFree(*(this + 1)); /*0x6ec6cc*/
    *(this + 1) = 0; /*0x6ec6d4*/
  }
  if ( Src ) /*0x6ec6e1*/
  {
    v3 = strlen(Src); /*0x6ec6e5*/
    v4 = (char *)FormHeapAlloc(v3 + 1); /*0x6ec6f8*/
    *(this + 1) = (unsigned int)v4; /*0x6ec700*/
    strcpy_s(v4, v3 + 1, Src); /*0x6ec703*/
  }
}
