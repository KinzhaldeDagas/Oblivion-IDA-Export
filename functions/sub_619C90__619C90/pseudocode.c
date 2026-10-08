void __thiscall sub_619C90(_DWORD *this)
{
  _DWORD *v2; // eax
  unsigned int v3; // ecx
  ObjectType v4; // edi
  _DWORD *v5; // ebx
  int v6; // eax
  _DWORD *v7; // eax

  v2 = (_DWORD *)*(this + 0x10); /*0x619c94*/
  v3 = 0; /*0x619c97*/
  if ( v2 ) /*0x619c9b*/
  {
    do /*0x619cae*/
    {
      if ( *v2 ) /*0x619ca1*/
        ++v3; /*0x619ca6*/
      v2 = (_DWORD *)v2[1]; /*0x619ca9*/
    }
    while ( v2 ); /*0x619cae*/
    if ( v3 > 1 ) /*0x619cb3*/
    {
      v4.form = sub_569E60((TargetData *)*(this + 0xA)).form; /*0x619cca*/
      BSSimpleList_SortViaArrayAndRebuild( /*0x619ccc*/
        (EntryData *)*(this + 0x10),
        (int (__cdecl *)(tListVoid *, tListVoid *))CombatTargetInfo_ComparePriorityDescending);
      if ( CombatController_GetCurrentTarget((int)this) ) /*0x619cd3*/
      {
        v5 = (_DWORD *)*(this + 0xA); /*0x619cdd*/
        v6 = CombatController_GetCurrentTarget((int)this); /*0x619ce2*/
        TeSPackage_TargetData_SetTargetREFR(v5, v6); /*0x619cea*/
        if ( CombatController_GetCurrentTarget((int)this) != v4.objectCode ) /*0x619cf9*/
        {
          v7 = CombatController_FindTargetInfo(this, (int)v4.form); /*0x619cfe*/
          if ( v7 ) /*0x619d07*/
          {
            if ( (double)(int)v7[1] != kTerrainLODQuadRayDirectionZ ) /*0x619d1f*/
            {
              v7[1] += stru_B36C70;             // Stock target-retention decay: add unk_B36C70 == -1 to the displaced target's live signed priority before resorting. SmartAI must preserve this external delta. /*0x619d28*/
              BSSimpleList_SortViaArrayAndRebuild( /*0x619d33*/
                (EntryData *)*(this + 0x10),
                (int (__cdecl *)(tListVoid *, tListVoid *))CombatTargetInfo_ComparePriorityDescending);
            }
          }
        }
      }
    }
  }
}
