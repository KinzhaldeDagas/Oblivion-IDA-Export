char sub_9FEC10()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x49564E49, (int)InvisibilityEffect_Make);
  byte_B3C0B1 = result;
  return result;
}
