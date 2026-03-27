BSShaderLightingProperty *__thiscall BSShaderLightingProperty::BSShaderLightingProperty(BSShaderLightingProperty *this)
{
  BSShaderProperty::BSShaderProperty((BSShaderProperty *)this);
  *(_DWORD *)this = &BSShaderLightingProperty::`vftable';
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((_DWORD *)this + 0x1B) = &NiTPointerList<ShadowSceneLight *>::`vftable';
  *((_DWORD *)this + 0x23) = 0;
  *((_DWORD *)this + 0x21) = 0;
  *((_DWORD *)this + 0x22) = 0;
  *((_DWORD *)this + 0x20) = &NiTPointerList<DECAL_DATA *>::`vftable';
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x6C));
  *((_DWORD *)this + 0x1F) = 0;
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x80));
  *((float *)this + 0x25) = 1.0;
  *((_DWORD *)this + 0x24) = 0;
  *((_DWORD *)this + 0x26) = 0;
  return this;
}
