unsigned int __thiscall sub_452600(NiTMap_TESCELL *this, NiTMap_Entry_TESCELL **a2, void **a3, TESObjectCELL **a4)
{
  unsigned int result; // eax
  int v6; // eax
  UInt32 m_numBuckets; // edx
  NiTMap_Entry_TESCELL **v8; // ecx

  result = (unsigned int)*a2;
  *a3 = (*a2)->key;
  *a4 = *(TESObjectCELL **)(result + 8);
  if ( *(_DWORD *)result )
  {
    *a2 = *(NiTMap_Entry_TESCELL **)result;
  }
  else
  {
    v6 = (*((int (__thiscall **)(NiTMap_TESCELL *, void *))this->vtbl + 1))(this, *(void **)(result + 4));
    m_numBuckets = this->m_numBuckets;
    result = v6 + 1;
    if ( result >= m_numBuckets )
    {
LABEL_7:
      *a2 = 0;
    }
    else
    {
      v8 = &this->m_buckets[result];
      while ( !*v8 )
      {
        ++result;
        ++v8;
        if ( result >= m_numBuckets )
          goto LABEL_7;
      }
      *a2 = *v8;
    }
  }
  return result;
}
