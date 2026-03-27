void __thiscall sub_5EF930(Actor *this)
{
  LowProcess *process; // esi
  UInt32 v3; // eax

  process = this->members.super.process;
  if ( process )
  {
    if ( ((int (__thiscall *)(LowProcess *, _DWORD))process->GetUnk220Element)(process, 0) )
    {
      ((void (__thiscall *)(LowProcess *, _DWORD))process->StopSoundITMTorchHeldLP)(process, 0);
      ((void (__thiscall *)(LowProcess *, _DWORD))process->Unk_80)(process, 0);
      sub_65DA10(TESDataHandler_g_PlayerRef);
    }
  }
  if ( this->members.super.process )
  {
    v3 = this->members.super.process->Unk_39(this->members.super.process, (UInt32)this);
    if ( v3 )
      (*(void (__thiscall **)(UInt32, float, _DWORD, int, int, int, _DWORD))(*(_DWORD *)v3 + 0x78))(
        v3,
        flt_A41328,
        0,
        1,
        1,
        1,
        0);
  }
}
