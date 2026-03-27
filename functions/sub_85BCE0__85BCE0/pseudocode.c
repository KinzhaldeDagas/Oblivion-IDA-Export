BSShaderProperty *__thiscall sub_85BCE0(BSShaderProperty *this, int a2)
{
  BSShaderProperty *v3; // eax
  BSShaderProperty *v4; // esi

  v3 = (BSShaderProperty *)FormHeapAlloc(0x88u);
  v4 = 0;
  if ( v3 )
    v4 = sub_85BBE0(v3);
  sub_85BC40(this, (int)v4, a2);
  return v4;
}
