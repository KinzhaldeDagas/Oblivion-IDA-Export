int __cdecl sub_95DAB0(
        float a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // eax

  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0xC))(a2);
  return (*(int (__cdecl **)(_DWORD, int, int, int, int, int, int, int, int, int, int, int))(dword_BA9AAC + 4 * v12))(
           LODWORD(a1),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
