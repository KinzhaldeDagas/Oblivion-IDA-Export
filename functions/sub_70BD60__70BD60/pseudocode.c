void __thiscall sub_70BD60(Ni2DBuffer *this, NiDX9TextureBufferData *a2)
{
  NiDX9TextureBufferData *data; // esi

  data = (NiDX9TextureBufferData *)this->members.data; /*0x70bd64*/
  if ( data != a2 ) /*0x70bd6e*/
  {
    if ( data ) /*0x70bd72*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&data->member) ) /*0x70bd78*/
        data->__vftable->super.Destructor((NiRefObject *)data, 1); /*0x70bd8e*/
    }
    this->members.data = (NiDX92DBufferData *)a2; /*0x70bd92*/
    if ( a2 ) /*0x70bd95*/
      InterlockedIncrement((volatile LONG *)&a2->member); /*0x70bd9b*/
  }
}
