int **__thiscall CreatureSoundArray_CopyFrom(_DWORD *this, int **a2)
{
  unsigned int v3; // esi
  int v4; // edi
  int **result; // eax
  unsigned int v6; // ebx
  int *v7; // esi
  int v8; // edi
  int v9; // eax
  bool v10; // zf
  int v11; // [esp+Ch] [ebp-4h]

  v3 = 0;
  v4 = 0xA;
  do
  {
    CreatureSoundArray_ClearNthSound(this, v3++);
    --v4;
  }
  while ( v4 );
  result = a2;
  if ( a2 )
  {
    v6 = 0;
    v11 = 0xA;
    do
    {
      v7 = 0;
      if ( v6 <= 9 )
        v7 = *result;
      for ( ; v7; v7 = (int *)v7[1] )
      {
        if ( !v7[1] && !*v7 )
          break;
        v8 = *v7;
        v9 = FormHeapAlloc(8u);
        if ( v9 )
        {
          if ( v8 )
          {
            *(_DWORD *)v9 = *(_DWORD *)v8;
            *(_BYTE *)(v9 + 4) = *(_BYTE *)(v8 + 4);
          }
        }
        CreatureSoundArray_InsertSoundEntry(this, v9, v6);
      }
      result = a2 + 1;
      ++v6;
      v10 = v11-- == 1;
      ++a2;
    }
    while ( !v10 );
  }
  return result;
}
