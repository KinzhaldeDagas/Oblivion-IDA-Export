LONG __thiscall sub_88E880(Ni2DBuffer **this, int a2)
{
  Ni2DBuffer *v3; // ebx
  Ni2DBuffer *v4; // ebp
  NiAVObject *PointerAtOffset08; // eax
  LONG result; // eax

  v3 = *(Ni2DBuffer **)(a2 + 0x10); /*0x88e8ab*/
  if ( v3 ) /*0x88e8b4*/
    InterlockedIncrement((volatile LONG *)&v3->members); /*0x88e8ba*/
  sub_897670((Ni2DBuffer **)a2, 0); /*0x88e8cc*/
  sub_897670(this, v3); /*0x88e8d4*/
  v4 = *this; /*0x88e8dc*/
  *(this + 6) = *(Ni2DBuffer **)(a2 + 0x18); /*0x88e8e8*/
  *(this + 5) = *(Ni2DBuffer **)(a2 + 0x14); /*0x88e8f6*/
  *(this + 8) = *(Ni2DBuffer **)(a2 + 0x20); /*0x88e8fc*/
  PointerAtOffset08 = Shared_GetPointerAtOffset08((Atmosphere *)a2); /*0x88e8ff*/
  result = ((int (__thiscall *)(Ni2DBuffer **, NiAVObject *))v4[3].members.data)(this, PointerAtOffset08); /*0x88e90a*/
  if ( v3 ) /*0x88e916*/
  {
    result = InterlockedDecrement((volatile LONG *)&v3->members); /*0x88e91c*/
    if ( !result ) /*0x88e924*/
      return (*(LONG (__thiscall **)(Ni2DBuffer *, int))v3->__vftable)(v3, 1); /*0x88e92e*/
  }
  return result; /*0x88e930*/
}
