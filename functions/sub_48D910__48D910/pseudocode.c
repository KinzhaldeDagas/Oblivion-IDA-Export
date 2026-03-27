char __thiscall sub_48D910(int ***this)
{
  int v1; // ebx
  char result; // al
  int *v3; // edi
  ExtraDataList **v4; // ebp
  ExtraDataList *v5; // esi
  _DWORD *v6; // eax
  char v7; // [esp+7h] [ebp-5h]

  v1 = (int)*this;
  result = 0;
  v7 = 0;
  if ( *this )
  {
    do
    {
      v3 = *(int **)v1;
      if ( !*(_DWORD *)v1 )
        break;
      v4 = (ExtraDataList **)*v3;
      if ( *v3 )
      {
        do
        {
          v5 = *v4;
          if ( !*v4 )
            break;
          if ( ExtraDataList_GetCharge(*v4) == flt_A30634
            || (v7 = 1, sub_41F640(v5), ExtraDataList_SetExtraCount(v5, 0), v5->members.m_data) )
          {
            v4 = (ExtraDataList **)v4[1];
          }
          else
          {
            BSSimpleList_Remove(v4, (int)v5);
            (*(void (__thiscall **)(ExtraDataList *, int))v5->vtbl)(v5, 1);
            v4 = (ExtraDataList **)*v3;
          }
        }
        while ( v4 );
      }
      v6 = (_DWORD *)*v3;
      if ( !*v3 || v6[1] || *v6 || v3[1] )
      {
        v1 = *(_DWORD *)(v1 + 4);
      }
      else
      {
        BSSimpleList_Remove(*this, (int)v3);
        ContainerEntryExtraData_ClearDataTable(v3);
        if ( *v3 )
          BSSimpleList_Clear((_DWORD *)*v3);
        FormHeapFree(*v3);
        *v3 = 0;
        FormHeapFree((unsigned int)v3);
        v1 = (int)*this;
      }
      result = v7;
    }
    while ( v1 );
  }
  return result;
}
