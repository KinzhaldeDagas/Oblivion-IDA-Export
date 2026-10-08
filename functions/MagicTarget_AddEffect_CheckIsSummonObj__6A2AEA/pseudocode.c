int __usercall MagicTarget_AddEffect_::CheckIsSummonObj@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *a12,
        int a13)
{
  int v13; // ebx

  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x58) & 0x30000) != 0 /*0x6a2b06*/
    && (v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2)) != 0 )
  {
    return MagicTarget_AddEffect_::TargetEffectLoop_Check( /*0x6a2b07*/
             v13,
             a1,
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
             a12,
             *(float *)&a13);
  }
  else
  {
    return MagicTarget_AddEffect_::CloneActiveEffect(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13); /*0x6a2af7*/
  }
}
