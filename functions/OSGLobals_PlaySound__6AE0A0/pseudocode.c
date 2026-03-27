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

  if ( !bSoundEnabled_Audio )
  {
    v5 = (_DWORD *)FormHeapAlloc(4u);
    v29[0] = (int)v5;
    v32 = 0;
    if ( v5 )
      return unknown_libname_1(v5, 0);
    return 0;
  }
  v7 = (_DWORD *)*(this + 0xC0);
  v29[0] = 0;
  NiTMap_GetAt(v7, (int)a2, v29);
  v8 = v29[0];
  if ( !v29[0] || a4 )
  {
    v10 = (const char **)sub_4473F0(a2);
    v11 = v10;
    if ( !v10 )
      return 0;
    LOWORD(v10) = *((_WORD *)v10 + 0x16);
    v10 = (_WORD)v10 == 0xFFFF ? (const char **)strlen(v11[0xA]) : (const char **)(unsigned __int16)v10;
    if ( !v10 )
      return 0;
    v12 = v11[0xF];
    v13 = v11[0x10];
    v29[1] = (int)v11[0xE];
    v30 = v13;
    if ( ((unsigned __int8)v12 & 0x10) != 0 )
      a3 |= 0x10u;
    v14 = dword_A77130;
    v15 = dword_A77134;
    v31[0] = dword_A7712C;
    v31[1] = v14;
    v31[2] = v15;
    v16 = v11[0xA];
    if ( !v16 )
      v16 = EmptyString;
    v17 = v16;
    v18 = strlen(v16) + 1;
    v19 = (char *)&v30 + 3;
    while ( *++v19 )
      ;
    qmemcpy(v19, v17, v18);
    if ( a4 )
    {
      v21 = *(this + 0x2D);
      *(this + 0x2D) = v21 + 1;
    }
    else
    {
      v21 = (int)a2;
    }
    if ( sub_6AC610(this, (unsigned int **)v29, (char *)v31, a3, v21) )
      return 0;
    v22 = (const char *)(*((int (__thiscall **)(const char **))*v11 + 0x35))(v11);
    v8 = v29[0];
    sub_6B6770((unsigned int *)v29[0], v22);
    sub_6ACCA0(this, (_DWORD *)v8, *(_DWORD *)(v8 + 0xC));
    v29[0] = *((unsigned __int8 *)v11 + 0x43);
    v23 = dbl_A771C8;
    *(float *)v29 = (double)v29[0] * v23;
    *(float *)(v8 + 0x2C) = *(float *)v29;
    v29[0] = *((unsigned __int8 *)v11 + 0x42);
    *(float *)v29 = v23 * (double)v29[0];
    *(float *)(v8 + 0x30) = *(float *)v29;
    v24 = *((_BYTE *)v11 + 0x39);
    if ( v24 )
    {
      v25 = *((_BYTE *)v11 + 0x38);
      if ( v25 )
      {
        v29[0] = 0x64 * v24;
        v26 = (double)v29[0];
        v29[0] = 5 * v25;
        v28 = v26;
        v27 = (float)v29[0];
        sub_6B6C60((int *)v8, v27, v28);
      }
    }
    sub_6A90A0(v8, *((_WORD *)v11 + 0x20));
    sub_6B6F20((float *)v8, 1.0);
    v9 = (_DWORD *)FormHeapAlloc(4u);
    v29[0] = (int)v9;
    v32 = 1;
  }
  else
  {
    v9 = (_DWORD *)FormHeapAlloc(4u);
    v29[0] = (int)v9;
    v32 = 2;
  }
  if ( v9 )
    return unknown_libname_1(v9, *(_DWORD *)(v8 + 0xC));
  return 0;
}
