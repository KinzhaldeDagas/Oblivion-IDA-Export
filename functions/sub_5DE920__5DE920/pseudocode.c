void __thiscall sub_5DE920(_DWORD *this)
{
  char *value; // eax
  char v3[4]; // [esp+4h] [ebp-4h] BYREF

  _sprintf(v3, (const char *)&off_A6DD20, *(this + 0x3F)); /*0x5de935*/
  value = v3; /*0x5de944*/
  if ( !*(this + 0x3F) ) /*0x5de93d*/
    value = (char *)stru_B38D80.value; /*0x5de94a*/
  Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB3, value); /*0x5de958*/
}
