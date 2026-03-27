SpeedTreeShaderPPLightingProperty *__thiscall sub_7F2180(_WORD *this, int a2)
{
  SpeedTreeShaderPPLightingProperty *v3; // esi
  int v4; // eax

  v3 = (SpeedTreeShaderPPLightingProperty *)FormHeapAlloc(0xF4u);
  if ( v3 )
  {
    v4 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 0xA0))(this);
    SpeedTreeShaderPPLightingProperty::SpeedTreeShaderPPLightingProperty(v3, v4);
    *(_DWORD *)v3 = &SpeedTreeBranchShaderProperty::`vftable';
  }
  else
  {
    v3 = 0;
  }
  sub_7D7AD0(this, (int)v3, a2);
  return v3;
}
