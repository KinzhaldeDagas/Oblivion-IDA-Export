_DWORD *__thiscall sub_7759A0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  int v5; // ecx

  *this = *a2; /*0x7759ac*/
  *(this + 1) = a2[1]; /*0x7759b1*/
  *(this + 3) = a2[3]; /*0x7759b7*/
  v3 = this + 4; /*0x7759ba*/
  *(this + 7) = 0; /*0x7759bf*/
  *(this + 5) = 0; /*0x7759c2*/
  *(this + 6) = 0; /*0x7759c5*/
  *(this + 4) = &NiTPointerList<unsigned int>::`vftable'; /*0x7759c8*/
  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 4) + 4))(this + 4); /*0x7759d5*/
  v4[2] = a2[2]; /*0x7759da*/
  v4[1] = 0; /*0x7759dd*/
  *v4 = v3[1]; /*0x7759e3*/
  v5 = v3[1]; /*0x7759e5*/
  if ( v5 ) /*0x7759ea*/
    *(_DWORD *)(v5 + 4) = v4; /*0x7759ec*/
  else
    v3[2] = v4; /*0x7759f1*/
  ++v3[3]; /*0x7759f4*/
  v3[1] = v4; /*0x7759f8*/
  *(this + 2) = sub_774EE0(a2[3]); /*0x775a07*/
  return this; /*0x775a0c*/
}
