int __thiscall sub_8E8930(int *this, int a2)
{
  int v3; // eax
  int i; // ebx

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "ListShape", 1, this);
  v3 = *(this + 6);
  if ( v3 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "ChildPtrs",
      1,
      *(this + 4),
      8 * *(this + 5),
      8 * v3);
  for ( i = 0; i < *(this + 5); ++i )
    (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(
      a2,
      "Child",
      1,
      *(_DWORD *)(*(this + 4) + 8 * i));
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2);
}
