WeaponObject *__thiscall sub_5EF9B0(int this, char a2)
{
  _DWORD *v3; // eax
  NiAVObject *v4; // eax
  NiAVObject *v5; // edi
  int v6; // eax
  WeaponObject *v7; // eax
  float v9; // [esp+3Ch] [ebp+4h]

  v3 = *(_DWORD **)(this + 0x3C);
  if ( !v3 )
    return 0;
  v4 = (NiAVObject *)NiObjectNET_LookupObjectByName(v3, "Weapon");
  v5 = v4;
  if ( !v4 )
    return 0;
  if ( !a2 )
  {
    sub_435CE0(v4, 0);
    return 0;
  }
  if ( v4->members.m_spCollision
    || !(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 0x58) + 0xEC))(*(_DWORD *)(this + 0x58), 1) )
  {
    return 0;
  }
  v6 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 0x58) + 0xEC))(*(_DWORD *)(this + 0x58), 1);
  v9 = Calc_GetCombatDistance(*(float *)(*(_DWORD *)(v6 + 8) + 0x98)) - dbl_A2F920;
  v7 = (WeaponObject *)FormHeapAlloc(0x28u);
  if ( v7 )
    return WeaponObject::WeaponObject(v7, v9, *(float *)&dword_A46C30, v5, 0);
  else
    return 0;
}
