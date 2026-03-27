int __usercall Actor_MagicCaster_IsMagicItemUseable_::CheckMagickaCost@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        int *a4@<esi>,
        double a5@<st0>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        float a12,
        int a13,
        int a14,
        int BaseCalcAVi)
{
  void (__thiscall *v15)(int); // edx
  int v16; // edi
  double v17; // st7
  double v18; // st6
  int v20; // [esp+20h] [ebp+1Ch]

  v15 = **(void (__thiscall ***)(int))(a3 + 0xC);
  v16 = a3 + 0xC;
  v15(v16);
  *(float *)&v20 = a5;
  if ( (_BYTE)BaseCalcAVi )
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi(a4, a1, v16, (int)a4, 9);
    v17 = (double)BaseCalcAVi;
  }
  else
  {
    a14 = (*(int (__thiscall **)(int *, int))(*a4 + 0x284))(a4, 9);
    v17 = (double)a14;
  }
  v18 = *(float *)&v20;
  LOBYTE(v20) = 1;
  if ( v18 > v17 )
    LOBYTE(v20) = 0;
  return Actor_MagicCaster_IsMagicItemUseable_::CheckMasteryLevel(
           a1,
           a2,
           v16,
           a4,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           v20,
           a13,
           a14,
           BaseCalcAVi);
}
