int __cdecl sub_770540(size_t Size)
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

  v2 = Size; /*0x770546*/
  v3 = *(char **)(Size + 0x10); /*0x77054a*/
  v4 = *(char **)(Size + 0x24); /*0x77054d*/
  v17 = 0; /*0x770554*/
  if ( v3 ) /*0x770558*/
  {
    v8 = *(_WORD *)(Size + 4) - 0xC; /*0x7705a7*/
    v9 = 2 * (*(_DWORD *)Size != 6) + 2; /*0x7705b2*/
    v20 = v9; /*0x7705bc*/
    if ( (__int16)(v8 - v9) <= 0 ) /*0x7705c0*/
    {
      v10 = *(_DWORD *)(Size + 0x14); /*0x7705ca*/
    }
    else
    {
      v10 = *(_DWORD *)(Size + 0x1C); /*0x7705c2*/
      v8 = 2 * (*(_DWORD *)Size != 6) + 2; /*0x7705c5*/
    }
    v11 = *(_WORD *)(Size + 8) == 0; /*0x7705d0*/
    Sizea = v10; /*0x7705d4*/
    v18 = v8; /*0x7705d8*/
    v19 = 0; /*0x7705dc*/
    if ( !v11 ) /*0x7705e0*/
    {
      do /*0x77062f*/
      {
        memcpy(v4, v3, Sizea); /*0x7705e9*/
        v12 = v4 + 2; /*0x7705f8*/
        if ( v18 < v9 ) /*0x7705fb*/
        {
          v13 = (v9 - v18) & 1; /*0x770604*/
          v14 = (unsigned __int16)(v9 - v18) >> 1; /*0x770604*/
          memset(v12, 0, 4 * v14); /*0x770608*/
          v15 = &v12[4 * v14]; /*0x770608*/
          for ( i = v13; i; --i ) /*0x77060a*/
          {
            *(_WORD *)v15 = 0; /*0x77060c*/
            v15 += 2; /*0x77060c*/
          }
          v9 = v20; /*0x77060f*/
        }
        v3 += *(_DWORD *)(v2 + 0x18); /*0x77061a*/
        v4 += *(_DWORD *)(v2 + 0x20); /*0x77061d*/
        v17 += *(_DWORD *)(v2 + 0x1C); /*0x770620*/
        ++v19; /*0x77062b*/
      }
      while ( (unsigned __int16)v19 < *(_WORD *)(v2 + 8) ); /*0x77062f*/
    }
    return v17; /*0x77062f*/
  }
  v5 = 0; /*0x77055a*/
  if ( !*(_WORD *)(Size + 8) ) /*0x770560*/
    return v17; /*0x770632*/
  v6 = *(_DWORD *)(Size + 0x1C); /*0x770566*/
  do /*0x77058d*/
  {
    _memset((int)v4, 0, v6); /*0x770574*/
    v6 = *(_DWORD *)(Size + 0x1C); /*0x770579*/
    v4 += *(_DWORD *)(Size + 0x20); /*0x77057c*/
    v17 += v6; /*0x77057f*/
    ++v5; /*0x770583*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(Size + 8) ); /*0x77058d*/
  return v17; /*0x770593*/
}
