int __usercall MagicTarget_AddEffect_::GetSEFFAlwaysApplies@<eax>(
        TESObjectREFR *a1@<ebx>,
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
  char v16; // al

  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0x1C) + 0x98) == 0x46464553 )
  {
    st7_0 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 0x1C))(a3);
    HIBYTE(a10) = v16;
  }
  else
  {
    HIBYTE(a10) = 0;
  }
  return MagicTarget_AddEffect_::GetAlwaysApplies_PlayerOverride(
           a1,
           a2,
           a3,
           edi0,
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
