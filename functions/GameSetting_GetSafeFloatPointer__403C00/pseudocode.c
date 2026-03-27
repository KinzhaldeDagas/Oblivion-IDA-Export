int *__thiscall GameSetting_GetSafeFloatPointer(int *this)
{
  int *result; // eax

  result = this;
  if ( !this )
  {
    *(float *)&dword_B35464 = 0.0;
    return &dword_B35464;
  }
  return result;
}
