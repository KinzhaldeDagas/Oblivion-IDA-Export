void __thiscall AnimSequenceSingle::~AnimSequenceSingle(AnimSequenceSingle *this)
{
  BSAnimGroupSequence *sequence; // eax
  BSAnimGroupSequence *v3; // esi
  char *m_data; // esi
  const char *v5; // [esp-8h] [ebp-30h]
  BSStringT v6; // [esp+14h] [ebp-14h] BYREF
  int v7; // [esp+24h] [ebp-4h]

  this->vtbl = &AnimSequenceSingle::`vftable'; /*0x47178c*/
  sequence = this->sequence; /*0x471792*/
  v7 = 0; /*0x471799*/
  if ( sequence ) /*0x47179d*/
  {
    v6.m_data = 0; /*0x47179f*/
    v6.m_dataLen = 0; /*0x4717a3*/
    v6.m_bufLen = 0; /*0x4717a8*/
    v5 = *((const char **)sequence + 2); /*0x4717b1*/
    LOBYTE(v7) = 1; /*0x4717b6*/
    BSStringT_Set(&v6, v5, 0); /*0x4717bb*/
    v3 = this->sequence; /*0x4717c0*/
    if ( !InterlockedDecrement((volatile LONG *)v3 + 1) ) /*0x4717c7*/
    {
      if ( v3 ) /*0x4717d3*/
        (**(void (__thiscall ***)(BSAnimGroupSequence *, int))v3)(v3, 1); /*0x4717dd*/
    }
    m_data = v6.m_data; /*0x4717df*/
    ModelLoader_ReleaseModelPath(MEMORY[0xB33A1C], (int)v6.m_data, 1); /*0x4717ec*/
    FormHeapFree((unsigned int)m_data); /*0x4717f2*/
  }
  this->vtbl = &AnimSequenceBase::`vftable'; /*0x4717fa*/
}
