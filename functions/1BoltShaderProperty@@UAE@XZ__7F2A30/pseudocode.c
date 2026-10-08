void __thiscall BoltShaderProperty::~BoltShaderProperty(BoltShaderProperty *this)
{
  *(_DWORD *)this = &BoltShaderProperty::`vftable'; /*0x7f2a58*/
  FormHeapFree(*((_DWORD *)this + 0x1B)); /*0x7f2a6a*/
  if ( unk_B468E8-- == 1 ) /*0x7f2a72*/
    sub_7F3870(); /*0x7f2a7b*/
  BSShaderProperty::~BSShaderProperty((BSShaderProperty *)this); /*0x7f2a8a*/
}
