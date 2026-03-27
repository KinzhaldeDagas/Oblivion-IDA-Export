int __thiscall ImageSpaceShaderList::AssignScreenElements(NiTPointerList__BSImageSpaceShader *this)
{
  NiGeometry *v2; // edi
  NiScreenElementsData *v3; // eax
  NiScreenElementsData *v4; // eax
  NiGeometry *v5; // ebp
  NiGeometry *unk10; // edi

  v2 = (NiGeometry *)FormHeapAlloc(0xC0u);
  if ( v2 )
  {
    v3 = (NiScreenElementsData *)FormHeapAlloc(0x70u);
    if ( v3 )
    {
      v4 = NiScreenElementsData::Construct(v3, 0, 0, 1u, 1, 1, 4, 1, 2, 1);
      v5 = (NiGeometry *)NiScreenElements::NiScreenElements(v2, v4);
    }
    else
    {
      v5 = (NiGeometry *)NiScreenElements::NiScreenElements(v2, 0);
    }
  }
  else
  {
    v5 = 0;
  }
  unk10 = this->unk10;
  if ( unk10 != v5 )
  {
    if ( unk10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&unk10->member) )
        unk10->__vftable->super.super.super.Destructor((NiRefObject *)unk10, 1);
    }
    this->unk10 = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)&v5->member);
  }
  sub_702970((NiGeometry *)this->unk10->member.geomData, 4u, 0, 0);
  sub_702EC0((NiGeometry *)this->unk10->member.geomData, 0, flt_A30634, 1.0, fConstant_2, flt_A53954);
  sub_703050((NiGeometry *)this->unk10->member.geomData);
  sub_702FC0((NiGeometry *)this->unk10->member.geomData, 0, 0, 0.0, 0.0, 1.0, 1.0);
  NiAVObject_InitializePropertyState((NiAVObject *)this->unk10);
  return NiAVObject_UpdateNiAVObject((NiAVObject *)this->unk10, 0.0, 1);
}
