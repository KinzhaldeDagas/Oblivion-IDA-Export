int __thiscall sub_4A5000(void *this, int a2)
{
  int v2; // esi

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x10))(this);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v2 + 0x18))(v2, a2, 2);
  return v2;
}
