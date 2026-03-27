BSShaderPPLightingProperty::TangentSpaceData *__thiscall BSShaderPPLightingProperty::TangentSpaceData::TangentSpaceData(
        BSShaderPPLightingProperty::TangentSpaceData *this,
        char a2)
{
  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *((_BYTE *)this + 8) = a2;
  *(_DWORD *)this = &BSShaderPPLightingProperty::TangentSpaceData::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  return this;
}
