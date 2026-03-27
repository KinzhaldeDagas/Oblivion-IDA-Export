int *__thiscall GameSetting_ConstrAndReg(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx

  v4 = a2;
  v5 = a3;
  *(this + 1) = a2;
  *this = v5;
  if ( v4 )
  {
    if ( NiTMap_GetAt(&dword_B35574, v4, &a2) )
    {
      PrintError("Setting key '%s' already used in map.\nSetting keys must be unique.\n", (const char *)*(this + 1));
      return this;
    }
    sub_412D30(&dword_B35574, *(this + 1), (TESForm *)this);
  }
  return this;
}
