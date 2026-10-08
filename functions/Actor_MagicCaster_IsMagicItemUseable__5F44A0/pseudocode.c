char __userpurge Actor_MagicCaster_IsMagicItemUseable@<al>(
        int a1@<ecx>,
        double a2@<st0>,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10,
        int a11,
        int a12)
{
  if ( !a5 ) /*0x5f44b2*/
    return Actor_MagicCaster_IsMagicItemUseable_::GetMagicItem(a1, a2, a3, a4, 0, a6, a7, a8, a9, a10, a11, a12); /*0x5f44b2*/
  *a5 = 0; /*0x5f44b4*/
  return Actor_MagicCaster_IsMagicItemUseable_::GetMagicItem(a1, a2, a3, a4, (int)a5, a6, a7, a8, a9, a10, a11, a12);
}
