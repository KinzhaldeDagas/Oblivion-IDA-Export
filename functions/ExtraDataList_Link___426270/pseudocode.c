// Verified post-load owner resolution: ExtraOwnership (type 0x27/XOWN) treats its stored dword as a FormID, rebases it with TESForm_ResolveFormID, resolves via TESForm_LookupByFormID, and replaces the slot with TESForm*. Missing owners remove the extra. ExtraGlobal (type 0x28/XGLB) follows the same path with a TESGlobal RTTI cast; missing/wrong-type globals remove their extra. ExtraRank (0x29/XRNK) is an inline signed value and is not FormID-linked.
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
  NiTPointerMap<TESObjectREFR *,bool> *v21; // eax
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

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aExtradatalis_0); /*0x426283*/
  v3 = a2; /*0x426288*/
  m_data = this->members.m_data; /*0x42628c*/
  OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x42629a*/
  if ( m_data ) /*0x42629c*/
  {
    while ( 1 ) /*0x4262c6*/
    {
      next = m_data->members.next; /*0x4262ab*/
      switch ( m_data->members.type ) /*0x4262c6*/
      {
        case 5u: /*0x4262c6*/
          *(_DWORD *)ArgList = m_data[1].vtbl; /*0x42647c*/
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x426480*/
          v16 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x42649b*/
          v17 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x4264a4*/
                                     v16,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESWaterForm `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v17; /*0x4264ae*/
          if ( !v17 ) /*0x4264b1*/
          {
            PrintError("Unable to find cell water type %08X. Water data will be removed.", *(_DWORD *)ArgList); /*0x4264c1*/
            goto LABEL_39; /*0x4264c1*/
          }
          break; /*0x4264c1*/
        case 0xCu: /*0x4262c6*/
          *(_DWORD *)ArgList = m_data[1].vtbl; /*0x426429*/
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x42642d*/
          v14 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x426448*/
          v15 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x426451*/
                                     v14,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESClimate `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v15; /*0x42645b*/
          if ( !v15 ) /*0x42645e*/
          {
            PrintError("Unable to find cell climate %08X. Climate data will be removed.", *(_DWORD *)ArgList); /*0x42646e*/
            goto LABEL_39; /*0x42646e*/
          }
          break; /*0x42646e*/
        case 0x1Eu: /*0x4262c6*/
          *(_DWORD *)ArgList = m_data[1].vtbl;  // Post-load XPSL link rebases/looks up start-location FormID without dynamic type restriction; zero/unresolved lookup removes the complete singleton before writing. /*0x4264cf*/
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x4264d3*/
          v18 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4264dd*/
          m_data[1].vtbl = (BSExtraDataVtbl *)v18; /*0x4264e7*/
          if ( !v18 ) /*0x4264ea*/
          {
            PrintError( /*0x4264fa*/
              "Unable to find package start location cell %08X. Package start location extra data will be removed.",
              *(_DWORD *)ArgList);
            goto LABEL_39; /*0x4264fa*/
          }
          break; /*0x4264fa*/
        case 0x27u: /*0x4262c6*/
          *(_DWORD *)ArgList = m_data[1].vtbl; /*0x42634a*/
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x42634e*/
          v9 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x426358*/
          m_data[1].vtbl = (BSExtraDataVtbl *)v9; /*0x426362*/
          if ( !v9 ) /*0x426365*/
          {
            PrintError("Unable to find ownership owner form %08X. Ownership will be removed.", *(_DWORD *)ArgList); /*0x426375*/
            goto LABEL_39; /*0x426375*/
          }
          break; /*0x426375*/
        case 0x28u: /*0x4262c6*/
          *(_DWORD *)ArgList = m_data[1].vtbl; /*0x426383*/
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x426387*/
          v10 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4263a2*/
          v11 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x4263ab*/
                                     v10,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESGlobal `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v11; /*0x4263b5*/
          if ( !v11 ) /*0x4263b8*/
          {
            PrintError("Unable to find ownership condition global %08X. Ownership will be removed.", *(_DWORD *)ArgList); /*0x4263c8*/
            goto LABEL_39; /*0x4263c8*/
          }
          break; /*0x4263c8*/
        case 0x31u: /*0x4262c6*/
          vtbl = m_data[1].vtbl;                // Verified XLOC key post-load fixup: reads the stored key FormID from ExtraLockData+4, resolves it using the owner override-file context, looks up the TESForm, dynamically casts it to TESKey, and stores the pointer. If lookup/cast fails, it logs 'Unable to find key %08X for lock data. Lock will be removed.' and removes the ExtraLock extra. This direct RTTI path confirms ExtraLockData.key is TESKey*. /*0x4262cd*/
          if ( vtbl->CompareTo ) /*0x4262d0*/
          {
            *(_DWORD *)ArgList = vtbl->CompareTo; /*0x4262e1*/
            TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x4262e5*/
            v7 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x426300*/
            v8 = (bool (__thiscall *)(BSExtraData *, BSExtraData *))OblivionDynamicCast( /*0x426309*/
                                                                      v7,
                                                                      0,
                                                                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                                      &TESKey `RTTI Type Descriptor',
                                                                      0);
            vtbl->CompareTo = v8; /*0x426313*/
            if ( !v8 ) /*0x426316*/
            {
              PrintError("Unable to find key %08X for lock data. Lock will be removed.", *(_DWORD *)ArgList); /*0x426326*/
              goto LABEL_39; /*0x426326*/
            }
          }
          break; /*0x426326*/
        case 0x32u: /*0x4262c6*/
          if ( !sub_42B700((int *)m_data[1].vtbl, v3) ) /*0x42632f*/
            goto LABEL_39; /*0x426336*/
          break; /*0x426336*/
        case 0x3Fu: /*0x4262c6*/
          *(_DWORD *)ArgList = m_data[1].vtbl; /*0x426508*/
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x42650c*/
          v19 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x426527*/
          v20 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x426530*/
                                     v19,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v20; /*0x42653a*/
          if ( !v20 ) /*0x42653d*/
          {
            PrintError( /*0x426549*/
              "Unable to find enable state parent %08X. Enable state parent data will be removed.",
              *(_DWORD *)ArgList);
            goto LABEL_39; /*0x426549*/
          }
          v21 = (NiTPointerMap<TESObjectREFR *,bool> *)OblivionDynamicCast( /*0x42655d*/
                                                         v3,
                                                         0,
                                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                                         0);
          v22 = (BSExtraDataVtbl *)v21; /*0x426562*/
          if ( !v21 || !(unsigned __int8)NiTPointerMap<TESObjectREFR *,bool>::NiTPointerMap<TESObjectREFR *,bool>(v21) ) /*0x42656d*/
          {
            PrintError("Enable state parent loop detected. Parent removed."); /*0x42658c*/
            goto LABEL_39; /*0x426594*/
          }
          sub_424A70((ExtraDataList *)&m_data[1].vtbl[8].CompareTo, v22); /*0x42657d*/
          break; /*0x426582*/
        case 0x43u: /*0x4262c6*/
          *(_DWORD *)ArgList = m_data[1].vtbl;  // Verified post-load resolution for ExtraRandomTeleportMarker (extra type 0x43): rebases and resolves the stored FormID, RTTI-casts to TESObjectREFR, updates teleportRef, and removes the extra with an error if the target is missing or not a reference. /*0x4265a2*/
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x4265a6*/
          v23 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4265c1*/
          v24 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x4265ca*/
                                     v23,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v24; /*0x4265d4*/
          if ( !v24 ) /*0x4265d7*/
          {
            PrintError( /*0x4265e7*/
              "Unable to find random door teleport marker %08X. Random door teleport marker data will be removed.",
              *(_DWORD *)ArgList);
            goto LABEL_39; /*0x4265e7*/
          }
          break; /*0x4265e7*/
        case 0x44u: /*0x4262c6*/
          *(_DWORD *)ArgList = m_data[1].vtbl; /*0x4265f5*/
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x4265f9*/
          v25 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x426614*/
          v26 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x42661d*/
                                     v25,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v26; /*0x426627*/
          if ( !v26 ) /*0x42662a*/
          {
            PrintError( /*0x42663a*/
              "Unable to find merchant container %08X. Merchant container data will be removed.",
              *(_DWORD *)ArgList);
            goto LABEL_39; /*0x42663a*/
          }
          break; /*0x42663a*/
        case 0x48u: /*0x4262c6*/
          *(_DWORD *)ArgList = m_data[1].vtbl;  // Post-load XPSN link rebases/looks up then dynamic-casts to AlchemyItem; zero, unresolved, or wrong-type targets remove ExtraPoison. /*0x4263d6*/
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x4263da*/
          v12 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4263f5*/
          v13 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x4263fe*/
                                     v12,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &AlchemyItem `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v13; /*0x426408*/
          if ( !v13 ) /*0x42640b*/
          {
            PrintError("Unable to find poison %08X. Poison data will be removed.", *(_DWORD *)ArgList); /*0x42641b*/
            goto LABEL_39; /*0x42641b*/
          }
          break; /*0x42641b*/
        case 0x4Du: /*0x4262c6*/
          *(_DWORD *)ArgList = m_data[1].vtbl; /*0x4266ac*/
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x4266b0*/
          v29 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4266cb*/
          v30 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x4266d4*/
                                     v29,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v30; /*0x4266de*/
          if ( !v30 ) /*0x4266e1*/
          {
            PrintError("Unable to find XMarker target %08X. XMarker target data will be removed.", *(_DWORD *)ArgList); /*0x4266ed*/
            goto LABEL_39; /*0x4266ed*/
          }
          break; /*0x4266ed*/
        case 0x58u: /*0x4262c6*/
          *(_DWORD *)ArgList = m_data[1].vtbl; /*0x426648*/
          TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x42664c*/
          v27 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x426667*/
          v28 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x426670*/
                                     v27,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                     0);
          m_data[1].vtbl = v28; /*0x42667a*/
          if ( v28 ) /*0x42667d*/
          {
            if ( !TESObjectREFR_HasHorseCreatureBase(v28) ) /*0x426681*/
              m_data[1].vtbl = 0; /*0x42668a*/
          }
          if ( !m_data[1].vtbl ) /*0x426691*/
          {
            PrintError("Unable to find travel horse %08X. Travel horse data will be removed.", *(_DWORD *)ArgList); /*0x4266a1*/
LABEL_39:
            BaseExtraList_RemoveExtraByPtr(this, (int)m_data, 1); /*0x4266f5*/
          }
          break; /*0x4266fa*/
        default:
          break;
      }
      m_data = next; /*0x4266ff*/
      if ( !next ) /*0x426705*/
        break; /*0x426705*/
      v3 = a2; /*0x4262a4*/
    }
  }
  return NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x426715*/
}
