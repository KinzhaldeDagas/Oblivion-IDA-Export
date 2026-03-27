Ni2DBuffer *__thiscall sub_7D5ED0(Ni2DBuffer **this)
{
  Ni2DBuffer **v2; // esi
  NiGeometry *v3; // eax
  NiAVObject *v4; // eax
  Ni2DBuffer *result; // eax

  v2 = this + 0x52;
  if ( !*(this + 0x52) )
  {
    v3 = (NiGeometry *)FormHeapAlloc(0xC0u);
    if ( v3 )
      v4 = NiTriShape_NiTriShape(v3, 0);
    else
      v4 = 0;
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4);
    NiObjectNET_SetName((NiObjectNET *)*v2, "fence");
  }
  sub_749800(this + 0x39, (int *)v2);
  result = *(this + 0x3A);
  *(this + 0x51) = result;
  return result;
}
