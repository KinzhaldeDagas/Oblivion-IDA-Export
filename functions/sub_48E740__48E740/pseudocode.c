char __userpurge sub_48E740@<al>(int **this@<ecx>, double a2@<st1>, double a3@<st0>, TESObjectREFR *a4)
{
  TESObjectCELL *ParentCell; // eax
  int *v7; // edi
  int *v8; // ecx
  int v9; // edx
  int *v10; // ecx
  int j; // edx
  int v12; // ebp
  ExtraDataList **v13; // ecx
  int v14; // edx
  ExtraDataList **v15; // eax
  int v16; // ebx
  ExtraDataList *v17; // esi
  BSExtraDataVtbl *ExtraScript; // eax
  Script *v19; // edi
  char **ExtraScriptEventList; // eax
  char v21; // al
  int *v22; // eax
  int k; // ecx
  ExtraDataList **v24; // eax
  int v25; // ecx
  int *v26; // eax
  int v27; // ecx
  char v28; // [esp+13h] [ebp-19h]
  int v29; // [esp+14h] [ebp-18h]
  int v30; // [esp+18h] [ebp-14h]
  int *i; // [esp+1Ch] [ebp-10h]
  ExtraDataList **v32; // [esp+20h] [ebp-Ch]
  int v33; // [esp+24h] [ebp-8h]

  if ( !a4 )
    return 0;
  ParentCell = TESObjectREFR_GetParentCell(a4);
  v7 = *this;
  v8 = v7;
  v9 = 0;
  for ( i = v7; v8; v8 = (int *)v8[1] )
  {
    if ( *v8 )
      ++v9;
  }
  v29 = v9;
  v10 = v7;
  for ( j = 0; v10; v10 = (int *)v10[1] )
  {
    if ( *v10 )
      ++j;
  }
  v30 = j;
  if ( !ParentCell )
    return 0;
  v28 = 0;
  (*((void (__usercall **)(TESChildCELL *@<ecx>, TESObjectCELL *, double@<st0>, double@<st1>))ContainerExtraData_TempObjectREFR_->vtbl
   + 0x65))(
    ContainerExtraData_TempObjectREFR_,
    ParentCell,
    a3,
    a2);
  TESObjectREFR_SetPosition(
    (TESObjectREFR *)ContainerExtraData_TempObjectREFR_,
    a4->member.pos[0],
    a4->member.pos[1],
    a4->member.pos[2]);
  if ( v7 )
  {
    do
    {
      v12 = *i;
      if ( !*i )
        break;
      v13 = *(ExtraDataList ***)v12;
      v14 = 0;
      v15 = *(ExtraDataList ***)v12;
      v32 = *(ExtraDataList ***)v12;
      v33 = 0;
      if ( *(_DWORD *)v12 )
      {
        do
        {
          if ( *v15 )
            ++v14;
          v15 = (ExtraDataList **)v15[1];
        }
        while ( v15 );
        v33 = v14;
      }
      v16 = 0;
      if ( v13 )
      {
        while ( 1 )
        {
          v17 = *v13;
          if ( !*v13 )
            break;
          ExtraScript = ExtraDataList_GetExtraScript(*v13);
          v19 = (Script *)ExtraScript;
          if ( ExtraScript && ((int)ExtraScript[1].Destructor & 8) != 0 )
          {
            if ( LOBYTE(ExtraScript->CompareTo) == 0xD )
            {
              sub_4D7620(v17);
              TESObjectREFR_SetBaseForm((TESObjectREFR *)ContainerExtraData_TempObjectREFR_, *(_DWORD *)(v12 + 8));
              ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(v17);
              a3 = Script_Run(
                     v19,
                     a3,
                     a2,
                     (TESObjectREFR *)ContainerExtraData_TempObjectREFR_,
                     ExtraScriptEventList,
                     (int)a4,
                     0);
              if ( v21 )
                v28 = 1;
              v22 = *this;
              for ( k = 0; v22; v22 = (int *)v22[1] )
              {
                if ( *v22 )
                  ++k;
              }
              v30 = k;
              if ( v29 == k )
              {
                v24 = *(ExtraDataList ***)v12;
                v25 = 0;
                if ( *(_DWORD *)v12 )
                {
                  do
                  {
                    if ( *v24 )
                      ++v25;
                    v24 = (ExtraDataList **)v24[1];
                  }
                  while ( v24 );
                }
                v16 = v25;
              }
              ExtraDataList_SetScriptEventList((ExtraDataList *)&ContainerExtraData_TempObjectREFR_[0x11], 0);
              ExtraDataList_RemoveAllCopyableExtraData((ExtraDataList *)&ContainerExtraData_TempObjectREFR_[0x11], 1);
            }
            if ( v16 != v33 )
              break;
            if ( v29 != v30 )
              goto LABEL_43;
          }
          v32 = (ExtraDataList **)v32[1];
          if ( !v32 )
            break;
          v13 = v32;
        }
      }
      if ( v29 != v30 )
      {
LABEL_43:
        v26 = *this;
        v27 = 0;
        for ( i = *this; v26; v26 = (int *)v26[1] )
        {
          if ( *v26 )
            ++v27;
        }
        v29 = v27;
        v30 = v27;
      }
      i = (int *)i[1];
    }
    while ( i );
  }
  (*((void (__thiscall **)(TESChildCELL *, _DWORD))ContainerExtraData_TempObjectREFR_->vtbl + 0x65))(
    ContainerExtraData_TempObjectREFR_,
    0);
  TESObjectREFR_SetBaseForm((TESObjectREFR *)ContainerExtraData_TempObjectREFR_, 0);
  return v28;
}
