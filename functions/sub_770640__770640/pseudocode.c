int __cdecl sub_770640(size_t Size)
{
  int v2; // esi
  char *v3; // ebp
  char *v4; // ebx
  int v5; // ebp
  unsigned int v6; // eax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // di
  unsigned int v10; // edx
  bool v11; // zf
  char *v12; // edx
  char v13; // cf
  int v14; // ecx
  char *v15; // edi
  int i; // ecx
  int v17; // [esp+Ch] [ebp-10h]
  unsigned __int16 v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+14h] [ebp-8h]
  unsigned __int16 v20; // [esp+18h] [ebp-4h]
  unsigned int Sizea; // [esp+20h] [ebp+4h]

  v2 = Size; /*0x770646*/
  v3 = *(char **)(Size + 0x10); /*0x77064a*/
  v4 = *(char **)(Size + 0x24); /*0x77064d*/
  v17 = 0; /*0x770654*/
  if ( v3 ) /*0x770658*/
  {
    v8 = *(_WORD *)(Size + 4) - 0x10; /*0x7706a7*/
    v9 = 2 * (*(_DWORD *)Size != 6) + 2; /*0x7706b2*/
    v20 = v9; /*0x7706bc*/
    if ( (__int16)(v8 - v9) <= 0 ) /*0x7706c0*/
    {
      v10 = *(_DWORD *)(Size + 0x14); /*0x7706ca*/
    }
    else
    {
      v10 = *(_DWORD *)(Size + 0x1C); /*0x7706c2*/
      v8 = 2 * (*(_DWORD *)Size != 6) + 2; /*0x7706c5*/
    }
    v11 = *(_WORD *)(Size + 8) == 0; /*0x7706d0*/
    Sizea = v10; /*0x7706d4*/
    v18 = v8; /*0x7706d8*/
    v19 = 0; /*0x7706dc*/
    if ( !v11 ) /*0x7706e0*/
    {
      do /*0x77072f*/
      {
        memcpy(v4, v3, Sizea); /*0x7706e9*/
        v12 = v4 + 2; /*0x7706f8*/
        if ( v18 < v9 ) /*0x7706fb*/
        {
          v13 = (v9 - v18) & 1; /*0x770704*/
          v14 = (unsigned __int16)(v9 - v18) >> 1; /*0x770704*/
          memset(v12, 0, 4 * v14); /*0x770708*/
          v15 = &v12[4 * v14]; /*0x770708*/
          for ( i = v13; i; --i ) /*0x77070a*/
          {
            *(_WORD *)v15 = 0; /*0x77070c*/
            v15 += 2; /*0x77070c*/
          }
          v9 = v20; /*0x77070f*/
        }
        v3 += *(_DWORD *)(v2 + 0x18); /*0x77071a*/
        v4 += *(_DWORD *)(v2 + 0x20); /*0x77071d*/
        v17 += *(_DWORD *)(v2 + 0x1C); /*0x770720*/
        ++v19; /*0x77072b*/
      }
      while ( (unsigned __int16)v19 < *(_WORD *)(v2 + 8) ); /*0x77072f*/
    }
    return v17; /*0x77072f*/
  }
  v5 = 0; /*0x77065a*/
  if ( !*(_WORD *)(Size + 8) ) /*0x770660*/
    return v17; /*0x770732*/
  v6 = *(_DWORD *)(Size + 0x1C); /*0x770666*/
  do /*0x77068d*/
  {
    _memset((int)v4, 0, v6); /*0x770674*/
    v6 = *(_DWORD *)(Size + 0x1C); /*0x770679*/
    v4 += *(_DWORD *)(Size + 0x20); /*0x77067c*/
    v17 += v6; /*0x77067f*/
    ++v5; /*0x770683*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(Size + 8) ); /*0x77068d*/
  return v17; /*0x770693*/
}
