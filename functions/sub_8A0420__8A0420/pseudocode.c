bool __thiscall sub_8A0420(NiTriBasedGeomData *this, int a2)
{
  bool v3; // bl
  int v4; // ebp
  bool v5; // bl
  int v6; // edi

  v3 = sub_89D6F0(this, a2);
  if ( v3 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x88))(a2);
    v5 = ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable[1].super.super.PostLoad)(this) == v4 && v3;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x8C))(a2);
    return ((int (__thiscall *)(NiTriBasedGeomData *))this->__vftable[1].super.super.FindNodes)(this) == v6 && v5;
  }
  return v3;
}
