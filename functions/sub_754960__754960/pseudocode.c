bool __thiscall sub_754960(NiTriBasedGeomData *this, int a2)
{
  if ( !sub_75EED0(this, a2) ) /*0x754969*/
    return 0; /*0x754970*/
  if ( *(_DWORD *)&this->members.super.format ) /*0x754979*/
  {
    if ( !*(_DWORD *)(a2 + 0x2C) /*0x7549a4*/
      || *(_DWORD *)(a2 + 0x2C)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&this->members.super.format + 0x2C))(
            *(_DWORD *)&this->members.super.format,
            *(_DWORD *)(a2 + 0x2C)) )
    {
      return 0; /*0x7549a8*/
    }
  }
  else if ( *(_DWORD *)(a2 + 0x2C) ) /*0x75498a*/
  {
    return 0; /*0x754976*/
  }
  return *(float *)(a2 + 0x30) == *(float *)&this->members.super.m_ucKeepFlags; /*0x7549b7*/
}
