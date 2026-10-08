int __thiscall sub_8BF910(char *this, int a2)
{
  signed int v2; // ebx
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

  v2 = a2; /*0x8bf911*/
  sub_8A0C30(this, a2); /*0x8bf91a*/
  v4 = *((_DWORD *)this + 1); /*0x8bf91f*/
  v5 = sub_8E8040(v2); /*0x8bf923*/
  v6 = v5; /*0x8bf928*/
  if ( v5 ) /*0x8bf92f*/
  {
    if ( *(_WORD *)(v5 + 4) ) /*0x8bf931*/
      ++*(_WORD *)(v5 + 6); /*0x8bf938*/
  }
  v7 = *(_DWORD *)(v4 + 0xC); /*0x8bf93d*/
  if ( v7 ) /*0x8bf942*/
  {
    if ( *(_WORD *)(v7 + 4) ) /*0x8bf944*/
    {
      if ( !--*(_WORD *)(v7 + 6) ) /*0x8bf950*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x8bf95f*/
    }
  }
  *(_DWORD *)(v4 + 0xC) = v6; /*0x8bf961*/
  if ( *(_WORD *)(v6 + 4) ) /*0x8bf964*/
  {
    if ( !--*(_WORD *)(v6 + 6) ) /*0x8bf970*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x8bf981*/
  }
  v14 = *(_DWORD *)(v2 + 0x21C); /*0x8bf996*/
  v8 = *(void (__cdecl **)(int, int, int, int *, int))(v14 + 4); /*0x8bf997*/
  a2 = 4; /*0x8bf99a*/
  v8(v14, v4 + 0x14, 4, &a2, 1); /*0x8bf9a2*/
  v13 = *(_DWORD *)(v2 + 0x21C); /*0x8bf9ba*/
  v9 = *(void (__cdecl **)(int, int, int, int *, int))(v13 + 4); /*0x8bf9bb*/
  a2 = 1; /*0x8bf9be*/
  v9(v13, v4 + 0x19, 1, &a2, 1); /*0x8bf9c2*/
  v10 = *(int (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x8bf9ca*/
  v12 = *(_DWORD *)(v2 + 0x21C); /*0x8bf9d8*/
  a2 = 1; /*0x8bf9d9*/
  return v10(v12, v4 + 0x1A, 1, &a2, 1); /*0x8bf9e2*/
}
