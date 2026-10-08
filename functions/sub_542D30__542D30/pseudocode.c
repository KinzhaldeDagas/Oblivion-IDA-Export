void __cdecl sub_542D30(UInt32 a1, int a2, void *a3, char a4)
{
  char *m_data; // edi
  unsigned int v5; // eax
  const char *v6; // eax
  char *v7; // esi
  BSStringT v8; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+1Ch] [ebp-4h]

  m_data = 0; /*0x542d55*/
  v8.m_data = 0; /*0x542d57*/
  v8.m_dataLen = 0; /*0x542d5b*/
  v8.m_bufLen = 0; /*0x542d60*/
  v9 = 0; /*0x542d6b*/
  if ( a2 ) /*0x542d6f*/
  {
    LOWORD(v5) = *(_WORD *)(a2 + 8); /*0x542d71*/
    if ( (_WORD)v5 == 0xFFFF ) /*0x542d79*/
      v5 = strlen(*(const char **)(a2 + 4)); /*0x542d7e*/
    else
      v5 = (unsigned __int16)v5; /*0x542d8e*/
    if ( v5 ) /*0x542d93*/
    {
      v6 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2); /*0x542d9c*/
      BSStringT_Set(&v8, v6, 0); /*0x542da5*/
      v7 = *(char **)(a2 + 4); /*0x542daa*/
      if ( !v7 ) /*0x542daf*/
        v7 = EmptyString; /*0x542db1*/
      BSStringT_Append(&v8, v7); /*0x542dbb*/
      m_data = v8.m_data; /*0x542dc0*/
    }
  }
  sub_544160(a1, m_data, a3, a4); /*0x542de0*/
  FormHeapFree((unsigned int)m_data); /*0x542de6*/
}
