CHAR *__thiscall TESObjectREFR_GetEditorID(TESChildCELL *this)
{
  const char *v2; // eax

  if ( !unk_B333F4 ) /*0x4d6df0*/
  {
    unk_B333F4 = 1; /*0x4d6dfc*/
    v2 = (*((const char *(__thiscall **)(TESForm *))this->vtbl + 0x35))((TESForm *)this); /*0x4d6e0b*/
    unk_B333F4 = 0; /*0x4d6e0f*/
    if ( v2 ) /*0x4d6e16*/
    {
      if ( strlen(v2) ) /*0x4d6e18*/
        return EmptyString; /*0x4d6e18*/
    }
  }
  if ( !*((_DWORD *)this + 7) || g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x4d6e3a*/
    return EmptyString; /*0x4d6e51*/
  else
    return (CHAR *)(*(const char *(__thiscall **)(TESForm *))(**((_DWORD **)this + 7) + 0xD4))(*((TESForm **)this + 7)); /*0x4d6e4f*/
}
