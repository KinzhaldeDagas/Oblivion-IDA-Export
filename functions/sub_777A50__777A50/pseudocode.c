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

  v1 = (NiTMap_TESCELL *)(this + 3);
  v2 = *(this + 4);
  v3 = 0;
  v13 = v1;
  if ( v2 )
  {
    m_buckets = v1->m_buckets;
    while ( !*m_buckets )
    {
      ++v3;
      ++m_buckets;
      if ( v3 >= v2 )
        goto LABEL_5;
    }
    v5 = v1->m_buckets[v3];
  }
  else
  {
LABEL_5:
    v5 = 0;
  }
  v11 = v5;
  while ( v11 )
  {
    sub_452600(v1, &v11, &v14, &v12);
    v6 = v12;
    if ( v12 )
    {
      p_flags = &v12->members.super.flags;
      v8 = 5;
      do
      {
        v9 = *p_flags;
        if ( *p_flags )
        {
          if ( *(_DWORD *)(v9 + 0x20) )
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v9 + 0x20) + 8))(*(_DWORD *)(v9 + 0x20));
          sub_77D1D0((_DWORD *)v9);
          FormHeapFree(v9);
        }
        ++p_flags;
        --v8;
      }
      while ( v8 );
      FormHeapFree((unsigned int)v6);
      v1 = v13;
    }
  }
  return NiTMap_Clear(v1);
}
