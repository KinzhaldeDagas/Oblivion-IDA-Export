Ni2DBuffer *__thiscall sub_70BDB0(Ni2DBuffer *this, char a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // edx

  v3 = *((_DWORD *)this + 5);
  this->__vftable = (#9279 *)&NiDepthStencilBuffer::`vftable';
  dword_B3FAB8 -= v3;
  v4 = *((_DWORD *)this + 5);
  v5 = 0;
  if ( (v4 & 0xFFFFF000) != v4 )
    v5 = (v4 & 0xFFFFF000) - v4 + 0x1000;
  dword_B3FABC -= v5;
  Ni2DBuffer::~Ni2DBuffer(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
