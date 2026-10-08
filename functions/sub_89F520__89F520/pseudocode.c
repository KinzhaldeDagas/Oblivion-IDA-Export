int __thiscall sub_89F520(_DWORD *this, char a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  int v6; // edx
  int v7; // edx

  if ( this && (v2 = *(this + 2)) != 0 && (v3 = v2 + 0x14) != 0 ) /*0x89f52e*/
    v4 = *(_DWORD *)(v3 + 0x1C); /*0x89f530*/
  else
    v4 = 0; /*0x89f535*/
  if ( a2 ) /*0x89f53c*/
    v5 = v4 & 0xFFFFBFFF; /*0x89f545*/
  else
    v5 = v4 | 0x4000; /*0x89f53e*/
  if ( this ) /*0x89f54c*/
  {
    v6 = *(this + 2); /*0x89f54e*/
    if ( v6 ) /*0x89f553*/
    {
      v7 = v6 + 0x14; /*0x89f555*/
      if ( v7 ) /*0x89f558*/
        *(_DWORD *)(v7 + 0x1C) = v5; /*0x89f55a*/
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 0x80))(this); /*0x89f567*/
}
