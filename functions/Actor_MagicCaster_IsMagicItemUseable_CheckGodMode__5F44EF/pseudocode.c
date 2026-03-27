int __usercall Actor_MagicCaster_IsMagicItemUseable_::CheckGodMode@<eax>(
        int a1@<ebx>,
        void *a2@<edi>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  LOBYTE(a10) = 1;
  HIBYTE(a6) = 1;
  BYTE1(a6) = 0;
  BYTE2(a6) = 0;
  if ( (PlayerCharacter *)(a1 - 0x5C) == TESDataHandler_g_PlayerRef && GetGodMode() )
    return Actor_MagicCaster_IsMagicItemUseable_::CheckImmuneToSilence(a2, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  else
    return Actor_MagicCaster_IsMagicItemUseable_::CheckSilenced(
             a1,
             a1 - 0x5C,
             (int)a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             *(float *)&a10,
             a11,
             a12,
             a13);
}
