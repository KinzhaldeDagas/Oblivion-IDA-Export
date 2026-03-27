BoltShaderProperty *__thiscall sub_7F30B0(char **this, int a2)
{
  BoltShaderProperty *v3; // eax
  BoltShaderProperty *v4; // esi

  v3 = (BoltShaderProperty *)FormHeapAlloc(0x19Cu);
  v4 = 0;
  if ( v3 )
    v4 = BoltShaderProperty::BoltShaderProperty(v3);
  sub_7E2490(this, (int)v4, a2);
  return v4;
}
