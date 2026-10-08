bool __thiscall sub_96DDA0(NiTriBasedGeomData *this, _DWORD *a2)
{
  NiRTTI *v3; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // edi

  if ( !sub_711D20(this, (int)a2) ) /*0x96dda9*/
    return 0; /*0x96dda9*/
  if ( !a2 ) /*0x96ddb4*/
    return 0; /*0x96ddb4*/
  v3 = (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*a2 + 4))(a2); /*0x96ddbd*/
  if ( !v3 ) /*0x96ddc1*/
    return 0; /*0x96ddc1*/
  while ( v3 != &stru_BA9AC8 ) /*0x96ddc8*/
  {
    v3 = v3->parent; /*0x96ddca*/
    if ( !v3 ) /*0x96ddcf*/
      return 0; /*0x96ddcf*/
  }
  if ( (void *)a2[0xA] != this->members.super.m_pkTexture || (NiColorAlpha *)a2[9] != this->members.super.m_pkColor ) /*0x96dde6*/
    return 0; /*0x96dde6*/
  v5 = a2[0xB]; /*0x96dde8*/
  if ( !v5 || (v6 = *(_DWORD *)&this->members.super.format) == 0 ) /*0x96ddf4*/
    return v5 == *(_DWORD *)&this->members.super.format; /*0x96ddd5*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0xC))(v5); /*0x96ddff*/
  return v7 == (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0xC))(v6); /*0x96de0a*/
}
