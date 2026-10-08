UInt32 __thiscall TESObjectREFR_SetFromActiveFile(TESChildCELL *this, TESForm *a2)
{
  void *v3; // eax

  if ( (*(_DWORD *)(this + 2) & 0x4000) == 0 ) /*0x4d6dc0*/
  {
    if ( (_BYTE)a2 ) /*0x4d6dc4*/
    {
      v3 = (void *)(**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6); /*0x4d6dce*/
      if ( v3 ) /*0x4d6dd2*/
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)v3 + 0x90))(v3, 1); /*0x4d6de0*/
    }
  }
  return TESForm_SetFromActiveFile((TESForm *)this, (bool)a2); /*0x4d6dea*/
}
