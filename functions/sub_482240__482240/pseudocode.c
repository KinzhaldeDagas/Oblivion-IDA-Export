int __thiscall sub_482240(int this, int a2, int a3)
{
  int result; // eax

  result = a3 + a2 * *(_DWORD *)(this + 0xC); /*0x482248*/
  *(_DWORD *)(*(_DWORD *)(this + 0x10) + 8 * result) = 0; /*0x48224f*/
  *(_BYTE *)(this + 0x20) = 0; /*0x482256*/
  return result; /*0x48225a*/
}
