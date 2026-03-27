int __thiscall sub_4FCC00(int this)
{
  *(_DWORD *)(this + 0x200) = 0;
  *(_DWORD *)(this + 0x20C) = 0;
  *(_BYTE *)(this + 0x204) = 0;
  *(_DWORD *)(this + 0x208) = 0;
  *(_DWORD *)(this + 0x210) = 0;
  _memset(this, 0, 0x200);
  return this;
}
