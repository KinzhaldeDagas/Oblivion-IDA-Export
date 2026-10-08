void __usercall TESDescription_SaveComponent(int a1@<edi>, int a2, int a3)
{
  char *m_data; // eax
  unsigned __int16 v4; // di
  unsigned int v5; // edx
  unsigned int v6; // eax
  void *v7; // eax
  size_t v8; // [esp-Ch] [ebp-Ch]

  if ( a2 ) /*0x46a446*/
  {
    m_data = MEMORY[0xB33C08].m_data; /*0x46a44c*/
    HIDWORD(v8) = a1; /*0x46a452*/
    v4 = word_B33C0C; /*0x46a453*/
    if ( word_B33C0C == 0xFFFF ) /*0x46a45f*/
      v5 = strlen(m_data); /*0x46a463*/
    else
      v5 = v4; /*0x46a475*/
    if ( v5 ) /*0x46a47a*/
    {
      if ( v4 == 0xFFFF ) /*0x46a481*/
        v6 = strlen(m_data); /*0x46a483*/
      else
        v6 = v4; /*0x46a493*/
      LODWORD(v8) = v6 + 1; /*0x46a499*/
      v7 = (void *)(*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)a2 + 0x10))(0, 0x43534544); /*0x46a4a6*/
      j_TESForm_PutCurrentChunkData(a3, v7, v8); /*0x46a4ae*/
    }
    else
    {
      LODWORD(v8) = 1; /*0x46a4bd*/
      LOBYTE(a2) = 0; /*0x46a4c5*/
      j_TESForm_PutCurrentChunkData(a3, &a2, v8); /*0x46a4ca*/
    }
  }
}
