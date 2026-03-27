void sub_5C1900()
{
  int ***ContainerExtraDataForRef; // ebx
  int v1; // edi
  int *i; // ebp
  int v3; // esi
  bool v4; // zf
  unsigned int *v5; // eax
  int v6; // edx
  unsigned int v7; // esi
  TESForm::ModReferenceList *p_modlist; // eax
  int v9; // [esp+10h] [ebp-4h] BYREF

  TESObjectREFR_GetContainer((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  v1 = 0;
  for ( i = dword_B3B444; ; i += 4 )
  {
    if ( i[2] )
    {
      v3 = *(_DWORD *)(*i + 8);
      v4 = *(_BYTE *)(v3 + 4) == 0x10;
      v9 = v3;
      if ( v4 )
      {
        p_modlist = &Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0)[3].member.modlist;
        if ( p_modlist )
        {
          while ( p_modlist->data != (Data *)v3 )
          {
            p_modlist = p_modlist->next;
            if ( !p_modlist )
              goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          sub_776690(i + 0xFFFFFFFF, &v9);
        }
        goto LABEL_11;
      }
      if ( ContainerExtraDataForRef )
        break;
    }
LABEL_11:
    if ( ++v1 >= 8 )
      return;
  }
  v5 = (unsigned int *)sub_4896B0(ContainerExtraDataForRef, (ExtraDataList **)v3, v1);
  v7 = (unsigned int)v5;
  if ( v5 )
  {
    ContainerEntryExtraData_DestroyDataTable(v5, v6);
    FormHeapFree(v7);
    goto LABEL_11;
  }
  sub_776690((_DWORD *)&quickKeyList_ptr + 4 * v1, &v9);
}
