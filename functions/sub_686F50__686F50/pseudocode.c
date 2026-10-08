char __cdecl sub_686F50(MobileObject *a1, char *a2, TeleportData *a3, char a4, char a5)
{
  char *Head; // eax
  LowProcess *process; // ecx
  char v8; // bl
  char *v9; // eax
  char *v10; // eax
  ExtraDataList *DwordAtOffset40; // [esp-4h] [ebp-18h]
  float v12; // [esp+0h] [ebp-14h]

  if ( !a2 ) /*0x686f57*/
    return 0; /*0x686f5c*/
  Head = EmbeddedList_GetHead(a2); /*0x686f60*/
  TeleportData::SetTeleportPosition(a3, (NiPoint3 *)Head); /*0x686f6c*/
  if ( unk_B3C089 ) /*0x686f71*/
    return 1; /*0x686f7e*/
  if ( !a1 ) /*0x686f86*/
    return 0; /*0x686f86*/
  if ( !MobileObject_GetCharProxy(a1) ) /*0x686f8e*/
    return 0; /*0x686f8e*/
  process = a1->process; /*0x686f9b*/
  if ( !process ) /*0x686fa0*/
    return 0; /*0x687058*/
  if ( process->GetProcessLevel(process) ) /*0x686fab*/
    return 1; /*0x686fb6*/
  v8 = 0; /*0x686fba*/
  if ( sub_68CA20(a2) ) /*0x686fbc*/
  {
    if ( sub_68CA80(a2) ) /*0x686fc7*/
    {
      if ( sub_5E3400((Actor *)a1) ) /*0x686fe4*/
        return 1; /*0x686fe4*/
      if ( !sub_68CAB0(a2) && Actor_IsCreature((Actor *)a1) ) /*0x686ffa*/
      {
        v12 = flt_A3744C; /*0x68700c*/
        DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(a1); /*0x687014*/
        v9 = EmbeddedList_GetHead(a2); /*0x687017*/
        if ( !Actor_IsUnderwater__(a1, (int)v9, DwordAtOffset40, v12) ) /*0x68701f*/
          return 1; /*0x687030*/
      }
    }
    else if ( !sub_5E1E90(a1) ) /*0x686fd2*/
    {
      return 1; /*0x686fe3*/
    }
  }
  else
  {
    v10 = EmbeddedList_GetHead(a2); /*0x68703e*/
    return sub_686450(a1, (NiPoint3 *)v10, a3, a4, a5); /*0x68704d*/
  }
  return v8; /*0x686f5b*/
}
