char *__cdecl sub_551B40(BSStringT *a1, const char *arg4)
{
  char *v3; // eax
  char *m_data; // edi
  char *v5; // esi
  BSStringT v6; // [esp+10h] [ebp-220h] BYREF
  char Str[260]; // [esp+18h] [ebp-218h] BYREF
  char a2[260]; // [esp+11Ch] [ebp-114h] BYREF
  int v9; // [esp+22Ch] [ebp-4h]

  v6.m_data = 0; /*0x551b83*/
  v6.m_dataLen = 0; /*0x551b87*/
  v6.m_bufLen = 0; /*0x551b8c*/
  v9 = 0; /*0x551b9a*/
  if ( !arg4 ) /*0x551ba1*/
  {
    FormHeapFree(0); /*0x551ba4*/
    return 0; /*0x551bae*/
  }
  strcpy(Str, arg4); /*0x551bb7*/
  if ( strchr(Str, 0x5F) ) /*0x551bd3*/
  {
    BSStringT_Set(a1, Str, 0); /*0x551be7*/
LABEL_5:
    FormHeapFree(0); /*0x551bec*/
    return (char *)arg4; /*0x551bf4*/
  }
  v3 = strrchr(Str, 0x2E); /*0x551c00*/
  if ( !v3 ) /*0x551c0a*/
    goto LABEL_5; /*0x551c0a*/
  *v3 = 0; /*0x551c0c*/
  _sprintf(a2, "%s_50.NIF", Str); /*0x551c20*/
  BSStringT_Set(a1, a2, 0); /*0x551c33*/
  BSStringT_Static_Format(&v6, "Meshes\\%s", a1->m_data); /*0x551c45*/
  m_data = v6.m_data; /*0x551c50*/
  if ( MEMORY[0xB33A04] && MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], v6.m_data, 0, 0, 0xFFFFFFFF) ) /*0x551c65*/
  {
    v5 = a1->m_data; /*0x551c78*/
    FormHeapFree((unsigned int)m_data); /*0x551c7b*/
    return v5; /*0x551c80*/
  }
  else
  {
    FormHeapFree((unsigned int)m_data); /*0x551c6c*/
    return 0; /*0x551c74*/
  }
}
