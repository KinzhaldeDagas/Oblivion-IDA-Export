// TrainingMenu button handler entry. The first 15 bytes include a rel32 call at +5 to Menu_GetOpenMenuTile (0x589B70); any relocated gateway must re-encode that call and jump back to 0x5DD3EF rather than byte-copying its displacement.
void __userpurge TrainingMenu_HandleButton(double a1@<st2>, double a2@<st1>, double a3@<st0>, int a4, int a5)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void *v8; // esi
  float *ContainerChanges; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x404);// Rel32 CALL to Menu_GetOpenMenuTile (0x589B70) inside the 15-byte TrainingMenu_HandleButton prologue. Any entry trampoline that steals these bytes must relocate/re-encode this CALL; a raw memcpy trampoline changes the destination. /*0x5dd3e5*/
  if ( OpenMenuTile ) /*0x5dd3ef*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5dd3f7*/
    if ( ParentMenu ) /*0x5dd3fe*/
    {
      v8 = OblivionDynamicCast( /*0x5dd419*/
             ParentMenu,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &TrainingMenu `RTTI Type Descriptor',
             0);
      if ( v8 ) /*0x5dd420*/
      {
        if ( a4 == 6 ) /*0x5dd42d*/
        {
          if ( *((_DWORD *)v8 + 0x17) > sub_5E4420((Actor *)reference) ) /*0x5dd43d*/
          {
            ShowUIMessageBox( /*0x5dd48c*/
              (char *)MEMORY[0xB38DB0],
              a1,
              a2,
              a3,
              (char *)MEMORY[0xB38DB0],
              0,
              1,
              (char *)MEMORY[0xB38CF0],
              0);
          }
          else
          {
            Player_TrainSkill(reference, *((TESSkill_RecordView **)v8 + 0x16));// Train exactly one level in the stored native skill. Player_TrainSkill delegates to the shared skill-level routine, so major/non-major accounting is identical to an ordinary level increase. /*0x5dd449*/
            ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5dd457*/
            sub_491700(ContainerChanges, a1, a2, a3, (TESObjectREFR *)reference, *((_DWORD *)v8 + 0x17), 0);// Remove the training price from the player's container after the skill increase succeeds. /*0x5dd46b*/
            TrainingMenu_Close(a1, a2); /*0x5dd470*/
          }
        }
        else if ( a4 == 7 ) /*0x5dd49b*/
        {
          sub_57DE50(2); /*0x5dd49f*/
          TrainingMenu_Close(a1, a2); /*0x5dd4a7*/
        }
      }
    }
  }
}
