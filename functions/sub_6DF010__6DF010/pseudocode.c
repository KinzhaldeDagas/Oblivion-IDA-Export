void __thiscall sub_6DF010(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  FormHeapFree(*(this + 5));
  *(this + 5) = 0;
  if ( Src )
  {
    v3 = strlen(Src);
    v4 = (char *)FormHeapAlloc(v3 + 1);
    *(this + 5) = (unsigned int)v4;
    strcpy_s(v4, v3 + 1, Src);
  }
}
