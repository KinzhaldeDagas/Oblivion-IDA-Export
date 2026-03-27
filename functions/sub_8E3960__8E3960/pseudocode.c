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

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "3AxisSweep", 4, this);
  v3 = *(this + 0x12);
  if ( v3 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Nodes",
      4,
      *(this + 0x10),
      0x10 * *(this + 0x11),
      0x10 * v3);
  v4 = *(this + 0x15);
  if ( v4 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Axis",
      4,
      *(this + 0x13),
      4 * *(this + 0x14),
      4 * v4);
  v5 = *(this + 0x18);
  if ( v5 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Axis",
      4,
      *(this + 0x16),
      4 * *(this + 0x17),
      4 * v5);
  v6 = *(this + 0x1B);
  if ( v6 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Axis",
      4,
      *(this + 0x19),
      4 * *(this + 0x1A),
      4 * v6);
  v7 = *(this + 0x1C);
  if ( v7 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 4))(
      a2,
      "Markers",
      4,
      *(this + 0x1E),
      0x10 * v7,
      0);
  v8 = 0;
  if ( *(this + 0x1C) > 0 )
  {
    v9 = 0;
    do
    {
      v10 = *(this + 0x1E);
      v11 = *(_DWORD *)(v9 + v10 + 0xC);
      v12 = (_DWORD *)(v9 + v10 + 4);
      if ( v11 >= 0 )
        (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
          a2,
          "Markers",
          8,
          *v12,
          2 * v12[1],
          2 * (v11 & 0x3FFFFFFF));
      ++v8;
      v9 += 0x10;
    }
    while ( v8 < *(this + 0x1C) );
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2);
}
