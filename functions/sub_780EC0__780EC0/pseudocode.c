void __thiscall sub_780EC0(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // edi

  if ( (char *)*(this + 0xC) != Src )
  {
    FormHeapFree(*(this + 0xC));
    if ( Src )
    {
      if ( *Src )
      {
        v3 = strlen(Src);
        v4 = (char *)FormHeapAlloc(v3 + 1);
        strcpy_s(v4, v3 + 1, Src);
        *(this + 0xC) = (unsigned int)v4;
      }
    }
  }
}
