void __usercall sub_4B7DB0(double a1@<st2>, double st6_0@<st1>, double a3@<st0>, char *a4, char a5)
{
  void *v5; // eax
  _BYTE *v6; // eax
  NiNode *v7; // eax
  NiNode *v8; // eax
  NiNode *v9; // eax
  NiAVObject *ChildAtIndex; // eax
  NiControllerManager *v11; // eax
  NiControllerManager *v12; // edi
  NiControllerSequence *SequenceByName; // ebx
  NiAVObject *v14; // eax
  NiAVObject *v15; // eax
  int v16; // eax
  float a2; // [esp+8h] [ebp-14h]

  if ( a4 ) /*0x4b7db7*/
  {
    v5 = (void *)(*(int (__usercall **)@<eax>(char *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a4 + 0x170))( /*0x4b7dd7*/
                   a4,
                   a3,
                   st6_0,
                   a1);
    v6 = OblivionDynamicCast( /*0x4b7dda*/
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESObjectDOOR `RTTI Type Descriptor',
           0);
    if ( v6 && (v6[0x64] & 1) != 0 ) /*0x4b7dee*/
    {
      sub_46AA50(a4, 1); /*0x4b7df8*/
      if ( (*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4) /*0x4b7e43*/
        && (v7 = (NiNode *)(*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4), NiNode_GetChildAtIndex(v7, 0))
        && (v8 = (NiNode *)(*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4),
            NiNode_GetChildAtIndex(v8, 0)->members.super.m_controller) )
      {
        v9 = (NiNode *)(*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4); /*0x4b7e59*/
        ChildAtIndex = NiNode_GetChildAtIndex(v9, 0); /*0x4b7e5d*/
        v11 = (NiControllerManager *)NiRTTI_Cast( /*0x4b7e6b*/
                                       (BSStringT *)&stru_B3CAC0,
                                       (NiObject *)ChildAtIndex->members.super.m_controller);
        v12 = v11; /*0x4b7e70*/
        if ( v11 ) /*0x4b7e77*/
        {
          SequenceByName = NiControllerManager_FindSequenceByName(v11, "Unequip"); /*0x4b7e89*/
          if ( SequenceByName ) /*0x4b7e8d*/
          {
            NiControllerManager_DeactivateAllSequences(v12, 0.0); /*0x4b7e9b*/
            *((_WORD *)v12 + 4) |= 8u; /*0x4b7ea2*/
            BSAnimGroupSequence_Activate(SequenceByName, 0, 1, 1.0, 0.0, 0); /*0x4b7ebc*/
            if ( a5 ) /*0x4b7ec6*/
            {
              v14 = (NiAVObject *)(*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4); /*0x4b7ede*/
              NiAVObject_UpdateNiAVObject(v14, 0.0, 1); /*0x4b7ee2*/
              a2 = *((float *)SequenceByName + 0xC); /*0x4b7eff*/
              v15 = (NiAVObject *)(*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4); /*0x4b7f02*/
              NiAVObject_UpdateNiAVObject(v15, a2, 1); /*0x4b7f06*/
              NiControllerSequence_Deactivate(SequenceByName, 0.0, 0); /*0x4b7f15*/
              sub_4D90D0(a4, *((const char **)SequenceByName + 2)); /*0x4b7f20*/
              *((_WORD *)v12 + 4) &= ~8u; /*0x4b7f25*/
              v16 = (*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4); /*0x4b7f37*/
              sub_897A20(v16, 1); /*0x4b7f3a*/
              sub_4D9310(a4, 0); /*0x4b7f46*/
              return; /*0x4b7f4e*/
            }
          }
        }
      }
      else
      {
        sub_4D90D0(a4, "Unequip"); /*0x4b7f56*/
      }
    }
    sub_4D9310(a4, 0); /*0x4b7f5f*/
  }
}
