void __thiscall BSShaderPPLightingProperty::TangentSpaceData::~TangentSpaceData(
        BSShaderPPLightingProperty::TangentSpaceData *this)
{
  bool v2; // zf

  v2 = *((_BYTE *)this + 8) == 0;
  *(_DWORD *)this = &BSShaderPPLightingProperty::TangentSpaceData::`vftable';
  if ( !v2 )
  {
    if ( *((_DWORD *)this + 3) )
      FormHeapFree(*((_DWORD *)this + 3));
  }
  v2 = *((_BYTE *)this + 8) == 0;
  *((_DWORD *)this + 3) = 0;
  if ( !v2 )
  {
    if ( *((_DWORD *)this + 4) )
      FormHeapFree(*((_DWORD *)this + 4));
  }
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
