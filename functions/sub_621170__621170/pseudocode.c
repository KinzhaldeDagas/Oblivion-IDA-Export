// Requires shooter HighProcess. Iterates cached controller+0x15C allies, or temporary combat-group friendlies if no controller.
int *__cdecl Actor_CheckAlliesBlockingRangedTarget(PlayerCharacter *a1, int *a2, char a3)
{
  LowProcess *process; // ecx
  int *v5; // ebx
  CombatController *v6; // eax
  char *v7; // esi
  int *v8; // eax
  int *result; // eax
  _DWORD *v10; // esi
  int *v11; // eax
  _DWORD *v12; // [esp+18h] [ebp+4h]

  if ( !a1 ) /*0x621177*/
    return 0; /*0x621177*/
  process = a1->super.super.super.process; /*0x62117d*/
  if ( !process || process->GetProcessLevel(process) ) /*0x62118d*/
    return 0; /*0x621265*/
  v5 = 0; /*0x6211a4*/
  if ( !a1->vtbl->super.GetCombatController(a1) ) /*0x6211aa*/
  {
    v10 = CombatGroupManager_BuildFriendlyEntryList((int *)&qword_B3BB2C[0xA1], a1, 0); /*0x62120a*/
    v12 = v10; /*0x62120e*/
    if ( v10 ) /*0x621212*/
    {
      do /*0x621248*/
      {
        v11 = *(int **)*v10; /*0x62122a*/
        v10 = (_DWORD *)v10[1]; /*0x62122c*/
        v5 = Combat_CheckActorBlocksRangedTarget((int *)a1, a2, v11, a3); /*0x621246*/
      }
      while ( v10 ); /*0x621248*/
      BSSimpleList_Clear(v12); /*0x621250*/
      FormHeapFree((unsigned int)v12); /*0x621256*/
    }
    return v5; /*0x621256*/
  }
  v6 = a1->vtbl->super.GetCombatController(a1); /*0x6211b6*/
  v7 = (char *)v6 + 0x15C; /*0x6211ba*/
  if ( v6 == (CombatController *)0xFFFFFEA4 ) /*0x6211c0*/
    return v5; /*0x621264*/
  do /*0x6211f6*/
  {
    v8 = *(int **)v7; /*0x6211d8*/
    v7 = *((char **)v7 + 1); /*0x6211da*/
    result = Combat_CheckActorBlocksRangedTarget((int *)a1, a2, v8, a3);// Vanilla quirk: result is overwritten for each ally and no early exit occurs. Final return reflects only the last list element, though every blocking ally receives the side effect. /*0x6211ea*/
  }
  while ( v7 ); /*0x6211f6*/
  return result; /*0x6211fb*/
}
