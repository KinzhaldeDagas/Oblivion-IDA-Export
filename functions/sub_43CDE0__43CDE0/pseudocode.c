void __thiscall sub_43CDE0(int *this, void *a2, unsigned __int8 a3, volatile LONG *a4, TESObjectREFR *a1)
{
  void *v5; // eax
  _DWORD *v6; // esi
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
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // [esp+14h] [ebp-11Ch]
  int *v23; // [esp+18h] [ebp-118h]
  IOTask *v24; // [esp+1Ch] [ebp-114h] BYREF
  volatile LONG *v25; // [esp+20h] [ebp-110h]
  float v26; // [esp+24h] [ebp-10Ch] BYREF
  char Str[260]; // [esp+28h] [ebp-108h] BYREF

  v23 = this;
  v25 = a4;
  v5 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESModel `RTTI Type Descriptor',
         &TESCreature `RTTI Type Descriptor',
         0);
  v6 = v5;
  if ( v5 )
  {
    ContainerExtraDataForRef = (ExtraContainerChanges_Data *)sub_6899C0((char *)v5 + 0xEC);
    v7 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x14))(a2);
    v8 = Str;
    do
    {
      v9 = *v7;
      *v8++ = *v7++;
    }
    while ( v9 );
    v10 = strrchr(Str, 0x5C);
    if ( v10 )
      v10[1] = 0;
    sub_43BC20(v23, (int)ContainerExtraDataForRef, v6 + 0x3E, a3, a4, Str);
    if ( a1 )
    {
      ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a1);
      v11 = sub_48C870((int *)ContainerExtraDataForRef, v6, 0xD, 0);
      v12 = v11;
      if ( v11 )
      {
        sub_43B990(&v24, (void *)v11[2], a3, v25, a1);
        if ( v24 )
        {
          v21 = v24;
          if ( !InterlockedDecrement((volatile LONG *)&v24->members.unk08) )
            (*(void (__thiscall **)(IOTask *, int))v21->vtbl)(v21, 1);
        }
        ContainerEntryExtraData_DestroyDataTable(v12, v13);
        FormHeapFree((unsigned int)v12);
      }
      v14 = sub_48BDA0((int)ContainerExtraDataForRef, (int)v12, v6, &v26, 0xFFFFFFFF, 0);
      v15 = v14;
      if ( v14 )
      {
        sub_43B990(&v21, (void *)v14[2], a3, v25, a1);
        if ( v21 )
        {
          v24 = v21;
          if ( !InterlockedDecrement((volatile LONG *)&v21->members.unk08) )
          {
            if ( v24 )
              (*(void (__thiscall **)(IOTask *, int))v24->vtbl)(v24, 1);
          }
        }
        ContainerEntryExtraData_DestroyDataTable(v15, v16);
        FormHeapFree((unsigned int)v15);
      }
      v17 = sub_48B9C0((int *)ContainerExtraDataForRef, v6, 0);
      v18 = v17;
      if ( v17 )
      {
        sub_43B990(&v21, (void *)v17[2], a3, v25, a1);
        if ( v21 )
        {
          v20 = v21;
          if ( !InterlockedDecrement((volatile LONG *)&v21->members.unk08) )
            (*(void (__thiscall **)(IOTask *, int))v20->vtbl)(v20, 1);
        }
        ContainerEntryExtraData_DestroyDataTable(v18, v19);
        FormHeapFree((unsigned int)v18);
      }
    }
  }
}
