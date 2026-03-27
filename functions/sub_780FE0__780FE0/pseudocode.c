void __thiscall sub_780FE0(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // edi

  if ( (char *)*(this + 0xF) != Src )
  {
    FormHeapFree(*(this + 0xF));
    if ( Src )
    {
      if ( *Src )
      {
        v3 = strlen(Src);
        v4 = (char *)FormHeapAlloc(v3 + 1);
        strcpy_s(v4, v3 + 1, Src);
        *(this + 0xF) = (unsigned int)v4;
      }
    }
  }
}
