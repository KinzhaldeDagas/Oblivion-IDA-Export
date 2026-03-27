int __usercall MagicTarget_AddEffect_::ModifyExtraData_@<eax>(
        TESObjectREFR *a1@<ebx>,
        int a2@<ebp>,
        int a3@<esi>,
        int edi0@<edi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  double v15; // st7

  v15 = Script_AddEventToExtraScript(*(_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0x1C), &a1->member.baseExtraList, 0x2000);
  return MagicTarget_AddEffect_::GetSEFFAlwaysApplies(
           a1,
           a2,
           a3,
           edi0,
           v15,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15);
}
