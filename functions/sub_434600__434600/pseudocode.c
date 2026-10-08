// QueuedFileEntry path copy helper. Allocates and copies source path string into entry +0x20.
void __thiscall sub_434600(_DWORD *this, const char *a2)
{
  int v3; // eax
  const char *v4; // ecx
  _BYTE *v5; // edx
  char v6; // al

  if ( a2 ) /*0x43460a*/
  {
    v3 = FormHeapAlloc(strlen(a2) + 1); /*0x434620*/
    *(this + 8) = v3; /*0x434628*/
    v4 = a2; /*0x43462b*/
    v5 = (_BYTE *)v3; /*0x43462d*/
    do /*0x43463c*/
    {
      v6 = *v4; /*0x434630*/
      *v5++ = *v4++; /*0x434632*/
    }
    while ( v6 ); /*0x43463c*/
  }
}
