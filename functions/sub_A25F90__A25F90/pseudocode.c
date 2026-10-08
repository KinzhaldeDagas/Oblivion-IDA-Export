// Verified atexit cleanup: calls ActiveEffectCreatorMap_Destroy on NiTMap_AECreatorFuncs, releasing the map bucket allocation at process shutdown.
void __cdecl ActiveEffectCreatorMap_AtexitCleanup()
{
  ActiveEffectCreatorMap_Destroy(&NiTMap_AECreatorFuncs); /*0xa25f95*/
}
