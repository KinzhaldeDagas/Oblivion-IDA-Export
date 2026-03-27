char sub_9FEAD0()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4C4D4843, (int)ChameleonEffect_Make);
  byte_B3C0A6 = result;
  return result;
}
