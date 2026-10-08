_DWORD *__thiscall sub_5F87F0(TESObjectREFR *this)
{
  _DWORD *result; // eax
  int v3; // eax
  _DWORD *v4; // edi
  TESObjectCELL *DwordAtOffset40; // esi
  int *v6; // eax

  result = this->member.niNode; /*0x5f87f3*/
  if ( result ) /*0x5f87f8*/
  {
    sub_8AB8A0((int)result, 1.0); /*0x5f8805*/
    if ( *((_DWORD *)this + 0x16) ) /*0x5f880d*/
    {
      v3 = (*(int (__thiscall **)(_DWORD, TESObjectREFR *))(**((_DWORD **)this + 0x16) + 0xE8))( /*0x5f881f*/
             *((_DWORD *)this + 0x16),
             this);
      if ( v3 ) /*0x5f8823*/
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v3 + 0x9C))(v3, 0, 0); /*0x5f8833*/
    }
    sub_5E13D0(this, 1); /*0x5f883a*/
    result = MobileObject_GetCharProxy((MobileObject *)this); /*0x5f8841*/
    v4 = result; /*0x5f8846*/
    if ( result ) /*0x5f884a*/
    {
      result = (_DWORD *)Shared_GetDwordAtOffset40(this); /*0x5f884e*/
      if ( result ) /*0x5f8855*/
      {
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x5f885e*/
        if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x5f8862*/
        {
          v6 = (int *)sub_424180(&DwordAtOffset40->members.extraData); /*0x5f886e*/
          return (_DWORD *)sub_895060(v4, v6); /*0x5f8876*/
        }
        else
        {
          return (_DWORD *)sub_895060(v4, (int *)MEMORY[0xB35C24]); /*0x5f8886*/
        }
      }
    }
  }
  return result; /*0x5f887c*/
}
