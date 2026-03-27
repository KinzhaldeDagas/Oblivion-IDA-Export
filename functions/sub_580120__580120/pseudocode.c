char *__thiscall sub_580120(char *this)
{
  unsigned __int16 v2; // ax
  int v3; // edi
  unsigned int v4; // eax
  char *v5; // eax
  char *v6; // edx
  char v7; // cl
  int v8; // ecx
  int v9; // eax
  char v10; // dl
  BSStringT *v11; // esi
  unsigned int v12; // eax
  char v14[1024]; // [esp+8h] [ebp-804h] BYREF
  char v15[1024]; // [esp+408h] [ebp-404h] BYREF

  v2 = *((_WORD *)this + 0xE);
  if ( v2 == 0xFFFF )
    v3 = strlen(*((const char **)this + 6));
  else
    v3 = v2;
  LOWORD(v4) = *((_WORD *)this + 0xE);
  if ( (_WORD)v4 == 0xFFFF )
    v4 = strlen(*((const char **)this + 6));
  else
    v4 = (unsigned __int16)v4;
  if ( v4 )
  {
    v5 = *((char **)this + 6);
    v6 = (char *)(v15 - v5);
    do
    {
      v7 = *v5;
      v5[(_DWORD)v6] = *v5;
      ++v5;
    }
    while ( v7 );
  }
  else
  {
    v15[0] = 0;
  }
  v8 = 0;
  v9 = 0;
  if ( v3 >= 0 )
  {
    v10 = *this;
    do
    {
      if ( v10 )
      {
        if ( v8 == *((_DWORD *)this + 1) )
          v14[v9++] = *(this + 8) != 0 ? 0x7C : 0x7F;
      }
      v14[v9++] = v15[v8++];
    }
    while ( v8 <= v3 );
  }
  v14[v9] = 0;
  v11 = (BSStringT *)(this + 0x20);
  BSStringT_Set(v11, v14, 0);
  LOWORD(v12) = v11->m_dataLen;
  if ( (_WORD)v12 == 0xFFFF )
    v12 = strlen(v11->m_data);
  else
    v12 = (unsigned __int16)v12;
  if ( !v12 )
    BSStringT_Set(v11, word_A36430, 0);
  return v11->m_data;
}
