// Verified registry-clear helper, called during WinMain shutdown after EffectSettingCollection_Clear; it clears NiTMap_AECreatorFuncs. The map also has a separate atexit destructor that frees its bucket array.
void __cdecl ActiveEffect_Base_ClearCreateFuncTable()
{
  NiTMap_Clear(&NiTMap_AECreatorFuncs); /*0x68da35*/
}
