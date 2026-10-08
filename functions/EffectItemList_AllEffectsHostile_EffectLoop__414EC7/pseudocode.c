char __usercall EffectItemList_AllEffectsHostile_::EffectLoop@<al>(int a1@<esi>)
{
  _DWORD *v1; // ecx

  v1 = *(_DWORD **)(a1 + 4); /*0x414ec7*/
  if ( !v1 || (*(_DWORD *)(v1[7] + 0x58) & 0x400000) != 0 || EffectItem_IsHostile(v1) ) /*0x414edc*/
    return EffectItemList_AllEffectsHostile_::EffectLoop_Next(a1); /*0x414ee4*/
  else
    return EffectItemList_AllEffectsHostile_::Return_False(); /*0x414ee3*/
}
