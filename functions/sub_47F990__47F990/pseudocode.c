// TES4 authoritative metadata map lookup: map count at +0x48, entries pointer at +0x44, each entry 0x10 bytes: key, unknown, valueLow, valueHigh.
_DWORD *__thiscall sub_47F990(int *this, _DWORD *a2, int a3)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  int v8; // eax
  int v9; // edx

  v3 = *(this + 0x12); /*0x47f990*/
  v4 = 0; /*0x47f994*/
  if ( v3 <= 0 ) /*0x47f999*/
  {
LABEL_5:
    *a2 = 0; /*0x47f9b2*/
    a2[1] = 0; /*0x47f9bd*/
    return a2; /*0x47f9b2*/
  }
  else
  {
    v5 = (_DWORD *)*(this + 0x11); /*0x47f99b*/
    v6 = v5; /*0x47f9a2*/
    while ( *v6 != a3 ) /*0x47f9a6*/
    {
      ++v4; /*0x47f9a8*/
      v6 += 4; /*0x47f9ab*/
      if ( v4 >= v3 ) /*0x47f9b0*/
        goto LABEL_5; /*0x47f9b0*/
    }
    v8 = 4 * v4; /*0x47f9cc*/
    v9 = v5[v8 + 2]; /*0x47f9cf*/
    a2[1] = v5[v8 + 3]; /*0x47f9d8*/
    *a2 = v9; /*0x47f9db*/
    return a2; /*0x47f9dd*/
  }
}
