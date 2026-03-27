int __thiscall sub_8BF910(char *this, int a2)
{
  _DWORD *v2; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  void (__cdecl *v8)(int, int, int, int *, int); // eax
  void (__cdecl *v9)(int, int, int, int *, int); // eax
  int (__cdecl *v10)(int, int, int, int *, int); // edx
  int v12; // [esp-3Ch] [ebp-48h]
  int v13; // [esp-28h] [ebp-34h]
  int v14; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2;
  sub_8A0C30(this, a2);
  v4 = *((_DWORD *)this + 1);
  v5 = sub_8E8040((signed int)v2);
  v6 = v5;
  if ( v5 )
  {
    if ( *(_WORD *)(v5 + 4) )
      ++*(_WORD *)(v5 + 6);
  }
  v7 = *(_DWORD *)(v4 + 0xC);
  if ( v7 )
  {
    if ( *(_WORD *)(v7 + 4) )
    {
      if ( !--*(_WORD *)(v7 + 6) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
  }
  *(_DWORD *)(v4 + 0xC) = v6;
  if ( *(_WORD *)(v6 + 4) )
  {
    if ( !--*(_WORD *)(v6 + 6) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  v14 = v2[0x87];
  v8 = *(void (__cdecl **)(int, int, int, int *, int))(v14 + 4);
  a2 = 4;
  v8(v14, v4 + 0x14, 4, &a2, 1);
  v13 = v2[0x87];
  v9 = *(void (__cdecl **)(int, int, int, int *, int))(v13 + 4);
  a2 = 1;
  v9(v13, v4 + 0x19, 1, &a2, 1);
  v10 = *(int (__cdecl **)(int, int, int, int *, int))(v2[0x87] + 4);
  v12 = v2[0x87];
  a2 = 1;
  return v10(v12, v4 + 0x1A, 1, &a2, 1);
}
