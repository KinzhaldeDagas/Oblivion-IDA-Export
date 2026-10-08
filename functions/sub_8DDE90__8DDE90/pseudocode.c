int __thiscall sub_8DDE90(_DWORD *this, int a2)
{
  _DWORD *v3; // ebx
  int v4; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // ebp
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int j; // edi
  int i; // [esp+84h] [ebp+4h]

  v3 = this; /*0x8dde9a*/
  (**(void (__thiscall ***)(int, _DWORD, int, _DWORD *))a2)(a2, 0, 8, this); /*0x8ddea7*/
  v4 = v3[0xF]; /*0x8ddea9*/
  if ( v4 >= 0 ) /*0x8ddeae*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8ddecf*/
      a2,
      "EntityPtrs",
      8,
      v3[0xD],
      4 * v3[0xE],
      4 * v4);
  for ( i = 0; i < v3[0xE]; ++i ) /*0x8ddedf*/
  {
    v5 = *(_DWORD **)(v3[0xD] + 4 * i); /*0x8ddeed*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD *))(*(_DWORD *)a2 + 8))(a2, "Entity", 2, v5); /*0x8ddefc*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 0xC))(a2, "Constraints"); /*0x8ddf08*/
    v6 = v5[0x1C]; /*0x8ddf0b*/
    if ( v6 >= 0 ) /*0x8ddf10*/
      (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8ddf31*/
        a2,
        "ConMstPtr",
        8,
        v5[0x1A],
        0x1C * v5[0x1B],
        0x1C * (v6 & 0x3FFFFFFF));
    v7 = v5[0x1F]; /*0x8ddf34*/
    if ( v7 >= 0 ) /*0x8ddf39*/
      (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8ddf5a*/
        a2,
        "ConSlvPtr",
        8,
        v5[0x1D],
        4 * v5[0x1E],
        4 * v7);
    v8 = 0; /*0x8ddf60*/
    if ( (int)v5[0x1B] > 0 ) /*0x8ddf64*/
    {
      v9 = 0; /*0x8ddf66*/
      do /*0x8ddf9c*/
      {
        (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))( /*0x8ddf7a*/
          a2,
          "ConInstance",
          2,
          *(_DWORD *)(v9 + v5[0x1A]));
        (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))( /*0x8ddf90*/
          a2,
          "ConData",
          1,
          *(_DWORD *)(v9 + v5[0x1A] + 0xC));
        ++v8; /*0x8ddf96*/
        v9 += 0x1C; /*0x8ddf97*/
      }
      while ( v8 < v5[0x1B] ); /*0x8ddf9c*/
      v3 = this; /*0x8ddf9e*/
    }
    v10 = v5[0x22]; /*0x8ddfa2*/
    if ( v10 >= 0 ) /*0x8ddfaa*/
      (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 4))( /*0x8ddfcb*/
        a2,
        "Runtime",
        4,
        v5[0x20],
        v5[0x21],
        v10 & 0x3FFFFFFF);
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2); /*0x8ddfd2*/
  }
  v11 = v3[0x19]; /*0x8ddfea*/
  if ( v11 >= 0 ) /*0x8ddfef*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8de010*/
      a2,
      "ActionPtrs",
      8,
      v3[0x17],
      4 * v3[0x18],
      4 * v11);
  for ( j = 0; j < v3[0x18]; ++j ) /*0x8de01a*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))( /*0x8de032*/
      a2,
      "Actions",
      2,
      *(_DWORD *)(v3[0x17] + 4 * j));
  sub_925FB0((int)(v3 + 0x11), a2); /*0x8de042*/
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 0xC))(a2, "CollAgents"); /*0x8de053*/
  sub_925ED0((int)(v3 + 0x11), a2); /*0x8de058*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2); /*0x8de064*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2); /*0x8de06e*/
}
