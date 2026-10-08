BSShaderProperty *__thiscall sub_7F30B0(BSShaderProperty *this, void *cloneProcess)
{
  BoltShaderProperty *v3; // eax
  BSShaderProperty *v4; // esi

  v3 = (BoltShaderProperty *)FormHeapAlloc(0x19Cu); /*0x7f30da*/
  v4 = 0; /*0x7f30e6*/
  if ( v3 ) /*0x7f30ee*/
    v4 = (BSShaderProperty *)BoltShaderProperty::BoltShaderProperty(v3); /*0x7f30f7*/
  BSShaderProperty_CopyCloneMembers(this, v4, cloneProcess); /*0x7f3109*/
  return v4; /*0x7f3110*/
}
