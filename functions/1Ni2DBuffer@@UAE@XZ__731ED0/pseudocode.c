void __thiscall Ni2DBuffer::~Ni2DBuffer(Ni2DBuffer *this)
{
  NiDX92DBufferData *data; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiDX92DBufferData *v4; // esi

  this->__vftable = (#9279 *)&Ni2DBuffer::`vftable'; /*0x731efa*/
  data = this->members.data; /*0x731f00*/
  v3 = InterlockedDecrement; /*0x731f05*/
  if ( data ) /*0x731f13*/
  {
    if ( !v3((volatile LONG *)&data->member) ) /*0x731f19*/
      data->__vftable->super.Destructor((NiRefObject *)data, 1); /*0x731f2b*/
    this->members.data = 0; /*0x731f2d*/
  }
  v4 = this->members.data; /*0x731f34*/
  if ( v4 ) /*0x731f3e*/
  {
    if ( !v3((volatile LONG *)&v4->member) ) /*0x731f44*/
      v4->__vftable->super.Destructor((NiRefObject *)v4, 1); /*0x731f56*/
  }
  NiRefObject_destr(this); /*0x731f62*/
}
