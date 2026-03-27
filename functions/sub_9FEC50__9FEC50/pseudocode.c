char sub_9FEC50()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4B434F4C, (int)LockEffect_Make);
  byte_B3C0B9 = result;
  return result;
}
