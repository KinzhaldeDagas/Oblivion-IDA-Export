int __thiscall sub_89D8E0(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int result; // eax

  if ( this && (v2 = *(this + 2)) != 0 ) /*0x89d8e9*/
  {
    result = *(_DWORD *)(v2 + 0x10); /*0x89d8eb*/
    *a2 = result; /*0x89d8f2*/
  }
  else
  {
    *a2 = 0; /*0x89d8fd*/
    return 0; /*0x89d8fb*/
  }
  return result; /*0x89d8f4*/
}
