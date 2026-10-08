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
  unsigned int *v17; // esi
  char *v18; // edi
  const char *j; // esi
  size_t v20; // [esp+0h] [ebp-160h]
  size_t v21; // [esp+0h] [ebp-160h]
  int v22; // [esp+1Ch] [ebp-144h] BYREF
  _DWORD *v23; // [esp+20h] [ebp-140h]
  float *v24; // [esp+24h] [ebp-13Ch]
  int v25[2]; // [esp+28h] [ebp-138h] BYREF
  unsigned int v26; // [esp+30h] [ebp-130h]
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

  v5 = bSoundEnabled_Audio == 0; /*0x6ac64b*/
  v6 = this; /*0x6ac660*/
  v23 = this; /*0x6ac662*/
  if ( v5 ) /*0x6ac66a*/
  {
    *a2 = 0; /*0x6ac66c*/
    return 1; /*0x6ac678*/
  }
  v8 = a5; /*0x6ac67d*/
  if ( !a5 ) /*0x6ac686*/
  {
    v8 = *(this + 0x2D); /*0x6ac688*/
    *(this + 0x2D) = v8 + 1; /*0x6ac691*/
  }
  if ( !*a2 ) /*0x6ac697*/
  {
    v9 = (float *)FormHeapAlloc(0x58u); /*0x6ac6a6*/
    v24 = v9; /*0x6ac6ae*/
    v36 = 0; /*0x6ac6b4*/
    if ( v9 ) /*0x6ac6bf*/
      v10 = sub_6B6DC0(v9, (int)a3, v8, a4); /*0x6ac6ca*/
    else
      v10 = 0; /*0x6ac6d1*/
    v36 = 0xFFFFFFFF; /*0x6ac6d3*/
    *a2 = (unsigned int *)v10; /*0x6ac6de*/
  }
  LODWORD(v20) = 3; /*0x6ac6e5*/
  v22 = 0; /*0x6ac6ed*/
  if ( !_strnicmp(a3, "data", v20) || (LODWORD(v21) = 5, !_strnicmp(a3, ".\\data", v21)) ) /*0x6ac70d*/
  {
    strcpy(Str, a3); /*0x6ac774*/
  }
  else
  {
    v11 = dword_A77130; /*0x6ac71e*/
    v12 = dword_A7712C; /*0x6ac724*/
    v35 = dword_A77134; /*0x6ac72a*/
    v34 = v11; /*0x6ac730*/
    *(_DWORD *)Str = v12; /*0x6ac734*/
    v13 = strlen(a3) + 1; /*0x6ac747*/
    v14 = (char *)&v32 + 3; /*0x6ac74f*/
    while ( *++v14 ) /*0x6ac75a*/
      ; /*0x6ac752*/
    qmemcpy(v14, a3, v13); /*0x6ac761*/
    v6 = v23; /*0x6ac76a*/
  }
  for ( i = Str; *i; ++i ) /*0x6ac78d*/
    *i = tolower(*i); /*0x6ac799*/
  v25[0] = 0; /*0x6ac7b6*/
  v25[1] = 0; /*0x6ac7ba*/
  v26 = 0; /*0x6ac7be*/
  v27 = 0; /*0x6ac7c2*/
  v29 = 0; /*0x6ac7c6*/
  v30 = 0; /*0x6ac7ca*/
  v31 = 0; /*0x6ac7ce*/
  v32 = 0; /*0x6ac7d2*/
  v28 = 0; /*0x6ac7d6*/
  if ( strstr(Str, "voice") ) /*0x6ac7da*/
  {
    *((_WORD *)*a2 + 0xE) = OpenVoiceFile(v6, &v22, Str, a4); /*0x6ac802*/
    if ( !*((_WORD *)*a2 + 0xE) ) /*0x6ac809*/
    {
      *((_WORD *)*a2 + 0xE) = sub_6AABD0(v6, &v22, Str, a4, v25); /*0x6ac831*/
      if ( !*((_WORD *)*a2 + 0xE) ) /*0x6ac838*/
      {
        *((_WORD *)*a2 + 0xE) = sub_6AABD0(v6, &v22, a3, a4, v25); /*0x6ac860*/
        v17 = *a2; /*0x6ac864*/
        if ( !*((_WORD *)*a2 + 0xE) ) /*0x6ac867*/
        {
LABEL_22:
          if ( v17 ) /*0x6ac874*/
          {
            sub_6B6700(v17); /*0x6ac878*/
            FormHeapFree((unsigned int)v17); /*0x6ac87e*/
          }
          *a2 = 0; /*0x6ac886*/
          return 0x80004005; /*0x6ac892*/
        }
      }
    }
  }
  else
  {
    v17 = *a2; /*0x6ac897*/
    if ( *a2 ) /*0x6ac897*/
    {
      if ( Str[strlen(Str) - 1] == 0x5C ) /*0x6ac8b5*/
        sub_6A9CD0(Str); /*0x6ac8be*/
      *((_WORD *)*a2 + 0xE) = sub_6AABD0(v6, &v22, Str, a4, v25); /*0x6ac8e0*/
      v17 = *a2; /*0x6ac8e4*/
      if ( !*((_WORD *)*a2 + 0xE) ) /*0x6ac8e7*/
      {
        *((_WORD *)*a2 + 0xE) = sub_6AABD0(v6, &v22, a3, a4, v25); /*0x6ac90b*/
        v17 = *a2; /*0x6ac90f*/
        if ( !*((_WORD *)*a2 + 0xE) ) /*0x6ac917*/
          goto LABEL_22; /*0x6ac917*/
      }
    }
    v17[2] = v26; /*0x6ac921*/
  }
  if ( useSoundDebugInfo ) /*0x6ac924*/
  {
    if ( !sub_6B67D0(*a2) ) /*0x6ac930*/
    {
      v18 = strstr(Str, SubStr); /*0x6ac948*/
      for ( j = v18 + 1; strstr(v18 + 1, SubStr); j = v18 + 1 ) /*0x6ac953*/
        v18 = strstr(j, SubStr); /*0x6ac96b*/
      sub_6B6770(*a2, v18); /*0x6ac986*/
    }
  }
  if ( *a2 ) /*0x6ac98b*/
  {
    if ( v22 ) /*0x6ac998*/
      sub_6B67F0((char *)*a2, (int (__stdcall ***)(_DWORD, void *, char *))v22); /*0x6ac99b*/
  }
  sub_6B6F20((float *)*a2, *((float *)*a2 + 0xF)); /*0x6ac9aa*/
  FormHeapFree(v28); /*0x6ac9b4*/
  return 0; /*0x6ac9be*/
}
