float *__thiscall GameSetting_ConstrAndReg_float(float *this, int a2, float a3)
{
  int v4; // eax

  v4 = a2;
  *this = a3;
  *((_DWORD *)this + 1) = v4;
  if ( v4 )
  {
    if ( NiTMap_GetAt(&dword_B35574, v4, &a2) )
    {
      PrintError("Setting key '%s' already used in map.\nSetting keys must be unique.\n", *((const char **)this + 1));
      return this;
    }
    sub_412D30(&dword_B35574, *((_DWORD *)this + 1), (TESForm *)this);
  }
  return this;
}
