int __usercall Actor_MagicCaster_ApplyMagicItemCost_::DispelInvis@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 - 0x5C) + 0x284))(a1 - 0x5C, 0x2F) > 0 )
    MagicTarget_RemoveEffectsFromOtherItems(a1 + 0xC, a2, 0x49564E49, a2);
  return Actor_MagicCaster_ApplyMagicItemCost_::UpdateAI_(a1 - 0x5C, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
