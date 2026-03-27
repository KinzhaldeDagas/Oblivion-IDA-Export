NiNode *__thiscall sub_4B3750(_BYTE *this, TESChildCELL *a2, int a3)
{
  TESObjectREFR *v3; // esi
  NiNode *v5; // ebp
  bool v6; // zf
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  NiObject *v11; // eax
  unsigned __int16 *v12; // eax
  NiExtraData *ExtraData; // eax
  float (__thiscall *GetScale)(TESObjectREFR *); // eax
  char *Name; // eax
  volatile LONG *v16; // eax
  volatile LONG *v17; // esi
  NiNode *v18; // eax
  void (__thiscall *AddObject)(NiNode, NiAVObject *, UInt8); // eax
  int v20; // edx
  int *v21; // eax
  int *v22; // esi
  QueuedTreeBillboard *v23; // ecx
  int v24; // esi
  float v26; // [esp+18h] [ebp-140h] BYREF
  int v27; // [esp+1Ch] [ebp-13Ch]
  float Scale; // [esp+20h] [ebp-138h]
  void *v29; // [esp+24h] [ebp-134h]
  void (__thiscall ***v30)(int (__stdcall ***)(signed int), int); // [esp+28h] [ebp-130h] BYREF
  void (__thiscall ***v31)(_DWORD, int); // [esp+2Ch] [ebp-12Ch]
  float v32; // [esp+38h] [ebp-120h]
  float v33; // [esp+3Ch] [ebp-11Ch]
  float v34; // [esp+40h] [ebp-118h]
  char v35[260]; // [esp+44h] [ebp-114h] BYREF
  unsigned int v36; // [esp+154h] [ebp-4h]

  v3 = (TESObjectREFR *)a2;
  v5 = 0;
  v6 = this == (_BYTE *)TESDataHandler_g_DoorMarker;
  v27 = (int)a2;
  if ( v6 || this == (_BYTE *)TESDataHandler_g_TravelMarker )
  {
    v27 = 0;
    v3 = 0;
  }
  v7 = (*(int (__thiscall **)(_BYTE *, TESObjectREFR *))(*(_DWORD *)this + 0x110))(this, v3);
  if ( !v7 )
    return v5;
  if ( (*((_DWORD *)this + 2) & 0x10) != 0 )
  {
    if ( v3 )
      sub_46A9C0(v3, 1);
  }
  if ( !(_BYTE)a3 && *(_DWORD *)(v7 + 4) == 1 )
  {
    switch ( *(this + 4) )
    {
      case 0x12:
      case 0x24:
        LOBYTE(a3) = sub_480820((_DWORD *)v7) != 0;
        goto LABEL_12;
      case 0x14:
        v12 = (unsigned __int16 *)OblivionDynamicCast(
                                    this,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESObjectARMO `RTTI Type Descriptor',
                                    0);
        if ( v12 && TESBipedModelForm_CoversSlot(v12 + 0x32, 0xD, 0) )
          goto LABEL_12;
        goto LABEL_26;
      case 0x18:
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
        v9 = v8;
        if ( v8 )
        {
          if ( sub_405790(v8, 0) )
          {
            if ( *(_DWORD *)(sub_405790(v9, 0) + 0xC) )
            {
              v10 = sub_405790(v9, 0);
              v11 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v10 + 0xC));
              if ( v11 )
              {
                if ( sub_4715A0(v11, (int)"Unequip") )
                {
                  v3 = (TESObjectREFR *)v27;
                  goto LABEL_12;
                }
              }
            }
          }
        }
        v3 = (TESObjectREFR *)v27;
LABEL_26:
        ExtraData = NiObjectNET_GetExtraData((NiObjectNET *)v7, dword_A7D0EC);
        if ( ExtraData && ((int)ExtraData[1].__vftable & 0x10) != 0 )
          goto LABEL_12;
        if ( v3 )
        {
          GetScale = v3->vtbl->GetScale;
          v26 = *(float *)(v7 + 0x60);
          if ( v26 != ((double (__thiscall *)(TESObjectREFR *))GetScale)(v3) )
            goto LABEL_12;
        }
        v5 = (NiNode *)v7;
        break;
      case 0x21:
      case 0x22:
      case 0x23:
        goto LABEL_12;
      default:
        goto LABEL_26;
    }
LABEL_68:
    v5->members.super.m_flags &= ~1u;
    v6 = v5->members.super.m_parent == 0;
    v26 = fabs(1.0);
    v5->members.super.m_localTransform.scale = v26;
    qmemcpy(&v5->members.super.m_localTransform, &stru_B26AF0[0xA].unk2C, 0x24u);
    v5->members.super.m_localTransform.pos.x = Vector3_InitValue_;
    v5->members.super.m_localTransform.pos.y = *(&Vector3_InitValue_ + 1);
    v5->members.super.m_localTransform.pos.z = dword_B3F9B0;
    if ( !v6 )
      v5->members.super.m_parent = 0;
    return v5;
  }
LABEL_12:
  Scale = 1.0;
  if ( v3 )
    Scale = TESObjectREFR_GetScale(v3);
  v26 = *(float *)(v7 + 0x60);
  if ( Scale != v26 )
  {
    if ( 0.0 != Scale )
      goto LABEL_34;
    Name = TESObjectREFR_GetName(v3);
    PrintError("%s has a scale of 0.  Change it in the editor.", Name);
  }
  Scale = 1.0;
LABEL_34:
  sub_478B90((NiTPointerMap<NiObject *,NiObject *> **)&v30);
  v34 = Scale;
  v33 = Scale;
  v32 = Scale;
  v36 = 0;
  if ( (_BYTE)a3 )
  {
    v16 = sub_4430C0((void *)v7, (int)&v30);
    v17 = v16;
    v29 = (void *)v16;
    if ( v16 )
      InterlockedIncrement(v16 + 1);
    LOBYTE(v36) = 1;
    if ( v17 && (*(int (__thiscall **)(volatile LONG *))(*v17 + 8))(v17) )
    {
      v5 = (NiNode *)v17;
      sub_405070(&v26, (int)v17);
      LOBYTE(v36) = 2;
      NiTArray_AddItem((int)&off_B082F0, (LONG *)&v26);
      LOBYTE(v36) = 1;
      sub_7016A0((NiD3DVertexShader *)&v26);
    }
    else
    {
      v18 = (NiNode *)FormHeapAlloc(0xDCu);
      v26 = *(float *)&v18;
      LOBYTE(v36) = 3;
      if ( v18 )
        v5 = NiNode::NiNode(v18, 0);
      else
        v5 = 0;
      AddObject = v5->vtbl->AddObject;
      LOBYTE(v36) = 1;
      ((void (__thiscall *)(NiNode *, volatile LONG *, int))AddObject)(v5, v17, 1);
    }
    LOBYTE(v36) = 0;
    if ( v17 )
    {
      if ( !InterlockedDecrement(v17 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v17)(v17, 1);
    }
    v3 = (TESObjectREFR *)v27;
  }
  else
  {
    v5 = (NiNode *)sub_700610((void *)v7, (int)&v30);
  }
  if ( Scale == 1.0 || (v26 = *(float *)(v7 + 0x60), 1.0 != v26) )
  {
    v36 = 0xFFFFFFFF;
    if ( v30 )
      (**v30)((int (__stdcall ***)(signed int))v30, 1);
    if ( v31 )
      (**v31)(v31, 1);
    if ( !v5 )
      return v5;
    goto LABEL_68;
  }
  v26 = fabs(Scale);
  v5->members.super.m_localTransform.scale = v26;
  sub_4B2B00(this, v3, v35);
  if ( !ModelLoader_IsModelLoaded__(ModelLoaderPtr, v20, (int)v35) )
  {
    v21 = (int *)FormHeapAlloc(0xCu);
    v29 = v21;
    LOBYTE(v36) = 4;
    if ( v21 )
      v22 = sub_434A70(v21, v35, (int)v5);
    else
      v22 = 0;
    v23 = ModelLoaderPtr;
    LOBYTE(v36) = 0;
    if ( (unsigned __int8)sub_434800(v23, (int)v35, (int)v22) )
    {
      ++dword_B35AC4;
    }
    else if ( v22 )
    {
      sub_4349B0((unsigned int *)v22);
      FormHeapFree((unsigned int)v22);
    }
    v3 = (TESObjectREFR *)v27;
  }
  v24 = (*(int (__thiscall **)(_BYTE *, TESObjectREFR *, int))(*(_DWORD *)this + 0xEC))(this, v3, a3);
  if ( v5 != (NiNode *)v24 )
  {
    sub_405070(&v26, (int)v5);
    LOBYTE(v36) = 5;
    sub_4B24F0((int)&off_B082F0, &v26);
    LOBYTE(v36) = 0;
    sub_7016A0((NiD3DVertexShader *)&v26);
  }
  v36 = 0xFFFFFFFF;
  sub_4781A0((int (__stdcall ****)(signed int))&v30);
  return (NiNode *)v24;
}
