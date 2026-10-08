int __thiscall sub_6EC950(NiTriBasedGeomData *this, int a2)
{
  int result; // eax
  int v4; // ecx

  result = sub_715E40(this, a2); /*0x6ec959*/
  v4 = *(_DWORD *)&this->members.m_usTriangles; /*0x6ec95e*/
  if ( v4 ) /*0x6ec963*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x38))(v4, a2); /*0x6ec96b*/
  return result; /*0x6ec96d*/
}
