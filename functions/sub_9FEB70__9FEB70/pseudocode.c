char sub_9FEB70()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x54435444, (int)DetectLifeEffect_Make);
  byte_B3C0AC = result;
  return result;
}
