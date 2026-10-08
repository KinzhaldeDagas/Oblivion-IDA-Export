void __thiscall sub_566380(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi

  v3 = (TESForm *)OblivionDynamicCast( /*0x566397*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESPackage `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x56639c*/
  if ( v3 ) /*0x5663a3*/
  {
    TESForm_CopyAllComponentsFrom(this, v3); /*0x5663a8*/
    TESPackage_SetLocation(this, (char *)v4[1].member.refID); /*0x5663b3*/
    TESPackage_SetTarget(this, (unsigned __int8 *)v4[1].member.modlist.data); /*0x5663be*/
    sub_565F80(this, (UInt32)&v4[1].member.modlist.next); /*0x5663c9*/
    *((_DWORD *)this + 7) = *(_DWORD *)&v4[1].member.type; /*0x5663d4*/
    sub_566010((void **)&this->vtbl, (BSSimpleList_VoidPtr::NodeVoid *)&v4[2].member); /*0x5663da*/
    TESPackage_SetType_((TESPackage *)this, SLOBYTE(v4[1].member.flags)); /*0x5663e6*/
    *((_DWORD *)this + 6) = v4[1].vtbl; /*0x5663ee*/
  }
}
