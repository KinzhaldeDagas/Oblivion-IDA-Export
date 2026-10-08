int __thiscall sub_8E3960(int *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ebp
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // ecx

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "3AxisSweep", 4, this); /*0x8e3975*/
  v3 = *(this + 0x12); /*0x8e3977*/
  if ( v3 >= 0 ) /*0x8e397c*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8e399d*/
      a2,
      "Nodes",
      4,
      *(this + 0x10),
      0x10 * *(this + 0x11),
      0x10 * v3);
  v4 = *(this + 0x15); /*0x8e39a0*/
  if ( v4 >= 0 ) /*0x8e39a5*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8e39c6*/
      a2,
      "Axis",
      4,
      *(this + 0x13),
      4 * *(this + 0x14),
      4 * v4);
  v5 = *(this + 0x18); /*0x8e39c9*/
  if ( v5 >= 0 ) /*0x8e39ce*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8e39ef*/
      a2,
      "Axis",
      4,
      *(this + 0x16),
      4 * *(this + 0x17),
      4 * v5);
  v6 = *(this + 0x1B); /*0x8e39f2*/
  if ( v6 >= 0 ) /*0x8e39f7*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8e3a18*/
      a2,
      "Axis",
      4,
      *(this + 0x19),
      4 * *(this + 0x1A),
      4 * v6);
  v7 = *(this + 0x1C); /*0x8e3a1b*/
  if ( v7 ) /*0x8e3a20*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 4))( /*0x8e3a37*/
      a2,
      "Markers",
      4,
      *(this + 0x1E),
      0x10 * v7,
      0);
  v8 = 0; /*0x8e3a3d*/
  if ( *(this + 0x1C) > 0 ) /*0x8e3a41*/
  {
    v9 = 0; /*0x8e3a44*/
    do /*0x8e3a7d*/
    {
      v10 = *(this + 0x1E); /*0x8e3a46*/
      v11 = *(_DWORD *)(v9 + v10 + 0xC); /*0x8e3a49*/
      v12 = (_DWORD *)(v9 + v10 + 4); /*0x8e3a4f*/
      if ( v11 >= 0 ) /*0x8e3a53*/
        (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8e3a71*/
          a2,
          "Markers",
          8,
          *v12,
          2 * v12[1],
          2 * (v11 & 0x3FFFFFFF));
      ++v8; /*0x8e3a77*/
      v9 += 0x10; /*0x8e3a78*/
    }
    while ( v8 < *(this + 0x1C) ); /*0x8e3a7d*/
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2); /*0x8e3a87*/
}
