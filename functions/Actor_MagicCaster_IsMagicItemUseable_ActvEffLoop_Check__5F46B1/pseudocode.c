int __userpurge Actor_MagicCaster_IsMagicItemUseable_::ActvEffLoop_Check@<eax>(
        int ebp0@<ebp>,
        int esi0@<esi>,
        char bl0@<bl>,
        int edi0@<edi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        int a13,
        int a14)
{
  if ( *(_DWORD *)(esi0 + 4) || *(_DWORD *)esi0 ) /*0x5f46b7*/
    return Actor_MagicCaster_IsMagicItemUseable_::ActvEffLoop_Body( /*0x5f46bb*/
             ebp0,
             esi0,
             bl0,
             edi0,
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
    return Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Next( /*0x5f46ba*/
             ebp0,
             bl0,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             (_DWORD *)a14);
}
