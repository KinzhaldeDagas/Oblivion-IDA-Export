int __thiscall sub_4F02B0(unsigned int *this)
{
  unsigned int v2; // edi
  NiTMap_TESCELL *v3; // ebx
  unsigned int v4; // edx
  unsigned int v5; // eax
  int v6; // esi
  NiTMap_Entry_TESCELL **m_buckets; // ecx
  NiTMap_Entry_TESCELL *v8; // eax
  TESObjectCELL *v9; // esi
  int v10; // edi
  TESObjectCELL *v12; // [esp+Ch] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v13; // [esp+10h] [ebp-8h] BYREF
  void *v14; // [esp+14h] [ebp-4h] BYREF

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B36100, (int)&unk_A2F830);
  if ( *(this + 0x1E) )
  {
    do
    {
      v2 = *(_DWORD *)(*(this + 0x1E) + 4);
      FormHeapFree(*(this + 0x1E));
      *(this + 0x1E) = v2;
    }
    while ( v2 );
  }
  v3 = (NiTMap_TESCELL *)(this + 0x19);
  *(this + 0x1D) = 0;
  v4 = *(this + 0x1A);
  v5 = 0;
  if ( v4 )
  {
    v6 = *(this + 0x1B);
    m_buckets = v3->m_buckets;
    while ( !*m_buckets )
    {
      ++v5;
      ++m_buckets;
      if ( v5 >= v4 )
        goto LABEL_7;
    }
    v8 = *(NiTMap_Entry_TESCELL **)(v6 + 4 * v5);
  }
  else
  {
LABEL_7:
    v8 = 0;
  }
  v13 = v8;
  while ( v13 )
  {
    v12 = 0;
    sub_452600(v3, &v13, &v14, &v12);
    v9 = v12;
    if ( v12 )
    {
      if ( *(_DWORD *)&v12->members.super.type )
      {
        do
        {
          v10 = *(_DWORD *)(*(_DWORD *)&v9->members.super.type + 4);
          FormHeapFree(*(_DWORD *)&v9->members.super.type);
          *(_DWORD *)&v9->members.super.type = v10;
        }
        while ( v10 );
      }
      v9->vtbl = 0;
      FormHeapFree((unsigned int)v9);
    }
  }
  NiTMap_Clear(v3);
  return NiLeaveCriticalSection_0(&stru_B36100);
}
