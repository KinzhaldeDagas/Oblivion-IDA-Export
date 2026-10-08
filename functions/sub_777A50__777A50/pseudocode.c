int __thiscall sub_777A50(_DWORD *this)
{
  NiTMap_TESCELL *v1; // edi
  unsigned int v2; // ecx
  unsigned int v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edx
  NiTMap_Entry_TESCELL *v5; // eax
  TESObjectCELL *v6; // ebp
  TESForm::FormFlags *p_flags; // edi
  int v8; // ebx
  unsigned int v9; // esi
  NiTMap_Entry_TESCELL *v11; // [esp+8h] [ebp-10h] BYREF
  TESObjectCELL *v12; // [esp+Ch] [ebp-Ch] BYREF
  NiTMap_TESCELL *v13; // [esp+10h] [ebp-8h]
  void *v14; // [esp+14h] [ebp-4h] BYREF

  v1 = (NiTMap_TESCELL *)(this + 3); /*0x777a55*/
  v2 = *(this + 4); /*0x777a58*/
  v3 = 0; /*0x777a5b*/
  v13 = v1; /*0x777a5f*/
  if ( v2 ) /*0x777a63*/
  {
    m_buckets = v1->m_buckets; /*0x777a68*/
    while ( !*m_buckets ) /*0x777a73*/
    {
      ++v3; /*0x777a79*/
      ++m_buckets; /*0x777a7c*/
      if ( v3 >= v2 ) /*0x777a81*/
        goto LABEL_5; /*0x777a81*/
    }
    v5 = v1->m_buckets[v3]; /*0x777b07*/
  }
  else
  {
LABEL_5:
    v5 = 0; /*0x777a83*/
  }
  v11 = v5; /*0x777a87*/
  while ( v11 ) /*0x777a8b*/
  {
    NiTMap_U32Pointer_GetNextEntry(v1, &v11, &v14, &v12); /*0x777aa1*/
    v6 = v12; /*0x777aa6*/
    if ( v12 ) /*0x777aac*/
    {
      p_flags = &v12->members.super.flags; /*0x777aae*/
      v8 = 5; /*0x777ab1*/
      do /*0x777ae3*/
      {
        v9 = *p_flags; /*0x777ab6*/
        if ( *p_flags ) /*0x777ab6*/
        {
          if ( *(_DWORD *)(v9 + 0x20) ) /*0x777abc*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v9 + 0x20) + 8))(*(_DWORD *)(v9 + 0x20)); /*0x777acb*/
          sub_77D1D0((_DWORD *)v9); /*0x777acf*/
          FormHeapFree(v9); /*0x777ad5*/
        }
        ++p_flags; /*0x777add*/
        --v8; /*0x777ae0*/
      }
      while ( v8 ); /*0x777ae3*/
      FormHeapFree((unsigned int)v6); /*0x777ae6*/
      v1 = v13; /*0x777aeb*/
    }
  }
  return NiTMap_Clear(v1); /*0x777afd*/
}
