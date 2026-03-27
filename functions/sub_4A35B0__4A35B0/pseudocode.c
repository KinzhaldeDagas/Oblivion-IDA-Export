char __thiscall sub_4A35B0(_BYTE *this, int a2)
{
  unsigned __int8 v3; // al

  if ( !a2 )
    return 0;
  *(this + 4) = *(_BYTE *)(a2 + 4);
  v3 = *(_BYTE *)(a2 + 5);
  if ( v3 <= 0x64u )
    *(this + 6) = v3;
  return 1;
}
