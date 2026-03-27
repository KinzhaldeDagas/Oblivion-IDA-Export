void __thiscall TESLeveledList_LinkComponent(char *this, TESForm *a2, int a3, int a4, int a5, int a6)
{
  char *v6; // edi

  v6 = this + 4;
  if ( a2 )
    TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
  if ( !v6 )
    JUMPOUT(0x46D19B);
  TESLeveledList_LinkComponent_::ListLoop();
}
