bool __thiscall sub_6E2C40(const char **this, int a2)
{
  bool result; // al

  result = sub_6ECF50(this, a2); /*0x6e2c49*/
  if ( result ) /*0x6e2c50*/
    return *(this + 0x12) == *(const char **)(a2 + 0x48); /*0x6e2c5e*/
  return result; /*0x6e2c52*/
}
