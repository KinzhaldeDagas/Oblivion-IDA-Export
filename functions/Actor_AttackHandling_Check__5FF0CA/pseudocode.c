int __usercall Actor_AttackHandling_::___Check@<eax>(
        int *a1@<edi>,
        TESObjectREFR *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _BYTE *a11,
        int a12,
        int a13,
        int a14)
{
  int (__thiscall *v14)(int *, int, TESObjectREFR *, _BYTE *, char *); // edx
  char v15; // al

  v14 = *(int (__thiscall **)(int *, int, TESObjectREFR *, _BYTE *, char *))(*a1 + 0x2D4); /*0x5ff0d4*/
  HIBYTE(a12) = 0; /*0x5ff0e4*/
  v15 = v14(a1, a14, a2, a11, (char *)&a12 + 3); /*0x5ff0e9*/
  return Actor_AttackHandling_::NormalWeaponCheck(
           a1,
           a2,
           v15 == 0,
           a11,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           (int)a11,
           a12,
           a13);
}
