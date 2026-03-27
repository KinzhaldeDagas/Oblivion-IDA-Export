void sub_55FCB0()
{
  NiTMap_TESCELL **v0; // esi
  NiTMap_TESCELL *v1; // ecx
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edi
  NiTMap_Entry_TESCELL **v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  float *v7; // eax
  float *v8; // eax
  float **CompareTo; // eax
  double v10; // st7
  float v11; // [esp+4h] [ebp-28h]
  NiTMap_Entry_TESCELL *v12; // [esp+14h] [ebp-18h] BYREF
  TESObjectCELL *v13; // [esp+18h] [ebp-14h] BYREF
  float v14; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v15; // [esp+28h] [ebp-4h]

  v0 = (NiTMap_TESCELL **)dword_B39E04;
  if ( !dword_B39E04 )
  {
    sub_55F750(0);
    v0 = (NiTMap_TESCELL **)dword_B39E04;
  }
  v1 = *v0;
  if ( *v0 )
  {
    m_numBuckets = v1->m_numBuckets;
    v3 = 0;
    if ( m_numBuckets )
    {
      m_buckets = v1->m_buckets;
      v5 = m_buckets;
      while ( !*v5 )
      {
        ++v3;
        ++v5;
        if ( v3 >= m_numBuckets )
          goto LABEL_8;
      }
      v6 = m_buckets[v3];
    }
    else
    {
LABEL_8:
      v6 = 0;
    }
    v12 = v6;
    if ( v6 )
    {
      while ( 1 )
      {
        if ( !v0 )
        {
          *(float *)&v7 = COERCE_FLOAT(FormHeapAlloc(0x28u));
          v14 = *(float *)&v7;
          v15 = 0;
          if ( *(float *)&v7 == 0.0 )
            v8 = 0;
          else
            v8 = sub_55E850(v7);
          v0 = (NiTMap_TESCELL **)v8;
          v15 = 0xFFFFFFFF;
          dword_B39E04 = (int)v8;
        }
        sub_452600(*v0, &v12, (void **)&v14, &v13);
        if ( v13 )
        {
          if ( v13->vtbl )
          {
            CompareTo = (float **)v13->vtbl->super.CompareTo;
            if ( CompareTo )
            {
              v10 = flt_B0760C;
              v14 = v10 * flt_B39E10;
              v11 = v14;
              v14 = v10 * fTreeNearDistanceBase;
              sub_7871D0(CompareTo, v14, v11);
            }
          }
        }
        if ( !v12 )
          break;
        v0 = (NiTMap_TESCELL **)dword_B39E04;
      }
    }
  }
}
