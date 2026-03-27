bool __thiscall sub_96DDA0(NiTriBasedGeomData *this, _DWORD *a2)
{
  int v3; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // edi

  if ( !sub_711D20(this, (int)a2) )
    return 0;
  if ( !a2 )
    return 0;
  v3 = (*(int (__thiscall **)(_DWORD *))(*a2 + 4))(a2);
  if ( !v3 )
    return 0;
  while ( (char *)v3 != dword_BA9AC8 )
  {
    v3 = *(_DWORD *)(v3 + 4);
    if ( !v3 )
      return 0;
  }
  if ( (void *)a2[0xA] != this->members.super.m_pkTexture || (NiColorAlpha *)a2[9] != this->members.super.m_pkColor )
    return 0;
  v5 = a2[0xB];
  if ( !v5 || (v6 = *(_DWORD *)&this->members.super.format) == 0 )
    return v5 == *(_DWORD *)&this->members.super.format;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0xC))(v5);
  return v7 == (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0xC))(v6);
}
