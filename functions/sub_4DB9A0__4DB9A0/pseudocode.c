bool __thiscall sub_4DB9A0(_BYTE *this)
{
  return *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x20 /*0x4db9c0*/
      && sub_4D73F0(this) != 0xFFFFFFFF;
}
