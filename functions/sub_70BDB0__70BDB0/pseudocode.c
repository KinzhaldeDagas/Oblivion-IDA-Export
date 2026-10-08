Ni2DBuffer *__thiscall sub_70BDB0(Ni2DBuffer *this, char a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // edx

  v3 = *((_DWORD *)this + 5); /*0x70bdb3*/
  this->__vftable = (#9279 *)&NiDepthStencilBuffer::`vftable'; /*0x70bdb6*/
  unk_B3FAB8 -= v3; /*0x70bdbc*/
  v4 = *((_DWORD *)this + 5); /*0x70bdc2*/
  v5 = 0; /*0x70bdcc*/
  if ( (v4 & 0xFFFFF000) != v4 ) /*0x70bdd0*/
    v5 = (v4 & 0xFFFFF000) - v4 + 0x1000; /*0x70bdd9*/
  unk_B3FABC -= v5; /*0x70bddb*/
  Ni2DBuffer::~Ni2DBuffer(this); /*0x70bde3*/
  if ( (a2 & 1) != 0 ) /*0x70bded*/
    FormHeapFree((unsigned int)this); /*0x70bdf0*/
  return this; /*0x70bdfa*/
}
