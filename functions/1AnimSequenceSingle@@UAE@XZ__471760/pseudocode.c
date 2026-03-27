void __thiscall AnimSequenceSingle::~AnimSequenceSingle(AnimSequenceSingle *this)
{
  int v2; // eax
  int v3; // esi
  char *m_data; // esi
  const char *v5; // [esp-8h] [ebp-30h]
  BSStringT v6; // [esp+14h] [ebp-14h] BYREF
  int v7; // [esp+24h] [ebp-4h]

  *(_DWORD *)this = &AnimSequenceSingle::`vftable';
  v2 = *((_DWORD *)this + 1);
  v7 = 0;
  if ( v2 )
  {
    v6.m_data = 0;
    v6.m_dataLen = 0;
    v6.m_bufLen = 0;
    v5 = *(const char **)(v2 + 8);
    LOBYTE(v7) = 1;
    BSStringT_Set(&v6, v5, 0);
    v3 = *((_DWORD *)this + 1);
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
    {
      if ( v3 )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    m_data = v6.m_data;
    sub_438540(ModelLoaderPtr, (int)v6.m_data, 1);
    FormHeapFree((unsigned int)m_data);
  }
  *(_DWORD *)this = &AnimSequenceBase::`vftable';
}
