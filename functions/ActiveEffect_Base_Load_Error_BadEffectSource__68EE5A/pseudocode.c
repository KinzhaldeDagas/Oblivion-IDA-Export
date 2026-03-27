// positive sp value has been detected, the output may be wrong!
int __cdecl ActiveEffect_Base_Load_::Error_BadEffectSource()
{
  unsigned __int16 v1; // [esp-Ch] [ebp-Ch]
  unsigned __int8 v2; // [esp-8h] [ebp-8h]
  int v3; // [esp-4h] [ebp-4h]

  SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, v1);
  PrintError("Could not load active effect with spell %08X and effect index %i", v3, v2);
  return 0;
}
