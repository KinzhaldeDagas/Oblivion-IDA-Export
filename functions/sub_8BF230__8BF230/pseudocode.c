int __thiscall sub_8BF230(char *this, int a2)
{
  _DWORD *v2; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  void (__cdecl *v8)(int, int, int, int *, int); // eax
  int (__cdecl *v9)(int, int, int, int *, int); // edx
  int v11; // [esp-28h] [ebp-34h]
  int v12; // [esp-14h] [ebp-20h]

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
  v12 = v2[0x87];
  v8 = *(void (__cdecl **)(int, int, int, int *, int))(v12 + 4);
  a2 = 4;
  v8(v12, v4 + 0x10, 4, &a2, 1);
  v9 = *(int (__cdecl **)(int, int, int, int *, int))(v2[0x87] + 4);
  v11 = v2[0x87];
  a2 = 4;
  return v9(v11, v4 + 0x14, 4, &a2, 1);
}
