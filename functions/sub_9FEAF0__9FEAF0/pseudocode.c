char sub_9FEAF0()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x52434F43, (int)CommandCreatureEffect_Make);
  byte_B3C0A7 = result;
  return result;
}
