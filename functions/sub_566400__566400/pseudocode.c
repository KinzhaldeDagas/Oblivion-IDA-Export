char __thiscall sub_566400(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  _BYTE *v5; // ecx
  _DWORD *v7; // ecx

  v3 = (TESForm *)OblivionDynamicCast( /*0x566417*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESPackage `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x56641c*/
  if ( !v3 /*0x56643f*/
    || TESForm_CompareAllComponentsTo(this, v3)
    || *((_BYTE *)this + 0x20) != LOBYTE(v4[1].member.flags)
    || *((_DWORD *)this + 7) != *(_DWORD *)&v4[1].member.type )
  {
    return 1; /*0x56643f*/
  }
  v5 = *((_BYTE **)this + 9); /*0x566441*/
  if ( v5 ) /*0x566446*/
  {
    if ( sub_569940(v5, (char *)v4[1].member.refID) ) /*0x56644c*/
      return 1; /*0x566459*/
  }
  else if ( v4[1].member.refID ) /*0x56645c*/
  {
    return 1; /*0x56647a*/
  }
  v7 = *((_DWORD **)this + 0xA); /*0x566462*/
  if ( v7 ) /*0x566467*/
  {
    if ( sub_569F70(v7, (char *)v4[1].member.modlist.data) ) /*0x56646d*/
      return 1; /*0x566474*/
  }
  else if ( v4[1].member.modlist.data ) /*0x56647d*/
  {
    return 1; /*0x566481*/
  }
  if ( this == (TESForm *)0xFFFFFFD4 ) /*0x566488*/
  {
    if ( v4 != (TESForm *)0xFFFFFFD4 ) /*0x5664a3*/
      return 1; /*0x5664a3*/
  }
  else if ( sub_569E00((_DWORD *)this + 0xB, (int)&v4[1].member.modlist.next) ) /*0x56648e*/
  {
    return 1; /*0x56649b*/
  }
  if ( this == (TESForm *)0xFFFFFFCC ) /*0x5664aa*/
  {
    if ( v4 != (TESForm *)0xFFFFFFCC ) /*0x5664c3*/
      return 1; /*0x5664c3*/
  }
  else if ( sub_56A4B0((_DWORD *)this + 0xD, (int)&v4[2].member) ) /*0x5664b0*/
  {
    return 1; /*0x5664bd*/
  }
  return 0; /*0x566455*/
}
