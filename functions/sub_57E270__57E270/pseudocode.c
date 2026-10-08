// Reads collision filter info from proxy metadata: proxy+0x364 -> +8 -> +0x14 -> +0x1C. Used to preserve actor identity in raycast filter high 16 bits.
_DWORD *__thiscall bhkCharacterProxy_GetCollisionFilterInfo(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+0h] [ebp-4h]

  v2 = *(this + 0xD9); /*0x57e271*/
  if ( v2 ) /*0x57e279*/
  {
    v3 = *(_DWORD *)(v2 + 8); /*0x57e27b*/
    if ( v3 && (v4 = v3 + 0x14) != 0 ) /*0x57e285*/
    {
      v6 = *(_DWORD *)(v4 + 0x1C); /*0x57e28a*/
      *a2 = v6; /*0x57e296*/
      return a2; /*0x57e292*/
    }
    else
    {
      *a2 = 0; /*0x57e2aa*/
      return a2; /*0x57e2a6*/
    }
  }
  else
  {
    *a2 = 0; /*0x57e2c0*/
    return a2; /*0x57e2bc*/
  }
}
