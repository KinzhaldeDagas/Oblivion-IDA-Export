NiAVObject *__cdecl sub_88A9F0(Atmosphere *a1)
{
  NiAVObject *result; // eax
  NiAVObject *v2; // esi
  volatile LONG *m_spCollision; // edi
  Atmosphere *v4; // ecx

  result = sub_452A60(a1);
  v2 = result;
  if ( result )
  {
    m_spCollision = (volatile LONG *)result->members.m_spCollision;
    if ( m_spCollision )
    {
      result = (NiAVObject *)InterlockedDecrement(m_spCollision + 1);
      if ( !result )
        result = (NiAVObject *)(**(int (__thiscall ***)(void *, int))m_spCollision)((void *)m_spCollision, 1);
      v2->members.m_spCollision = 0;
    }
    v4 = (Atmosphere *)v2->members.m_spCollision;
    if ( v4 )
    {
      result = sub_452A60(v4);
      if ( result != v2 )
        return (NiAVObject *)(*(int (__thiscall **)(void *, NiAVObject *))(*(_DWORD *)v2->members.m_spCollision + 0x4C))(
                               v2->members.m_spCollision,
                               v2);
    }
  }
  return result;
}
