NiTexturingProperty *__thiscall sub_7062F0(char **this, int a2)
{
  NiTexturingProperty *v3; // eax
  NiTexturingProperty *v4; // esi

  v3 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
  v4 = 0;
  if ( v3 )
    v4 = NiTexturingProperty::NiTexturingProperty(v3);
  sub_705860(this, (int)v4, a2);
  return v4;
}
