Ni2DBuffer *__thiscall sub_897810(Atmosphere *this, _DWORD *a2)
{
  NiAVObject *PointerAtOffset08; // eax
  Ni2DBuffer *v4; // eax

  sub_711CB0(this, a2); /*0x897819*/
  PointerAtOffset08 = Shared_GetPointerAtOffset08(this); /*0x897820*/
  if ( PointerAtOffset08 ) /*0x897827*/
    PointerAtOffset08->members.m_flags = PointerAtOffset08->members.m_flags & 0xFFE9 | 6; /*0x897836*/
  v4 = (Ni2DBuffer *)sub_7124A0(a2); /*0x89783c*/
  return sub_897670((Ni2DBuffer **)this, v4); /*0x897849*/
}
