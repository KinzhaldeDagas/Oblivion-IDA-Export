//
// DX11 verified generic shade property: byte+18 bit0 yields RS9=2 when set,1 when clear; save flag0. Lighting30 preparation uses its own dispatch and does not call this generic slot.
int __thiscall sub_77FC00(void *this, int a2)
{
  return (*(int (__thiscall **)(void *, int, int, _DWORD))(*(_DWORD *)this + 0x64))( /*0x77fc1f*/
           this,
           9,
           ((*(_BYTE *)(a2 + 0x18) & 1) != 0) + 1,
           0);
}
