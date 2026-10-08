char __thiscall sub_4C8520(TESObjectCELL **this, void *a2)
{
  TESObjectCELL **v7; // esi
  _BYTE *v8; // eax
  _BYTE *v9; // ebx
  int i; // ebp
  int v11; // eax
  TESObjectCELL *v12; // ecx
  char v15; // [esp+10h] [ebp+4h]

  v7 = this; /*0x4c8533*/
  v8 = OblivionDynamicCast( /*0x4c853c*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectLAND `RTTI Type Descriptor',
         0);
  v9 = v8; /*0x4c8541*/
  if ( v8 ) /*0x4c8548*/
  {
    if ( (v8[0x1C] & 8) != 0 ) /*0x4c8552*/
    {
      v15 = 1; /*0x4c8554*/
    }
    else
    {
      v15 = 0; /*0x4c855f*/
      sub_4C79A0((int)v8, 0); /*0x4c8564*/
    }
    v7[8] = *((TESObjectCELL **)v9 + 8); /*0x4c856d*/
    sub_4C64E0(v7); /*0x4c8573*/
    for ( i = 0; i < 0x10; i += 4 ) /*0x4c8578*/
    {
      qmemcpy( /*0x4c8597*/
        *(void **)(*(_DWORD *)&v7[9]->members.super.type + i),
        *(const void **)(*(_DWORD *)(*((_DWORD *)v9 + 9) + 4) + i),
        0xD8Cu);
      qmemcpy( /*0x4c85b4*/
        *(void **)(this[9]->members.super.flags + i),
        *(const void **)(*(_DWORD *)(*((_DWORD *)v9 + 9) + 8) + i),
        0xD8Cu);
      memcpy( /*0x4c85cf*/
        *(void **)(this[9]->members.super.refID + i),
        *(const void **)(*(_DWORD *)(*((_DWORD *)v9 + 9) + 0xC) + i),
        0x1210u);
      qmemcpy( /*0x4c85ef*/
        *(void **)((char *)&this[9]->members.super.modlist.data->errorState + i),
        *(const void **)(*(_DWORD *)(*((_DWORD *)v9 + 9) + 0x10) + i),
        0x121u);
      memcpy( /*0x4c860b*/
        **(void ***)((char *)&this[9]->members.land + i),
        **(const void ***)(*((_DWORD *)v9 + 9) + i + 0x40),
        0x2420u);
      qmemcpy( /*0x4c8627*/
        *(void **)&this[9]->members.extraData.members.m_presenceBitfield[i],
        *(const void **)(*((_DWORD *)v9 + 9) + i + 0x30),
        0x20u);
      v7 = this; /*0x4c8633*/
      *(_DWORD *)((char *)&this[9]->members.fullName.name.m_dataLen + i) = *(_DWORD *)(*((_DWORD *)v9 + 9) + i + 0x20); /*0x4c8637*/
    }
    this[7] = *((TESObjectCELL **)v9 + 7); /*0x4c8652*/
    v11 = *((_DWORD *)v9 + 9); /*0x4c8655*/
    v12 = this[9]; /*0x4c865b*/
    v12->members.fullName.vtbl = *(BaseFormComponentVtbl **)(v11 + 0x18); /*0x4c865e*/
    v8 = *(_BYTE **)(v11 + 0x1C); /*0x4c8661*/
    v12->members.fullName.name.m_data = v8; /*0x4c8665*/
    if ( !v15 ) /*0x4c8669*/
      LOBYTE(v8) = sub_4C6280((unsigned int **)v9); /*0x4c866d*/
    this[7] = (TESObjectCELL *)((unsigned int)this[7] | 8); /*0x4c8672*/
  }
  return (char)v8; /*0x4c8676*/
}
