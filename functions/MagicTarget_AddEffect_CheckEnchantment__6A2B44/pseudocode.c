int __usercall MagicTarget_AddEffect_::CheckEnchantment@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int esi0@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        void *a11,
        float a12)
{
  int v12; // eax
  int v14; // eax

  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)esi0 + 0x18))(esi0);
  if ( v12 == 6 )
  {
    v14 = *(_DWORD *)(a1 + 0x30);
    if ( v14 && *(_BYTE *)(v14 + 4) == 0x15 )
      return MagicTarget_AddEffect_::CloneActiveEffect(a1, a2, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  }
  else if ( (unsigned int)(v12 - 7) <= 1 )
  {
    return MagicTarget_AddEffect_::CloneActiveEffect(a1, a2, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  }
  return MagicTarget_AddEffect_::RemoveDuplicate(a1, a2, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
