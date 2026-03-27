int __thiscall sub_77FC30(void *this, int a2)
{
  return (*(int (__thiscall **)(void *, int, int, _DWORD))(*(_DWORD *)this + 0x64))(
           this,
           0x1D,
           *(_BYTE *)(a2 + 0x18) & 1,
           0);
}
