bool __thiscall sub_6E0410(NiTriBasedGeomData *this, int a2)
{
  int v4; // eax

  if ( !NiTimeController_IsEqual(this, a2) ) /*0x6e0419*/
    return 0; /*0x6e0420*/
  v4 = *(_DWORD *)&this->members.m_usTriangles; /*0x6e0429*/
  if ( v4 ) /*0x6e042e*/
    return *(_DWORD *)(a2 + 0x40) /*0x6e0426*/
        && (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 0x2C))(*(_DWORD *)(a2 + 0x40));
  return !*(_DWORD *)(a2 + 0x40); /*0x6e043a*/
}
