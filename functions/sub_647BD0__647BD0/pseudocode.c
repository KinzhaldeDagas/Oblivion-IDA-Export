void __userpurge sub_647BD0(_DWORD *a1@<ecx>, TESObjectREFR *arg0, TESObjectREFR *a3, int a4, int argC)
{
  TESForm *v5; // ebp
  int ***ContainerExtraDataForRef; // esi
  int v8; // edi
  Sky *v9; // eax
  Sky *v10; // esi
  void *v11; // edi
  void *v12; // ebx
  void *v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  _DWORD *v16; // edi
  int v17; // ebx
  TESForm *v18; // edi
  Sky *v19; // eax
  Sky *v20; // esi
  void *v21; // edi
  void *v22; // ebx
  void *v23; // ebp
  void *v24; // eax
  int v25; // edx
  _DWORD *v26; // eax
  _DWORD *v27; // edi
  NiNode *Health; // eax
  TESForm *v29; // ebx
  Sky *EntryForItem; // eax
  Sky *v31; // edi
  int v32; // edx
  _DWORD *v33; // eax
  _DWORD *v34; // esi
  TESForm *v35; // ebx
  Sky *v36; // eax
  Sky *v37; // edi
  char *v38; // eax
  int v39; // edx
  _DWORD *v40; // eax
  _DWORD *v41; // esi
  TESForm *v42; // ebx
  Sky *v43; // eax
  Sky *v44; // edi
  char *v45; // eax
  int v46; // edx
  _DWORD *v47; // eax
  _DWORD *v48; // esi
  NiNode *v49; // eax
  TESObjectCELL *ParentCell; // edi
  int *v52; // eax
  void *v53; // eax
  float *v54; // eax
  void (__thiscall *v55)(_DWORD *, TESObjectREFR *); // eax
  float a5; // [esp+Ch] [ebp-2Ch]
  int ***v58; // [esp+28h] [ebp-10h]
  int a2[2]; // [esp+30h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+38h] [ebp+0h]
  TESChildCELL *v61; // [esp+3Ch] [ebp+4h]
  int v62; // [esp+44h] [ebp+Ch]
  TESForm *v63; // [esp+44h] [ebp+Ch]
  int Count; // [esp+44h] [ebp+Ch]
  int v65; // [esp+44h] [ebp+Ch]
  int v66; // [esp+44h] [ebp+Ch]

  v5 = 0;
  if ( a3
    && TESObjectREFR_GetContainer(a3)
    && (ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(a3),
        (v58 = ContainerExtraDataForRef) != 0) )
  {
    switch ( a4 )
    {
      case 0xD:
        v29 = 0;
        Count = ContainerExtraData_GetCount(ContainerExtraDataForRef);
        if ( Count > 0 )
        {
          do
          {
            EntryForItem = (Sky *)ContainerExtraData_GetEntryForItem(
                                    (ExtraContainerChanges_Data *)ContainerExtraDataForRef,
                                    v29);
            v31 = EntryForItem;
            if ( EntryForItem )
            {
              if ( OblivionDynamicCast(
                     EntryForItem->nodeMoonsRoot,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                     &TESObjectWEAP `RTTI Type Descriptor',
                     0) )
              {
                v33 = (_DWORD *)FormHeapAlloc(0x20u);
                if ( v33 )
                  v34 = sub_628EB0(v33);
                else
                  v34 = 0;
                v34[1] = v31->nodeMoonsRoot;
                v34[4] = TESHealthForm_GetHealth(v31);
                *v34 = a3;
                v34[7] = 1;
                BSSimpleList_PushFront(a1 + 0xF, (int)v34);
                ContainerExtraDataForRef = v58;
              }
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v31, v32);
              FormHeapFree((unsigned int)v31);
            }
            v29 = (TESForm *)((char *)v29 + 1);
          }
          while ( (int)v29 < Count );
        }
        break;
      case 0x15:
        v8 = ContainerExtraData_GetCount(ContainerExtraDataForRef);
        v62 = v8;
        if ( v8 > 0 )
        {
          while ( 1 )
          {
            v9 = (Sky *)ContainerExtraData_GetEntryForItem((ExtraContainerChanges_Data *)ContainerExtraDataForRef, v5);
            v10 = v9;
            if ( v9 )
            {
              v11 = OblivionDynamicCast(
                      v9->nodeMoonsRoot,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectARMO `RTTI Type Descriptor',
                      0);
              v12 = OblivionDynamicCast(
                      v10->nodeMoonsRoot,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectWEAP `RTTI Type Descriptor',
                      0);
              v13 = OblivionDynamicCast(
                      v10->nodeMoonsRoot,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESAmmo `RTTI Type Descriptor',
                      0);
              if ( v11 || v12 || v13 )
              {
                v15 = (_DWORD *)FormHeapAlloc(0x20u);
                if ( v15 )
                  v16 = sub_628EB0(v15);
                else
                  v16 = 0;
                v16[1] = v10->nodeMoonsRoot;
                v16[4] = TESHealthForm_GetHealth(v10);
                *v16 = a3;
                v16[7] = 1;
                BSSimpleList_PushFront(a1 + 0xF, (int)v16);
              }
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v10, v14);
              FormHeapFree((unsigned int)v10);
              v8 = v62;
            }
            v5 = (TESForm *)((char *)v5 + 1);
            if ( (int)v5 >= v8 )
              break;
            ContainerExtraDataForRef = v58;
          }
        }
        break;
      case 0x16:
        v17 = ContainerExtraData_GetCount(ContainerExtraDataForRef);
        v18 = 0;
        v61 = (TESChildCELL *)v17;
        v63 = 0;
        if ( v17 > 0 )
        {
          while ( 1 )
          {
            v19 = (Sky *)ContainerExtraData_GetEntryForItem((ExtraContainerChanges_Data *)ContainerExtraDataForRef, v18);
            v20 = v19;
            if ( v19 )
            {
              v21 = OblivionDynamicCast(
                      v19->nodeMoonsRoot,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectARMO `RTTI Type Descriptor',
                      0);
              v22 = OblivionDynamicCast(
                      v20->nodeMoonsRoot,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectWEAP `RTTI Type Descriptor',
                      0);
              v23 = OblivionDynamicCast(
                      v20->nodeMoonsRoot,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESAmmo `RTTI Type Descriptor',
                      0);
              v24 = OblivionDynamicCast(
                      v20->nodeMoonsRoot,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectCLOT `RTTI Type Descriptor',
                      0);
              if ( v21 || v22 || v23 || v24 )
              {
                v26 = (_DWORD *)FormHeapAlloc(0x20u);
                if ( v26 )
                  v27 = sub_628EB0(v26);
                else
                  v27 = 0;
                v27[1] = v20->nodeMoonsRoot;
                Health = TESHealthForm_GetHealth(v20);
                *v27 = a3;
                v27[4] = Health;
                v27[7] = 1;
                BSSimpleList_PushFront(a1 + 0xF, (int)v27);
              }
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v20, v25);
              FormHeapFree((unsigned int)v20);
              v17 = (int)v61;
              v18 = v63;
            }
            v18 = (TESForm *)((char *)v18 + 1);
            v63 = v18;
            if ( (int)v18 >= v17 )
              break;
            ContainerExtraDataForRef = v58;
          }
        }
        break;
      case 0x18:
        v35 = 0;
        v65 = ContainerExtraData_GetCount(ContainerExtraDataForRef);
        if ( v65 > 0 )
        {
          do
          {
            v36 = (Sky *)ContainerExtraData_GetEntryForItem((ExtraContainerChanges_Data *)ContainerExtraDataForRef, v35);
            v37 = v36;
            if ( v36 )
            {
              v38 = (char *)OblivionDynamicCast(
                              v36->nodeMoonsRoot,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                              &TESObjectWEAP `RTTI Type Descriptor',
                              0);
              if ( v38 )
              {
                if ( v38[0x90] <= 3 )
                {
                  v40 = (_DWORD *)FormHeapAlloc(0x20u);
                  if ( v40 )
                    v41 = sub_628EB0(v40);
                  else
                    v41 = 0;
                  v41[1] = v37->nodeMoonsRoot;
                  v41[4] = TESHealthForm_GetHealth(v37);
                  *v41 = a3;
                  v41[7] = 1;
                  BSSimpleList_PushFront(a1 + 0xF, (int)v41);
                  ContainerExtraDataForRef = v58;
                }
              }
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v37, v39);
              FormHeapFree((unsigned int)v37);
            }
            v35 = (TESForm *)((char *)v35 + 1);
          }
          while ( (int)v35 < v65 );
        }
        break;
      case 0x19:
        v42 = 0;
        v66 = ContainerExtraData_GetCount(ContainerExtraDataForRef);
        if ( v66 > 0 )
        {
          do
          {
            v43 = (Sky *)ContainerExtraData_GetEntryForItem((ExtraContainerChanges_Data *)ContainerExtraDataForRef, v42);
            v44 = v43;
            if ( v43 )
            {
              v45 = (char *)OblivionDynamicCast(
                              v43->nodeMoonsRoot,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                              &TESObjectWEAP `RTTI Type Descriptor',
                              0);
              if ( v45 )
              {
                if ( v45[0x90] > 3 )
                {
                  v47 = (_DWORD *)FormHeapAlloc(0x20u);
                  if ( v47 )
                    v48 = sub_628EB0(v47);
                  else
                    v48 = 0;
                  v48[1] = v44->nodeMoonsRoot;
                  v49 = TESHealthForm_GetHealth(v44);
                  *v48 = a3;
                  v48[4] = v49;
                  v48[7] = 1;
                  BSSimpleList_PushFront(a1 + 0xF, (int)v48);
                  ContainerExtraDataForRef = v58;
                }
              }
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v44, v46);
              FormHeapFree((unsigned int)v44);
            }
            v42 = (TESForm *)((char *)v42 + 1);
          }
          while ( (int)v42 < v66 );
        }
        break;
      default:
        return;
    }
  }
  else
  {
    ParentCell = TESObjectREFR_GetParentCell(arg0);
    v52 = (int *)arg0->vtbl->GetPos(arg0);
    a2[0] = *v52;
    a2[1] = v52[1];
    v53 = (void *)v52[2];
    a1[0x1B] = argC;
    retaddr = v53;
    a5 = fAIAcquireObjectDistance;
    v54 = arg0->vtbl->GetPos(arg0);
    sub_446B90(
      ParentCell,
      (float *)a2,
      fAIAcquireObjectDistance,
      v54,
      a5,
      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646600,
      (int)arg0);
    v55 = *(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x568);
    a1[0x1B] = 0;
    a1[0x19] = 0;
    v55(a1, arg0);
  }
}
