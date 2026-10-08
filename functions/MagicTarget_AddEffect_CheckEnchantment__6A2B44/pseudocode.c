int __usercall MagicTarget_AddEffect_::CheckEnchantment@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int esi0@<esi>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        void *a13,
        int a14)
{
  int v14; // eax
  int v16; // eax

  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)esi0 + 0x18))(esi0); /*0x6a2b4b*/
  if ( v14 == 6 ) /*0x6a2b50*/
  {
    v16 = *(_DWORD *)(a1 + 0x30); /*0x6a2b5c*/
    if ( v16 && *(_BYTE *)(v16 + 4) == 0x15 ) /*0x6a2b67*/
      return MagicTarget_AddEffect_::CloneActiveEffect(a1, a2, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14); /*0x6a2b67*/
  }
  else if ( (unsigned int)(v14 - 7) <= 1 ) /*0x6a2b58*/
  {
    return MagicTarget_AddEffect_::CloneActiveEffect(a1, a2, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14); /*0x6a2b5a*/
  }
  return MagicTarget_AddEffect_::RemoveDuplicate(a1, a2, a6, a7, a8, a9, a10, a11, a12, a13, *(float *)&a14);
}
