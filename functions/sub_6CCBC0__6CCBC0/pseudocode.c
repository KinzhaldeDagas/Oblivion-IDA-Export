void __thiscall sub_6CCBC0(NiTriBasedGeomData *this, _DWORD **arg0)
{
  _DWORD **v2; // edi
  _DWORD **v4; // ebp
  unsigned __int8 i; // bl
  int v6; // ecx
  int Radius_low; // eax

  v2 = arg0; /*0x6ccbc4*/
  sub_700750(this, (int)arg0); /*0x6ccbcb*/
  NiTMap_GetAt(*v2, (int)this, &arg0); /*0x6ccbd8*/
  v4 = arg0; /*0x6ccbdd*/
  for ( i = 0; i < BYTE1(this->members.super.m_kBound.Center.x); ++i ) /*0x6ccbe3*/
  {
    v6 = *(_DWORD *)(LODWORD(this->members.super.m_kBound.Center.z) + 0x18 * i); /*0x6ccbf9*/
    if ( v6 ) /*0x6ccbfe*/
      (*(void (__thiscall **)(int, _DWORD **))(*(_DWORD *)v6 + 0x38))(v6, v2); /*0x6ccc06*/
  }
  Radius_low = LODWORD(this->members.super.m_kBound.Radius); /*0x6ccc10*/
  if ( Radius_low ) /*0x6ccc15*/
  {
    if ( NiTMap_GetAt(*v2, Radius_low, &arg0) ) /*0x6ccc1f*/
      v4[6] = arg0; /*0x6ccc2d*/
    else
      v4[6] = (_DWORD *)LODWORD(this->members.super.m_kBound.Radius); /*0x6ccc39*/
  }
}
