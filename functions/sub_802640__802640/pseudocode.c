int __stdcall sub_802640(NiNode *a1)
{
  BSShaderProperty *v1; // eax
  BSShaderProperty *v2; // esi

  v1 = (BSShaderProperty *)FormHeapAlloc(0x6Cu); /*0x802665*/
  v2 = 0; /*0x802671*/
  if ( v1 ) /*0x802679*/
    v2 = BSShaderProperty::BSShaderProperty(v1); /*0x802682*/
  sub_405680(a1, v2); /*0x802693*/
  return (*((int (__thiscall **)(BSShaderProperty *, NiNode *))v2->vtbl + 0x16))(v2, a1); /*0x8026a2*/
}
