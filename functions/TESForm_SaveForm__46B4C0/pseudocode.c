// 0x46B4CB: Oblivion outer save/tombstone branch verified 2026-10-01: TESForm_SaveForm tests PARTIAL flag0x4000 here and returns false at0x46B4CD without invoking the virtual form writer. Otherwise deleted flag0x20 selects TESFile_WriteEmptyFormRecord at0x46B4E1 then closes; it never invokes TESWorldSpace_WriteRecord. A deleted WRLD emits no SNAM/payload, and partial+deleted is skipped. Non-deleted WRLD zero/nonzero SNAM policy is at TESWorldSpace_WriteRecord0x4F1214.
//
// 0x46b4cb: WRLD-SNAM deleted-save behavior verified 2026-10-01: TESForm_SaveForm at0x46B4C0 returns false for PARTIAL flag0x4000 at0x46B4CB. Otherwise deleted flag0x20 selects TESFile_WriteEmptyFormRecord/CloseForm and bypasses the virtual full WRLD writer. Deleted music candidates may replay on load, but the native saved shape has no SNAM; partial+deleted is not saved by this entry point.
char __thiscall TESForm_SaveForm(TESForm *this, Data *file)
{
  TESForm::FormFlags flags; // eax

  flags = this->member.flags; /*0x46b4c0*/
  if ( (flags & 0x4000) != 0 ) /*0x46b4cb*/
    return 0; /*0x46b4cd*/
  if ( (flags & 0x20) == 0 ) /*0x46b4d7*/
    return ((char (__thiscall *)(TESForm *, Data *))this->vtbl->Unk_08)(this, file); /*0x46b4f8*/
  TESFile_WriteEmptyFormRecord(file, (int)this); /*0x46b4e1*/
  TESFile_CloseForm(file); /*0x46b4e8*/
  return 1; /*0x46b4cf*/
}
