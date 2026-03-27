SpeedTreeShaderPPLightingProperty *__thiscall sub_7F2070(void *this)
{
  SpeedTreeShaderPPLightingProperty *v2; // esi
  SpeedTreeShaderPPLightingProperty *result; // eax
  int v4; // eax

  v2 = (SpeedTreeShaderPPLightingProperty *)FormHeapAlloc(0xF4u);
  result = 0;
  if ( v2 )
  {
    v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xA0))(this);
    SpeedTreeShaderPPLightingProperty::SpeedTreeShaderPPLightingProperty(v2, v4);
    *(_DWORD *)v2 = &SpeedTreeBranchShaderProperty::`vftable';
    return v2;
  }
  return result;
}
