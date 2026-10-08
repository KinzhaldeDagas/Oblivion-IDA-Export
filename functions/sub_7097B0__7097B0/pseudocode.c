NiMaterialProperty *__thiscall sub_7097B0(char **this, int a2)
{
  NiMaterialProperty *v3; // eax
  NiMaterialProperty *v4; // esi

  v3 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x7097d7*/
  v4 = 0; /*0x7097e3*/
  if ( v3 ) /*0x7097eb*/
    v4 = NiMaterialProperty::NiMaterialProperty(v3); /*0x7097f4*/
  sub_7096A0(this, (int)v4, a2); /*0x709806*/
  return v4; /*0x70980d*/
}
