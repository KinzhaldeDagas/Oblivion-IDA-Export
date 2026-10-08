int __userpurge Actor_MagicCaster_IsMagicItemUseable_::ActvEffLoop_Body@<eax>(
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
        _DWORD *a14)
{
  int v14; // eax

  if ( bl0 ) /*0x5f46be*/
    return Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Next( /*0x5f46be*/
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
             a14);
  if ( *(_DWORD *)esi0 ) /*0x5f46c0*/
  {
    v14 = *(_DWORD *)(*(_DWORD *)esi0 + 0xC); /*0x5f46c6*/
    if ( (*(_DWORD *)(*(_DWORD *)(v14 + 0x1C) + 0x58) & 0x30000) != 0 ) /*0x5f46d3*/
      bl0 = Magic_BoundItemSlotOverlap(edi0, v14); /*0x5f46df*/
  }
  return Actor_MagicCaster_IsMagicItemUseable_::ActvEffLoop_Next(
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
           (int)a14);
}
