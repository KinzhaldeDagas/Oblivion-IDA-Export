int __cdecl sub_770EB0(size_t Size)
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

  v1 = Size; /*0x770eb6*/
  v2 = *(char **)(Size + 0x10); /*0x770eba*/
  v3 = 0; /*0x770ebd*/
  v4 = *(char **)(Size + 0x24); /*0x770ec2*/
  if ( v2 ) /*0x770ec5*/
  {
    if ( (__int16)(*(_WORD *)(Size + 4) - 0x18) < 0 || *(_WORD *)(Size + 4) == 0x18 ) /*0x770f0b*/
    {
      v8 = *(_WORD *)(Size + 4) - 0x14; /*0x770f27*/
      Sizea = *(_DWORD *)(Size + 0x14); /*0x770f2b*/
    }
    else
    {
      v8 = 4; /*0x770f13*/
      Sizea = *(_DWORD *)(Size + 0x1C); /*0x770f1b*/
    }
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(v1 + 8); ++i ) /*0x770f2f*/
    {
      memcpy(v4, v2, Sizea); /*0x770f47*/
      if ( (unsigned __int16)v8 < 4u ) /*0x770f5a*/
        _memset((int)(v4 + 1), 0, (unsigned __int16)(4 - v8)); /*0x770f6a*/
      v2 += *(_DWORD *)(v1 + 0x18); /*0x770f76*/
      v4 += *(_DWORD *)(v1 + 0x20); /*0x770f79*/
      v3 += *(_DWORD *)(v1 + 0x1C); /*0x770f7c*/
    }
    return v3; /*0x770f8a*/
  }
  v5 = 0; /*0x770ec7*/
  if ( !*(_WORD *)(Size + 8) ) /*0x770ecd*/
    return v3; /*0x770f8e*/
  v6 = *(_DWORD *)(Size + 0x1C); /*0x770ed3*/
  do /*0x770ef1*/
  {
    _memset((int)v4, 0, v6); /*0x770eda*/
    v6 = *(_DWORD *)(Size + 0x1C); /*0x770edf*/
    v4 += *(_DWORD *)(Size + 0x20); /*0x770ee2*/
    ++v5; /*0x770ee5*/
    v3 += v6; /*0x770eeb*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(Size + 8) ); /*0x770ef1*/
  return v3; /*0x770ef3*/
}
