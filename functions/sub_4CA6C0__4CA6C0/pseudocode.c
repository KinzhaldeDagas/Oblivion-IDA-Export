char __thiscall sub_4CA6C0(int this)
{
  char v1; // al
  bool v2; // dl
  char v3; // al
  _BYTE *v5; // ecx

  v1 = *(_BYTE *)(this + 0x24);
  v2 = (v1 & 4) != 0;
  v3 = v1 & 1;
  if ( v3 )
    v2 = !v2;
  if ( v2 )
    return 1;
  if ( v3 )
    return 0;
  v5 = *(_BYTE **)(this + 0x50);
  if ( !v5 )
    return 0;
  return sub_4EF140(v5);
}
