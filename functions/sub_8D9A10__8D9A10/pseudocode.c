char __thiscall sub_8D9A10(int this, char a2)
{
  char result; // al
  int v3; // ecx

  result = a2;
  *(_BYTE *)(this + 0x18) = a2;
  v3 = *(_DWORD *)(this + 0x24);
  if ( v3 )
    *(_BYTE *)(v3 + 0x10) = a2;
  return result;
}
