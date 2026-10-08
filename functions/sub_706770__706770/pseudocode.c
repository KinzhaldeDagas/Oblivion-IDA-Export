int __thiscall sub_706770(char *this, signed int a2)
{
  signed int v2; // esi
  int (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  char *v5; // edi
  int result; // eax
  unsigned int v7; // eax
  void (__cdecl *v8)(int, int *, int, signed int *, int); // edx
  int v9; // esi
  int (__cdecl *v10)(int, int *, int, signed int *, int); // edx
  int v11; // [esp-14h] [ebp-24h]
  int v12; // [esp-14h] [ebp-24h]
  int v13; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x706774*/
  sub_700A80((int)this, (int)this, (_DWORD *)a2); /*0x70677c*/
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x706787*/
  v5 = this + 0x18; /*0x706793*/
  v11 = *(_DWORD *)(v2 + 0x220); /*0x706797*/
  a2 = 2; /*0x706798*/
  result = v4(v11, v5, 2, &a2, 1); /*0x7067a0*/
  if ( *(_DWORD *)(v2 + 0xD8) < 0x14010002u ) /*0x7067af*/
  {
    v7 = *(unsigned __int16 *)v5; /*0x7067b1*/
    v13 = (v7 >> 4) & 3; /*0x7067c6*/
    v14 = (v7 >> 3) & 1; /*0x7067d2*/
    v8 = *(void (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x7067dc*/
    v12 = *(_DWORD *)(v2 + 0x220); /*0x7067e5*/
    a2 = 4; /*0x7067e6*/
    v8(v12, &v13, 4, &a2, 1); /*0x7067ea*/
    v9 = *(_DWORD *)(v2 + 0x220); /*0x7067ec*/
    v10 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v9 + 8); /*0x7067f2*/
    a2 = 4; /*0x706803*/
    return v10(v9, &v14, 4, &a2, 1); /*0x706807*/
  }
  return result; /*0x70680c*/
}
