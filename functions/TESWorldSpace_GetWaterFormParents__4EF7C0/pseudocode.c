TESWaterForm *__fastcall TESWorldSpace::GetWaterFormParents(TESWorldSpace *a1)
{
  TESWorldSpace *i; // eax
  TESWaterForm *result; // eax

  for ( i = a1->parentWorldspace; i; i = i->parentWorldspace )
    a1 = i;
  result = a1->WaterForm;
  if ( !result )
    return TESDataHandler_g_DefaultWater;
  return result;
}
