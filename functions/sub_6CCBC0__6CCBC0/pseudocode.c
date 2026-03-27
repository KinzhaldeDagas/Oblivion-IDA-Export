void __thiscall sub_6CCBC0(NiTriBasedGeomData *this, _DWORD **arg0)
{
  _DWORD **v2; // edi
  int v4; // ebp
  unsigned __int8 i; // bl
  int v6; // ecx
  int Radius_low; // eax

  v2 = arg0;
  sub_700750(this, (int)arg0);
  NiTMap_GetAt(*v2, (int)this, &arg0);
  v4 = (int)arg0;
  for ( i = 0; i < BYTE1(this->members.super.m_kBound.Center.x); ++i )
  {
    v6 = *(_DWORD *)(LODWORD(this->members.super.m_kBound.Center.z) + 0x18 * i);
    if ( v6 )
      (*(void (__thiscall **)(int, _DWORD **))(*(_DWORD *)v6 + 0x38))(v6, v2);
  }
  Radius_low = LODWORD(this->members.super.m_kBound.Radius);
  if ( Radius_low )
  {
    if ( NiTMap_GetAt(*v2, Radius_low, &arg0) )
      *(_DWORD *)(v4 + 0x18) = arg0;
    else
      *(float *)(v4 + 0x18) = this->members.super.m_kBound.Radius;
  }
}
