// MoonSugarEffect decode: creates native image-space screen quad as one 4-vertex NiScreenElements polygon. Coordinates are x=-1,y=1,w=2,h=-2 and UVs 0..1.
int __thiscall ImageSpaceShaderList::AssignScreenElements(NiTPointerList__BSImageSpaceShader *this)
{
  NiGeometry *v2; // edi
  NiScreenElementsData *v3; // eax
  NiScreenElementsData *v4; // eax
  NiGeometry *v5; // ebp
  NiGeometry *unk10; // edi

  v2 = (NiGeometry *)FormHeapAlloc(0xC0u); /*0x803402*/
  if ( v2 ) /*0x803415*/
  {
    v3 = (NiScreenElementsData *)FormHeapAlloc(0x70u); /*0x803419*/
    if ( v3 ) /*0x80342c*/
    {
      v4 = NiScreenElementsData::Construct(v3, 0, 0, 1u, 1, 1, 4, 1, 2, 1); /*0x803442*/
      v5 = (NiGeometry *)NiScreenElements::NiScreenElements(v2, v4); /*0x803454*/
    }
    else
    {
      v5 = (NiGeometry *)NiScreenElements::NiScreenElements(v2, 0); /*0x803466*/
    }
  }
  else
  {
    v5 = 0; /*0x80346a*/
  }
  unk10 = this->unk10; /*0x80346c*/
  if ( unk10 != v5 ) /*0x803479*/
  {
    if ( unk10 ) /*0x80347d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&unk10->member) ) /*0x803483*/
        unk10->__vftable->super.super.super.Destructor((NiRefObject *)unk10, 1); /*0x803499*/
    }
    this->unk10 = v5; /*0x80349d*/
    if ( v5 ) /*0x8034a0*/
      InterlockedIncrement((volatile LONG *)&v5->member); /*0x8034a6*/
  }
  sub_702970((NiGeometry *)this->unk10->member.geomData, 4u, 0, 0); /*0x8034bb*/
  sub_702EC0((NiGeometry *)this->unk10->member.geomData, 0, kTerrainLODQuadRayDirectionZ, 1.0, fConstant_2, flt_A53954); /*0x8034f1*/
  sub_703050((NiGeometry *)this->unk10->member.geomData); /*0x8034ff*/
  sub_702FC0((NiGeometry *)this->unk10->member.geomData, 0, 0, 0.0, 0.0, 1.0, 1.0); /*0x803527*/
  NiAVObject_InitializePropertyState((NiAVObject *)this->unk10); /*0x80352f*/
  return NiAVObject_UpdateNiAVObject((NiAVObject *)this->unk10, 0.0, 1); /*0x803544*/
}
