_DWORD *__cdecl sub_904CB0(_DWORD *a1, __m128 **a2, int *a3, int a4)
{
  int v4; // esi
  __int32 v5; // ebx
  int v6; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v11; // [esp+Ch] [ebp-C4h]
  _DWORD v12[4]; // [esp+10h] [ebp-C0h] BYREF
  __m128 v13[11]; // [esp+20h] [ebp-B0h] BYREF

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x1C); /*0x904cd4*/
  *(_DWORD *)(v4 + 8) = a4; /*0x904cd6*/
  *(_WORD *)(v4 + 4) = 0x10; /*0x904cd9*/
  *(_WORD *)(v4 + 6) = 1; /*0x904cdf*/
  *(_DWORD *)v4 = &off_A9BD4C; /*0x904ce5*/
  v5 = (*a2)->m128_i32[3]; /*0x904ced*/
  sub_903FA0((char *)v13, a2[2]); /*0x904cf8*/
  sub_8B1F70(v13, a2[2], *a2 + 2); /*0x904d0b*/
  v12[3] = a2; /*0x904d10*/
  v12[2] = v13; /*0x904d18*/
  v6 = *a3; /*0x904d22*/
  v12[1] = a2[1]; /*0x904d24*/
  v12[0] = v5; /*0x904d28*/
  v11 = v6; /*0x904d2e*/
  v7 = (*(int (__thiscall **)(__int32))(*(_DWORD *)v5 + 8))(v5); /*0x904d37*/
  v8 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 8))(*a1); /*0x904d40*/
  if ( *((_BYTE *)a3 + 0xC) ) /*0x904d43*/
    v9 = v11 + 0x590; /*0x904d4e*/
  else
    v9 = v11 + 0x190; /*0x904d56*/
  *(_DWORD *)(v4 + 0xC) = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v11 /*0x904d86*/
                                                                             + 0x14
                                                                             * *(unsigned __int8 *)(v9 + 0x20 * v7 + v8)
                                                                             + 0x990))(
                            v12,
                            a1,
                            a3,
                            a4);
  *(_DWORD *)v4 = &off_A9BD8C; /*0x904d8a*/
  return (_DWORD *)v4; /*0x904d89*/
}
