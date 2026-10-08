void __thiscall sub_43CDE0(int *this, void *a2, unsigned __int8 a3, volatile LONG *a4, TESObjectREFR *a1)
{
  char *v5; // eax
  char *v6; // esi
  char *v7; // eax
  char *v8; // edx
  char v9; // cl
  char *v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // edi
  int v13; // edx
  unsigned int *v14; // eax
  unsigned int *v15; // edi
  int v16; // edx
  unsigned int *v17; // eax
  unsigned int *v18; // esi
  int v19; // edx
  IOTask *v20; // edi
  IOTask *v21; // [esp+10h] [ebp-120h] BYREF
  ExtraDataList *****Head; // [esp+14h] [ebp-11Ch]
  int *v23; // [esp+18h] [ebp-118h]
  IOTask *v24; // [esp+1Ch] [ebp-114h] BYREF
  volatile LONG *v25; // [esp+20h] [ebp-110h]
  float v26; // [esp+24h] [ebp-10Ch] BYREF
  char Str[260]; // [esp+28h] [ebp-108h] BYREF

  v23 = this; /*0x43ce1c*/
  v25 = a4; /*0x43ce20*/
  v5 = (char *)OblivionDynamicCast( /*0x43ce24*/
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESModel `RTTI Type Descriptor',
                 &TESCreature `RTTI Type Descriptor',
                 0);
  v6 = v5; /*0x43ce29*/
  if ( v5 ) /*0x43ce30*/
  {
    Head = (ExtraDataList *****)EmbeddedList_GetHead(v5 + 0xEC); /*0x43ce41*/
    v7 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x14))(a2); /*0x43ce4c*/
    v8 = Str; /*0x43ce4e*/
    do /*0x43ce5e*/
    {
      v9 = *v7; /*0x43ce52*/
      *v8++ = *v7++; /*0x43ce54*/
    }
    while ( v9 ); /*0x43ce5e*/
    v10 = strrchr(Str, 0x5C); /*0x43ce67*/
    if ( v10 ) /*0x43ce71*/
      v10[1] = 0; /*0x43ce73*/
    sub_43BC20(v23, (int)Head, (unsigned int *)v6 + 0x3E, a3, a4, Str); /*0x43ce95*/
    if ( a1 ) /*0x43ce9c*/
    {
      Head = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef(a1); /*0x43ceb6*/
      v11 = ContainerChanges_SelectBestArmorForSlot(Head, (BSExtraDataVtbl *)v6, 0xD, 0); /*0x43ceba*/
      v12 = v11; /*0x43cebf*/
      if ( v11 ) /*0x43cec3*/
      {
        sub_43B990(&v24, (TESForm *)v11[2], a3, v25, a1); /*0x43ced9*/
        if ( v24 ) /*0x43cee4*/
        {
          v21 = v24; /*0x43cee6*/
          if ( !InterlockedDecrement((volatile LONG *)&v24->members.unk08) ) /*0x43ceee*/
            (*(void (__thiscall **)(IOTask *, int))v21->vtbl)(v21, 1); /*0x43cf06*/
        }
        ContainerEntryExtraData_DestroyDataTable(v12, v13); /*0x43cf0a*/
        FormHeapFree((unsigned int)v12); /*0x43cf10*/
      }
      v14 = sub_48BDA0((int)Head, (int)v12, (int *)v6, &v26, 0xFFFFFFFF, 0); /*0x43cf26*/
      v15 = v14; /*0x43cf2b*/
      if ( v14 ) /*0x43cf2f*/
      {
        sub_43B990(&v21, (TESForm *)v14[2], a3, v25, a1); /*0x43cf45*/
        if ( v21 ) /*0x43cf50*/
        {
          v24 = v21; /*0x43cf52*/
          if ( !InterlockedDecrement((volatile LONG *)&v21->members.unk08) ) /*0x43cf5a*/
          {
            if ( v24 ) /*0x43cf6a*/
              (*(void (__thiscall **)(IOTask *, int))v24->vtbl)(v24, 1); /*0x43cf72*/
          }
        }
        ContainerEntryExtraData_DestroyDataTable(v15, v16); /*0x43cf76*/
        FormHeapFree((unsigned int)v15); /*0x43cf7c*/
      }
      v17 = sub_48B9C0(Head, (int *)v6, 0); /*0x43cf8b*/
      v18 = v17; /*0x43cf90*/
      if ( v17 ) /*0x43cf94*/
      {
        sub_43B990(&v21, (TESForm *)v17[2], a3, v25, a1); /*0x43cfaa*/
        if ( v21 ) /*0x43cfb5*/
        {
          v20 = v21; /*0x43cfb7*/
          if ( !InterlockedDecrement((volatile LONG *)&v21->members.unk08) ) /*0x43cfbd*/
            (*(void (__thiscall **)(IOTask *, int))v20->vtbl)(v20, 1); /*0x43cfd3*/
        }
        ContainerEntryExtraData_DestroyDataTable(v18, v19); /*0x43cfd7*/
        FormHeapFree((unsigned int)v18); /*0x43cfdd*/
      }
    }
  }
}
