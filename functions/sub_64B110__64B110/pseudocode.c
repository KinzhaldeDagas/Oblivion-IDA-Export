int __thiscall sub_64B110(int this, _DWORD *a2)
{
  if ( a2 )
    return sub_477EC0(a2, 3);
  if ( *(_BYTE *)(this + 0xF4) )
    return *(_DWORD *)(this + 0x100);
  return *(_DWORD *)(this + 0xFC);
}
