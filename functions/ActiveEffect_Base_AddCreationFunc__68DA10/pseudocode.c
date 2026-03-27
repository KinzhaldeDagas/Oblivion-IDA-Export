char __cdecl ActiveEffect_Base_AddCreationFunc(int a2, int a3)
{
  NiTMap_SetAt(&NiTMap_AECreatorFuncs, a2, a3);
  return 1;
}
