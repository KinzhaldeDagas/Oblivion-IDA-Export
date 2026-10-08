_DWORD *__thiscall sub_4A53F0(_BYTE *this)
{
  _BYTE *v2; // eax

  v2 = (_BYTE *)FormHeapAlloc(0x14u); /*0x4a5416*/
  if ( v2 ) /*0x4a542c*/
    return TESRegionSoundRecord_CopyFrom(v2, this); /*0x4a5431*/
  else
    return 0; /*0x4a5447*/
}
