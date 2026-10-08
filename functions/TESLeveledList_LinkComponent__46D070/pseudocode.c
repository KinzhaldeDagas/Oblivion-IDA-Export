void __thiscall TESLeveledList_LinkComponent(char *this, TESForm *a2, int a3, Data *a4, int a5, UInt32 a6)
{
  unsigned int *v6; // edi

  v6 = (unsigned int *)(this + 4); /*0x46d079*/
  if ( a2 ) /*0x46d07c*/
    TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x46d082*/
  if ( !v6 ) /*0x46d097*/
    JUMPOUT(0x46D19B); /*0x46d19b*/
  TESLeveledList_LinkComponent_::ListLoop(a2, v6, (int)a2, a3, a4, a5, a6); /*0x46d09f*/
}
