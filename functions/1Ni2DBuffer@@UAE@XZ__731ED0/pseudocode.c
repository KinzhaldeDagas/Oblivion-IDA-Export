void __thiscall Ni2DBuffer::~Ni2DBuffer(Ni2DBuffer *this)
{
  NiDX92DBufferData *data; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiDX92DBufferData *v4; // esi

  this->__vftable = (#9279 *)&Ni2DBuffer::`vftable';
  data = this->members.data;
  v3 = InterlockedDecrement;
  if ( data )
  {
    if ( !v3((volatile LONG *)&data->member) )
      data->__vftable->super.Destructor((NiRefObject *)data, 1);
    this->members.data = 0;
  }
  v4 = this->members.data;
  if ( v4 )
  {
    if ( !v3((volatile LONG *)&v4->member) )
      v4->__vftable->super.Destructor((NiRefObject *)v4, 1);
  }
  NiRefObject_destr(this);
}
