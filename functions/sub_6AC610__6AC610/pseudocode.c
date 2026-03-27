signed int __thiscall sub_6AC610(_DWORD *this, unsigned int **a2, char *a3, int a4, int a5)
{
  bool v5; // zf
  _DWORD *v6; // edi
  int v8; // esi
  float *v9; // eax
  float *v10; // eax
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // eax
  char *v14; // edi
  char *i; // esi
  _WORD *v17; // esi
  char *v18; // edi
  const char *j; // esi
  size_t v20; // [esp+0h] [ebp-160h]
  size_t v21; // [esp+0h] [ebp-160h]
  int v22; // [esp+1Ch] [ebp-144h] BYREF
  _DWORD *v23; // [esp+20h] [ebp-140h]
  float *v24; // [esp+24h] [ebp-13Ch]
  int v25[2]; // [esp+28h] [ebp-138h] BYREF
  int v26; // [esp+30h] [ebp-130h]
  int v27; // [esp+34h] [ebp-12Ch]
  unsigned int v28; // [esp+38h] [ebp-128h]
  int v29; // [esp+3Ch] [ebp-124h]
  int v30; // [esp+40h] [ebp-120h]
  int v31; // [esp+44h] [ebp-11Ch]
  int v32; // [esp+48h] [ebp-118h] BYREF
  char Str[4]; // [esp+4Ch] [ebp-114h] BYREF
  int v34; // [esp+50h] [ebp-110h]
  int v35; // [esp+54h] [ebp-10Ch]
  unsigned int v36; // [esp+15Ch] [ebp-4h]

  v5 = bSoundEnabled_Audio == 0;
  v6 = this;
  v23 = this;
  if ( v5 )
  {
    *a2 = 0;
    return 1;
  }
  v8 = a5;
  if ( !a5 )
  {
    v8 = *(this + 0x2D);
    *(this + 0x2D) = v8 + 1;
  }
  if ( !*a2 )
  {
    v9 = (float *)FormHeapAlloc(0x58u);
    v24 = v9;
    v36 = 0;
    if ( v9 )
      v10 = sub_6B6DC0(v9, (int)a3, v8, a4);
    else
      v10 = 0;
    v36 = 0xFFFFFFFF;
    *a2 = (unsigned int *)v10;
  }
  LODWORD(v20) = 3;
  v22 = 0;
  if ( !_strnicmp(a3, "data", v20) || (LODWORD(v21) = 5, !_strnicmp(a3, ".\\data", v21)) )
  {
    strcpy(Str, a3);
  }
  else
  {
    v11 = dword_A77130;
    v12 = dword_A7712C;
    v35 = dword_A77134;
    v34 = v11;
    *(_DWORD *)Str = v12;
    v13 = strlen(a3) + 1;
    v14 = (char *)&v32 + 3;
    while ( *++v14 )
      ;
    qmemcpy(v14, a3, v13);
    v6 = v23;
  }
  for ( i = Str; *i; ++i )
    *i = tolower(*i);
  v25[0] = 0;
  v25[1] = 0;
  v26 = 0;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v28 = 0;
  if ( strstr(Str, "voice") )
  {
    *((_WORD *)*a2 + 0xE) = OpenVoiceFile(v6, &v22, Str, a4);
    if ( !*((_WORD *)*a2 + 0xE) )
    {
      *((_WORD *)*a2 + 0xE) = sub_6AABD0(v6, &v22, Str, a4, v25);
      if ( !*((_WORD *)*a2 + 0xE) )
      {
        *((_WORD *)*a2 + 0xE) = sub_6AABD0(v6, &v22, a3, a4, v25);
        v17 = *a2;
        if ( !*((_WORD *)*a2 + 0xE) )
        {
LABEL_22:
          if ( v17 )
          {
            sub_6B6700(v17);
            FormHeapFree((unsigned int)v17);
          }
          *a2 = 0;
          return 0x80004005;
        }
      }
    }
  }
  else
  {
    v17 = *a2;
    if ( *a2 )
    {
      if ( Str[strlen(Str) - 1] == 0x5C )
        sub_6A9CD0(Str);
      *((_WORD *)*a2 + 0xE) = sub_6AABD0(v6, &v22, Str, a4, v25);
      v17 = *a2;
      if ( !*((_WORD *)*a2 + 0xE) )
      {
        *((_WORD *)*a2 + 0xE) = sub_6AABD0(v6, &v22, a3, a4, v25);
        v17 = *a2;
        if ( !*((_WORD *)*a2 + 0xE) )
          goto LABEL_22;
      }
    }
    *((_DWORD *)v17 + 2) = v26;
  }
  if ( useSoundDebugInfo )
  {
    if ( !sub_6B67D0(*a2) )
    {
      v18 = strstr(Str, SubStr);
      for ( j = v18 + 1; strstr(v18 + 1, SubStr); j = v18 + 1 )
        v18 = strstr(j, SubStr);
      sub_6B6770(*a2, v18);
    }
  }
  if ( *a2 )
  {
    if ( v22 )
      sub_6B67F0((char *)*a2, (int (__stdcall ***)(_DWORD, void *, char *))v22);
  }
  sub_6B6F20((float *)*a2, *((float *)*a2 + 0xF));
  FormHeapFree(v28);
  return 0;
}
