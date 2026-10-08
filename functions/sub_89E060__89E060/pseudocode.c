int __thiscall sub_89E060(_DWORD *this, _DWORD *a2)
{
  int result; // eax
  int v4; // esi

  result = sub_89D8E0(this, a2); /*0x89e069*/
  if ( this && (v4 = *(this + 2)) != 0 ) /*0x89e077*/
  {
    a2[1] = *(_DWORD *)(v4 + 0x18); /*0x89e07c*/
  }
  else
  {
    a2[1] = 0; /*0x89e086*/
    return 0; /*0x89e084*/
  }
  return result; /*0x89e07f*/
}
