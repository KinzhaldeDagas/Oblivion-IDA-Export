char NiTMap_AECreatorFuncs_AddFirst()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4D4C4143, (int)CalmEffect_Make);
  byte_B3C0A5 = result;
  return result;
}
