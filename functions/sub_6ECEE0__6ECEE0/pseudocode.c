void __thiscall sub_6ECEE0(int *this, Ni2DBuffer *a2)
{
  Ni2DBuffer *v2; // edi
  Ni2DBuffer *v4; // ebx

  v2 = a2; /*0x6ecee2*/
  sub_6CE2F0((NiTriBasedGeomData *)this, (int)a2); /*0x6ecee9*/
  NiTMap_GetAt(v2->__vftable, (int)this, &a2); /*0x6ecef6*/
  if ( *(this + 0xC) ) /*0x6ecefb*/
  {
    v4 = a2; /*0x6ecf02*/
    if ( a2[2].members.width ) /*0x6ecf06*/
    {
      NiTMap_GetAt(v2->__vftable, *(this + 0x11), &a2); /*0x6ecf17*/
      NiSmartPointer_Set__((Ni2DBuffer **)&v4[3].members.width, a2); /*0x6ecf24*/
    }
  }
}
