bool __thiscall sub_8A0420(NiTriBasedGeomData *this, int a2)
{
  bool v3; // bl
  int v4; // ebp
  bool v5; // bl
  int v6; // edi

  v3 = sub_89D6F0(this, a2); /*0x8a042f*/
  if ( v3 ) /*0x8a0433*/
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x88))(a2); /*0x8a0442*/
    v5 = ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable[1].super.super.PostLoad)(this) == v4 && v3; /*0x8a0457*/
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x8C))(a2); /*0x8a0465*/
    return ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable[1].super.super.FindNodes)(this) == v6 && v5; /*0x8a0476*/
  }
  return v3; /*0x8a0479*/
}
