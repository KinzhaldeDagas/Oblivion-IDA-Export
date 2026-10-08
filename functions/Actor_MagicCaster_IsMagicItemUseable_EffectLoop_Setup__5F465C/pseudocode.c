int __userpurge Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Setup@<eax>(
        char a1@<bl>,
        int a2@<edi>,
        _DWORD *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11,
        int a12,
        int a13)
{
  if ( !a2 || a2 == 0xFFFFFFF4 ) /*0x5f4669*/
    return Actor_MagicCaster_IsMagicItemUseable_::SetFailureCode(a1, a3, a4, a5, a6, a7, a8, a9, a10, a11); /*0x5f465e*/
  else
    return Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Check_( /*0x5f466f*/
             a1,
             a2 + 0xC,
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
             a13);
}
