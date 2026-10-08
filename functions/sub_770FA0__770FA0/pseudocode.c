int __cdecl sub_770FA0(size_t Size)
{
  int v1; // esi
  char *v2; // ebx
  int v3; // ebp
  char *v4; // edi
  int v5; // ebx
  unsigned int v6; // eax
  __int16 v8; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]
  unsigned int Sizea; // [esp+1Ch] [ebp+4h]

  v1 = Size; /*0x770fa6*/
  v2 = *(char **)(Size + 0x10); /*0x770faa*/
  v3 = 0; /*0x770fad*/
  v4 = *(char **)(Size + 0x24); /*0x770fb2*/
  if ( v2 ) /*0x770fb5*/
  {
    if ( (__int16)(*(_WORD *)(Size + 4) - 0x1C) < 0 || *(_WORD *)(Size + 4) == 0x1C ) /*0x770ffb*/
    {
      v8 = *(_WORD *)(Size + 4) - 0x18; /*0x771017*/
      Sizea = *(_DWORD *)(Size + 0x14); /*0x77101b*/
    }
    else
    {
      v8 = 4; /*0x771003*/
      Sizea = *(_DWORD *)(Size + 0x1C); /*0x77100b*/
    }
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(v1 + 8); ++i ) /*0x77101f*/
    {
      memcpy(v4, v2, Sizea); /*0x771037*/
      if ( (unsigned __int16)v8 < 4u ) /*0x77104d*/
        _memset((int)&v4[Sizea], 0, (unsigned __int16)(4 - v8)); /*0x77105d*/
      v2 += *(_DWORD *)(v1 + 0x18); /*0x771069*/
      v4 += *(_DWORD *)(v1 + 0x20); /*0x77106c*/
      v3 += *(_DWORD *)(v1 + 0x1C); /*0x77106f*/
    }
    return v3; /*0x77107d*/
  }
  v5 = 0; /*0x770fb7*/
  if ( !*(_WORD *)(Size + 8) ) /*0x770fbd*/
    return v3; /*0x771081*/
  v6 = *(_DWORD *)(Size + 0x1C); /*0x770fc3*/
  do /*0x770fe1*/
  {
    _memset((int)v4, 0, v6); /*0x770fca*/
    v6 = *(_DWORD *)(Size + 0x1C); /*0x770fcf*/
    v4 += *(_DWORD *)(Size + 0x20); /*0x770fd2*/
    ++v5; /*0x770fd5*/
    v3 += v6; /*0x770fdb*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(Size + 8) ); /*0x770fe1*/
  return v3; /*0x770fe3*/
}
