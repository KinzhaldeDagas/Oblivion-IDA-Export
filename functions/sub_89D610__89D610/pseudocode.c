int __thiscall sub_89D610(void *this, int a2, _DWORD **a3)
{
  int v4; // eax

  sub_700770(this, a2, a3);
  v4 = (*(int (__thiscall **)(void *, _DWORD ***))(*(_DWORD *)this + 0x74))(this, &a3);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x70))(a2, v4);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x64))(this, 1);
}
