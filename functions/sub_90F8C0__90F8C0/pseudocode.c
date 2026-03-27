int __thiscall sub_90F8C0(int *this, int a2)
{
  int v3; // eax
  int i; // ebx

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "CachngPhantm", 2, this);
  sub_8DE790(this, a2);
  v3 = *(this + 0x4A);
  if ( v3 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "AgentPtr",
      8,
      *(this + 0x48),
      8 * *(this + 0x49),
      8 * v3);
  for ( i = 0; i < *(this + 0x49); ++i )
    (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(
      a2,
      "Agent",
      8,
      *(_DWORD *)(*(this + 0x48) + 8 * i));
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2);
}
