void __thiscall sub_780F80(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // edi

  if ( (char *)*(this + 0xE) != Src )
  {
    FormHeapFree(*(this + 0xE));
    if ( Src && *Src )
    {
      v3 = strlen(Src);
      v4 = (char *)FormHeapAlloc(v3 + 1);
      strcpy_s(v4, v3 + 1, Src);
      *(this + 0xE) = (unsigned int)v4;
    }
    else
    {
      *(this + 0xE) = 0;
    }
  }
}
