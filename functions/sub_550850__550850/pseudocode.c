// Resolve BSFaceGenMorphDataHair attached to a FaceGenHair geometry through its FaceGen model extra data.
BSFaceGenMorphDataHair *__cdecl NiGeometry_GetFaceGenHairMorphData(NiGeometry *geometry)
{
  NiObject *v1; // eax
  NiObject *v2; // esi
  NiObject *v3; // eax
  NiObject *v4; // eax

  v1 = sub_550790((int)geometry); /*0x550856*/
  v2 = v1; /*0x55085b*/
  if ( v1 && v1->__vftable[1].Unk_02(v1) && (v3 = v2->__vftable[1].Unk_02(v2), (v4 = (NiObject *)sub_550480(v3)) != 0) ) /*0x550883*/
    return (BSFaceGenMorphDataHair *)NiRTTI_Cast((BSStringT *)&stru_B39DA8, v4); /*0x55088f*/
  else
    return 0; /*0x550885*/
}
