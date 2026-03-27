int __usercall sub_770540@<eax>(int a1@<edi>, size_t Size)
{
  int v2; // esi
  char *v3; // ebp
  char *v4; // ebx
  int v5; // ebp
  int v6; // eax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // di
  int v10; // edx
  bool v11; // zf
  char *v12; // edx
  char v13; // cf
  int v14; // ecx
  char *v15; // edi
  int i; // ecx
  size_t v17; // [esp-8h] [ebp-24h]
  int v18; // [esp+Ch] [ebp-10h]
  unsigned __int16 v19; // [esp+10h] [ebp-Ch]
  int v20; // [esp+14h] [ebp-8h]
  unsigned __int16 v21; // [esp+18h] [ebp-4h]
  int Sizea; // [esp+20h] [ebp+4h]

  v2 = Size;
  v3 = *(char **)(Size + 0x10);
  v4 = *(char **)(Size + 0x24);
  v18 = 0;
  if ( v3 )
  {
    v8 = *(_WORD *)(Size + 4) - 0xC;
    HIDWORD(v17) = a1;
    v9 = 2 * (*(_DWORD *)Size != 6) + 2;
    v21 = v9;
    if ( (__int16)(v8 - v9) <= 0 )
    {
      v10 = *(_DWORD *)(Size + 0x14);
    }
    else
    {
      v10 = *(_DWORD *)(Size + 0x1C);
      v8 = 2 * (*(_DWORD *)Size != 6) + 2;
    }
    v11 = *(_WORD *)(Size + 8) == 0;
    Sizea = v10;
    v19 = v8;
    v20 = 0;
    if ( !v11 )
    {
      do
      {
        LODWORD(v17) = Sizea;
        memcpy(v4, v3, v17);
        v12 = v4 + 2;
        if ( v19 < v9 )
        {
          v13 = (v9 - v19) & 1;
          v14 = (unsigned __int16)(v9 - v19) >> 1;
          memset(v12, 0, 4 * v14);
          v15 = &v12[4 * v14];
          for ( i = v13; i; --i )
          {
            *(_WORD *)v15 = 0;
            v15 += 2;
          }
          v9 = v21;
        }
        v3 += *(_DWORD *)(v2 + 0x18);
        v4 += *(_DWORD *)(v2 + 0x20);
        v18 += *(_DWORD *)(v2 + 0x1C);
        ++v20;
      }
      while ( (unsigned __int16)v20 < *(_WORD *)(v2 + 8) );
    }
    return v18;
  }
  v5 = 0;
  if ( !*(_WORD *)(Size + 8) )
    return v18;
  v6 = *(_DWORD *)(Size + 0x1C);
  do
  {
    _memset(v4, 0, v6);
    v6 = *(_DWORD *)(Size + 0x1C);
    v4 += *(_DWORD *)(Size + 0x20);
    v18 += v6;
    ++v5;
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(Size + 8) );
  return v18;
}
