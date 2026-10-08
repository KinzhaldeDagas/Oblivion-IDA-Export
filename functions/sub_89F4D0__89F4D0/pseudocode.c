int __thiscall sub_89F4D0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // edx

  if ( this && (v2 = *(this + 2)) != 0 && (v3 = v2 + 0x14) != 0 ) /*0x89f4de*/
    v4 = *(_DWORD *)(v3 + 0x1C); /*0x89f4e0*/
  else
    LOWORD(v4) = 0; /*0x89f4e5*/
  v5 = (a2 << 0x10) | (unsigned __int16)v4; /*0x89f4f1*/
  if ( this ) /*0x89f4f5*/
  {
    v6 = *(this + 2); /*0x89f4f7*/
    if ( v6 ) /*0x89f4fc*/
    {
      v7 = v6 + 0x14; /*0x89f4fe*/
      if ( v7 ) /*0x89f501*/
        *(_DWORD *)(v7 + 0x1C) = v5; /*0x89f503*/
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 0x80))(this); /*0x89f510*/
}
