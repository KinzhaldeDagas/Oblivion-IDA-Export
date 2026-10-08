int __cdecl sub_904040(__m128 **a1, _DWORD *a2, int *a3, int a4)
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

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x1C); /*0x904064*/
  *(_DWORD *)(v4 + 8) = a4; /*0x904066*/
  *(_WORD *)(v4 + 4) = 0x10; /*0x904069*/
  *(_WORD *)(v4 + 6) = 1; /*0x90406f*/
  *(_DWORD *)v4 = &off_A9BD4C; /*0x904075*/
  v5 = (*a1)->m128_i32[3]; /*0x90407d*/
  sub_903FA0((char *)v13, a1[2]); /*0x904088*/
  sub_8B1F70(v13, a1[2], *a1 + 2); /*0x90409b*/
  v12[3] = a1; /*0x9040a0*/
  v12[2] = v13; /*0x9040a8*/
  v6 = *a3; /*0x9040b2*/
  v12[1] = a1[1]; /*0x9040b4*/
  v12[0] = v5; /*0x9040b8*/
  v11 = v6; /*0x9040be*/
  v7 = (*(int (__thiscall **)(__int32))(*(_DWORD *)v5 + 8))(v5); /*0x9040c7*/
  v8 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2); /*0x9040d0*/
  if ( *((_BYTE *)a3 + 0xC) ) /*0x9040d3*/
    v9 = v11 + 0x590; /*0x9040de*/
  else
    v9 = v11 + 0x190; /*0x9040e6*/
  *(_DWORD *)(v4 + 0xC) = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v11 /*0x904116*/
                                                                             + 0x14
                                                                             * *(unsigned __int8 *)(v9 + 0x20 * v7 + v8)
                                                                             + 0x990))(
                            v12,
                            a2,
                            a3,
                            a4);
  return v4; /*0x904119*/
}
