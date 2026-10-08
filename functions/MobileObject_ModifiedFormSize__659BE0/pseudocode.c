__int16 __thiscall MobileObject_ModifiedFormSize(TESObjectREFR *this, int a2)
{
  __int16 v6; // [esp+Ch] [ebp+4h]

  v6 = TESObjectREFR_GetModifiedSize((TESChildCELL *)this, a2) + 1; /*0x659bf9*/
  if ( *((_DWORD *)this + 0x16) ) /*0x659bf2*/
    return (*(int (__thiscall **)(_DWORD, int, TESObjectREFR *))(**((_DWORD **)this + 0x16) + 0x3F0))( /*0x659c17*/
             *((_DWORD *)this + 0x16),
             a2,
             this)
         + v6;
  else
    return v6; /*0x659c1e*/
}
