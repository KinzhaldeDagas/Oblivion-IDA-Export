char sub_9FEC30()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x5448474C, (int)LightEffect_Make);
  byte_B3C0B8 = result;
  return result;
}
