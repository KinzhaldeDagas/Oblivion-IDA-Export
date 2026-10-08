char __thiscall sub_6ECA30(NiTriBasedGeomData *this, int a2)
{
  char result; // al

  result = NiTimeController_IsEqual(this, a2); /*0x6eca39*/
  if ( result ) /*0x6eca40*/
    return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&this->members.m_usTriangles + 0x2C))( /*0x6eca58*/
             *(_DWORD *)&this->members.m_usTriangles,
             *(_DWORD *)(a2 + 0x40)) != 0;
  return result; /*0x6eca42*/
}
