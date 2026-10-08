int __thiscall sub_89FD10(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int result; // eax
  int v5; // esi

  sub_89D8E0(this, a2); /*0x89fd19*/
  if ( this && (v3 = *(this + 2)) != 0 ) /*0x89fd27*/
    result = *(_DWORD *)(v3 + 0x18); /*0x89fd29*/
  else
    result = 0; /*0x89fd2e*/
  a2[1] = result; /*0x89fd32*/
  if ( this && (v5 = *(this + 2)) != 0 ) /*0x89fd3c*/
  {
    a2[2] = *(_DWORD *)(v5 + 0x1C); /*0x89fd41*/
  }
  else
  {
    a2[2] = 0; /*0x89fd4b*/
    return 0; /*0x89fd49*/
  }
  return result; /*0x89fd44*/
}
