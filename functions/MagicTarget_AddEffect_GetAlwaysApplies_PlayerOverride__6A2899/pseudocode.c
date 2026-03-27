int __usercall MagicTarget_AddEffect_::GetAlwaysApplies_PlayerOverride@<eax>(
        PlayerCharacter *a1@<ebx>,
        int a2@<ebp>,
        int a3@<esi>,
        int edi0@<edi>,
        double st7_0@<st0>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        float a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  bool v16; // al

  v16 = a1 == TESDataHandler_g_PlayerRef
     && !*(_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0x10)
     && (!(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x18))(a3)
      || (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x18))(a3) == 2
      || (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x18))(a3) == 3);
  HIBYTE(a10) |= v16;
  return MagicTarget_AddEffect_::GetResistanceFactor(
           a2,
           edi0,
           a3,
           st7_0,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16);
}
