int __thiscall sub_6E7740(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // edx
  int v5; // ebx
  void (__cdecl *v6)(int, int, int, signed int *, int); // edx
  int (__cdecl *v7)(int, _DWORD *, int, signed int *, int); // edx
  int result; // eax
  int v9; // ebx
  int v10; // edi
  int (__cdecl *v11)(int, int, int, signed int *, int); // eax
  int v12; // [esp-14h] [ebp-20h]
  int v13; // [esp-14h] [ebp-20h]
  int v14; // [esp-14h] [ebp-20h]
  int v15; // [esp-10h] [ebp-1Ch]
  int v16; // [esp-10h] [ebp-1Ch]

  v2 = a2; /*0x6e7743*/
  nullsub_returnvVoid_1arg(a2); /*0x6e774a*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6e7755*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x6e7765*/
  a2 = 4; /*0x6e7766*/
  v4(v12, this + 4, 4, &a2, 1); /*0x6e776e*/
  v5 = *(this + 4); /*0x6e7770*/
  if ( v5 ) /*0x6e7777*/
  {
    v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6e7791*/
    v15 = *(this + 2); /*0x6e7794*/
    v13 = *(_DWORD *)(v2 + 0x220); /*0x6e7795*/
    a2 = 4; /*0x6e7796*/
    v6(v13, v15, 4 * v5, &a2, 1); /*0x6e779e*/
  }
  v7 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6e77a9*/
  v14 = *(_DWORD *)(v2 + 0x220); /*0x6e77b9*/
  a2 = 4; /*0x6e77ba*/
  result = v7(v14, this + 5, 4, &a2, 1); /*0x6e77c2*/
  v9 = *(this + 5); /*0x6e77c4*/
  if ( v9 ) /*0x6e77cb*/
  {
    v10 = *(_DWORD *)(v2 + 0x220); /*0x6e77d0*/
    v11 = *(int (__cdecl **)(int, int, int, signed int *, int))(v10 + 8); /*0x6e77dd*/
    v16 = *(this + 3); /*0x6e77e4*/
    a2 = 2; /*0x6e77e6*/
    return v11(v10, v16, 2 * v9, &a2, 1); /*0x6e77ee*/
  }
  return result; /*0x6e77f3*/
}
