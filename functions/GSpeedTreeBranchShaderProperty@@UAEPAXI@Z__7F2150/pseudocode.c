SpeedTreeBranchShaderProperty *__thiscall SpeedTreeBranchShaderProperty::`scalar deleting destructor'(
        SpeedTreeBranchShaderProperty *this,
        char a2)
{
  *(_DWORD *)this = &SpeedTreeBranchShaderProperty::`vftable';
  SpeedTreeShaderPPLightingProperty::~SpeedTreeShaderPPLightingProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
