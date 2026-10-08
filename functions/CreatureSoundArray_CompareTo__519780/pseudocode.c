char __thiscall CreatureSoundArray_CompareTo(_DWORD *this, int a2)
{
  char v4; // cl
  int *v5; // eax
  int *v6; // edx
  int *v7; // edi
  int *v8; // esi
  int v9; // eax
  int v10; // edx

  if ( !a2 ) /*0x519788*/
    return 1; /*0x51978a*/
  v4 = 0; /*0x519792*/
  while ( 1 ) /*0x519798*/
  {
    v5 = 0; /*0x519798*/
    if ( (unsigned int)v4 <= 9 ) /*0x51979d*/
      v5 = (int *)*(this + v4); /*0x51979f*/
    v6 = 0; /*0x5197a3*/
    if ( (unsigned int)v4 <= 9 ) /*0x5197a8*/
      v6 = *(int **)(a2 + 4 * v4); /*0x5197ae*/
    if ( v5 ) /*0x5197b3*/
      break; /*0x5197b3*/
LABEL_17:
    if ( v6 ) /*0x5197eb*/
      return 1; /*0x5197eb*/
    if ( ++v4 >= 0xA ) /*0x5197f3*/
      return 0; /*0x5197fb*/
  }
  while ( 1 ) /*0x5197b5*/
  {
    v7 = (int *)v5[1]; /*0x5197b5*/
    if ( !v7 && !*v5 ) /*0x5197bc*/
      return 1; /*0x51978c*/
    if ( !v6 ) /*0x5197c2*/
      return 1; /*0x51978c*/
    v8 = (int *)v6[1]; /*0x5197c4*/
    if ( !v8 && !*v6 ) /*0x5197cb*/
      return 1; /*0x51978c*/
    v9 = *v5; /*0x5197cf*/
    v10 = *v6; /*0x5197d1*/
    if ( *(_BYTE *)(v9 + 4) != *(_BYTE *)(v10 + 4) || *(_DWORD *)v9 != *(_DWORD *)v10 ) /*0x5197df*/
      return 1; /*0x51978c*/
    v5 = v7; /*0x5197e1*/
    v6 = v8; /*0x5197e5*/
    if ( !v7 ) /*0x5197e7*/
      goto LABEL_17; /*0x5197e7*/
  }
}
