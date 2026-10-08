void __thiscall GameSetting_destr(int *this)
{
  _BYTE *v2; // esi

  if ( this ) /*0x405612*/
  {
    if ( *(this + 1) ) /*0x405614*/
      NiTMap_RemoveAt(&g_GameSettingsByName, *(this + 1)); /*0x405621*/
  }
  v2 = (_BYTE *)*(this + 1); /*0x405626*/
  if ( v2 ) /*0x40562b*/
  {
    if ( *v2 == 0x53 ) /*0x405630*/
      FormHeapFree((unsigned int)v2); /*0x405633*/
  }
}
