bool __thiscall sub_760D70(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  bool result; // al
  NiDX92DBufferData *data; // esi
  Ni2DBuffer **v4; // ecx

  result = 0;
  if ( a2 )
  {
    data = a2->members.data;
    result = *(this + 0x1E) != (Ni2DBuffer *)data;
    *(this + 0x1E) = (Ni2DBuffer *)data;
    v4 = this + 0x1B;
    if ( *v4 != a2 )
    {
      NiSmartPointer_Set__(v4, a2);
      return 1;
    }
  }
  return result;
}
