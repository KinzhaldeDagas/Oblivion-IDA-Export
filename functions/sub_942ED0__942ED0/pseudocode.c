int __thiscall sub_942ED0(void *this, int a2, void *a3)
{
  int *v4; // edi
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v4 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xC))(this);
  v5 = *v4;
  v6 = sub_90D1E0(a3);
  (*(void (__thiscall **)(int *, void *, int))(v5 + 8))(v4, a3, v6);
  v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 8))(v7, a2);
  v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x10))(this);
  return (*(int (__thiscall **)(int, _DWORD, void *))(*(_DWORD *)v8 + 8))(v8, *(_DWORD *)(a2 + 8), a3);
}
