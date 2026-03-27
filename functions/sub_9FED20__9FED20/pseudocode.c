char sub_9FED20()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x41524150, (int)ParalysisEffect_Make);
  byte_B3C0DE = result;
  return result;
}
