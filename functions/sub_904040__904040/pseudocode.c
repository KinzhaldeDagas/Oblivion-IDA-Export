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

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x10, 0x1C);
  *(_DWORD *)(v4 + 8) = a4;
  *(_WORD *)(v4 + 4) = 0x10;
  *(_WORD *)(v4 + 6) = 1;
  *(_DWORD *)v4 = &off_A9BD4C;
  v5 = (*a1)->m128_i32[3];
  sub_903FA0((char *)v13, a1[2]);
  sub_8B1F70(v13, a1[2], *a1 + 2);
  v12[3] = a1;
  v12[2] = v13;
  v6 = *a3;
  v12[1] = a1[1];
  v12[0] = v5;
  v11 = v6;
  v7 = (*(int (__thiscall **)(__int32))(*(_DWORD *)v5 + 8))(v5);
  v8 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
  if ( *((_BYTE *)a3 + 0xC) )
    v9 = v11 + 0x590;
  else
    v9 = v11 + 0x190;
  *(_DWORD *)(v4 + 0xC) = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v11
                                                                             + 0x14
                                                                             * *(unsigned __int8 *)(v9 + 0x20 * v7 + v8)
                                                                             + 0x990))(
                            v12,
                            a2,
                            a3,
                            a4);
  return v4;
}
