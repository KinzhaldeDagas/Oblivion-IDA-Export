int __thiscall SettingCollectionMap_BuildOutputArray(_DWORD *this, char *a2)
{
  NiTMap_TESCELL *v2; // esi
  unsigned int v3; // ecx
  int v4; // ebx
  unsigned int v5; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edx
  NiTMap_Entry_TESCELL *v7; // eax
  unsigned __int16 *v8; // edi
  NiTMap_Entry_TESCELL *v10; // [esp+Ch] [ebp-8h] BYREF
  void *v11; // [esp+10h] [ebp-4h] BYREF

  v2 = (NiTMap_TESCELL *)(this + 0x43);
  v3 = *(this + 0x44);
  v4 = 0;
  v5 = 0;
  if ( v3 )
  {
    m_buckets = v2->m_buckets;
    while ( !*m_buckets )
    {
      ++v5;
      ++m_buckets;
      if ( v5 >= v3 )
        goto LABEL_5;
    }
    v7 = v2->m_buckets[v5];
  }
  else
  {
LABEL_5:
    v7 = 0;
  }
  v10 = v7;
  if ( v7 )
  {
    v8 = (unsigned __int16 *)a2;
    do
    {
      sub_452600(v2, &v10, &v11, (TESObjectCELL **)&a2);
      if ( a2 )
      {
        Setting_BuildOutputArray(a2, v8);
        ++v4;
      }
    }
    while ( v10 );
  }
  return v4;
}
