char __thiscall sub_8D9A10(int this, char a2)
{
  char result; // al
  int v3; // ecx

  result = a2; /*0x8d9a10*/
  *(_BYTE *)(this + 0x18) = a2; /*0x8d9a14*/
  v3 = *(_DWORD *)(this + 0x24); /*0x8d9a17*/
  if ( v3 ) /*0x8d9a1c*/
    *(_BYTE *)(v3 + 0x10) = a2; /*0x8d9a1e*/
  return result; /*0x8d9a21*/
}
