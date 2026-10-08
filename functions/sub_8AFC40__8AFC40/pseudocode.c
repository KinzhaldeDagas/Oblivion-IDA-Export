UInt32 (__thiscall *__cdecl sub_8AFC40(int *a1))(NiObject *)
{
  int *v1; // eax
  int v2; // eax
  NiObject *v3; // eax
  NiObject *v4; // eax
  NiObjectVtbl *vftable; // eax

  v1 = (int *)a1[3]; /*0x8afc44*/
  if ( !v1 ) /*0x8afc49*/
    v1 = a1; /*0x8afc4b*/
  if ( !v1 ) /*0x8afc52*/
    return 0; /*0x8afc52*/
  v2 = *v1; /*0x8afc54*/
  v3 = v2 ? *(NiObject **)(v2 + 8) : 0;
  v4 = NiRTTI_Cast((BSStringT *)&stru_BA7F9C, v3); /*0x8afc67*/
  if ( !v4 ) /*0x8afc71*/
    return 0; /*0x8afc83*/
  vftable = v4[1].__vftable; /*0x8afc73*/
  if ( vftable ) /*0x8afc78*/
    return vftable->Unk_03; /*0x8afc7a*/
  else
    return 0; /*0x8afc7f*/
}
