void __thiscall SettingCollectionList_AddSetting(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // esi

  v2 = this + 0x43;
  if ( (*(this + 0x44) || *v2) && (v3 = this + 0x43, this != (_DWORD *)0xFFFFFEF4) )
  {
    while ( _strcmp(*(char **)(*v3 + 4), *(char **)(a2 + 4)) )
    {
      v3 = (_DWORD *)v3[1];
      if ( !v3 )
        goto LABEL_6;
    }
    PrintError("Setting key '%s' already used in list.\nSetting keys must be unique.\n", *(const char **)(a2 + 4));
  }
  else
  {
LABEL_6:
    BSSimpleList_PushFront(v2, a2);
  }
}
