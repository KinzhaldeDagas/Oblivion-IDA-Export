BSShaderProperty *__thiscall BSShaderProperty_CreateClone(BSShaderProperty *this, void *cloneProcess)
{
  BSShaderProperty *v3; // eax
  BSShaderProperty *v4; // esi

  v3 = (BSShaderProperty *)FormHeapAlloc(0x6Cu); /*0x7ed667*/
  v4 = 0; /*0x7ed673*/
  if ( v3 ) /*0x7ed67b*/
    v4 = BSShaderProperty::BSShaderProperty(v3); /*0x7ed684*/
  BSShaderProperty_CopyCloneMembers(this, v4, cloneProcess); /*0x7ed696*/
  return v4; /*0x7ed69d*/
}
