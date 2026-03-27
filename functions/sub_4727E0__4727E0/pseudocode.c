char __userpurge sub_4727E0@<al>(_DWORD *this@<ecx>, int a2@<edi>, size_t MaxCount, float *Str2, int a5)
{
  int v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // ebp
  int v11; // esi
  const char *v12; // edi
  size_t v13; // [esp-14h] [ebp-18h]
  float v14; // [esp+0h] [ebp-4h]

  if ( Str2 )
    *Str2 = 0.0;
  if ( !*(this + (_DWORD)MaxCount + 0x28) || !HIDWORD(MaxCount) )
    return 0;
  v5 = *(this + (_DWORD)MaxCount + 0x28);
  v6 = *(float *)(v5 + 0x3C);
  v7 = *(_DWORD *)(v5 + 0x20);
  v8 = *(_DWORD *)(v7 + 0x10);
  v9 = *(_DWORD *)(v7 + 0xC);
  LODWORD(MaxCount) = strlen((const char *)HIDWORD(MaxCount));
  if ( !(_DWORD)MaxCount )
    return 0;
  v11 = 0;
  HIDWORD(v13) = a2;
  if ( !v9 )
    return 0;
  while ( 1 )
  {
    v12 = *(const char **)(v8 + 8 * v11 + 4);
    if ( v12 )
    {
      LODWORD(v13) = MaxCount;
      if ( !_strnicmp(v12, (const char *)HIDWORD(MaxCount), v13) )
      {
        v14 = v6;
        if ( v14 <= (double)*(float *)(v8 + 8 * v11) )
          break;
      }
    }
    if ( ++v11 >= v9 )
      return 0;
  }
  if ( Str2 )
    *Str2 = *(float *)(v8 + 8 * v11);
  return tolower(v12[MaxCount]);
}
