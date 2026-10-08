int __thiscall sub_6DA290(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 6); /*0x6da290*/
  if ( result ) /*0x6da295*/
    return *(_DWORD *)(result + 0x10); /*0x6da29a*/
  return result; /*0x6da297*/
}
