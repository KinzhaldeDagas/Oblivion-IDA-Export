char sub_9FEB50()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4F4D4544, (int)DemoralizeEffect_Make);
  byte_B3C0AA = result;
  return result;
}
