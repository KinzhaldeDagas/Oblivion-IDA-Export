int __thiscall sub_5EAE10(TESObjectREFR *this)
{
  int result; // eax

  if ( !*((_DWORD *)this + 0x16) ) /*0x5eae13*/
    return 0; /*0x5eae65*/
  if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].GetSleepState)(this, 1) ) /*0x5eae23*/
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16)); /*0x5eae23*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x244))(*((_DWORD *)this + 0x16)) /*0x5eae3e*/
    && !sub_5E6CD0(this, 0) )
  {
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16)); /*0x5eae3e*/
  }
  result = ((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].IsActor)(this); /*0x5eae51*/
  if ( !result ) /*0x5eae55*/
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16)); /*0x5eae63*/
  return result; /*0x5eae67*/
}
