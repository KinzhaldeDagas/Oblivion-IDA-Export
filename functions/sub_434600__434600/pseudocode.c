void __thiscall sub_434600(_DWORD *this, const char *a2)
{
  int v3; // eax
  const char *v4; // ecx
  _BYTE *v5; // edx
  char v6; // al

  if ( a2 )
  {
    v3 = FormHeapAlloc(strlen(a2) + 1);
    *(this + 8) = v3;
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
