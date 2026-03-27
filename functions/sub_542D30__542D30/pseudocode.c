void __cdecl sub_542D30(int a1, int a2, void *a3, char a4)
{
  char *m_data; // edi
  unsigned int v5; // eax
  const char *v6; // eax
  char *v7; // esi
  BSStringT v8; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+1Ch] [ebp-4h]

  m_data = 0;
  v8.m_data = 0;
  v8.m_dataLen = 0;
  v8.m_bufLen = 0;
  v9 = 0;
  if ( a2 )
  {
    LOWORD(v5) = *(_WORD *)(a2 + 8);
    if ( (_WORD)v5 == 0xFFFF )
      v5 = strlen(*(const char **)(a2 + 4));
    else
      v5 = (unsigned __int16)v5;
    if ( v5 )
    {
      v6 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2);
      BSStringT_Set(&v8, v6, 0);
      v7 = *(char **)(a2 + 4);
      if ( !v7 )
        v7 = EmptyString;
      BSStringT_Append(&v8, v7);
      m_data = v8.m_data;
    }
  }
  sub_544160(a1, m_data, a3, a4);
  FormHeapFree((unsigned int)m_data);
}
