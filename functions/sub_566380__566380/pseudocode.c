void __thiscall sub_566380(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESPackage `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, v3);
    TESPackage_SetLocation(this, (char *)v4[1].member.refID);
    TESPackage_SetTarget(this, (unsigned __int8 *)v4[1].member.modlist.data);
    sub_565F80(this, (UInt32)&v4[1].member.modlist.next);
    *((_DWORD *)this + 7) = *(_DWORD *)&v4[1].member.type;
    sub_566010((void **)&this->vtbl, &v4[2].member);
    TESPackage_SetType_((TESPackage *)this, SLOBYTE(v4[1].member.flags));
    *((_DWORD *)this + 6) = v4[1].vtbl;
  }
}
