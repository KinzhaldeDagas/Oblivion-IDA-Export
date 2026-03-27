void __thiscall sub_6FDF10(unsigned int *this, const char *a2)
{
  int v3; // eax
  const char *v4; // ecx
  _BYTE *v5; // edx
  char v6; // al

  FormHeapFree(*(this + 2));
  *(this + 2) = 0;
  if ( a2 )
  {
    v3 = FormHeapAlloc(strlen(a2) + 1);
    *(this + 2) = v3;
    if ( v3 )
    {
      v4 = a2;
      v5 = (_BYTE *)v3;
      do
      {
        v6 = *v4;
        *v5++ = *v4++;
      }
      while ( v6 );
    }
  }
}
