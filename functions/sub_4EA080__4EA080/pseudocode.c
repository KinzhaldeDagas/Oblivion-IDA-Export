char __thiscall sub_4EA080(NiTMap_TESCELL *this, _DWORD **a2)
{
  NiTMap_Entry_TESCELL *v3; // eax
  UInt32 m_numBuckets; // edx
  UInt32 v5; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v7; // ecx
  _DWORD **v8; // esi
  NiTMap_Entry_TESCELL *v10; // [esp+Ch] [ebp-8h] BYREF
  void *v11; // [esp+10h] [ebp-4h] BYREF

  if ( (_BYTE)a2 )
  {
    NiAVObject_InitializePropertyState((NiAVObject *)TES->LandLOD);
    NiNode_UpdateDynamicEffectState(TES->LandLOD);
    LOBYTE(v3) = NiAVObject_UpdateNiAVObject((NiAVObject *)TES->LandLOD, 0.0, 0);
  }
  else
  {
    m_numBuckets = this->m_numBuckets;
    v5 = 0;
    if ( m_numBuckets )
    {
      m_buckets = this->m_buckets;
      v7 = m_buckets;
      while ( !*v7 )
      {
        ++v5;
        ++v7;
        if ( v5 >= m_numBuckets )
          goto LABEL_7;
      }
      v3 = m_buckets[v5];
    }
    else
    {
LABEL_7:
      v3 = 0;
    }
    v10 = v3;
    while ( v10 )
    {
      a2 = 0;
      LOBYTE(v3) = sub_452600(this, &v10, &v11, (TESObjectCELL **)&a2);
      v8 = a2;
      if ( a2 )
      {
        sub_4ECAE0(*a2, (volatile LONG *)TES->LandLOD);
        sub_4ECAE0(*v8, (volatile LONG *)TES->LandLOD);
        LOBYTE(v3) = sub_4ECAE0(*v8, (volatile LONG *)TES->LandLOD);
      }
    }
  }
  return (char)v3;
}
