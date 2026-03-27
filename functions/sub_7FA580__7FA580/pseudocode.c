char __thiscall sub_7FA580(unsigned __int16 *this)
{
  NiGeometry *v2; // edi
  NiScreenElementsData *v3; // eax
  NiScreenElementsData *v4; // eax
  NiAVObject *v5; // ebp
  NiAVObject *v6; // edi
  char v8; // [esp+27h] [ebp-15h]

  v8 = sub_8025F0((BSShader *)this);
  v2 = (NiGeometry *)FormHeapAlloc(0xC0u);
  if ( v2 )
  {
    v3 = (NiScreenElementsData *)FormHeapAlloc(0x70u);
    if ( v3 )
    {
      v4 = NiScreenElementsData::Construct(v3, 0, 0, 1u, 1, 1, 4, 1, 2, 1);
      v5 = NiScreenElements::NiScreenElements(v2, v4);
    }
    else
    {
      v5 = NiScreenElements::NiScreenElements(v2, 0);
    }
  }
  else
  {
    v5 = 0;
  }
  v6 = *((NiAVObject **)this + 0x2F);
  if ( v6 != v5 )
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) )
        v6->vtbl->super.super.Destructor((NiRefObject *)v6, 1);
    }
    *((_DWORD *)this + 0x2F) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)&v5->members);
  }
  sub_702970(*(NiGeometry **)(*((_DWORD *)this + 0x2F) + 0xB4), 4u, 0, 0);
  sub_702EC0(*(NiGeometry **)(*((_DWORD *)this + 0x2F) + 0xB4), 0, flt_A30634, 1.0, fConstant_2, flt_A53954);
  sub_703050(*(NiGeometry **)(*((_DWORD *)this + 0x2F) + 0xB4));
  sub_702FC0(*(NiGeometry **)(*((_DWORD *)this + 0x2F) + 0xB4), 0, 0, 0.0, 0.0, 1.0, 1.0);
  NiAVObject_InitializePropertyState(*((NiAVObject **)this + 0x2F));
  NiAVObject_UpdateNiAVObject(*((NiAVObject **)this + 0x2F), 0.0, 1);
  return v8;
}
