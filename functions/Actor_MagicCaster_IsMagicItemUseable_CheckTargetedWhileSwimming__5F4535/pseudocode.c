int __usercall Actor_MagicCaster_IsMagicItemUseable_::CheckTargetedWhileSwimming@<eax>(
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
        int a15)
{
  if ( a4[0x16] && ((*(int (__thiscall **)(int))(*(_DWORD *)a4[0x16] + 0x2C0))(a4[0x16]) & 0x800) != 0 && a3 )
  {
    BYTE1(a9) = EffectItemList_HasOnTarget(a3 + 0xC);
    return Actor_MagicCaster_IsMagicItemUseable_::CheckMagickaCost(
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
             a13,
             a14,
             a15);
  }
  else
  {
    BYTE1(a9) = 0;
    return Actor_MagicCaster_IsMagicItemUseable_::CheckMagickaCost(
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
             a13,
             a14,
             a15);
  }
}
