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

  TESObjectREFR_GetContainer((TESObjectREFR *)reference); /*0x5c190b*/
  ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)reference); /*0x5c191f*/
  v1 = 0; /*0x5c1921*/
  for ( i = unk_B3B444; ; i += 4 ) /*0x5c1923*/
  {
    if ( i[2] ) /*0x5c1928*/
    {
      v3 = *(_DWORD *)(*i + 8); /*0x5c1931*/
      v4 = *(_BYTE *)(v3 + 4) == 0x10; /*0x5c1934*/
      v9 = v3; /*0x5c1938*/
      if ( v4 ) /*0x5c193c*/
      {
        p_modlist = &Actor_GetActorBaseForm((Actor *)reference, 0)[3].member.modlist; /*0x5c1970*/
        if ( p_modlist ) /*0x5c1973*/
        {
          while ( p_modlist->data != (Data *)v3 ) /*0x5c1977*/
          {
            p_modlist = p_modlist->next; /*0x5c1979*/
            if ( !p_modlist ) /*0x5c197e*/
              goto LABEL_10; /*0x5c197e*/
          }
        }
        else
        {
LABEL_10:
          NiTPointerList_RemoveByData((BSTextureManager *)(i + 0xFFFFFFFF), &v9); /*0x5c1980*/
        }
        goto LABEL_11; /*0x5c1977*/
      }
      if ( ContainerExtraDataForRef ) /*0x5c1940*/
        break; /*0x5c1940*/
    }
LABEL_11:
    if ( ++v1 >= 8 ) /*0x5c1996*/
      return; /*0x5c1996*/
  }
  v5 = (unsigned int *)sub_4896B0(ContainerExtraDataForRef, (ExtraDataList **)v3, v1); /*0x5c1946*/
  v7 = (unsigned int)v5; /*0x5c194b*/
  if ( v5 ) /*0x5c194f*/
  {
    ContainerEntryExtraData_DestroyDataTable(v5, v6); /*0x5c1953*/
    FormHeapFree(v7); /*0x5c1959*/
    goto LABEL_11; /*0x5c1961*/
  }
  NiTPointerList_RemoveByData((BSTextureManager *)&MEMORY[0xB3B440][0x10 * v1], &v9); /*0x5c19ae*/
}
