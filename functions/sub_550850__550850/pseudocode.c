NiObject *__cdecl sub_550850(int a1)
{
  NiObject *v1; // eax
  NiObject *v2; // esi
  NiObject *v3; // eax
  NiObject *v4; // eax

  v1 = sub_550790(a1);
  v2 = v1;
  if ( v1 && v1->__vftable[1].Unk_02(v1) && (v3 = v2->__vftable[1].Unk_02(v2), (v4 = (NiObject *)sub_550480(v3)) != 0) )
    return NiRTTI_Cast(&stru_B39DA8, v4);
  else
    return 0;
}
