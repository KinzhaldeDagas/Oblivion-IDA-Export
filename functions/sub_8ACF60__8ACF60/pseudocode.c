int __thiscall sub_8ACF60(int *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int result; // eax

  v3 = *(this + 0x1F);
  if ( v3 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Manifold",
      8,
      *(this + 0x1D),
      0x30 * *(this + 0x1E),
      0x30 * (v3 & 0x3FFFFFFF));
  v4 = *(this + 0x25);
  if ( v4 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "OverlapsPntr",
      8,
      *(this + 0x23),
      4 * *(this + 0x24),
      4 * v4);
  v5 = *(this + 0x28);
  if ( v5 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Manifold",
      8,
      *(this + 0x26),
      4 * *(this + 0x27),
      4 * v5);
  result = *(this + 0x22);
  if ( result >= 0 )
    return (*(int (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
             a2,
             "ListnrPntr",
             8,
             *(this + 0x20),
             4 * *(this + 0x21),
             4 * result);
  return result;
}
