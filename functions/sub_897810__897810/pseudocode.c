Ni2DBuffer *__thiscall sub_897810(Atmosphere *this, _DWORD *a2)
{
  NiAVObject *v3; // eax
  Ni2DBuffer *v4; // eax

  sub_711CB0(this, a2);
  v3 = sub_452A60(this);
  if ( v3 )
    v3->members.m_flags = v3->members.m_flags & 0xFFE9 | 6;
  v4 = (Ni2DBuffer *)sub_7124A0(a2);
  return sub_897670((Ni2DBuffer **)this, v4);
}
