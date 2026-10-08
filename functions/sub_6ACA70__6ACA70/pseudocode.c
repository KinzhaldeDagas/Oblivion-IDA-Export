__int16 __thiscall sub_6ACA70(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x6aca70*/
  if ( bSoundEnabled_Audio && (v2 = (_DWORD *)*(this + 0xC0), v4 = 0, NiTMap_GetAt(v2, a2, &v4), v4) ) /*0x6aca9b*/
    return *((_WORD *)v4 + 0xE); /*0x6aca9d*/
  else
    return 0; /*0x6acaa5*/
}
