bool __thiscall sub_760D70(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  bool result; // al
  Ni2DBuffer *data; // esi
  Ni2DBuffer **v4; // ecx

  result = 0; /*0x760d74*/
  if ( a2 ) /*0x760d78*/
  {
    data = (Ni2DBuffer *)a2->members.data; /*0x760d7b*/
    result = *(this + 0x1E) != data; /*0x760d83*/
    *(this + 0x1E) = data; /*0x760d85*/
    v4 = this + 0x1B; /*0x760d88*/
    if ( *v4 != a2 ) /*0x760d8e*/
    {
      NiSmartPointer_Set__(v4, a2); /*0x760d91*/
      return 1; /*0x760d96*/
    }
  }
  return result; /*0x760d98*/
}
