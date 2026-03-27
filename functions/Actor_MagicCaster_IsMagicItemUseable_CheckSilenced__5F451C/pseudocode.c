int __usercall Actor_MagicCaster_IsMagicItemUseable_::CheckSilenced@<eax>(
        int a1@<ebx>,
        int ebp0@<ebp>,
        int edi0@<edi>,
        double st7_0@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        float a11,
        int a12,
        int a13,
        int a14)
{
  BYTE2(a7) = (*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 - 0x5C) + 0x284))(a1 - 0x5C, 0x31) > 0;
  return Actor_MagicCaster_IsMagicItemUseable_::CheckTargetedWhileSwimming(
           a1,
           ebp0,
           edi0,
           (int *)(a1 - 0x5C),
           st7_0,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14);
}
