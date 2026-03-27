char __thiscall sub_432890(volatile LONG *this)
{
  char result; // al

  result = sub_432350(this);
  if ( result )
    return sub_431FA0(*((volatile LONG **)ModelLoaderPtr + 6));
  return result;
}
