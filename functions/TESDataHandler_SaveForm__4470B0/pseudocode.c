char __thiscall TESDataHandler_SaveForm(Data **this, TESForm *a2, int a3)
{
  Data *OverrideFile; // eax
  Data *v6; // ecx

  if ( !*(this + 0x231) )
    return 0;
  OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
  v6 = *(this + 0x231);
  if ( (OverrideFile != v6 || TESFile_GetIsMaster(v6)) && (a2->member.flags & 2) == 0 )
    return 0;
  if ( (a2->member.flags & 1) != 0 )
    return ((int (__thiscall *)(TESForm *, _DWORD))a2->vtbl->Unk_0B)(a2, *(this + 0x231));
  if ( (a2->member.flags & 0x20) == 0 )
    return ((int (__thiscall *)(TESForm *, _DWORD))a2->vtbl->Unk_08)(a2, *(this + 0x231));
  else
    return 0;
}
