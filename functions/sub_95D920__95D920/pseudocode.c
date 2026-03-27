int __cdecl sub_95D920(float a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int (__cdecl *v6)(_DWORD, int, int, int, int); // eax
  int v8; // ebx
  int v9; // eax

  v5 = 6 * (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0xC))(a2);
  v6 = *(int (__cdecl **)(_DWORD, int, int, int, int))(dword_BA9AA0
                                                     + 4 * (v5 + (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0xC))(a4)));
  if ( v6 )
    return v6(LODWORD(a1), a2, a3, a4, a5);
  v8 = 6 * (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0xC))(a4);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0xC))(a2);
  return (*(int (__cdecl **)(_DWORD, int, int, int, int))(dword_BA9AA0 + 4 * (v8 + v9)))(LODWORD(a1), a4, a5, a2, a3);
}
