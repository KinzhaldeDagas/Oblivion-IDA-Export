CHAR *__thiscall TESObjectREFR_GetEditorID(TESChildCELL *this)
{
  const char *v2; // eax

  if ( !byte_B333F4 )
  {
    byte_B333F4 = 1;
    v2 = (*((const char *(__thiscall **)(TESForm *))this->vtbl + 0x35))((TESForm *)this);
    byte_B333F4 = 0;
    if ( v2 )
    {
      if ( strlen(v2) )
        return EmptyString;
    }
  }
  if ( !*((_DWORD *)this + 7) || *(_BYTE *)(TESDataHandler + 0xCD4) )
    return EmptyString;
  else
    return (CHAR *)(*(const char *(__thiscall **)(TESForm *))(**((_DWORD **)this + 7) + 0xD4))(*((TESForm **)this + 7));
}
