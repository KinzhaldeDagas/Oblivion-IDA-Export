char *__cdecl sub_551B40(BSStringT *a1, const char *arg4)
{
  char *v3; // eax
  char *m_data; // edi
  char *v5; // esi
  BSStringT v6; // [esp+10h] [ebp-220h] BYREF
  char Str[260]; // [esp+18h] [ebp-218h] BYREF
  char a2[260]; // [esp+11Ch] [ebp-114h] BYREF
  int v9; // [esp+22Ch] [ebp-4h]

  v6.m_data = 0;
  v6.m_dataLen = 0;
  v6.m_bufLen = 0;
  v9 = 0;
  if ( !arg4 )
  {
    FormHeapFree(0);
    return 0;
  }
  strcpy(Str, arg4);
  if ( strchr(Str, 0x5F) )
  {
    BSStringT_Set(a1, Str, 0);
LABEL_5:
    FormHeapFree(0);
    return (char *)arg4;
  }
  v3 = strrchr(Str, 0x2E);
  if ( !v3 )
    goto LABEL_5;
  *v3 = 0;
  _sprintf(a2, "%s_50.NIF", Str);
  BSStringT_Set(a1, a2, 0);
  BSStringT_Static_Format(&v6, "Meshes\\%s", a1->m_data);
  m_data = v6.m_data;
  if ( OBSE_g_FileFinder && OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, v6.m_data, 0, 0, 0xFFFFFFFF) )
  {
    v5 = a1->m_data;
    FormHeapFree((unsigned int)m_data);
    return v5;
  }
  else
  {
    FormHeapFree((unsigned int)m_data);
    return 0;
  }
}
