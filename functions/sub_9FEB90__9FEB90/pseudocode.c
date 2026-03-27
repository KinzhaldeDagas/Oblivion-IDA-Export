char sub_9FEB90()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x52414944, (int)DisintegrateArmorEffect_Make);
  byte_B3C0AD = result;
  return result;
}
