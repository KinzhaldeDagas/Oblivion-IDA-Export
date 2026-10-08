int __thiscall sub_6D2A10(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 4); /*0x6d2a10*/
  if ( result ) /*0x6d2a15*/
    return *(_DWORD *)(result + 0x10); /*0x6d2a1a*/
  return result; /*0x6d2a17*/
}
