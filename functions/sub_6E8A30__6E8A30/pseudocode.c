int __thiscall sub_6E8A30(NiRenderer *this, signed int a2)
{
  signed int v2; // ebx
  int (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  int v5; // esi
  int result; // eax
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  int v8; // ebx
  int v9; // [esp-14h] [ebp-28h]
  int v10; // [esp-14h] [ebp-28h]
  signed int v11; // [esp-4h] [ebp-18h]
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x6e8a34*/
  sub_7008A0(this, a2); /*0x6e8a3d*/
  v9 = *(_DWORD *)(v2 + 0x21C); /*0x6e8a56*/
  v4 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v9 + 4); /*0x6e8a57*/
  v5 = 5; /*0x6e8a5a*/
  v12 = 4; /*0x6e8a5f*/
  result = v4(v9, &a2, 4, &v12, 1); /*0x6e8a67*/
  if ( a2 ) /*0x6e8a71*/
  {
    if ( *(_DWORD *)(v2 + 0xD8) >= 0xA010068u ) /*0x6e8a7d*/
    {
      v10 = *(_DWORD *)(v2 + 0x21C); /*0x6e8a93*/
      v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 4); /*0x6e8a94*/
      v12 = 4; /*0x6e8a97*/
      v7(v10, &v13, 4, &v12, 1); /*0x6e8a9f*/
      v5 = v13; /*0x6e8aa1*/
    }
    v11 = a2; /*0x6e8ab2*/
    LOBYTE(this->members.pad014[0]) = unk_B3D406[v5]; /*0x6e8ab3*/
    v8 = (*(int (__cdecl **)(signed int, signed int))(4 * v5 + 0xB3D100))(v2, v11); /*0x6e8acb*/
    (*(void (__cdecl **)(int, signed int, _DWORD))(4 * v5 + 0xB3D488))(v8, a2, LOBYTE(this->members.pad014[0])); /*0x6e8ad4*/
    return sub_6E88C0(this, v8, a2, v5); /*0x6e8ae2*/
  }
  return result; /*0x6e8ae7*/
}
