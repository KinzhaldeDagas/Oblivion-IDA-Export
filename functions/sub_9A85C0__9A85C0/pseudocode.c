void __thiscall sub_9A85C0(_DWORD *this, char *Src)
{
  const char *v3; // ebp
  unsigned int v5; // kr00_4
  const char *v6; // ecx
  unsigned int v7; // edi

  v3 = Src;
  if ( Src && *Src )
  {
    v5 = strlen(Src);
    v6 = (const char *)*(this + 9);
    v7 = v5 + 1;
    if ( v6 )
    {
      if ( strlen(v6) < v7 )
      {
        FormHeapFree((unsigned int)v6);
        *(this + 9) = 0;
      }
      v3 = Src;
    }
    if ( !*(this + 9) )
      *(this + 9) = FormHeapAlloc(v7);
    strcpy_s((char *)*(this + 9), v7, v3);
  }
  else
  {
    FormHeapFree(*(this + 9));
    *(this + 9) = 0;
  }
}
