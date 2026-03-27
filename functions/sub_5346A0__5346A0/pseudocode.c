int __thiscall sub_5346A0(const char *this, char *a2, int a3, const char *a4, char *Str, int a6)
{
  char *v7; // ecx
  char v8; // dl
  char *v9; // edi
  unsigned int v11; // eax
  char *v12; // edi
  char *v14; // eax
  const char *v15; // ecx
  char v16; // dl
  char *v17; // edx
  unsigned int v18; // eax
  char *v19; // edi
  int result; // eax
  int v22; // ecx
  int v23; // [esp-4h] [ebp-51Ch]
  char v24; // [esp+Fh] [ebp-509h] BYREF
  char v25[260]; // [esp+10h] [ebp-508h] BYREF
  char v26[1024]; // [esp+114h] [ebp-404h] BYREF

  v7 = a2;
  if ( a2 )
  {
    do
    {
      v8 = *v7;
      v7[v26 - a2] = *v7;
      ++v7;
    }
    while ( v8 );
  }
  else
  {
    v26[0] = 0;
  }
  if ( a4 )
  {
    v9 = &v25[0x103];
    while ( *++v9 )
      ;
    *(_DWORD *)v9 = dword_A5626C;
    v11 = strlen(a4) + 1;
    v12 = &v25[0x103];
    while ( *++v12 )
      ;
    qmemcpy(v12, a4, v11);
  }
  if ( *(this + 0x20) )
  {
    v14 = strstr(Str, "TES4");
    if ( v14 || (v14 = strstr(Str, "tes4")) != 0 )
    {
      v15 = this + 0x20;
      do
      {
        v16 = *v15;
        v15[v25 - (this + 0x20)] = *v15;
        ++v15;
      }
      while ( v16 );
      v17 = v14;
      v18 = strlen(v14) + 1;
      v19 = &v24;
      while ( *++v19 )
        ;
      qmemcpy(v19, v17, v18);
    }
    else if ( *Str == 0x2E && Str[1] == 0x2E )
    {
      BSStringT_Static_StrCpy(v25, this + 0x20);
      sub_412DC0(v25, "TES4\\Havok\\SDK\\Include\\");
      sub_412DC0(v25, Str + 3);
    }
  }
  result = nullsub_return0_0arg();
  if ( result == 5 )
  {
    v23 = v22;
    LOBYTE(v23) = 0;
    return (*(int (__thiscall **)(const char *, int, int))(*(_DWORD *)this + 0xC))(this, a3, v23);
  }
  return result;
}
