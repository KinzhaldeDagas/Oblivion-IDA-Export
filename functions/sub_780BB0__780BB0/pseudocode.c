void __thiscall sub_780BB0(unsigned int *this, char *Src)
{
  unsigned int v3; // esi

  if ( !Src || !strcmp(Src, EmptyString) )
  {
    FormHeapFree(*(this + 2));
    *(this + 2) = 0;
  }
  else
  {
    v3 = strlen(Src) + 1;
    if ( *(this + 2) )
    {
      if ( strlen((const char *)*(this + 2)) < v3 )
      {
        FormHeapFree(*(this + 2));
        *(this + 2) = 0;
      }
    }
    if ( !*(this + 2) )
      *(this + 2) = FormHeapAlloc(v3);
    strcpy_s((char *)*(this + 2), v3, Src);
  }
}
