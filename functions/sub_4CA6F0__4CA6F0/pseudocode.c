char __thiscall sub_4CA6F0(int this)
{
  char v1; // al
  _BYTE *v3; // ecx

  v1 = *(_BYTE *)(this + 0x24);
  if ( (v1 & 1) != 0 )
    return (v1 & 8) != 0;
  v3 = *(_BYTE **)(this + 0x50);
  if ( v3 )
    return sub_4EF150(v3);
  else
    return 0;
}
