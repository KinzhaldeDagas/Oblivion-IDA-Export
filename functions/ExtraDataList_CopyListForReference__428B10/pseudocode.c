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

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aExtradatalis_1); /*0x428b41*/
  next = (BSExtraData *)a2[1]; /*0x428b4a*/
  while ( next ) /*0x428b4f*/
  {
    v15 = 1; /*0x428b5f*/
    switch ( next->members.type ) /*0x428b71*/
    {
      case 0x12u: /*0x428b71*/
        if ( a3 ) /*0x428ba7*/
        {
          ExtraDataList_CopyBSExtraData(this, next); /*0x428bac*/
          BaseExtraList_RemoveExtraByPtr((ExtraDataList *)a2, (int)next, 0); /*0x428bb6*/
          next = (BSExtraData *)a2[1]; /*0x428bbb*/
          v15 = 0; /*0x428bbe*/
        }
        else
        {
          ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)a2, kExtraData_Script); /*0x428bc9*/
          if ( ExtraData ) /*0x428bd0*/
            vtbl = (int)ExtraData[1].vtbl; /*0x428bd2*/
          else
            vtbl = 0; /*0x428bd7*/
          v8 = (ExtraScript *)FormHeapAlloc(0x14u); /*0x428bdb*/
          if ( v8 ) /*0x428bf1*/
            v9 = (BSExtraData *)ExtraScript::ExtraScript(v8, vtbl); /*0x428bf6*/
          else
            v9 = 0; /*0x428bfd*/
          BaseExtraList_AddExtra(this, v9); /*0x428c0a*/
          v10 = BaseExtraList_GetExtraData((ExtraDataList *)a2, kExtraData_Script); /*0x428c13*/
          if ( v10 ) /*0x428c1a*/
            v11 = (char *)v10[1].vtbl; /*0x428c1c*/
          else
            v11 = 0; /*0x428c21*/
          EventList = Script_CreateEventList(v11); /*0x428c2e*/
          v13 = BaseExtraList_GetExtraData(this, kExtraData_Script); /*0x428c30*/
          if ( v13 ) /*0x428c37*/
            *(_DWORD *)&v13[1].members.type = EventList; /*0x428c39*/
        }
        break; /*0x428bc3*/
      case 0x1Bu: /*0x428b71*/
      case 0x22u: /*0x428b71*/
      case 0x27u: /*0x428b71*/
      case 0x28u: /*0x428b71*/
      case 0x29u: /*0x428b71*/
      case 0x2Bu: /*0x428b71*/
      case 0x2Cu: /*0x428b71*/
      case 0x2Du: /*0x428b71*/
      case 0x2Eu: /*0x428b71*/
      case 0x2Fu: /*0x428b71*/
      case 0x36u: /*0x428b71*/
      case 0x37u: /*0x428b71*/
      case 0x48u: /*0x428b71*/
        ExtraDataList_CopyBSExtraData(this, next); /*0x428b7b*/
        if ( a3 ) /*0x428b85*/
        {
          BaseExtraList_RemoveExtraByPtr((ExtraDataList *)a2, (int)next, 1); /*0x428b90*/
          next = (BSExtraData *)a2[1]; /*0x428b95*/
          v15 = 0; /*0x428b98*/
        }
        break; /*0x428b9d*/
      default:
        break;
    }
    if ( !next ) /*0x428c3e*/
      break; /*0x428c3e*/
    if ( v15 ) /*0x428c45*/
      next = next->members.next; /*0x428c47*/
  }
  return NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x428c5c*/
}
