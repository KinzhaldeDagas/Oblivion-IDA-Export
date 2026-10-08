// Shared GetInCell/GetInCellParam evaluator (553 and 4 vanilla core-root CTDAs, respectively). Param1 must be a Cell form. If param2 is a reference in Oblivion form-type range 0x31..0x33, test that reference; otherwise use the condition subject. Resolve its cell and compare editor-name strings case-insensitively over the requested Cell name length (a prefix comparison), not FormID pointer identity. GetInCellParam can run without a subject because it has an explicit ObjectReferenceID param2. Fallout analogue x4y6:0x823B6270 uses the same name comparison but recognizes reference type range 0x3A..0x40 or 0x69.
char __usercall GetInCell_Eval@<al>(int a1@<ebx>, TESObjectREFR *a2, TESForm *a3, TESObjectREFR *a4, double *a5)
{
  TESForm *v5; // edi
  TESObjectREFR *v6; // esi
  UInt32 DwordAtOffset40; // ebx
  const char *v8; // eax
  double v9; // st7
  const char *v11; // [esp-8h] [ebp-18h]
  size_t v12; // [esp-4h] [ebp-14h]

  *a5 = 0.0; /*0x4f6d7c*/
  v5 = 0; /*0x4f6d7f*/
  if ( a3 ) /*0x4f6d83*/
  {
    if ( a3->member.type == kFormType_Cell ) /*0x4f6d89*/
      v5 = a3; /*0x4f6d8b*/
  }
  v6 = a4; /*0x4f6d8e*/
  if ( a4 && (unsigned int)a4->member.super.type - 0x31 <= 2 || (v6 = a2) != 0 ) /*0x4f6da8*/
  {
    if ( v6 == (TESObjectREFR *)unk_B3618C && (TESForm *)unk_B36190 == v5 ) /*0x4f6db8*/
    {
      *a5 = unk_B36194; /*0x4f6dc0*/
    }
    else
    {
      if ( v6 ) /*0x4f6dc7*/
      {
        HIDWORD(v12) = a1; /*0x4f6dc9*/
        DwordAtOffset40 = Shared_GetDwordAtOffset40(v6); /*0x4f6dd1*/
        if ( DwordAtOffset40 ) /*0x4f6dd5*/
        {
          if ( v5 ) /*0x4f6dd9*/
          {
            LODWORD(v12) = TESForm::GetEditorNameLen(v5); /*0x4f6de2*/
            v11 = v5->vtbl->GetEditorName(v5); /*0x4f6def*/
            v8 = (const char *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)DwordAtOffset40 + 0xD4))(DwordAtOffset40); /*0x4f6dfa*/
            if ( !_strnicmp(v8, v11, v12) ) /*0x4f6dfd*/
              *a5 = 1.0; /*0x4f6e0b*/
          }
        }
      }
      v9 = *a5; /*0x4f6e0f*/
      unk_B3618C = (int)v6; /*0x4f6e12*/
      unk_B36194 = v9; /*0x4f6e18*/
      unk_B36190 = (int)v5; /*0x4f6e1e*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f6e24*/
    Interface_ConsolePrint("GetInCell >> %0.2f", *a5); /*0x4f6e3c*/
  return 1; /*0x4f6e44*/
}
