int __thiscall ExtraDataList_CopyListForReference(ExtraDataList *this, ExtraDataList **a2, char a3)
{
  BSExtraData *next; // esi
  BSExtraData *ExtraData; // eax
  int vtbl; // ebp
  ExtraScript *v8; // eax
  BSExtraData *v9; // eax
  BSExtraData *v10; // eax
  char *v11; // eax
  char **EventList; // ebp
  BSExtraData *v13; // eax
  char v15; // [esp+28h] [ebp+4h]

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aExtradatalis_1);
  next = (BSExtraData *)a2[1];
  while ( next )
  {
    v15 = 1;
    switch ( next->members.type )
    {
      case 0x12u:
        if ( a3 )
        {
          ExtraDataList_CopyBSExtraData(this, next);
          BaseExtraList_RemoveExtraByPtr((ExtraDataList *)a2, (int)next, 0);
          next = (BSExtraData *)a2[1];
          v15 = 0;
        }
        else
        {
          ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)a2, kExtraData_Script);
          if ( ExtraData )
            vtbl = (int)ExtraData[1].vtbl;
          else
            vtbl = 0;
          v8 = (ExtraScript *)FormHeapAlloc(0x14u);
          if ( v8 )
            v9 = (BSExtraData *)ExtraScript::ExtraScript(v8, vtbl);
          else
            v9 = 0;
          BaseExtraList_AddExtra(this, v9);
          v10 = BaseExtraList_GetExtraData((ExtraDataList *)a2, kExtraData_Script);
          if ( v10 )
            v11 = (char *)v10[1].vtbl;
          else
            v11 = 0;
          EventList = Script_CreateEventList(v11);
          v13 = BaseExtraList_GetExtraData(this, kExtraData_Script);
          if ( v13 )
            *(_DWORD *)&v13[1].members.type = EventList;
        }
        break;
      case 0x1Bu:
      case 0x22u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
      case 0x36u:
      case 0x37u:
      case 0x48u:
        ExtraDataList_CopyBSExtraData(this, next);
        if ( a3 )
        {
          BaseExtraList_RemoveExtraByPtr((ExtraDataList *)a2, (int)next, 1);
          next = (BSExtraData *)a2[1];
          v15 = 0;
        }
        break;
      default:
        break;
    }
    if ( !next )
      break;
    if ( v15 )
      next = next->members.next;
  }
  return NiLeaveCriticalSection_0(&BSExtraDataCS);
}
