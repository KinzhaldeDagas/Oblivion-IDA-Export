int __thiscall ExtraDataList_Link_(ExtraDataList *this, TESForm *a2)
{
  TESForm *v3; // ebx
  BSExtraData *m_data; // esi
  Data *OverrideFile; // edi
  BSExtraDataVtbl *vtbl; // ebx
  TESForm *v7; // eax
  bool (__thiscall *v8)(BSExtraData *, BSExtraData *); // eax
  TESForm *v9; // eax
  TESForm *v10; // eax
  BSExtraDataVtbl *v11; // eax
  TESForm *v12; // eax
  BSExtraDataVtbl *v13; // eax
  TESForm *v14; // eax
  BSExtraDataVtbl *v15; // eax
  TESForm *v16; // eax
  BSExtraDataVtbl *v17; // eax
  TESForm *v18; // eax
  TESForm *v19; // eax
  BSExtraDataVtbl *v20; // eax
  BSExtraDataVtbl *v21; // eax
  BSExtraDataVtbl *v22; // ebx
  TESForm *v23; // eax
  BSExtraDataVtbl *v24; // eax
  TESForm *v25; // eax
  BSExtraDataVtbl *v26; // eax
  TESForm *v27; // eax
  BSExtraDataVtbl *v28; // eax
  TESForm *v29; // eax
  BSExtraDataVtbl *v30; // eax
  char ArgList[4]; // [esp+10h] [ebp-8h] BYREF
  BSExtraData *next; // [esp+14h] [ebp-4h]

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aExtradatalis_0);
  v3 = a2;
  m_data = this->members.m_data;
  OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
  if ( m_data )
  {
    while ( 1 )
    {
      next = m_data->members.next;
      switch ( m_data->members.type )
      {
        case 5u:
          *(_DWORD *)ArgList = m_data[1].vtbl;
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
          v16 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
          v17 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v16,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESWaterForm `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v17;
          if ( !v17 )
          {
            PrintError("Unable to find cell water type %08X. Water data will be removed.", *(_DWORD *)ArgList);
            goto LABEL_39;
          }
          break;
        case 0xCu:
          *(_DWORD *)ArgList = m_data[1].vtbl;
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
          v14 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
          v15 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v14,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESClimate `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v15;
          if ( !v15 )
          {
            PrintError("Unable to find cell climate %08X. Climate data will be removed.", *(_DWORD *)ArgList);
            goto LABEL_39;
          }
          break;
        case 0x1Eu:
          *(_DWORD *)ArgList = m_data[1].vtbl;
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
          v18 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
          m_data[1].vtbl = (BSExtraDataVtbl *)v18;
          if ( !v18 )
          {
            PrintError(
              "Unable to find package start location cell %08X. Package start location extra data will be removed.",
              *(_DWORD *)ArgList);
            goto LABEL_39;
          }
          break;
        case 0x27u:
          *(_DWORD *)ArgList = m_data[1].vtbl;
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
          v9 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
          m_data[1].vtbl = (BSExtraDataVtbl *)v9;
          if ( !v9 )
          {
            PrintError("Unable to find ownership owner form %08X. Ownership will be removed.", *(_DWORD *)ArgList);
            goto LABEL_39;
          }
          break;
        case 0x28u:
          *(_DWORD *)ArgList = m_data[1].vtbl;
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
          v10 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
          v11 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v10,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESGlobal `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v11;
          if ( !v11 )
          {
            PrintError("Unable to find ownership condition global %08X. Ownership will be removed.", *(_DWORD *)ArgList);
            goto LABEL_39;
          }
          break;
        case 0x31u:
          vtbl = m_data[1].vtbl;
          if ( vtbl->CompareTo )
          {
            *(_DWORD *)ArgList = vtbl->CompareTo;
            TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
            v7 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
            v8 = (bool (__thiscall *)(BSExtraData *, BSExtraData *))OblivionDynamicCast(
                                                                      v7,
                                                                      0,
                                                                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                                      &TESKey `RTTI Type Descriptor',
                                                                      0);
            vtbl->CompareTo = v8;
            if ( !v8 )
            {
              PrintError("Unable to find key %08X for lock data. Lock will be removed.", *(_DWORD *)ArgList);
              goto LABEL_39;
            }
          }
          break;
        case 0x32u:
          if ( !sub_42B700((int *)m_data[1].vtbl, v3) )
            goto LABEL_39;
          break;
        case 0x3Fu:
          *(_DWORD *)ArgList = m_data[1].vtbl;
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
          v19 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
          v20 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v19,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v20;
          if ( !v20 )
          {
            PrintError(
              "Unable to find enable state parent %08X. Enable state parent data will be removed.",
              *(_DWORD *)ArgList);
            goto LABEL_39;
          }
          v21 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v3,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                     0);
          v22 = v21;
          if ( !v21 || !NiTPointerMap<TESObjectREFR *,bool>::NiTPointerMap<TESObjectREFR *,bool>(v21) )
          {
            PrintError("Enable state parent loop detected. Parent removed.");
            goto LABEL_39;
          }
          sub_424A70((ExtraDataList *)&m_data[1].vtbl[8].CompareTo, v22);
          break;
        case 0x43u:
          *(_DWORD *)ArgList = m_data[1].vtbl;
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
          v23 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
          v24 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v23,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v24;
          if ( !v24 )
          {
            PrintError(
              "Unable to find random door teleport marker %08X. Random door teleport marker data will be removed.",
              *(_DWORD *)ArgList);
            goto LABEL_39;
          }
          break;
        case 0x44u:
          *(_DWORD *)ArgList = m_data[1].vtbl;
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
          v25 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
          v26 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v25,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v26;
          if ( !v26 )
          {
            PrintError(
              "Unable to find merchant container %08X. Merchant container data will be removed.",
              *(_DWORD *)ArgList);
            goto LABEL_39;
          }
          break;
        case 0x48u:
          *(_DWORD *)ArgList = m_data[1].vtbl;
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
          v12 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
          v13 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v12,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &AlchemyItem `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v13;
          if ( !v13 )
          {
            PrintError("Unable to find poison %08X. Poison data will be removed.", *(_DWORD *)ArgList);
            goto LABEL_39;
          }
          break;
        case 0x4Du:
          *(_DWORD *)ArgList = m_data[1].vtbl;
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
          v29 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
          v30 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v29,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v30;
          if ( !v30 )
          {
            PrintError("Unable to find XMarker target %08X. XMarker target data will be removed.", *(_DWORD *)ArgList);
            goto LABEL_39;
          }
          break;
        case 0x58u:
          *(_DWORD *)ArgList = m_data[1].vtbl;
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
          v27 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
          v28 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v27,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v28;
          if ( v28 )
          {
            if ( !sub_4D74D0(v28) )
              m_data[1].vtbl = 0;
          }
          if ( !m_data[1].vtbl )
          {
            PrintError("Unable to find travel horse %08X. Travel horse data will be removed.", *(_DWORD *)ArgList);
LABEL_39:
            BaseExtraList_RemoveExtraByPtr(this, (int)m_data, 1);
          }
          break;
        default:
          break;
      }
      m_data = next;
      if ( !next )
        break;
      v3 = a2;
    }
  }
  return NiLeaveCriticalSection_0(&BSExtraDataCS);
}
