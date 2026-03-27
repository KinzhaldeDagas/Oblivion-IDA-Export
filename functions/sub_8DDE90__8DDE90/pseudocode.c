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

  v3 = this;
  (**(void (__thiscall ***)(int, _DWORD, int, _DWORD *))a2)(a2, 0, 8, this);
  v4 = v3[0xF];
  if ( v4 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "EntityPtrs",
      8,
      v3[0xD],
      4 * v3[0xE],
      4 * v4);
  for ( i = 0; i < v3[0xE]; ++i )
  {
    v5 = *(_DWORD **)(v3[0xD] + 4 * i);
    (*(void (__thiscall **)(int, const char *, int, _DWORD *))(*(_DWORD *)a2 + 8))(a2, "Entity", 2, v5);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 0xC))(a2, "Constraints");
    v6 = v5[0x1C];
    if ( v6 >= 0 )
      (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
        a2,
        "ConMstPtr",
        8,
        v5[0x1A],
        0x1C * v5[0x1B],
        0x1C * (v6 & 0x3FFFFFFF));
    v7 = v5[0x1F];
    if ( v7 >= 0 )
      (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
        a2,
        "ConSlvPtr",
        8,
        v5[0x1D],
        4 * v5[0x1E],
        4 * v7);
    v8 = 0;
    if ( (int)v5[0x1B] > 0 )
    {
      v9 = 0;
      do
      {
        (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(
          a2,
          "ConInstance",
          2,
          *(_DWORD *)(v9 + v5[0x1A]));
        (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(
          a2,
          "ConData",
          1,
          *(_DWORD *)(v9 + v5[0x1A] + 0xC));
        ++v8;
        v9 += 0x1C;
      }
      while ( v8 < v5[0x1B] );
      v3 = this;
    }
    v10 = v5[0x22];
    if ( v10 >= 0 )
      (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 4))(
        a2,
        "Runtime",
        4,
        v5[0x20],
        v5[0x21],
        v10 & 0x3FFFFFFF);
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2);
  }
  v11 = v3[0x19];
  if ( v11 >= 0 )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))(
      a2,
      "ActionPtrs",
      8,
      v3[0x17],
      4 * v3[0x18],
      4 * v11);
  for ( j = 0; j < v3[0x18]; ++j )
    (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(
      a2,
      "Actions",
      2,
      *(_DWORD *)(v3[0x17] + 4 * j));
  sub_925FB0((int)(v3 + 0x11), a2);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 0xC))(a2, "CollAgents");
  sub_925ED0((int)(v3 + 0x11), a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2);
}
