int *__thiscall sub_485F10(int ***this, char a2)
{
  int **i; // ebp
  int *v3; // edi
  unsigned __int16 *v4; // eax
  unsigned __int16 *v5; // esi
  int j; // esi
  ExtraDataList *v7; // ecx
  BSExtraData *ExtraData; // eax

  for ( i = *this; i; i = (int **)i[1] ) /*0x485f12*/
  {
    v3 = *i; /*0x485f20*/
    if ( !*i ) /*0x485f20*/
      break; /*0x485f25*/
    v4 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)v3[2]); /*0x485f2b*/
    v5 = v4; /*0x485f30*/
    if ( v4 ) /*0x485f37*/
    {
      if ( TESBipedModelForm_CoversSlot(v4, 7, 0) || TESBipedModelForm_CoversSlot(v5, 6, 0) ) /*0x485f4e*/
      {
        for ( j = *v3; j; j = *(_DWORD *)(j + 4) ) /*0x485f57*/
        {
          v7 = *(ExtraDataList **)j; /*0x485f60*/
          if ( !*(_DWORD *)j ) /*0x485f60*/
            break; /*0x485f60*/
          if ( a2 ) /*0x485f68*/
            ExtraData = BaseExtraList_GetExtraData(v7, kExtraData_WornLeft); /*0x485f6c*/
          else
            ExtraData = BaseExtraList_GetExtraData(v7, kExtraData_Worn); /*0x485f70*/
          if ( ExtraData ) /*0x485f77*/
            return v3; /*0x485f90*/
        }
      }
    }
  }
  return 0; /*0x485f87*/
}
