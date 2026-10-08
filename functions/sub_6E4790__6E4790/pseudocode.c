int __thiscall sub_6E4790(NiRenderer *this, signed int a2)
{
  signed int v2; // esi
  int (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  int result; // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  int v7; // ebx
  int v8; // eax
  int v9; // [esp-14h] [ebp-28h]
  int v10; // [esp-14h] [ebp-28h]
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x6e4795*/
  sub_7008A0(this, a2); /*0x6e479d*/
  v9 = *(_DWORD *)(v2 + 0x21C); /*0x6e47ba*/
  v4 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v9 + 4); /*0x6e47bb*/
  v11 = 4; /*0x6e47be*/
  result = v4(v9, &a2, 4, &v11, 1); /*0x6e47c2*/
  if ( a2 ) /*0x6e47cc*/
  {
    v10 = *(_DWORD *)(v2 + 0x21C); /*0x6e47e1*/
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 4); /*0x6e47e2*/
    v11 = 4; /*0x6e47e5*/
    v6(v10, &v12, 4, &v11, 1); /*0x6e47e9*/
    v7 = v12; /*0x6e47ef*/
    v8 = (*(int (__cdecl **)(signed int, signed int))(4 * v12 + 0xB3D0D0))(v2, a2); /*0x6e47fc*/
    return sub_6E4640(this, v8, a2, v7); /*0x6e480a*/
  }
  return result; /*0x6e480f*/
}
