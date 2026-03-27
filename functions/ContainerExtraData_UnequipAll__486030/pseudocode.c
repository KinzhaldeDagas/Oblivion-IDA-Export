void __thiscall ContainerExtraData_UnequipAll(int *this, char a2)
{
  int v2; // ebx
  int *v3; // ebp
  int *v4; // esi
  int v5; // edi
  int *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax

  v2 = *this;
  while ( v2 )
  {
    v3 = *(int **)v2;
    if ( !*(_DWORD *)v2 )
      goto LABEL_25;
    v4 = (int *)*v3;
    if ( *v3 )
    {
      do
      {
        v5 = *v4;
        if ( !*v4
          || !ExtraDataList_HasWorn((_BYTE *)v5, 0)
          || a2 && sub_41DF40((_BYTE *)v5)
          || (sub_41F6A0((_DWORD *)v5, 0), ExtraDataList_SetExtraCount((ExtraDataList *)v5, 0), *(_DWORD *)(v5 + 4)) )
        {
          v4 = (int *)v4[1];
        }
        else
        {
          v6 = (int *)v4[1];
          if ( v6 )
          {
            v4[1] = v6[1];
            *v4 = *v6;
            FormHeapFree((unsigned int)v6);
          }
          else
          {
            *v4 = 0;
          }
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
        }
      }
      while ( v4 );
    }
    v7 = (_DWORD *)*v3;
    if ( !*v3 || v7[1] || *v7 || v3[1] )
    {
LABEL_25:
      v2 = *(_DWORD *)(v2 + 4);
    }
    else
    {
      v8 = *(_DWORD **)(v2 + 4);
      if ( v8 )
      {
        *(_DWORD *)(v2 + 4) = v8[1];
        *(_DWORD *)v2 = *v8;
        FormHeapFree((unsigned int)v8);
      }
      else
      {
        *(_DWORD *)v2 = 0;
      }
      ContainerEntryExtraData_ClearDataTable(v3);
      if ( *v3 )
        BSSimpleList_Clear((_DWORD *)*v3);
      FormHeapFree(*v3);
      *v3 = 0;
      FormHeapFree((unsigned int)v3);
    }
  }
}
