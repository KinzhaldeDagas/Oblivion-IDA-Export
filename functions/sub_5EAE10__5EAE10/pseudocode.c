int __thiscall sub_5EAE10(TESObjectREFR *this)
{
  int result; // eax

  if ( !*((_DWORD *)this + 0x16) )
    return 0;
  if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].GetSleepState)(this, 1) )
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16));
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x244))(*((_DWORD *)this + 0x16))
    && !sub_5E6CD0(this, 0) )
  {
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16));
  }
  result = ((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].IsActor)(this);
  if ( !result )
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16));
  return result;
}
