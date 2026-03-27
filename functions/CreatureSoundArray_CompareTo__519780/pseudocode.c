char __thiscall CreatureSoundArray_CompareTo(_DWORD *this, int a2)
{
  char v4; // cl
  int *v5; // eax
  int *v6; // edx
  int *v7; // edi
  int *v8; // esi
  int v9; // eax
  int v10; // edx

  if ( !a2 )
    return 1;
  v4 = 0;
  while ( 1 )
  {
    v5 = 0;
    if ( (unsigned int)v4 <= 9 )
      v5 = (int *)*(this + v4);
    v6 = 0;
    if ( (unsigned int)v4 <= 9 )
      v6 = *(int **)(a2 + 4 * v4);
    if ( v5 )
      break;
LABEL_17:
    if ( v6 )
      return 1;
    if ( ++v4 >= 0xA )
      return 0;
  }
  while ( 1 )
  {
    v7 = (int *)v5[1];
    if ( !v7 && !*v5 )
      return 1;
    if ( !v6 )
      return 1;
    v8 = (int *)v6[1];
    if ( !v8 && !*v6 )
      return 1;
    v9 = *v5;
    v10 = *v6;
    if ( *(_BYTE *)(v9 + 4) != *(_BYTE *)(v10 + 4) || *(_DWORD *)v9 != *(_DWORD *)v10 )
      return 1;
    v5 = v7;
    v6 = v8;
    if ( !v7 )
      goto LABEL_17;
  }
}
