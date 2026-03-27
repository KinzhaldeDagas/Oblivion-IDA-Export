char __userpurge sub_4C8520@<al>(
        TESObjectCELL **a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6@<edi>,
        void *a7)
{
  TESObjectCELL **v7; // esi
  _BYTE *v8; // eax
  _BYTE *v9; // ebx
  int i; // ebp
  int v11; // eax
  TESObjectCELL *v12; // ecx
  size_t v14; // [esp-18h] [ebp-24h]
  size_t v15; // [esp-Ch] [ebp-18h]
  char v17; // [esp+10h] [ebp+4h]

  v7 = a1;
  v8 = OblivionDynamicCast(
         a7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectLAND `RTTI Type Descriptor',
         0);
  v9 = v8;
  if ( v8 )
  {
    if ( (v8[0x1C] & 8) != 0 )
    {
      v17 = 1;
    }
    else
    {
      v17 = 0;
      sub_4C79A0((int)v8, a2, a3, a4, a5, 0);
    }
    v7[8] = *((TESObjectCELL **)v9 + 8);
    HIDWORD(v15) = a6;
    sub_4C64E0(v7);
    for ( i = 0; i < 0x10; i += 4 )
    {
      qmemcpy(
        *(void **)(*(_DWORD *)&v7[9]->members.super.type + i),
        *(const void **)(*(_DWORD *)(*((_DWORD *)v9 + 9) + 4) + i),
        0xD8Cu);
      qmemcpy(
        *(void **)(a1[9]->members.super.flags + i),
        *(const void **)(*(_DWORD *)(*((_DWORD *)v9 + 9) + 8) + i),
        0xD8Cu);
      LODWORD(v15) = 0x1210;
      memcpy(
        *(void **)(a1[9]->members.super.refID + i),
        *(const void **)(*(_DWORD *)(*((_DWORD *)v9 + 9) + 0xC) + i),
        v15);
      qmemcpy(
        *(void **)((char *)&a1[9]->members.super.modlist.data->errorState + i),
        *(const void **)(*(_DWORD *)(*((_DWORD *)v9 + 9) + 0x10) + i),
        0x121u);
      LODWORD(v14) = 0x2420;
      memcpy(**(void ***)((char *)&a1[9]->members.land + i), **(const void ***)(*((_DWORD *)v9 + 9) + i + 0x40), v14);
      qmemcpy(
        *(void **)&a1[9]->members.extraData.members.m_presenceBitfield[i],
        *(const void **)(*((_DWORD *)v9 + 9) + i + 0x30),
        0x20u);
      v7 = a1;
      *(_DWORD *)((char *)&a1[9]->members.fullName.name.m_dataLen + i) = *(_DWORD *)(*((_DWORD *)v9 + 9) + i + 0x20);
    }
    a1[7] = *((TESObjectCELL **)v9 + 7);
    v11 = *((_DWORD *)v9 + 9);
    v12 = a1[9];
    v12->members.fullName.vtbl = *(BaseFormComponentVtbl **)(v11 + 0x18);
    v8 = *(_BYTE **)(v11 + 0x1C);
    v12->members.fullName.name.m_data = v8;
    if ( !v17 )
      LOBYTE(v8) = sub_4C6280((unsigned int **)v9);
    a1[7] = (TESObjectCELL *)((unsigned int)a1[7] | 8);
  }
  return (char)v8;
}
