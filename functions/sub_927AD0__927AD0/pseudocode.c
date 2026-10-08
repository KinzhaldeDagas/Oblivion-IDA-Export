_BYTE *__thiscall sub_927AD0(int *this, _BYTE *a2, int a3)
{
  int v4; // esi
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // edx

  if ( a3 ) /*0x927ad7*/
  {
    v4 = *(this + 8); /*0x927ae5*/
    v5 = 0; /*0x927ae8*/
    if ( v4 <= 0 ) /*0x927aec*/
    {
LABEL_7:
      *a2 = 0; /*0x927afd*/
      return a2; /*0x927afd*/
    }
    else
    {
      v6 = (_DWORD *)*(this + 7); /*0x927aee*/
      while ( *v6 != a3 ) /*0x927af3*/
      {
        ++v5; /*0x927af5*/
        ++v6; /*0x927af6*/
        if ( v5 >= v4 ) /*0x927afb*/
          goto LABEL_7; /*0x927afb*/
      }
      v7 = *(this + 8) - 1; /*0x927b0c*/
      *(this + 8) = v7; /*0x927b0d*/
      *(_DWORD *)(*(this + 7) + 4 * v5) = *(_DWORD *)(*(this + 7) + 4 * v7); /*0x927b17*/
      *a2 = 1; /*0x927b1e*/
      return a2; /*0x927b1a*/
    }
  }
  else
  {
    *a2 = 0; /*0x927add*/
    return a2; /*0x927ad9*/
  }
}
