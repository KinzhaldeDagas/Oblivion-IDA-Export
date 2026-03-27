char sub_9FEDA0()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x454C4554, (int)TelekinesisEffect_Make);
  byte_B3C0E9 = result;
  return result;
}
