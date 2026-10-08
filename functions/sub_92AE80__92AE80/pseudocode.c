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

  (**(void (__thiscall ***)(int, const char *, int, _DWORD *))a2)(a2, "CvxPieceMesh", 1, this); /*0x92ae94*/
  v3 = *(this + 4); /*0x92ae96*/
  v4 = *(_DWORD *)(v3 + 0x1C); /*0x92ae99*/
  v5 = (_DWORD *)(v3 + 0x14); /*0x92ae9c*/
  if ( v4 >= 0 ) /*0x92aea1*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x92aec2*/
      a2,
      "Stream",
      1,
      *v5,
      4 * v5[1],
      4 * v4);
  v6 = *(this + 4); /*0x92aec5*/
  v7 = *(_DWORD *)(v6 + 0x28); /*0x92aec8*/
  v8 = (_DWORD *)(v6 + 0x20); /*0x92aecb*/
  if ( v7 >= 0 ) /*0x92aed0*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x92aef0*/
      a2,
      "Stream",
      1,
      *v8,
      4 * v8[1],
      4 * v7);
  v9 = *(this + 4); /*0x92aef3*/
  v10 = *(_DWORD *)(v9 + 0x10); /*0x92aef6*/
  v11 = (_DWORD *)(v9 + 8); /*0x92aef9*/
  if ( v10 >= 0 ) /*0x92aefe*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x92af1e*/
      a2,
      "Stream",
      1,
      *v11,
      4 * v11[1],
      4 * v10);
  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "DisplayMesh", 1, *(this + 5)); /*0x92af30*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2); /*0x92af3a*/
}
