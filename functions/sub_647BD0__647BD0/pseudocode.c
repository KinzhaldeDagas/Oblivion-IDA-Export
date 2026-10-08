void __userpurge sub_647BD0(_DWORD *a1@<ecx>, TESObjectREFR *arg0, TESObjectREFR *a3, int a4, int argC)
{
  TESForm *v5; // ebp
  int ***ContainerExtraDataForRef; // esi
  int v8; // edi
  TESHealthForm *v9; // eax
  TESHealthForm *v10; // esi
  void *v11; // edi
  void *v12; // ebx
  void *v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  _DWORD *v16; // edi
  int v17; // ebx
  TESForm *v18; // edi
  TESHealthForm *v19; // eax
  TESHealthForm *v20; // esi
  void *v21; // edi
  void *v22; // ebx
  void *v23; // ebp
  void *v24; // eax
  int v25; // edx
  _DWORD *v26; // eax
  _DWORD *v27; // edi
  unsigned int Health; // eax
  TESForm *v29; // ebx
  TESHealthForm *EntryForItem; // eax
  TESHealthForm *v31; // edi
  int v32; // edx
  _DWORD *v33; // eax
  _DWORD *v34; // esi
  TESForm *v35; // ebx
  TESHealthForm *v36; // eax
  TESHealthForm *v37; // edi
  char *v38; // eax
  int v39; // edx
  _DWORD *v40; // eax
  _DWORD *v41; // esi
  TESForm *v42; // ebx
  TESHealthForm *v43; // eax
  TESHealthForm *v44; // edi
  char *v45; // eax
  int v46; // edx
  _DWORD *v47; // eax
  _DWORD *v48; // esi
  unsigned int v49; // eax
  TESObjectCELL *DwordAtOffset40; // edi
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

  v5 = 0; /*0x647bda*/
  if ( a3 /*0x647c0c*/
    && TESObjectREFR_GetContainer(a3)
    && (ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(a3),
        (v58 = ContainerExtraDataForRef) != 0) )
  {
    switch ( a4 ) /*0x647c29*/
    {
      case 0xD: /*0x647c29*/
        v29 = 0; /*0x647e48*/
        Count = ContainerExtraData_GetCount(ContainerExtraDataForRef); /*0x647e4c*/
        if ( Count > 0 ) /*0x647e50*/
        {
          do /*0x647ee2*/
          {
            EntryForItem = (TESHealthForm *)ContainerExtraData_GetEntryForItem( /*0x647e59*/
                                              (ExtraContainerChanges_Data *)ContainerExtraDataForRef,
                                              v29);
            v31 = EntryForItem; /*0x647e5e*/
            if ( EntryForItem ) /*0x647e62*/
            {
              if ( OblivionDynamicCast( /*0x647e76*/
                     EntryForItem[1].vtbl,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                     &TESObjectWEAP `RTTI Type Descriptor',
                     0) )
              {
                v33 = (_DWORD *)FormHeapAlloc(0x20u); /*0x647e84*/
                if ( v33 ) /*0x647e8e*/
                  v34 = sub_628EB0(v33); /*0x647e97*/
                else
                  v34 = 0; /*0x647e9b*/
                v34[1] = v31[1].vtbl; /*0x647ea2*/
                v34[4] = TESHealthForm_GetHealth(v31); /*0x647eae*/
                *v34 = a3; /*0x647eb9*/
                v34[7] = 1; /*0x647ebb*/
                BSSimpleList_PushFront(a1 + 0xF, (int)v34); /*0x647ec2*/
                ContainerExtraDataForRef = v58; /*0x647ec7*/
              }
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v31, v32); /*0x647ecd*/
              FormHeapFree((unsigned int)v31); /*0x647ed3*/
            }
            v29 = (TESForm *)((char *)v29 + 1); /*0x647edb*/
          }
          while ( (int)v29 < Count ); /*0x647ee2*/
        }
        break; /*0x647ee2*/
      case 0x15: /*0x647c29*/
        v8 = ContainerExtraData_GetCount(ContainerExtraDataForRef); /*0x647c37*/
        v62 = v8; /*0x647c3b*/
        if ( v8 > 0 ) /*0x647c3f*/
        {
          while ( 1 ) /*0x647c4e*/
          {
            v9 = (TESHealthForm *)ContainerExtraData_GetEntryForItem( /*0x647c4e*/
                                    (ExtraContainerChanges_Data *)ContainerExtraDataForRef,
                                    v5);
            v10 = v9; /*0x647c53*/
            if ( v9 ) /*0x647c57*/
            {
              v11 = OblivionDynamicCast( /*0x647c80*/
                      v9[1].vtbl,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectARMO `RTTI Type Descriptor',
                      0);
              v12 = OblivionDynamicCast( /*0x647c99*/
                      v10[1].vtbl,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectWEAP `RTTI Type Descriptor',
                      0);
              v13 = OblivionDynamicCast( /*0x647ca1*/
                      v10[1].vtbl,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESAmmo `RTTI Type Descriptor',
                      0);
              if ( v11 || v12 || v13 ) /*0x647cb3*/
              {
                v15 = (_DWORD *)FormHeapAlloc(0x20u); /*0x647cb7*/
                if ( v15 ) /*0x647cc1*/
                  v16 = sub_628EB0(v15); /*0x647cca*/
                else
                  v16 = 0; /*0x647cce*/
                v16[1] = v10[1].vtbl; /*0x647cd3*/
                v16[4] = TESHealthForm_GetHealth(v10); /*0x647ce9*/
                *v16 = a3; /*0x647cec*/
                v16[7] = 1; /*0x647cee*/
                BSSimpleList_PushFront(a1 + 0xF, (int)v16); /*0x647cf5*/
              }
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v10, v14); /*0x647cfc*/
              FormHeapFree((unsigned int)v10); /*0x647d02*/
              v8 = v62; /*0x647d07*/
            }
            v5 = (TESForm *)((char *)v5 + 1); /*0x647d0e*/
            if ( (int)v5 >= v8 ) /*0x647d13*/
              break; /*0x647d13*/
            ContainerExtraDataForRef = v58; /*0x647c47*/
          }
        }
        break; /*0x647c47*/
      case 0x16: /*0x647c29*/
        v17 = ContainerExtraData_GetCount(ContainerExtraDataForRef); /*0x647d2a*/
        v18 = 0; /*0x647d2c*/
        v61 = (TESChildCELL *)v17; /*0x647d30*/
        v63 = 0; /*0x647d34*/
        if ( v17 > 0 ) /*0x647d38*/
        {
          while ( 1 ) /*0x647d47*/
          {
            v19 = (TESHealthForm *)ContainerExtraData_GetEntryForItem( /*0x647d47*/
                                     (ExtraContainerChanges_Data *)ContainerExtraDataForRef,
                                     v18);
            v20 = v19; /*0x647d4c*/
            if ( v19 ) /*0x647d50*/
            {
              v21 = OblivionDynamicCast( /*0x647d79*/
                      v19[1].vtbl,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectARMO `RTTI Type Descriptor',
                      0);
              v22 = OblivionDynamicCast( /*0x647d92*/
                      v20[1].vtbl,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectWEAP `RTTI Type Descriptor',
                      0);
              v23 = OblivionDynamicCast( /*0x647dab*/
                      v20[1].vtbl,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESAmmo `RTTI Type Descriptor',
                      0);
              v24 = OblivionDynamicCast( /*0x647db3*/
                      v20[1].vtbl,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectCLOT `RTTI Type Descriptor',
                      0);
              if ( v21 || v22 || v23 || v24 ) /*0x647dc9*/
              {
                v26 = (_DWORD *)FormHeapAlloc(0x20u); /*0x647dcd*/
                if ( v26 ) /*0x647dd7*/
                  v27 = sub_628EB0(v26); /*0x647de0*/
                else
                  v27 = 0; /*0x647de4*/
                v27[1] = v20[1].vtbl; /*0x647deb*/
                Health = TESHealthForm_GetHealth(v20); /*0x647dee*/
                *v27 = a3; /*0x647df7*/
                v27[4] = Health; /*0x647e01*/
                v27[7] = 1; /*0x647e04*/
                BSSimpleList_PushFront(a1 + 0xF, (int)v27); /*0x647e0b*/
              }
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v20, v25); /*0x647e12*/
              FormHeapFree((unsigned int)v20); /*0x647e18*/
              v17 = (int)v61; /*0x647e1d*/
              v18 = v63; /*0x647e21*/
            }
            v18 = (TESForm *)((char *)v18 + 1); /*0x647e28*/
            v63 = v18; /*0x647e2d*/
            if ( (int)v18 >= v17 ) /*0x647e31*/
              break; /*0x647e31*/
            ContainerExtraDataForRef = v58; /*0x647d40*/
          }
        }
        break; /*0x647d40*/
      case 0x18: /*0x647c29*/
        v35 = 0; /*0x647ef9*/
        v65 = ContainerExtraData_GetCount(ContainerExtraDataForRef); /*0x647efd*/
        if ( v65 > 0 ) /*0x647f01*/
        {
          do /*0x647fa0*/
          {
            v36 = (TESHealthForm *)ContainerExtraData_GetEntryForItem( /*0x647f0a*/
                                     (ExtraContainerChanges_Data *)ContainerExtraDataForRef,
                                     v35);
            v37 = v36; /*0x647f0f*/
            if ( v36 ) /*0x647f13*/
            {
              v38 = (char *)OblivionDynamicCast( /*0x647f2b*/
                              v36[1].vtbl,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                              &TESObjectWEAP `RTTI Type Descriptor',
                              0);
              if ( v38 ) /*0x647f35*/
              {
                if ( v38[0x90] <= 3 ) /*0x647f3e*/
                {
                  v40 = (_DWORD *)FormHeapAlloc(0x20u); /*0x647f42*/
                  if ( v40 ) /*0x647f4c*/
                    v41 = sub_628EB0(v40); /*0x647f55*/
                  else
                    v41 = 0; /*0x647f59*/
                  v41[1] = v37[1].vtbl; /*0x647f5e*/
                  v41[4] = TESHealthForm_GetHealth(v37); /*0x647f74*/
                  *v41 = a3; /*0x647f77*/
                  v41[7] = 1; /*0x647f79*/
                  BSSimpleList_PushFront(a1 + 0xF, (int)v41); /*0x647f80*/
                  ContainerExtraDataForRef = v58; /*0x647f85*/
                }
              }
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v37, v39); /*0x647f8b*/
              FormHeapFree((unsigned int)v37); /*0x647f91*/
            }
            v35 = (TESForm *)((char *)v35 + 1); /*0x647f99*/
          }
          while ( (int)v35 < v65 ); /*0x647fa0*/
        }
        break; /*0x647fa0*/
      case 0x19: /*0x647c29*/
        v42 = 0; /*0x647fb7*/
        v66 = ContainerExtraData_GetCount(ContainerExtraDataForRef); /*0x647fbb*/
        if ( v66 > 0 ) /*0x647fbf*/
        {
          do /*0x64805e*/
          {
            v43 = (TESHealthForm *)ContainerExtraData_GetEntryForItem( /*0x647fc8*/
                                     (ExtraContainerChanges_Data *)ContainerExtraDataForRef,
                                     v42);
            v44 = v43; /*0x647fcd*/
            if ( v43 ) /*0x647fd1*/
            {
              v45 = (char *)OblivionDynamicCast( /*0x647fe9*/
                              v43[1].vtbl,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                              &TESObjectWEAP `RTTI Type Descriptor',
                              0);
              if ( v45 ) /*0x647ff3*/
              {
                if ( v45[0x90] > 3 ) /*0x647ffc*/
                {
                  v47 = (_DWORD *)FormHeapAlloc(0x20u); /*0x648000*/
                  if ( v47 ) /*0x64800a*/
                    v48 = sub_628EB0(v47); /*0x648013*/
                  else
                    v48 = 0; /*0x648017*/
                  v48[1] = v44[1].vtbl; /*0x64801e*/
                  v49 = TESHealthForm_GetHealth(v44); /*0x648021*/
                  *v48 = a3; /*0x64802a*/
                  v48[4] = v49; /*0x648034*/
                  v48[7] = 1; /*0x648037*/
                  BSSimpleList_PushFront(a1 + 0xF, (int)v48); /*0x64803e*/
                  ContainerExtraDataForRef = v58; /*0x648043*/
                }
              }
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v44, v46); /*0x648049*/
              FormHeapFree((unsigned int)v44); /*0x64804f*/
            }
            v42 = (TESForm *)((char *)v42 + 1); /*0x648057*/
          }
          while ( (int)v42 < v66 ); /*0x64805e*/
        }
        break; /*0x64805e*/
      default:
        return;
    }
  }
  else
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg0); /*0x64807b*/
    v52 = (int *)arg0->vtbl->GetPos(arg0); /*0x648085*/
    a2[0] = *v52; /*0x648089*/
    a2[1] = v52[1]; /*0x648094*/
    v53 = (void *)v52[2]; /*0x648098*/
    a1[0x1B] = argC; /*0x64809c*/
    retaddr = v53; /*0x6480ad*/
    a5 = flt_B36778[0x5C]; /*0x6480b1*/
    v54 = arg0->vtbl->GetPos(arg0); /*0x6480bc*/
    sub_446B90( /*0x6480d5*/
      DwordAtOffset40,
      (float *)a2,
      flt_B36778[0x5C],
      v54,
      a5,
      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646600,
      (int)arg0);
    v55 = *(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x568); /*0x6480dc*/
    a1[0x1B] = 0; /*0x6480e5*/
    a1[0x19] = 0; /*0x6480e8*/
    v55(a1, arg0); /*0x6480eb*/
  }
}
