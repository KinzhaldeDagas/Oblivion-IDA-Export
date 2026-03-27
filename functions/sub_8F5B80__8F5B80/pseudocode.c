int __thiscall sub_8F5B80(int this)
{
  *(_DWORD *)(this + 0x1C) = 0xFFFFFFFF;
  *(_DWORD *)(this + 0x20) = 0xFFFFFFFF;
  *(_DWORD *)(this + 0x10) = 0;
  *(_DWORD *)(this + 0x14) = 0;
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 0x24))(*(_DWORD *)(this + 8));
}
