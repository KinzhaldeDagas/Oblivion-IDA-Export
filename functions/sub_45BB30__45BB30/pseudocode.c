char __userpurge sub_45BB30@<al>(
        int a1@<ecx>,
        char bl0@<bl>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a5@<st0>,
        TESObjectREFR *a6,
        char a7)
{
  int v7; // eax
  char v8; // dl
  TESObjectCELL *v9; // edi
  UInt32 v10; // eax
  TESObjectCELL **v11; // ebp
  float *v12; // eax
  int v13; // eax
  double v14; // st7
  BSExtraDataVtbl *v15; // eax
  BSExtraDataVtbl *v16; // edi
  TESObjectCELL *v17; // ebp
  TESObjectCELL **v18; // eax
  NiAVObject *niNode; // ebp
  float *v20; // eax
  float v21; // edi
  float v22; // ebx
  float v23; // eax
  MobileObject *v24; // eax
  bhkCharacterProxy *CharProxy; // eax
  float z; // edx
  char v28; // [esp+22h] [ebp-46h]
  char v29; // [esp+23h] [ebp-45h]
  int v31; // [esp+28h] [ebp-40h]
  NiPoint3 a2; // [esp+2Ch] [ebp-3Ch] BYREF
  int a3; // [esp+38h] [ebp-30h] BYREF
  int v34[2]; // [esp+3Ch] [ebp-2Ch] BYREF
  float v35[9]; // [esp+44h] [ebp-24h] BYREF
  bhkCharacterProxy *v36; // [esp+70h] [ebp+8h]

  v7 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x45bb44*/
  v8 = *(_BYTE *)(v7 + 0x185); /*0x45bb47*/
  v31 = v7; /*0x45bb53*/
  *(_BYTE *)(v7 + 0x185) = 0; /*0x45bb57*/
  v29 = v8; /*0x45bb60*/
  v28 = 0; /*0x45bb6d*/
  if ( !((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a6->vtbl->IsActor)( /*0x45bb7e*/
          a6,
          a5,
          st6_0,
          st5_0)
    || !sub_5E0260(a6) )
  {
    if ( a6 == (TESObjectREFR *)0xFFFFFFBC ) /*0x45bc2b*/
      goto LABEL_24; /*0x45bc2b*/
    if ( BaseExtraList_GetExtraData(&a6->member.baseExtraList, kExtraData_StartingPosition) ) /*0x45bc35*/
    {
      a6->vtbl->GetStartingPos(a6, (float *)&a2); /*0x45bc4d*/
      a6->vtbl->GetStartingAngle(a6, (float *)&a3); /*0x45bc5e*/
      TESObjectREFR_SetPosition(a6, a2.x, a2.y, a2.z); /*0x45bc7b*/
      sub_4D89A0((int *)a6, a3, v34[0], v34[1]); /*0x45bc9b*/
      v28 = 1; /*0x45bca0*/
    }
    v15 = sub_41F7F0(&a6->member.baseExtraList); /*0x45bca7*/
    v16 = v15; /*0x45bcac*/
    if ( v15 /*0x45bce5*/
      && ((v17 = (TESObjectCELL *)OblivionDynamicCast(
                                    v15,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESObjectCELL `RTTI Type Descriptor',
                                    0),
           v18 = (TESObjectCELL **)OblivionDynamicCast(
                                     v16,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESWorldSpace `RTTI Type Descriptor',
                                     0),
           v17)
       || v18) )
    {
      sub_4DD4B0(bl0, st5_0, st6_0, a5, (Actor *)a6, v17, v18); /*0x45bcea*/
      v28 = 1; /*0x45bcf2*/
    }
    else if ( !v28 ) /*0x45bcfe*/
    {
      goto LABEL_24; /*0x45bcfe*/
    }
    goto LABEL_18; /*0x45bcf7*/
  }
  v9 = (TESObjectCELL *)sub_5E1F60(a6); /*0x45bb94*/
  v10 = sub_5E1F40((Actor *)a6); /*0x45bb96*/
  v11 = (TESObjectCELL **)v10; /*0x45bb9d*/
  if ( v9 || v10 ) /*0x45bba3*/
  {
    v12 = (float *)((int (__thiscall *)(TESObjectREFR *, int *))a6->vtbl->GetStartingPos)(a6, &a3); /*0x45bbb8*/
    TESObjectREFR_SetPosition(a6, *v12, v12[1], v12[2]); /*0x45bbd1*/
    v13 = ((int (__thiscall *)(TESObjectREFR *, int *))a6->vtbl->GetStartingAngle)(a6, v34); /*0x45bbe5*/
    v14 = *(float *)(v13 + 8); /*0x45bbe7*/
    TESObjectREFR_SetRotationZ(a6, *(float *)(v13 + 8)); /*0x45bbf0*/
    if ( a7 ) /*0x45bbfb*/
      *(_DWORD *)(a1 + 0x18) |= 0x20u; /*0x45bc01*/
    sub_4DD4B0(a7, st5_0, st6_0, v14, (Actor *)a6, v9, v11); /*0x45bc08*/
    if ( a7 ) /*0x45bc12*/
      *(_DWORD *)(a1 + 0x18) &= ~0x20u; /*0x45bc18*/
    v28 = 1; /*0x45bc1c*/
LABEL_18:
    niNode = (NiAVObject *)a6->member.niNode; /*0x45bd04*/
    if ( niNode ) /*0x45bd09*/
    {
      v20 = a6->vtbl->GetPos(a6); /*0x45bd19*/
      v21 = *v20; /*0x45bd1b*/
      v22 = v20[1]; /*0x45bd1d*/
      v23 = v20[2]; /*0x45bd20*/
      a2.x = v21; /*0x45bd32*/
      a2.y = v22; /*0x45bd36*/
      a2.z = v23; /*0x45bd3a*/
      v24 = (MobileObject *)OblivionDynamicCast( /*0x45bd3e*/
                              a6,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                              &MobileObject `RTTI Type Descriptor',
                              0);
      if ( v24 ) /*0x45bd48*/
      {
        CharProxy = MobileObject_GetCharProxy(v24); /*0x45bd4c*/
        v36 = CharProxy; /*0x45bd53*/
        if ( CharProxy ) /*0x45bd57*/
        {
          if ( hkCharacterContext_GetStateId((_DWORD *)CharProxy + 0x78) != 4 ) /*0x45bd67*/
            sub_452A10(v36, &a2); /*0x45bd72*/
        }
      }
      z = a2.z; /*0x45bd77*/
      niNode->members.m_localTransform.pos.x = v21; /*0x45bd7b*/
      niNode->members.m_localTransform.pos.y = v22; /*0x45bd82*/
      niNode->members.m_localTransform.pos.z = z; /*0x45bd88*/
      qmemcpy(&niNode->members.m_localTransform, sub_4D7AF0((float *)a6, v35), 0x24u); /*0x45bd9d*/
      sub_897A20((int)niNode, 1); /*0x45bd9f*/
      NiAVObject_UpdateNiAVObject(niNode, 0.0, 0); /*0x45bdb1*/
    }
  }
LABEL_24:
  *(_BYTE *)(v31 + 0x185) = v29; /*0x45bdb6*/
  return v28; /*0x45bdc2*/
}
