char __thiscall TESDataHandler_SaveForm(Data **this, TESForm *a2, int a3)
{
  Data *OverrideFile; // eax
  Data *v6; // ecx

  if ( !*(this + 0x231) ) /*0x4470b3*/
    return 0; /*0x4470bf*/
  OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x4470cb*/
  v6 = *(this + 0x231); /*0x4470d0*/
  if ( (OverrideFile != v6 || TESFile_GetIsMaster(v6)) && (a2->member.flags & 2) == 0 ) /*0x4470ea*/
    return 0; /*0x4470ea*/
  if ( (a2->member.flags & 1) != 0 ) /*0x4470f0*/
    return ((int (__thiscall *)(TESForm *, _DWORD))a2->vtbl->Unk_0B)(a2, *(this + 0x231)); /*0x447104*/
  if ( (a2->member.flags & 0x20) == 0 ) /*0x44710f*/
    return ((int (__thiscall *)(TESForm *, _DWORD))a2->vtbl->Unk_08)(a2, *(this + 0x231)); /*0x447126*/
  else
    return 0; /*0x447112*/
}
