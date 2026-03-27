int __usercall Actor_MagicCaster_IsMagicItemUseable_::ActvEffLoop_Body@<eax>(
        int ebp0@<ebp>,
        int esi0@<esi>,
        char bl0@<bl>,
        int edi0@<edi>,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10,
        int a11,
        char a12,
        int a13,
        int a14)
{
  int v14; // eax

  if ( bl0 )
    return Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Next(ebp0, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  if ( *(_DWORD *)esi0 )
  {
    v14 = *(_DWORD *)(*(_DWORD *)esi0 + 0xC);
    if ( (*(_DWORD *)(*(_DWORD *)(v14 + 0x1C) + 0x58) & 0x30000) != 0 )
      Magic_BoundItemSlotOverlap(edi0, v14);
  }
  return Actor_MagicCaster_IsMagicItemUseable_::ActvEffLoop_Next(
           ebp0,
           esi0,
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
