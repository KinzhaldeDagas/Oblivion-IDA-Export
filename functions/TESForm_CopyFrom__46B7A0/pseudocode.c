int __stdcall TESForm_CopyFrom(TESForm *a1)
{
  const char *v1; // eax
  const char *v3; // [esp-4h] [ebp-4h]

  v1 = (const char *)((int (__thiscall *)(TESForm *, _DWORD))a1->vtbl->GetEditorName)(
                       a1,
                       *(_DWORD *)(0xC * (unsigned __int8)a1->member.type + 0xB05E04));
  return PrintError("Trying to copy form \"%s\".\r\nNo copy function for %s form types.\r\n", v1, v3);
}
