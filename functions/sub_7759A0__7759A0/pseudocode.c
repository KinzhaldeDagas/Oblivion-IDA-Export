_DWORD *__thiscall sub_7759A0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  int v5; // ecx

  *this = *a2;
  *(this + 1) = a2[1];
  *(this + 3) = a2[3];
  v3 = this + 4;
  *(this + 7) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = &NiTPointerList<unsigned int>::`vftable';
  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 4) + 4))(this + 4);
  v4[2] = a2[2];
  v4[1] = 0;
  *v4 = v3[1];
  v5 = v3[1];
  if ( v5 )
    *(_DWORD *)(v5 + 4) = v4;
  else
    v3[2] = v4;
  ++v3[3];
  v3[1] = v4;
  *(this + 2) = sub_774EE0(a2[3]);
  return this;
}
