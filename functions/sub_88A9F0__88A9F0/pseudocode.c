NiAVObject *__cdecl sub_88A9F0(Atmosphere *a1)
{
  NiAVObject *result; // eax
  NiAVObject *v2; // esi
  volatile LONG *m_spCollision; // edi
  Atmosphere *v4; // ecx

  result = Shared_GetPointerAtOffset08(a1); /*0x88a9f5*/
  v2 = result; /*0x88a9fa*/
  if ( result ) /*0x88a9fe*/
  {
    m_spCollision = (volatile LONG *)result->members.m_spCollision; /*0x88aa01*/
    if ( m_spCollision ) /*0x88aa09*/
    {
      result = (NiAVObject *)InterlockedDecrement(m_spCollision + 1); /*0x88aa0f*/
      if ( !result ) /*0x88aa17*/
        result = (NiAVObject *)(**(int (__thiscall ***)(void *, int))m_spCollision)((void *)m_spCollision, 1); /*0x88aa25*/
      v2->members.m_spCollision = 0; /*0x88aa27*/
    }
    v4 = (Atmosphere *)v2->members.m_spCollision; /*0x88aa31*/
    if ( v4 ) /*0x88aa3a*/
    {
      result = Shared_GetPointerAtOffset08(v4); /*0x88aa3c*/
      if ( result != v2 ) /*0x88aa43*/
        return (*(NiAVObject *(__thiscall **)(void *, NiAVObject *))(*(_DWORD *)v2->members.m_spCollision + 0x4C))( /*0x88aa51*/
                 v2->members.m_spCollision,
                 v2);
    }
  }
  return result; /*0x88aa53*/
}
