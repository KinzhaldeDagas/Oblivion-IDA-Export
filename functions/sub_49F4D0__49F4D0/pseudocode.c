void __thiscall sub_49F4D0(unsigned int *this, char *Src)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  FormHeapFree(*(this + 0x17));
  *(this + 0x17) = 0;
  if ( Src )
  {
    v3 = strlen(Src);
    v4 = (char *)FormHeapAlloc(v3 + 1);
    *(this + 0x17) = (unsigned int)v4;
    strcpy_s(v4, v3 + 1, Src);
  }
}
