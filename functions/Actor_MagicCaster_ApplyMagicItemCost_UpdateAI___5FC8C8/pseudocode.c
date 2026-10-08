int __usercall Actor_MagicCaster_ApplyMagicItemCost_::UpdateAI_@<eax>(
        int a1@<ebp>,
        void (__thiscall ***a2)(_DWORD)@<esi>,
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
  unsigned int *v11; // eax

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x330))(a1) ) /*0x5fc8d3*/
  {
    v11 = (unsigned int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x330))(a1); /*0x5fc8e5*/
    CombatController_ApplyMagicItemCosts__(v11, (int)a2); /*0x5fc8e9*/
  }
  return Actor_MagicCaster_ApplyMagicItemCost_::GetMagickaCost(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
