char __thiscall sub_5D4760(_DWORD *this)
{
  int v2; // esi
  char v3; // bl
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = 0; /*0x5d4768*/
  v3 = 0; /*0x5d476e*/
  EffectItemList_GetItemByIndex2((char *)(*(this + 0xA) + 0x78), 0); /*0x5d4770*/
  if ( v4 ) /*0x5d4777*/
  {
    do /*0x5d47a5*/
    {
      EffectItemList_GetItemByIndex2((char *)(*(this + 0xA) + 0x78), v2); /*0x5d4787*/
      if ( !*(_DWORD *)(v5 + 0x10) ) /*0x5d478c*/
        v3 = 1; /*0x5d4792*/
      EffectItemList_GetItemByIndex2((char *)(*(this + 0xA) + 0x78), ++v2); /*0x5d479e*/
    }
    while ( v6 ); /*0x5d47a5*/
  }
  return v3; /*0x5d47a7*/
}
