char NiTMap_AECreatorFuncs_AddLast()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x504D4156, (int)VampirismEffect_Make);
  byte_B3C0EB = result;
  return result;
}
