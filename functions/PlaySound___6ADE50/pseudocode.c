_DWORD *__thiscall PlaySound___(int *this, char *a2, int a3, char a4)
{
  _DWORD *v5; // eax
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // edx
  const char *v11; // eax
  const char *v12; // edx
  unsigned int v13; // eax
  char *v14; // edi
  int v16; // esi
  unsigned __int8 v17; // al
  int v18; // esi
  unsigned __int8 v19; // cl
  double v20; // rt0
  _DWORD *v21; // eax
  float v22; // [esp+0h] [ebp-138h]
  float v23; // [esp+4h] [ebp-134h]
  float v24; // [esp+1Ch] [ebp-11Ch]
  float v25; // [esp+1Ch] [ebp-11Ch]
  int v26; // [esp+20h] [ebp-118h] BYREF
  _DWORD v27[65]; // [esp+24h] [ebp-114h] BYREF
  int v28; // [esp+134h] [ebp-4h]

  if ( !bSoundEnabled_Audio )
  {
    v5 = (_DWORD *)FormHeapAlloc(4u);
    v28 = 0;
    if ( v5 )
      return unknown_libname_1(v5, 0);
    return 0;
  }
  v26 = 0;
  v7 = sub_447490(a2);
  v8 = v7;
  if ( v7 )
  {
    v9 = dword_A77130;
    v10 = dword_A77134;
    v27[0] = dword_A7712C;
    v27[1] = v9;
    v27[2] = v10;
    v11 = *(const char **)(v7 + 0x28);
    if ( !v11 )
      v11 = EmptyString;
    v12 = v11;
    v13 = strlen(v11) + 1;
    v14 = (char *)&v26 + 3;
    while ( *++v14 )
      ;
    qmemcpy(v14, v12, v13);
    v16 = *(_DWORD *)(v8 + 0xC);
    if ( a4 )
    {
      v16 = *(this + 0x2D);
      *(this + 0x2D) = v16 + 1;
    }
    else if ( sub_6AB130(this, *(_DWORD *)(v8 + 0xC)) )
    {
      return 0;
    }
    if ( !sub_6AC610(this, (unsigned int **)&v26, (char *)v27, a3, v16) )
    {
      v17 = *(_BYTE *)(v8 + 0x39);
      v18 = v26;
      if ( v17 )
      {
        v19 = *(_BYTE *)(v8 + 0x38);
        if ( v19 )
        {
          v26 = 5 * v19;
          v23 = (float)(0x64 * v17);
          v22 = (float)v26;
          sub_6B6C60((int *)v18, v22, v23);
        }
      }
      sub_6A90A0(v18, *(_WORD *)(v8 + 0x40));
      sub_6B6770((unsigned int *)v18, a2);
      sub_6ACCA0(this, (_DWORD *)v18, *(_DWORD *)(v18 + 0xC));
      v20 = dbl_A771C8;
      v24 = (double)*(unsigned __int8 *)(v8 + 0x43) * v20;
      *(float *)(v18 + 0x2C) = v24;
      v25 = v20 * (double)*(unsigned __int8 *)(v8 + 0x42);
      *(float *)(v18 + 0x30) = v25;
      sub_6B6F20((float *)v18, 1.0);
      v21 = (_DWORD *)FormHeapAlloc(4u);
      v28 = 1;
      if ( v21 )
        return unknown_libname_1(v21, *(_DWORD *)(v18 + 0xC));
    }
  }
  return 0;
}
