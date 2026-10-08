int __thiscall sub_929780(int *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "StorageMesh", 1, this); /*0x929794*/
  v3 = *(this + 6); /*0x929796*/
  if ( v3 >= 0 ) /*0x92979b*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x9297bc*/
      a2,
      "Vertices",
      1,
      *(this + 4),
      0x10 * *(this + 5),
      0x10 * v3);
  v4 = *(this + 9); /*0x9297bf*/
  if ( v4 >= 0 ) /*0x9297c4*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x9297eb*/
      a2,
      "Triangles",
      1,
      *(this + 7),
      0xC * *(this + 8),
      0xC * (v4 & 0x3FFFFFFF));
  v5 = *(this + 0xC); /*0x9297ee*/
  if ( v5 >= 0 ) /*0x9297f3*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 4))( /*0x92980e*/
      a2,
      "MaterialIds",
      1,
      *(this + 0xA),
      *(this + 0xB),
      v5 & 0x3FFFFFFF);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2); /*0x929818*/
}
