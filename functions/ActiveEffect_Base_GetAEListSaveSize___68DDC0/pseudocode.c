unsigned __int16 __cdecl ActiveEffect_Base_GetAEListSaveSize_(_DWORD *a1, int a2)
{
  __int16 v2; // si
  _DWORD *v3; // esi
  unsigned __int16 i; // bp
  __int16 v5; // di
  __int16 v6; // ax
  unsigned __int16 v8; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x68ddcb*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x68ddcd*/
    v2 = 6; /*0x68ddd6*/
  v8 = v2 + 2; /*0x68ddde*/
  v3 = a1; /*0x68dde2*/
  for ( i = v8; v3; i += v5 + v6 + 5 ) /*0x68dded*/
  {
    if ( !v3[1] && !*v3 ) /*0x68ddf9*/
      break; /*0x68ddfc*/
    v5 = 0; /*0x68de05*/
    if ( g_TESSaveLoadGame->currentVersion >= 0x2Au ) /*0x68de0b*/
      v5 = 2; /*0x68de0d*/
    v6 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*v3 + 0xC))(*v3, a2); /*0x68de18*/
    v3 = (_DWORD *)v3[1]; /*0x68de1a*/
  }
  return ActiveEffect_Base_GetAEListSaveSize__::Done_(i);
}
