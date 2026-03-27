char sub_9FED80()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x47445553, (int)SunDamageEffect_Make);
  byte_B3C0E8 = result;
  return result;
}
