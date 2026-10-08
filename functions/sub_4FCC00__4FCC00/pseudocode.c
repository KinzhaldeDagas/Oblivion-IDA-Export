int __thiscall sub_4FCC00(int this)
{
  *(_DWORD *)(this + 0x200) = 0; /*0x4fcc0c*/
  *(_DWORD *)(this + 0x20C) = 0; /*0x4fcc12*/
  *(_BYTE *)(this + 0x204) = 0; /*0x4fcc18*/
  *(_DWORD *)(this + 0x208) = 0; /*0x4fcc1e*/
  *(_DWORD *)(this + 0x210) = 0; /*0x4fcc24*/
  _memset(this, 0, 0x200u); /*0x4fcc2a*/
  return this; /*0x4fcc34*/
}
