int __cdecl sub_95D9B0(float a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // ebx
  int (__cdecl *v11)(_DWORD, int, int, int, int, int, int, int, int, int); // eax
  int v13; // ebx
  int v14; // eax

  v10 = 6 * (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0xC))(a2); /*0x95d9ce*/
  v11 = *(int (__cdecl **)(_DWORD, int, int, int, int, int, int, int, int, int))(unk_BA9AA4 /*0x95d9da*/
                                                                               + 4
                                                                               * (v10
                                                                                + (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0xC))(a4)));
  if ( v11 ) /*0x95d9df*/
    return v11(LODWORD(a1), a2, a3, a4, a5, a6, a7, a8, a9, a10); /*0x95da0e*/
  v13 = 6 * (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0xC))(a4); /*0x95da2a*/
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0xC))(a2); /*0x95da2c*/
  return (*(int (__cdecl **)(_DWORD, int, int, int, int, int, int, int, int, int))(unk_BA9AA4 + 4 * (v13 + v14)))( /*0x95da13*/
           LODWORD(a1),
           a4,
           a5,
           a2,
           a3,
           a6,
           a7,
           a8,
           a10,
           a9);
}
