int __thiscall sub_8DBC40(int *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  (**(void (__thiscall ***)(int, _DWORD, int, int *))a2)(a2, 0, 8, this);
  v3 = *(this + 0x14);
  if ( v3 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Props",
      8,
      *(this + 0x12),
      0x14 * *(this + 0x13),
      0x14 * (v3 & 0x3FFFFFFF));
  v4 = *(this + 0xE);
  if ( v4 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "ContactPts",
      8,
      *(this + 0xC),
      0x20 * *(this + 0xD),
      0x20 * v4);
  v5 = *(this + 9);
  if ( v5 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 4))(
      a2,
      "ContactIds",
      8,
      *(this + 7),
      *(this + 8),
      v5 & 0x3FFFFFFF);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2);
}
