int __thiscall sub_8F5B80(int this)
{
  *(_DWORD *)(this + 0x1C) = 0xFFFFFFFF; /*0x8f5b83*/
  *(_DWORD *)(this + 0x20) = 0xFFFFFFFF; /*0x8f5b86*/
  *(_DWORD *)(this + 0x10) = 0; /*0x8f5b8b*/
  *(_DWORD *)(this + 0x14) = 0; /*0x8f5b8e*/
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 0x24))(*(_DWORD *)(this + 8));
}
