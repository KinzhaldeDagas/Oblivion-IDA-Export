// Equality requires equal NiTimeController base state and null-symmetric interpolator state; two non-null interpolators compare through their virtual IsEqual slot (+0x2C).
bool __thiscall NiSingleInterpController_IsEqual(NiTriBasedGeomData *this, int a2)
{
  int v4; // ecx

  if ( !NiInterpController_IsEqual(this, a2) ) /*0x6ce3a9*/
    return 0; /*0x6ce3b0*/
  v4 = *(_DWORD *)&this->members.super.m_bVertexStreamLocked; /*0x6ce3b9*/
  if ( v4 ) /*0x6ce3be*/
    return *(_DWORD *)(a2 + 0x3C) /*0x6ce3b6*/
        && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x3C));
  return !*(_DWORD *)(a2 + 0x3C); /*0x6ce3ca*/
}
