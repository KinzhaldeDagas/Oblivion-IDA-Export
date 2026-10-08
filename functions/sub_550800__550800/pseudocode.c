NiObject *__cdecl sub_550800(int a1)
{
  NiObject *v1; // eax
  NiObject *v2; // esi
  NiObject *v3; // eax
  NiObject *v4; // eax

  v1 = sub_550790(a1); /*0x550806*/
  v2 = v1; /*0x55080b*/
  if ( v1 && v1->__vftable[1].Unk_02(v1) && (v3 = v2->__vftable[1].Unk_02(v2), (v4 = (NiObject *)sub_550480(v3)) != 0) ) /*0x550833*/
    return NiRTTI_Cast((BSStringT *)&stru_B39DA0, v4); /*0x55083f*/
  else
    return 0; /*0x550835*/
}
