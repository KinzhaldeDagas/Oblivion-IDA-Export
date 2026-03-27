char __thiscall sub_566400(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  _BYTE *v5; // ecx
  _DWORD *v7; // ecx

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESPackage `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3
    || TESForm_CompareAllComponentsTo(this, v3)
    || *((_BYTE *)this + 0x20) != LOBYTE(v4[1].member.flags)
    || *((_DWORD *)this + 7) != *(_DWORD *)&v4[1].member.type )
  {
    return 1;
  }
  v5 = *((_BYTE **)this + 9);
  if ( v5 )
  {
    if ( sub_569940(v5, (char *)v4[1].member.refID) )
      return 1;
  }
  else if ( v4[1].member.refID )
  {
    return 1;
  }
  v7 = *((_DWORD **)this + 0xA);
  if ( v7 )
  {
    if ( sub_569F70(v7, (char *)v4[1].member.modlist.data) )
      return 1;
  }
  else if ( v4[1].member.modlist.data )
  {
    return 1;
  }
  if ( this == (TESForm *)0xFFFFFFD4 )
  {
    if ( v4 != (TESForm *)0xFFFFFFD4 )
      return 1;
  }
  else if ( sub_569E00((_DWORD *)this + 0xB, (int)&v4[1].member.modlist.next) )
  {
    return 1;
  }
  if ( this == (TESForm *)0xFFFFFFCC )
  {
    if ( v4 != (TESForm *)0xFFFFFFCC )
      return 1;
  }
  else if ( sub_56A4B0((_DWORD *)this + 0xD, (int)&v4[2].member) )
  {
    return 1;
  }
  return 0;
}
