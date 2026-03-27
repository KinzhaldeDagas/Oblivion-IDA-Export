void __thiscall sub_70BD60(Ni2DBuffer *this, NiDX9TextureBufferData *a2)
{
  NiDX9TextureBufferData *data; // esi

  data = (NiDX9TextureBufferData *)this->members.data;
  if ( data != a2 )
  {
    if ( data )
    {
      if ( !InterlockedDecrement((volatile LONG *)&data->member) )
        data->__vftable->super.Destructor((NiRefObject *)data, 1);
    }
    this->members.data = (NiDX92DBufferData *)a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)&a2->member);
  }
}
