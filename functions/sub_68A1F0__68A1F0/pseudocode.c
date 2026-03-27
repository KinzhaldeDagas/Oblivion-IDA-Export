int __thiscall sub_68A1F0(char *this)
{
  char *v1; // esi
  int v2; // edi
  _BYTE *v3; // eax
  ExtraTeleport *TeleportExtraData; // eax
  TESObjectCELL **v5; // eax
  int v6; // eax

  v1 = this + 4;
  v2 = 0;
  if ( this != (char *)0xFFFFFFFC )
  {
    do
    {
      if ( !*((_DWORD *)v1 + 1) && !*(_DWORD *)v1 )
        break;
      v3 = (_BYTE *)sub_68B0F0(*(_BYTE **)v1);
      if ( v3 )
      {
        TeleportExtraData = GetTeleportExtraData(v3);
        if ( TeleportExtraData )
        {
          v5 = (TESObjectCELL **)sub_42B410(&TeleportExtraData->super);
          if ( v5 )
          {
            sub_4D8AF0(v5);
            v2 = v6;
          }
        }
      }
      v1 = *((char **)v1 + 1);
    }
    while ( v1 );
  }
  return v2;
}
