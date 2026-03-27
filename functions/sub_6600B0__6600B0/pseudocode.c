int __thiscall sub_6600B0(int this)
{
  int result; // eax

  if ( *(_BYTE *)(this + 0x588) )
    return *(_DWORD *)(this + 0x104);
  result = *(_DWORD *)(this + 0x5C8);
  if ( !result )
    return *(_DWORD *)(this + 0x104);
  return result;
}
