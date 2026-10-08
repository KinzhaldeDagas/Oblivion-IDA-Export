int __thiscall sub_6CE2F0(NiTriBasedGeomData *this, int a2)
{
  int result; // eax
  int v4; // ecx

  result = sub_715E40(this, a2); /*0x6ce2f9*/
  v4 = *(_DWORD *)&this->members.super.m_bVertexStreamLocked; /*0x6ce2fe*/
  if ( v4 ) /*0x6ce303*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x38))(v4, a2); /*0x6ce30b*/
  return result; /*0x6ce30d*/
}
