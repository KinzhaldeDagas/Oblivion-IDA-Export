int *__thiscall sub_485F10(int ***this, char a2)
{
  int **i; // ebp
  int *v3; // edi
  unsigned __int16 *v4; // eax
  unsigned __int16 *v5; // esi
  int j; // esi
  ExtraDataList *v7; // ecx
  BSExtraData *ExtraData; // eax

  for ( i = *this; i; i = (int **)i[1] )
  {
    v3 = *i;
    if ( !*i )
      break;
    v4 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)v3[2]);
    v5 = v4;
    if ( v4 )
    {
      if ( TESBipedModelForm_CoversSlot(v4, 7, 0) || TESBipedModelForm_CoversSlot(v5, 6, 0) )
      {
        for ( j = *v3; j; j = *(_DWORD *)(j + 4) )
        {
          v7 = *(ExtraDataList **)j;
          if ( !*(_DWORD *)j )
            break;
          if ( a2 )
            ExtraData = BaseExtraList_GetExtraData(v7, kExtraData_WornLeft);
          else
            ExtraData = BaseExtraList_GetExtraData(v7, kExtraData_Worn);
          if ( ExtraData )
            return v3;
        }
      }
    }
  }
  return 0;
}
