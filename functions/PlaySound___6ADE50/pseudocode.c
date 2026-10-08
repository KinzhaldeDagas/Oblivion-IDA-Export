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

  if ( !bSoundEnabled_Audio ) /*0x6ade8b*/
  {
    v5 = (_DWORD *)FormHeapAlloc(4u); /*0x6adea3*/
    v28 = 0; /*0x6adeb1*/
    if ( v5 ) /*0x6adebc*/
      return unknown_libname_1(v5, 0); /*0x6adecb*/
    return 0; /*0x6adebc*/
  }
  v26 = 0; /*0x6aded7*/
  v7 = SoundMap_ResolveAnimSoundNote(a2); /*0x6adedf*/
  v8 = v7; /*0x6adee4*/
  if ( v7 ) /*0x6adee8*/
  {
    v9 = dword_A77130; /*0x6adef3*/
    v10 = dword_A77134; /*0x6adef9*/
    v27[0] = dword_A7712C; /*0x6adeff*/
    v27[1] = v9; /*0x6adf03*/
    v27[2] = v10; /*0x6adf07*/
    v11 = *(const char **)(v7 + 0x28); /*0x6adf0b*/
    if ( !v11 ) /*0x6adf10*/
      v11 = EmptyString; /*0x6adf12*/
    v12 = v11; /*0x6adf17*/
    v13 = strlen(v11) + 1; /*0x6adf2d*/
    v14 = (char *)&v26 + 3; /*0x6adf2f*/
    while ( *++v14 ) /*0x6adf3a*/
      ; /*0x6adf32*/
    qmemcpy(v14, v12, v13); /*0x6adf43*/
    v16 = *(_DWORD *)(v8 + 0xC); /*0x6adf54*/
    if ( a4 ) /*0x6adf57*/
    {
      v16 = *(this + 0x2D); /*0x6adf59*/
      *(this + 0x2D) = v16 + 1; /*0x6adf62*/
    }
    else if ( sub_6AB130(this, *(_DWORD *)(v8 + 0xC)) ) /*0x6adf6d*/
    {
      return 0; /*0x6adf74*/
    }
    if ( !sub_6AC610(this, (unsigned int **)&v26, (char *)v27, a3, v16) ) /*0x6adf8f*/
    {
      v17 = *(_BYTE *)(v8 + 0x39); /*0x6adf9c*/
      v18 = v26; /*0x6adfa1*/
      if ( v17 ) /*0x6adfa5*/
      {
        v19 = *(_BYTE *)(v8 + 0x38); /*0x6adfa7*/
        if ( v19 ) /*0x6adfac*/
        {
          v26 = 5 * v19; /*0x6adfc5*/
          v23 = (float)(0x64 * v17); /*0x6adfcb*/
          v22 = (float)v26; /*0x6adfd3*/
          sub_6B6C60((int *)v18, v22, v23); /*0x6adfd6*/
        }
      }
      sub_6A90A0(v18, *(_WORD *)(v8 + 0x40)); /*0x6adfe2*/
      sub_6B6770((unsigned int *)v18, a2); /*0x6adfee*/
      sub_6ACCA0(this, (_DWORD *)v18, *(_DWORD *)(v18 + 0xC)); /*0x6adffa*/
      v20 = dbl_A771C8; /*0x6ae016*/
      v24 = (double)*(unsigned __int8 *)(v8 + 0x43) * v20; /*0x6ae018*/
      *(float *)(v18 + 0x2C) = v24; /*0x6ae020*/
      v25 = v20 * (double)*(unsigned __int8 *)(v8 + 0x42); /*0x6ae031*/
      *(float *)(v18 + 0x30) = v25; /*0x6ae039*/
      sub_6B6F20((float *)v18, 1.0); /*0x6ae041*/
      v21 = (_DWORD *)FormHeapAlloc(4u); /*0x6ae048*/
      v28 = 1; /*0x6ae056*/
      if ( v21 ) /*0x6ae061*/
        return unknown_libname_1(v21, *(_DWORD *)(v18 + 0xC)); /*0x6ae06e*/
    }
  }
  return 0; /*0x6ae072*/
}
