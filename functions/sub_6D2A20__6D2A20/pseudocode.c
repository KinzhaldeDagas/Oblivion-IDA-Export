int __thiscall sub_6D2A20(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 4); /*0x6d2a20*/
  if ( result ) /*0x6d2a25*/
    return *(_DWORD *)(result + 0xC); /*0x6d2a2a*/
  return result; /*0x6d2a27*/
}
