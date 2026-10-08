void __thiscall SettingCollectionList_AddSetting(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // esi

  v2 = this + 0x43; /*0x4040ee*/
  if ( (*(this + 0x44) || *v2) && (v3 = this + 0x43, this != (_DWORD *)0xFFFFFEF4) ) /*0x4040ff*/
  {
    while ( CRT_StricmpLocaleDispatch(*(const char **)(*v3 + 4), *(const char **)(a2 + 4)) ) /*0x404115*/
    {
      v3 = (_DWORD *)v3[1]; /*0x404117*/
      if ( !v3 ) /*0x40411c*/
        goto LABEL_6; /*0x40411c*/
    }
    PrintError("Setting key '%s' already used in list.\nSetting keys must be unique.\n", *(const char **)(a2 + 4)); /*0x404135*/
  }
  else
  {
LABEL_6:
    BSSimpleList_PushFront(v2, a2); /*0x40411e*/
  }
}
