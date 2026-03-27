bool __stdcall TESForm_CompareTo_AlwaysFail_(TESForm *this, TESForm *a1)
{
  const char *v2; // eax
  const char *v4; // [esp-4h] [ebp-4h]

  v2 = (const char *)((int (__thiscall *)(TESForm *, _DWORD))this->vtbl->GetEditorName)(
                       this,
                       *(_DWORD *)(0xC * (unsigned __int8)this->member.type + 0xB05E04));
  PrintError("Trying to compare form \"%s\".\r\nNo copy function for %s form types.\r\n", v2, v4);
  return 0;
}
