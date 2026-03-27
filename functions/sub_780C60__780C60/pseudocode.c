void __thiscall sub_780C60(unsigned int *this, char *Src)
{
  unsigned int v3; // esi

  if ( !Src || !strcmp(Src, EmptyString) )
  {
    FormHeapFree(*(this + 3));
    *(this + 3) = 0;
  }
  else
  {
    v3 = strlen(Src) + 1;
    if ( *(this + 3) )
    {
      if ( strlen((const char *)*(this + 3)) < v3 )
      {
        FormHeapFree(*(this + 3));
        *(this + 3) = 0;
      }
    }
    if ( !*(this + 3) )
      *(this + 3) = FormHeapAlloc(v3);
    strcpy_s((char *)*(this + 3), v3, Src);
  }
}
