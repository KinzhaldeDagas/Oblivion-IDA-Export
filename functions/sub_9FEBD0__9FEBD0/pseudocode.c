char sub_9FEBD0()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4C505344, (int)DispelEffect_Make);
  byte_B3C0AF = result;
  return result;
}
