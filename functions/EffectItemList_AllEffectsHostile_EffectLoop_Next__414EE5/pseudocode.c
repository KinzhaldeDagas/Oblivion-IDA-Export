char __usercall EffectItemList_AllEffectsHostile_::EffectLoop_Next@<al>(int a1@<esi>)
{
  int v1; // esi
  int v2; // esi

  v1 = *(_DWORD *)(a1 + 8); /*0x414ee5*/
  if ( v1 && (v2 = v1 - 4) != 0 ) /*0x414eef*/
    return EffectItemList_AllEffectsHostile_::EffectLoop(v2); /*0x414eef*/
  else
    return EffectItemList_AllEffectsHostile_::Return_True(); /*0x414ef0*/
}
