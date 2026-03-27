int __thiscall sub_899DE0(int *this, int a2)
{
  int i; // ebx
  int j; // ebx
  int v5; // eax
  int k; // ebx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "hkWorld", 2, this);
  for ( i = *(this + 0xF) - 1; i >= 0; --i )
    (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(
      a2,
      "Active",
      8,
      *(_DWORD *)(*(this + 0xE) + 4 * i));
  for ( j = *(this + 0x12) - 1; j >= 0; --j )
    (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(
      a2,
      "Inactive",
      8,
      *(_DWORD *)(*(this + 0x11) + 4 * j));
  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "Fixed", 8, *(this + 0xC));
  v5 = *(this + 0x30);
  if ( v5 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "PhantomPtrs",
      4,
      *(this + 0x2E),
      4 * *(this + 0x2F),
      4 * v5);
  for ( k = 0; k < *(this + 0x2F); ++k )
    (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(
      a2,
      "Phantoms",
      2,
      *(_DWORD *)(*(this + 0x2E) + 4 * k));
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 0xC))(a2, "Internal");
  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "Simulation", 4, *(this + 2));
  v7 = *(this + 0x16);
  if ( v7 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "DirtyIslPtr",
      8,
      *(this + 0x14),
      4 * *(this + 0x15),
      4 * v7);
  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "MaintnceMgr", 4, *(this + 0x17));
  (*(void (__thiscall **)(int, const char *, int, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 4))(
    a2,
    "OpQueue",
    4,
    *(this + 0x20),
    0x28,
    0);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 0xC))(a2, "OpQueue");
  v8 = (_DWORD *)*(this + 0x20);
  v9 = v8[2];
  if ( v9 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "Operations",
      8,
      *v8,
      0x14 * v8[1],
      0x14 * (v9 & 0x3FFFFFFF));
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 0xC))(a2, "Collide");
  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "Broadphase", 4, *(this + 0x19));
  (*(void (__thiscall **)(int, const char *, int, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 4))(
    a2,
    "BpDispatch",
    4,
    *(this + 0x1A),
    0x104,
    0);
  (*(void (__thiscall **)(int, const char *, int, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 4))(
    a2,
    "BpDispatch",
    4,
    *(this + 0x1C),
    0xC,
    0);
  (*(void (__thiscall **)(int, const char *, int, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 4))(
    a2,
    "BpDispatch",
    4,
    *(this + 0x1B),
    8,
    0);
  (*(void (__thiscall **)(int, const char *, int, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 4))(
    a2,
    "CollInput",
    4,
    *(this + 0x1D),
    0x2C,
    0);
  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "Filter", 1, *(this + 0x1E));
  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "Dispatcher", 4, *(this + 0x1F));
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 0xC))(a2, "Listeners");
  v10 = *(this + 0x36);
  if ( v10 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "EntLisPtr",
      4,
      *(this + 0x34),
      4 * *(this + 0x35),
      4 * v10);
  v11 = *(this + 0x39);
  if ( v11 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "PhantLisPtr",
      4,
      *(this + 0x37),
      4 * *(this + 0x38),
      4 * v11);
  v12 = *(this + 0x3C);
  if ( v12 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "ConstrLisPtr",
      4,
      *(this + 0x3A),
      4 * *(this + 0x3B),
      4 * v12);
  v13 = *(this + 0x3F);
  if ( v13 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "WldDelLisPtr",
      4,
      *(this + 0x3D),
      4 * *(this + 0x3E),
      4 * v13);
  v14 = *(this + 0x42);
  if ( v14 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "IslActLisPtr",
      4,
      *(this + 0x40),
      4 * *(this + 0x41),
      4 * v14);
  v15 = *(this + 0x45);
  if ( v15 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "PstSimLisPtr",
      4,
      *(this + 0x43),
      4 * *(this + 0x44),
      4 * v15);
  v16 = *(this + 0x48);
  if ( v16 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "PstIntLisPtr",
      4,
      *(this + 0x46),
      4 * *(this + 0x47),
      4 * v16);
  v17 = *(this + 0x4B);
  if ( v17 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "PstColLisPtr",
      4,
      *(this + 0x49),
      4 * *(this + 0x4A),
      4 * v17);
  v18 = *(this + 0x4E);
  if ( v18 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "PstIntLisPtr",
      4,
      *(this + 0x4C),
      4 * *(this + 0x4D),
      4 * v18);
  v19 = *(this + 0x54);
  if ( v19 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "CollLisPtr",
      4,
      *(this + 0x52),
      4 * *(this + 0x53),
      4 * v19);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2);
}
