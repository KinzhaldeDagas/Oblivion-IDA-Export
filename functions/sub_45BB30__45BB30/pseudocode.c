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
  TESWorldSpace *v11; // ebp
  float *v12; // eax
  int v13; // eax
  double v14; // st7
  BSExtraDataVtbl *v15; // eax
  BSExtraDataVtbl *v16; // edi
  TESObjectCELL *v17; // ebp
  TESWorldSpace *v18; // eax
  int niNode; // ebp
  int v20; // eax
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

  v7 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v8 = *(_BYTE *)(v7 + 0x185);
  v31 = v7;
  *(_BYTE *)(v7 + 0x185) = 0;
  v29 = v8;
  v28 = 0;
  if ( !((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a6->vtbl->IsActor)(
          a6,
          a5,
          st6_0)
    || !sub_5E0260(a6) )
  {
    if ( a6 == (TESObjectREFR *)0xFFFFFFBC )
      goto LABEL_24;
    if ( BaseExtraList_GetExtraData(&a6->member.baseExtraList, kExtraData_StartingPosition) )
    {
      a6->vtbl->GetStartingPos(a6, &a2.x);
      a6->vtbl->GetStartingAngle(a6, (float *)&a3);
      TESObjectREFR_SetPosition(a6, a2.x, a2.y, a2.z);
      sub_4D89A0((int *)a6, a3, v34[0], v34[1]);
      v28 = 1;
    }
    v15 = sub_41F7F0(&a6->member.baseExtraList);
    v16 = v15;
    if ( v15
      && ((v17 = (TESObjectCELL *)OblivionDynamicCast(
                                    v15,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESObjectCELL `RTTI Type Descriptor',
                                    0),
           v18 = (TESWorldSpace *)OblivionDynamicCast(
                                    v16,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESWorldSpace `RTTI Type Descriptor',
                                    0),
           v17)
       || v18) )
    {
      sub_4DD4B0(bl0, st5_0, st6_0, a5, (Actor *)a6, v17, v18);
      v28 = 1;
    }
    else if ( !v28 )
    {
      goto LABEL_24;
    }
    goto LABEL_18;
  }
  v9 = (TESObjectCELL *)sub_5E1F60(a6);
  v10 = sub_5E1F40((Actor *)a6);
  v11 = (TESWorldSpace *)v10;
  if ( v9 || v10 )
  {
    v12 = (float *)((int (__thiscall *)(TESObjectREFR *, int *))a6->vtbl->GetStartingPos)(a6, &a3);
    TESObjectREFR_SetPosition(a6, *v12, v12[1], v12[2]);
    v13 = ((int (__thiscall *)(TESObjectREFR *, int *))a6->vtbl->GetStartingAngle)(a6, v34);
    v14 = *(float *)(v13 + 8);
    sub_4D8A10(*(float *)(v13 + 8));
    if ( a7 )
      *(_DWORD *)(a1 + 0x18) |= 0x20u;
    sub_4DD4B0(a7, st5_0, st6_0, v14, (Actor *)a6, v9, v11);
    if ( a7 )
      *(_DWORD *)(a1 + 0x18) &= ~0x20u;
    v28 = 1;
LABEL_18:
    niNode = (int)a6->member.niNode;
    if ( niNode )
    {
      v20 = (int)a6->vtbl->GetPos(a6);
      v21 = *(float *)v20;
      v22 = *(float *)(v20 + 4);
      v23 = *(float *)(v20 + 8);
      a2.x = v21;
      a2.y = v22;
      a2.z = v23;
      v24 = (MobileObject *)OblivionDynamicCast(
                              a6,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                              &MobileObject `RTTI Type Descriptor',
                              0);
      if ( v24 )
      {
        CharProxy = MobileObject_GetCharProxy(v24);
        v36 = CharProxy;
        if ( CharProxy )
        {
          if ( sub_88D370((_DWORD *)CharProxy + 0x78) != 4 )
            sub_452A10(v36, &a2);
        }
      }
      z = a2.z;
      *(float *)(niNode + 0x54) = v21;
      *(float *)(niNode + 0x58) = v22;
      *(float *)(niNode + 0x5C) = z;
      qmemcpy((void *)(niNode + 0x30), sub_4D7AF0((float *)a6, v35), 0x24u);
      sub_897A20(niNode, 1);
      NiAVObject_UpdateNiAVObject((NiAVObject *)niNode, 0.0, 0);
    }
  }
LABEL_24:
  *(_BYTE *)(v31 + 0x185) = v29;
  return v28;
}
