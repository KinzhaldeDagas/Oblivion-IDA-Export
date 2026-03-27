void __thiscall BoltShaderProperty::~BoltShaderProperty(BoltShaderProperty *this)
{
  *(_DWORD *)this = &BoltShaderProperty::`vftable';
  FormHeapFree(*((_DWORD *)this + 0x1B));
  if ( dword_B468E8-- == 1 )
    sub_7F3870();
  BSShaderProperty::~BSShaderProperty((BSShaderProperty *)this);
}
