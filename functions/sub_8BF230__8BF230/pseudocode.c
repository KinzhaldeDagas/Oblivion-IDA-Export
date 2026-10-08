int __thiscall sub_8BF230(char *this, int a2)
{
  signed int v2; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  void (__cdecl *v8)(int, int, int, int *, int); // eax
  int (__cdecl *v9)(int, int, int, int *, int); // edx
  int v11; // [esp-28h] [ebp-34h]
  int v12; // [esp-14h] [ebp-20h]

  v2 = a2; /*0x8bf231*/
  sub_8A0C30(this, a2); /*0x8bf23a*/
  v4 = *((_DWORD *)this + 1); /*0x8bf23f*/
  v5 = sub_8E8040(v2); /*0x8bf243*/
  v6 = v5; /*0x8bf248*/
  if ( v5 ) /*0x8bf24f*/
  {
    if ( *(_WORD *)(v5 + 4) ) /*0x8bf251*/
      ++*(_WORD *)(v5 + 6); /*0x8bf258*/
  }
  v7 = *(_DWORD *)(v4 + 0xC); /*0x8bf25d*/
  if ( v7 ) /*0x8bf262*/
  {
    if ( *(_WORD *)(v7 + 4) ) /*0x8bf264*/
    {
      if ( !--*(_WORD *)(v7 + 6) ) /*0x8bf270*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x8bf27f*/
    }
  }
  *(_DWORD *)(v4 + 0xC) = v6; /*0x8bf281*/
  if ( *(_WORD *)(v6 + 4) ) /*0x8bf284*/
  {
    if ( !--*(_WORD *)(v6 + 6) ) /*0x8bf290*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x8bf2a1*/
  }
  v12 = *(_DWORD *)(v2 + 0x21C); /*0x8bf2ba*/
  v8 = *(void (__cdecl **)(int, int, int, int *, int))(v12 + 4); /*0x8bf2bb*/
  a2 = 4; /*0x8bf2be*/
  v8(v12, v4 + 0x10, 4, &a2, 1); /*0x8bf2c2*/
  v9 = *(int (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x8bf2ca*/
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x8bf2d9*/
  a2 = 4; /*0x8bf2da*/
  return v9(v11, v4 + 0x14, 4, &a2, 1); /*0x8bf2e3*/
}
