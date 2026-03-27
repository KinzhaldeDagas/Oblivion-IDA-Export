int __usercall Actor_AttackHandling_::___Check@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  void (__thiscall *v14)(int, int, int, int, char *); // edx

  v14 = *(void (__thiscall **)(int, int, int, int, char *))(*(_DWORD *)a1 + 0x2D4);
  HIBYTE(a12) = 0;
  v14(a1, a14, a2, a11, (char *)&a12 + 3);
  return Actor_AttackHandling_::NormalWeaponCheck(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
