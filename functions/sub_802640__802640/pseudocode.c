int __stdcall sub_802640(NiNode *a1)
{
  BSShaderProperty *v1; // eax
  BSShaderProperty *v2; // esi

  v1 = (BSShaderProperty *)FormHeapAlloc(0x6Cu);
  v2 = 0;
  if ( v1 )
    v2 = BSShaderProperty::BSShaderProperty(v1);
  sub_405680(a1, v2);
  return (*((int (__thiscall **)(BSShaderProperty *, NiNode *))v2->vtbl + 0x16))(v2, a1);
}
