NiTexturingProperty *__thiscall sub_7062F0(char **this, int a2)
{
  NiTexturingProperty *v3; // eax
  NiTexturingProperty *v4; // esi

  v3 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x706317*/
  v4 = 0; /*0x706323*/
  if ( v3 ) /*0x70632b*/
    v4 = NiTexturingProperty::NiTexturingProperty(v3); /*0x706334*/
  sub_705860(this, (int)v4, a2); /*0x706346*/
  return v4; /*0x70634d*/
}
