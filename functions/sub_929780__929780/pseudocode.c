int __thiscall sub_929780(int *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "StorageMesh", 1, this);
  v3 = *(this + 6);
  if ( v3 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Vertices",
      1,
      *(this + 4),
      0x10 * *(this + 5),
      0x10 * v3);
  v4 = *(this + 9);
  if ( v4 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Triangles",
      1,
      *(this + 7),
      0xC * *(this + 8),
      0xC * (v4 & 0x3FFFFFFF));
  v5 = *(this + 0xC);
  if ( v5 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 4))(
      a2,
      "MaterialIds",
      1,
      *(this + 0xA),
      *(this + 0xB),
      v5 & 0x3FFFFFFF);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2);
}
