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

  v7 = a2; /*0x5346c6*/
  if ( a2 ) /*0x5346d1*/
  {
    do /*0x5346ea*/
    {
      v8 = *v7; /*0x5346e0*/
      v7[v26 - a2] = *v7; /*0x5346e2*/
      ++v7; /*0x5346e5*/
    }
    while ( v8 ); /*0x5346ea*/
  }
  else
  {
    v26[0] = 0; /*0x5346ee*/
  }
  if ( a4 ) /*0x5346f8*/
  {
    v9 = &v25[0x103]; /*0x534701*/
    while ( *++v9 ) /*0x53470c*/
      ; /*0x534704*/
    *(_DWORD *)v9 = dword_A5626C; /*0x534714*/
    v11 = strlen(a4) + 1; /*0x534728*/
    v12 = &v25[0x103]; /*0x53472c*/
    while ( *++v12 ) /*0x534738*/
      ; /*0x534730*/
    qmemcpy(v12, a4, v11); /*0x53473f*/
  }
  if ( *(this + 0x20) ) /*0x534748*/
  {
    v14 = strstr(Str, "TES4"); /*0x53475b*/
    if ( v14 || (v14 = strstr(Str, "tes4")) != 0 ) /*0x534777*/
    {
      v15 = this + 0x20; /*0x53477d*/
      do /*0x53478b*/
      {
        v16 = *v15; /*0x534781*/
        v15[v25 - (this + 0x20)] = *v15; /*0x534783*/
        ++v15; /*0x534786*/
      }
      while ( v16 ); /*0x53478b*/
      v17 = v14; /*0x53478d*/
      v18 = strlen(v14) + 1; /*0x53479d*/
      v19 = &v24; /*0x53479f*/
      while ( *++v19 ) /*0x5347aa*/
        ; /*0x5347a2*/
      qmemcpy(v19, v17, v18); /*0x5347b3*/
    }
    else if ( *Str == 0x2E && Str[1] == 0x2E ) /*0x5347cb*/
    {
      BSStringT_Static_StrCpy(v25, this + 0x20); /*0x5347d3*/
      sub_412DC0(v25, "TES4\\Havok\\SDK\\Include\\"); /*0x5347e2*/
      sub_412DC0(v25, Str + 3); /*0x5347f0*/
    }
  }
  result = nullsub_return0_0arg(); /*0x534811*/
  if ( result == 5 ) /*0x53481c*/
  {
    v23 = v22; /*0x53481e*/
    LOBYTE(v23) = 0; /*0x534821*/
    return (*(int (__thiscall **)(const char *, int, int))(*(_DWORD *)this + 0xC))(this, a3, v23); /*0x534834*/
  }
  return result; /*0x534836*/
}
