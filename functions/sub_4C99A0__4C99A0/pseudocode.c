int __thiscall sub_4C99A0(int this)
{
  int v1; // eax

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 && (v1 = *(_DWORD *)(this + 0x3C)) != 0 )
    return *(_DWORD *)(v1 + 0x18);
  else
    return 0;
}
