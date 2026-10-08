int __usercall Actor_MagicCaster_IsMagicItemUseable_::CheckGodMode@<eax>(
        int a1@<ebx>,
        void *a2@<edi>,
        double a3@<st0>,
        _DWORD *a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  LOBYTE(a11) = 1; /*0x5f44f9*/
  HIBYTE(a7) = 1; /*0x5f44fe*/
  BYTE1(a7) = 0; /*0x5f4503*/
  BYTE2(a7) = 0; /*0x5f4508*/
  if ( (PlayerCharacter *)(a1 - 0x5C) == reference && GetGodMode() ) /*0x5f450f*/
    return Actor_MagicCaster_IsMagicItemUseable_::CheckImmuneToSilence( /*0x5f4516*/
             a2,
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
             a14);
  else
    return Actor_MagicCaster_IsMagicItemUseable_::CheckSilenced( /*0x5f4517*/
             a1,
             a1 - 0x5C,
             (int)a2,
             a3,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             *(float *)&a11,
             a12,
             a13,
             a14);
}
