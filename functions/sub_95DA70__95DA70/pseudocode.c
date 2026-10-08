int __cdecl sub_95DA70(float a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax

  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0xC))(a2); /*0x95da7c*/
  return (*(int (__cdecl **)(_DWORD, int, int, int, int, int, int))(unk_BA9AA8 + 4 * v7))( /*0x95daae*/
           LODWORD(a1),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
