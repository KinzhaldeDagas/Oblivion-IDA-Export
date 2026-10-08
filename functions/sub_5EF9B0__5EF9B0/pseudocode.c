WeaponObject *__thiscall sub_5EF9B0(int this, char a2)
{
  _DWORD *v3; // eax
  NiAVObject *v4; // eax
  NiAVObject *v5; // edi
  int v6; // eax
  WeaponObject *v7; // eax
  float v9; // [esp+3Ch] [ebp+4h]

  v3 = *(_DWORD **)(this + 0x3C); /*0x5ef9d6*/
  if ( !v3 ) /*0x5ef9dd*/
    return 0; /*0x5ef9dd*/
  v4 = (NiAVObject *)NiObjectNET_LookupObjectByName(v3, "Weapon"); /*0x5ef9e9*/
  v5 = v4; /*0x5ef9ee*/
  if ( !v4 ) /*0x5ef9f5*/
    return 0; /*0x5ef9f5*/
  if ( !a2 ) /*0x5ef9ff*/
  {
    sub_435CE0(v4, 0); /*0x5efabf*/
    return 0; /*0x5efac4*/
  }
  if ( v4->members.m_spCollision /*0x5efa20*/
    || !(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 0x58) + 0xEC))(*(_DWORD *)(this + 0x58), 1) )
  {
    return 0; /*0x5efa24*/
  }
  v6 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 0x58) + 0xEC))(*(_DWORD *)(this + 0x58), 1); /*0x5efa37*/
  v9 = Calc_GetCombatDistance(*(float *)(*(_DWORD *)(v6 + 8) + 0x98)) - dbl_A2F920; /*0x5efa5b*/
  v7 = (WeaponObject *)FormHeapAlloc(0x28u); /*0x5efa5f*/
  if ( v7 ) /*0x5efa71*/
    return WeaponObject::WeaponObject(v7, v9, *(float *)&dword_A46C30, v5, 0); /*0x5efa8b*/
  else
    return 0; /*0x5efaa5*/
}
