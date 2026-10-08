char __thiscall sub_7FA580(unsigned __int16 *this)
{
  NiGeometry *v2; // edi
  NiScreenElementsData *v3; // eax
  NiScreenElementsData *v4; // eax
  NiAVObject *v5; // ebp
  NiAVObject *v6; // edi
  char v8; // [esp+27h] [ebp-15h]

  v8 = sub_8025F0((BSShader *)this); /*0x7fa5b2*/
  v2 = (NiGeometry *)FormHeapAlloc(0xC0u); /*0x7fa5bb*/
  if ( v2 ) /*0x7fa5ce*/
  {
    v3 = (NiScreenElementsData *)FormHeapAlloc(0x70u); /*0x7fa5d2*/
    if ( v3 ) /*0x7fa5e5*/
    {
      v4 = NiScreenElementsData::Construct(v3, 0, 0, 1u, 1, 1, 4, 1, 2, 1); /*0x7fa5fb*/
      v5 = NiScreenElements::NiScreenElements(v2, v4); /*0x7fa60d*/
    }
    else
    {
      v5 = NiScreenElements::NiScreenElements(v2, 0); /*0x7fa61f*/
    }
  }
  else
  {
    v5 = 0; /*0x7fa623*/
  }
  v6 = *((NiAVObject **)this + 0x2F); /*0x7fa625*/
  if ( v6 != v5 ) /*0x7fa635*/
  {
    if ( v6 ) /*0x7fa639*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) ) /*0x7fa63f*/
        v6->vtbl->super.super.Destructor((NiRefObject *)v6, 1); /*0x7fa655*/
    }
    *((_DWORD *)this + 0x2F) = v5; /*0x7fa659*/
    if ( v5 ) /*0x7fa65f*/
      InterlockedIncrement((volatile LONG *)&v5->members); /*0x7fa665*/
  }
  sub_702970(*(NiGeometry **)(*((_DWORD *)this + 0x2F) + 0xB4), 4u, 0, 0); /*0x7fa67d*/
  sub_702EC0( /*0x7fa6b6*/
    *(NiGeometry **)(*((_DWORD *)this + 0x2F) + 0xB4),
    0,
    kTerrainLODQuadRayDirectionZ,
    1.0,
    fConstant_2,
    flt_A53954);
  sub_703050(*(NiGeometry **)(*((_DWORD *)this + 0x2F) + 0xB4)); /*0x7fa6c7*/
  sub_702FC0(*(NiGeometry **)(*((_DWORD *)this + 0x2F) + 0xB4), 0, 0, 0.0, 0.0, 1.0, 1.0); /*0x7fa6f2*/
  NiAVObject_InitializePropertyState(*((NiAVObject **)this + 0x2F)); /*0x7fa6fd*/
  NiAVObject_UpdateNiAVObject(*((NiAVObject **)this + 0x2F), 0.0, 1); /*0x7fa710*/
  return v8; /*0x7fa719*/
}
