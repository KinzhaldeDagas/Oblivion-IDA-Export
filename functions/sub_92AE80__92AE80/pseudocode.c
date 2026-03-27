int __thiscall sub_92AE80(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // ecx

  (**(void (__thiscall ***)(int, const char *, int, _DWORD *))a2)(a2, "CvxPieceMesh", 1, this);
  v3 = *(this + 4);
  v4 = *(_DWORD *)(v3 + 0x1C);
  v5 = (_DWORD *)(v3 + 0x14);
  if ( v4 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Stream",
      1,
      *v5,
      4 * v5[1],
      4 * v4);
  v6 = *(this + 4);
  v7 = *(_DWORD *)(v6 + 0x28);
  v8 = (_DWORD *)(v6 + 0x20);
  if ( v7 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Stream",
      1,
      *v8,
      4 * v8[1],
      4 * v7);
  v9 = *(this + 4);
  v10 = *(_DWORD *)(v9 + 0x10);
  v11 = (_DWORD *)(v9 + 8);
  if ( v10 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Stream",
      1,
      *v11,
      4 * v11[1],
      4 * v10);
  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "DisplayMesh", 1, *(this + 5));
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2);
}
