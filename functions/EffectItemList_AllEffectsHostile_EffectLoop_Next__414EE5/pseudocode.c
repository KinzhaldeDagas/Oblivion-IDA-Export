char __usercall EffectItemList_AllEffectsHostile_::EffectLoop_Next@<al>(int a1@<esi>)
{
  int v1; // esi
  int v2; // esi

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 && (v2 = v1 - 4) != 0 )
    return EffectItemList_AllEffectsHostile_::EffectLoop(v2);
  else
    return EffectItemList_AllEffectsHostile_::Return_True();
}
