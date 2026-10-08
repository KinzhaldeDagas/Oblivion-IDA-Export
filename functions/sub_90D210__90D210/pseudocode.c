_BYTE *__thiscall sub_90D210(_DWORD *this, _BYTE *a2, _DWORD *a3)
{
  _DWORD *v3; // eax

  v3 = a3; /*0x90d210*/
  if ( a3 ) /*0x90d216*/
  {
    while ( v3 != this ) /*0x90d21a*/
    {
      v3 = (_DWORD *)v3[1]; /*0x90d21c*/
      if ( !v3 ) /*0x90d221*/
        goto LABEL_4; /*0x90d221*/
    }
    *a2 = 1; /*0x90d231*/
    return a2; /*0x90d22d*/
  }
  else
  {
LABEL_4:
    *a2 = 0; /*0x90d223*/
    return a2; /*0x90d223*/
  }
}
