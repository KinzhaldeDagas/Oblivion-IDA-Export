char sub_9FED40()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4E414552, (int)ReanimateEffect_Make);
  byte_B3C0DF = result;
  return result;
}
