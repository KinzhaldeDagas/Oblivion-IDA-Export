// Verified: sorts entries ascending by selectionWeight. The same field is consumed by Oblivion's weighted random weather selector.
int __cdecl OblivionTESWeatherList_CompareSelectionWeight(
        OblivionTESWeatherWeightEntry *left,
        OblivionTESWeatherWeightEntry *right)
{
  unsigned int selectionWeight; // eax
  unsigned int v3; // ecx

  selectionWeight = left->selectionWeight; /*0x4eeb18*/
  v3 = right->selectionWeight; /*0x4eeb1b*/
  if ( selectionWeight <= v3 ) /*0x4eeb20*/
    return selectionWeight < v3; /*0x4eeb28*/
  else
    return 0xFFFFFFFF; /*0x4eeb22*/
}
