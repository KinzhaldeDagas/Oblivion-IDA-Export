BSShaderProperty *__thiscall sub_7ED640(char **this, int a2)
{
  BSShaderProperty *v3; // eax
  BSShaderProperty *v4; // esi

  v3 = (BSShaderProperty *)FormHeapAlloc(0x6Cu);
  v4 = 0;
  if ( v3 )
    v4 = BSShaderProperty::BSShaderProperty(v3);
  sub_7E2490(this, (int)v4, a2);
  return v4;
}
