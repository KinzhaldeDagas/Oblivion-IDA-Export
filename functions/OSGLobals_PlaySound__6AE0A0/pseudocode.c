_DWORD *__thiscall OSGLobals_PlaySound(int *this, void *a2, int a3, char a4)
{
  _DWORD *v5; // eax
  _DWORD *v7; // ecx
  int v8; // esi
  _DWORD *v9; // eax
  const char **v10; // eax
  const char **v11; // ebp
  const char *v12; // eax
  const char *v13; // edx
  int v14; // ecx
  int v15; // edx
  const char *v16; // eax
  const char *v17; // edx
  unsigned int v18; // eax
  char *v19; // edi
  int v21; // eax
  const char *v22; // eax
  double v23; // rt0
  unsigned __int8 v24; // al
  unsigned __int8 v25; // cl
  double v26; // st7
  float v27; // [esp+0h] [ebp-140h]
  float v28; // [esp+4h] [ebp-13Ch]
  int v29[3]; // [esp+1Ch] [ebp-124h] BYREF
  const char *v30; // [esp+28h] [ebp-118h] BYREF
  _DWORD v31[65]; // [esp+2Ch] [ebp-114h] BYREF
  int v32; // [esp+13Ch] [ebp-4h]

  if ( !bSoundEnabled_Audio ) /*0x6ae0db*/
  {
    v5 = (_DWORD *)FormHeapAlloc(4u); /*0x6ae0e8*/
    v29[0] = (int)v5; /*0x6ae0f0*/
    v32 = 0; /*0x6ae0f6*/
    if ( v5 ) /*0x6ae101*/
      return unknown_libname_1(v5, 0); /*0x6ae110*/
    return 0; /*0x6ae101*/
  }
  v7 = (_DWORD *)*(this + 0xC0); /*0x6ae11c*/
  v29[0] = 0; /*0x6ae128*/
  NiTMap_GetAt(v7, (int)a2, v29); /*0x6ae130*/
  v8 = v29[0]; /*0x6ae135*/
  if ( !v29[0] || a4 )
  {
    v10 = (const char **)sub_4473F0(a2); /*0x6ae183*/
    v11 = v10; /*0x6ae188*/
    if ( !v10 ) /*0x6ae18c*/
      return 0; /*0x6ae18c*/
    LOWORD(v10) = *((_WORD *)v10 + 0x16); /*0x6ae192*/
    v10 = (_WORD)v10 == 0xFFFF ? (const char **)strlen(v11[0xA]) : (const char **)(unsigned __int16)v10;
    if ( !v10 ) /*0x6ae1b4*/
      return 0; /*0x6ae1b4*/
    v12 = v11[0xF]; /*0x6ae1ba*/
    v13 = v11[0x10]; /*0x6ae1c2*/
    v29[1] = (int)v11[0xE]; /*0x6ae1c5*/
    v30 = v13; /*0x6ae1c9*/
    if ( ((unsigned __int8)v12 & 0x10) != 0 ) /*0x6ae1cd*/
      a3 |= 0x10u; /*0x6ae1cf*/
    v14 = dword_A77130; /*0x6ae1dc*/
    v15 = dword_A77134; /*0x6ae1e2*/
    v31[0] = dword_A7712C; /*0x6ae1e8*/
    v31[1] = v14; /*0x6ae1ec*/
    v31[2] = v15; /*0x6ae1f0*/
    v16 = v11[0xA]; /*0x6ae1f4*/
    if ( !v16 ) /*0x6ae1f9*/
      v16 = EmptyString; /*0x6ae1fb*/
    v17 = v16; /*0x6ae200*/
    v18 = strlen(v16) + 1; /*0x6ae20f*/
    v19 = (char *)&v30 + 3; /*0x6ae211*/
    while ( *++v19 ) /*0x6ae21c*/
      ; /*0x6ae214*/
    qmemcpy(v19, v17, v18); /*0x6ae225*/
    if ( a4 ) /*0x6ae236*/
    {
      v21 = *(this + 0x2D); /*0x6ae238*/
      *(this + 0x2D) = v21 + 1; /*0x6ae241*/
    }
    else
    {
      v21 = (int)a2; /*0x6ae249*/
    }
    if ( sub_6AC610(this, (unsigned int **)v29, (char *)v31, a3, v21) ) /*0x6ae265*/
      return 0; /*0x6ae26c*/
    v22 = (const char *)(*((int (__thiscall **)(const char **))*v11 + 0x35))(v11); /*0x6ae27d*/
    v8 = v29[0]; /*0x6ae27f*/
    sub_6B6770((unsigned int *)v29[0], v22); /*0x6ae286*/
    sub_6ACCA0(this, (_DWORD *)v8, *(_DWORD *)(v8 + 0xC)); /*0x6ae292*/
    v29[0] = *((unsigned __int8 *)v11 + 0x43); /*0x6ae29b*/
    v23 = dbl_A771C8; /*0x6ae2ab*/
    *(float *)v29 = (double)v29[0] * v23; /*0x6ae2ad*/
    *(float *)(v8 + 0x2C) = *(float *)v29; /*0x6ae2b5*/
    v29[0] = *((unsigned __int8 *)v11 + 0x42); /*0x6ae2bc*/
    *(float *)v29 = v23 * (double)v29[0]; /*0x6ae2c6*/
    *(float *)(v8 + 0x30) = *(float *)v29; /*0x6ae2ce*/
    v24 = *((_BYTE *)v11 + 0x39); /*0x6ae2d1*/
    if ( v24 ) /*0x6ae2d6*/
    {
      v25 = *((_BYTE *)v11 + 0x38); /*0x6ae2d8*/
      if ( v25 ) /*0x6ae2dd*/
      {
        v29[0] = 0x64 * v24; /*0x6ae2e5*/
        v26 = (double)v29[0]; /*0x6ae2ec*/
        v29[0] = 5 * v25; /*0x6ae2f6*/
        v28 = v26; /*0x6ae2fa*/
        v27 = (float)v29[0]; /*0x6ae304*/
        sub_6B6C60((int *)v8, v27, v28); /*0x6ae307*/
      }
    }
    sub_6A90A0(v8, *((_WORD *)v11 + 0x20)); /*0x6ae313*/
    sub_6B6F20((float *)v8, 1.0); /*0x6ae320*/
    v9 = (_DWORD *)FormHeapAlloc(4u); /*0x6ae327*/
    v29[0] = (int)v9; /*0x6ae32f*/
    v32 = 1; /*0x6ae333*/
  }
  else
  {
    v9 = (_DWORD *)FormHeapAlloc(4u); /*0x6ae14d*/
    v29[0] = (int)v9; /*0x6ae155*/
    v32 = 2; /*0x6ae159*/
  }
  if ( v9 ) /*0x6ae166*/
    return unknown_libname_1(v9, *(_DWORD *)(v8 + 0xC)); /*0x6ae177*/
  return 0; /*0x6ae345*/
}
