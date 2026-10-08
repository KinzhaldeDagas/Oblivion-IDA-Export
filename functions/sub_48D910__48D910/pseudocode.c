char __thiscall sub_48D910(int ***this)
{
  int *v1; // ebx
  char result; // al
  int *v3; // edi
  int *v4; // ebp
  ExtraDataList *v5; // esi
  _DWORD *v6; // eax
  char v7; // [esp+7h] [ebp-5h]

  v1 = (int *)*this; /*0x48d914*/
  result = 0; /*0x48d916*/
  v7 = 0; /*0x48d91e*/
  if ( *this ) /*0x48d914*/
  {
    do /*0x48d9f0*/
    {
      v3 = (int *)*v1; /*0x48d930*/
      if ( !*v1 ) /*0x48d930*/
        break; /*0x48d934*/
      v4 = (int *)*v3; /*0x48d93a*/
      if ( *v3 ) /*0x48d93a*/
      {
        do /*0x48d991*/
        {
          v5 = (ExtraDataList *)*v4; /*0x48d940*/
          if ( !*v4 ) /*0x48d940*/
            break; /*0x48d945*/
          if ( ExtraDataList_GetCharge((ExtraDataList *)*v4) == kTerrainLODQuadRayDirectionZ /*0x48d970*/
            || (v7 = 1, sub_41F640(v5), ExtraDataList_SetExtraCount(v5, 0), v5->members.m_data) )
          {
            v4 = (int *)v4[1]; /*0x48d98c*/
          }
          else
          {
            BSSimpleList_Remove(v4, (int)v5); /*0x48d979*/
            (*(void (__thiscall **)(ExtraDataList *, int))v5->vtbl)(v5, 1); /*0x48d986*/
            v4 = (int *)*v3; /*0x48d988*/
          }
        }
        while ( v4 ); /*0x48d991*/
      }
      v6 = (_DWORD *)*v3; /*0x48d993*/
      if ( !*v3 || v6[1] || *v6 || v3[1] ) /*0x48d9a4*/
      {
        v1 = (int *)v1[1]; /*0x48d9e7*/
      }
      else
      {
        BSSimpleList_Remove((int *)*this, (int)v3); /*0x48d9b1*/
        ContainerEntryExtraData_ClearDataTable(v3); /*0x48d9b8*/
        if ( *v3 ) /*0x48d9bd*/
          BSSimpleList_Clear((_DWORD *)*v3); /*0x48d9c3*/
        FormHeapFree(*v3); /*0x48d9cb*/
        *v3 = 0; /*0x48d9d1*/
        FormHeapFree((unsigned int)v3); /*0x48d9d7*/
        v1 = (int *)*this; /*0x48d9e0*/
      }
      result = v7; /*0x48d9ec*/
    }
    while ( v1 ); /*0x48d9f0*/
  }
  return result; /*0x48d9f9*/
}
