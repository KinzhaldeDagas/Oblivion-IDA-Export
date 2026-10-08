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

  v2 = *((_WORD *)this + 0xE); /*0x580137*/
  if ( v2 == 0xFFFF ) /*0x580140*/
    v3 = strlen(*((const char **)this + 6)); /*0x580145*/
  else
    v3 = v2; /*0x580157*/
  LOWORD(v4) = *((_WORD *)this + 0xE); /*0x58015a*/
  if ( (_WORD)v4 == 0xFFFF ) /*0x580162*/
    v4 = strlen(*((const char **)this + 6)); /*0x580167*/
  else
    v4 = (unsigned __int16)v4; /*0x58017d*/
  if ( v4 ) /*0x580182*/
  {
    v5 = *((char **)this + 6); /*0x58018d*/
    v6 = (char *)(v15 - v5); /*0x580197*/
    do /*0x5801aa*/
    {
      v7 = *v5; /*0x5801a0*/
      v5[(_DWORD)v6] = *v5; /*0x5801a2*/
      ++v5; /*0x5801a5*/
    }
    while ( v7 ); /*0x5801aa*/
  }
  else
  {
    v15[0] = 0; /*0x580184*/
  }
  v8 = 0; /*0x5801ac*/
  v9 = 0; /*0x5801ae*/
  if ( v3 >= 0 )
  {
    v10 = *this; /*0x5801b4*/
    do
    {
      if ( v10 )
      {
        if ( v8 == *((_DWORD *)this + 1) )
          v14[v9++] = *(this + 8) != 0 ? 0x7C : 0x7F;
      }
      v14[v9++] = v15[v8++]; /*0x5801db*/
    }
    while ( v8 <= v3 );
  }
  v14[v9] = 0; /*0x5801ea*/
  v11 = (BSStringT *)(this + 0x20); /*0x5801f5*/
  BSStringT_Set(v11, v14, 0); /*0x5801fb*/
  LOWORD(v12) = v11->m_dataLen; /*0x580200*/
  if ( (_WORD)v12 == 0xFFFF ) /*0x580208*/
    v12 = strlen(v11->m_data); /*0x580219*/
  else
    v12 = (unsigned __int16)v12; /*0x58021d*/
  if ( !v12 ) /*0x580222*/
    BSStringT_Set(v11, word_A36430, 0); /*0x58022c*/
  return v11->m_data; /*0x580233*/
}
