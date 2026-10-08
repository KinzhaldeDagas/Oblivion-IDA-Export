void __thiscall sub_721440(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  if ( *(this + 2) ) /*0x721443*/
  {
    FormHeapFree(*(this + 2)); /*0x72144c*/
    *(this + 2) = 0; /*0x721454*/
  }
  if ( Src ) /*0x721461*/
  {
    if ( *Src ) /*0x721463*/
    {
      v3 = strlen(Src); /*0x72146a*/
      v4 = (char *)FormHeapAlloc(v3 + 1); /*0x721480*/
      *(this + 2) = (unsigned int)v4; /*0x721488*/
      strcpy_s(v4, v3 + 1, Src); /*0x72148b*/
    }
  }
}
