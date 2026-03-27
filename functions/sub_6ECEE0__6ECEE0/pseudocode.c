void __thiscall sub_6ECEE0(int *this, Ni2DBuffer *a2)
{
  Ni2DBuffer *v2; // edi
  Ni2DBuffer *v4; // ebx

  v2 = a2;
  sub_6CE2F0(this, (int)a2);
  NiTMap_GetAt(v2->__vftable, (int)this, &a2);
  if ( *(this + 0xC) )
  {
    v4 = a2;
    if ( a2[2].members.width )
    {
      NiTMap_GetAt(v2->__vftable, *(this + 0x11), &a2);
      NiSmartPointer_Set__((Ni2DBuffer **)&v4[3].members.width, a2);
    }
  }
}
