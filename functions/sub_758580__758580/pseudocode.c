int __thiscall sub_758580(NiRenderer *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(signed int, signed int); // eax
  int v8; // ebx
  int (__cdecl *v9)(int, int *, int, int *, int); // eax
  int result; // eax
  int v11; // edi
  void (__cdecl *v12)(int, int *, int, int *, int); // eax
  int (__cdecl *v13)(signed int, int); // eax
  int v14; // esi
  int v15; // [esp-14h] [ebp-30h]
  int v16; // [esp-14h] [ebp-30h]
  int v17; // [esp-14h] [ebp-30h]
  int v18; // [esp-14h] [ebp-30h]
  int v19; // [esp+10h] [ebp-Ch] BYREF
  int v20; // [esp+14h] [ebp-8h] BYREF
  int v21; // [esp+18h] [ebp-4h] BYREF

  v2 = a2; /*0x758586*/
  sub_7008A0(this, a2); /*0x75858e*/
  v15 = *(_DWORD *)(v2 + 0x21C); /*0x7585ab*/
  v4 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v15 + 4); /*0x7585ac*/
  v20 = 4; /*0x7585af*/
  v4(v15, &a2, 4, &v20, 1); /*0x7585b3*/
  if ( a2 ) /*0x7585bd*/
  {
    v16 = *(_DWORD *)(v2 + 0x21C); /*0x7585d2*/
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v16 + 4); /*0x7585d3*/
    v20 = 4; /*0x7585d6*/
    v5(v16, &v21, 4, &v20, 1); /*0x7585da*/
    v6 = v21; /*0x7585dc*/
    v7 = *(int (__cdecl **)(signed int, signed int))(4 * v21 + 0xB3D088); /*0x7585ea*/
    LOBYTE(v21) = byte_B3D3E8[v21]; /*0x7585f3*/
    v8 = v7(v2, a2); /*0x758604*/
    (*(void (__cdecl **)(int, signed int, int))(4 * v6 + 0xB3D410))(v8, a2, v21); /*0x75860d*/
    sub_758460(this, v8, a2, v6); /*0x75861b*/
  }
  v17 = *(_DWORD *)(v2 + 0x21C); /*0x758638*/
  v9 = *(int (__cdecl **)(int, int *, int, int *, int))(v17 + 4); /*0x758639*/
  v21 = 4; /*0x75863c*/
  result = v9(v17, &v19, 4, &v21, 1); /*0x758640*/
  if ( v19 ) /*0x75864a*/
  {
    v11 = 5; /*0x758656*/
    if ( *(_DWORD *)(v2 + 0xD8) >= 0xA010068u ) /*0x75865b*/
    {
      v18 = *(_DWORD *)(v2 + 0x21C); /*0x758670*/
      v12 = *(void (__cdecl **)(int, int *, int, int *, int))(v18 + 4); /*0x758671*/
      v21 = 4; /*0x758674*/
      v12(v18, &v20, 4, &v21, 1); /*0x758678*/
      v11 = v20; /*0x75867a*/
    }
    v13 = *(int (__cdecl **)(signed int, int))(4 * v11 + 0xB3D100); /*0x75868b*/
    LOBYTE(v21) = unk_B3D406[v11]; /*0x758694*/
    v14 = v13(v2, v19); /*0x7586a5*/
    (*(void (__cdecl **)(int, int, int))(4 * v11 + 0xB3D488))(v14, v19, v21); /*0x7586ae*/
    return sub_7584C0(this, v14, v19, v11); /*0x7586bc*/
  }
  return result; /*0x7586c1*/
}
