int __thiscall sub_914980(int this, int a2)
{
  *(_OWORD *)a2 = *(_OWORD *)(this + 0x10); /*0x914988*/
  *(_DWORD *)(a2 + 0xC) = *(_DWORD *)(this + 0xC); /*0x91498e*/
  *(_OWORD *)(a2 + 0x10) = *(_OWORD *)(this + 0x20); /*0x914995*/
  *(_DWORD *)(a2 + 0x1C) = *(_DWORD *)(this + 0xC); /*0x9149a0*/
  *(_OWORD *)(a2 + 0x20) = *(_OWORD *)(this + 0x30); /*0x9149aa*/
  *(_DWORD *)(a2 + 0x2C) = *(_DWORD *)(this + 0xC); /*0x9149b0*/
  return a2; /*0x9149b4*/
}
