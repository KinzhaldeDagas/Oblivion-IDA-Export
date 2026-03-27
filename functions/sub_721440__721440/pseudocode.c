void __thiscall sub_721440(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  if ( *(this + 2) )
  {
    FormHeapFree(*(this + 2));
    *(this + 2) = 0;
  }
  if ( Src )
  {
    if ( *Src )
    {
      v3 = strlen(Src);
      v4 = (char *)FormHeapAlloc(v3 + 1);
      *(this + 2) = (unsigned int)v4;
      strcpy_s(v4, v3 + 1, Src);
    }
  }
}
