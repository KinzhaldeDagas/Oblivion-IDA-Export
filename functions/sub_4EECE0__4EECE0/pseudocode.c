// Verified: performs weighted TESWeather selection using each entry's selectionWeight, random roll modulo sum, and cumulative ranges. First zero-weight entry may be chosen because of the initial 0xFFFFFFFF accumulator; later zero-weight entries are skipped.
TESWeather *__thiscall OblivionTESWeatherList_SelectWeightedWeather(OblivionTESWeatherList *list)
{
  OblivionTESWeatherList *v1; // esi
  unsigned int v2; // edi
  OblivionTESWeatherList *v3; // eax
  unsigned int selectionWeight; // ecx
  unsigned int v5; // edx
  unsigned int v6; // edi
  unsigned int v7; // ebx
  OblivionTESWeatherWeightEntry *firstEntry; // ecx
  unsigned int v9; // eax

  v1 = list; /*0x4eece1*/
  v2 = 0; /*0x4eece4*/
  v3 = list; /*0x4eece8*/
  if ( !list ) /*0x4eecea*/
    return 0; /*0x4eecea*/
  do /*0x4eed04*/
  {                                             // Exterior fog source: first pass walks weather/weight list entries.
    if ( v3->firstEntry ) /*0x4eecf0*/
      selectionWeight = v3->firstEntry->selectionWeight;// Exterior fog source: add entry weight into total weather selection weight. /*0x4eecf6*/
    else
      selectionWeight = 0; /*0x4eecfb*/
    v3 = (OblivionTESWeatherList *)v3->overflowNodes; /*0x4eecfd*/
    v2 += selectionWeight; /*0x4eed00*/
  }
  while ( v3 ); /*0x4eed04*/
  if ( !v2 ) /*0x4eed08*/
    return 0; /*0x4eed08*/
  v5 = Game_RandomLargeInteger(0) % v2;         // Exterior fog source: random roll modulo total weather weight. /*0x4eed13*/
  v6 = 0; /*0x4eed18*/
  v7 = 0xFFFFFFFF; /*0x4eed1a*/
  while ( 1 ) /*0x4eed20*/
  {
    firstEntry = v1->firstEntry;                // Exterior fog source: second pass walks list to find the selected weighted bucket. /*0x4eed20*/
    if ( v1->firstEntry ) /*0x4eed20*/
      break; /*0x4eed20*/
LABEL_12:
    v1 = (OblivionTESWeatherList *)v1->overflowNodes; /*0x4eed35*/
    if ( !v1 ) /*0x4eed3a*/
      goto LABEL_13; /*0x4eed3a*/
  }
  v9 = firstEntry->selectionWeight; /*0x4eed26*/
  v7 += v9; /*0x4eed29*/
  if ( v6 > v5 || v5 > v7 ) /*0x4eed31*/
  {
    v6 += v9; /*0x4eed33*/
    goto LABEL_12; /*0x4eed33*/
  }
LABEL_13:
  if ( firstEntry ) /*0x4eed3f*/
    return firstEntry->weather;                 // Exterior fog source: return selected TESWeather pointer, or null if list/weights failed. /*0x4eed45*/
  return 0; /*0x4eed43*/
}
