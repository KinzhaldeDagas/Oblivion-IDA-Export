int __thiscall sub_89D610(void *this, int a2, _DWORD **a3)
{
  int v4; // eax

  sub_700770(this, a2, a3); /*0x89d61e*/
  v4 = (*(int (__thiscall **)(void *, _DWORD ***))(*(_DWORD *)this + 0x74))(this, &a3); /*0x89d62f*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x70))(a2, v4); /*0x89d639*/
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x64))(this, 1); /*0x89d646*/
}
