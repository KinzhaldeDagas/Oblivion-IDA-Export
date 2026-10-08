void __thiscall sub_65D8D0(TESObjectREFR *this, _DWORD *enabled)
{
  int v5; // eax
  char v6; // al
  TESObjectREFR *v7; // eax
  char v8; // al
  bool IgnoreMinUse; // [esp+10h] [ebp-24h]
  TravelPath v10; // [esp+14h] [ebp-20h] BYREF
  unsigned int v11; // [esp+30h] [ebp-4h]
  bool enableda; // [esp+38h] [ebp+4h]

  if ( enabled ) /*0x65d900*/
  {
    sub_52B440(enabled, 1); /*0x65d90a*/
    if ( v5 ) /*0x65d911*/
    {
      enableda = TravelPath_GetIgnoreLocks(); /*0x65d91e*/
      v6 = sub_68CA20(enabled); /*0x65d922*/
      TravelPath_SetIgnoreLocks(v6); /*0x65d928*/
      IgnoreMinUse = TravelPath_GetIgnoreMinUse(); /*0x65d933*/
      TravelPath_SetIgnoreMinUse(0); /*0x65d937*/
      PathLow_ctor(&v10); /*0x65d943*/
      v11 = 0; /*0x65d94c*/
      sub_52B440(enabled, 1); /*0x65d950*/
      sub_65D880(this, &v10, v7); /*0x65d95f*/
      if ( v8 ) /*0x65d966*/
        sub_68A1B0((char *)&v10); /*0x65d96c*/
      TravelPath_SetIgnoreLocks(enableda); /*0x65d982*/
      TravelPath_SetIgnoreMinUse(IgnoreMinUse); /*0x65d98c*/
      v11 = 0xFFFFFFFF; /*0x65d998*/
      PathLow_dtor(&v10); /*0x65d9a0*/
    }
  }
}
