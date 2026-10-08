// Oblivion CFrondEngine destructor invoked by the final CSpeedTreeRT ownership-release path before FormHeapFree. Deletes the profile spline and destroys/frees the +0x40 SFrondTexture, +0x18 guide-LOD, and +0x08 SFrondGuide vectors. RT 4.1 corroborates the explicit profile deletion; the executable establishes the implicit member-vector destruction order.
void __thiscall OB_CFrondEngine_dtor_010201A0(OB_CFrondEngine_010201A0 *this)
{
  OB_stBezierSpline_010201A0 *profileSpline; // esi
  OB_SFrondTexture_010201A0 *begin; // eax
  OB_stVector_SFrondGuide_010201A0 *v4; // eax
  OB_SFrondGuide_010201A0 *v5; // eax

  profileSpline = (OB_stBezierSpline_010201A0 *)this->profileSpline; /*0x7a150a*/
  if ( profileSpline ) /*0x7a1519*/
  {
    OB_StBezierSpline_Dtor_010201A0(profileSpline); /*0x7a151d*/
    FormHeapFree((unsigned int)profileSpline); /*0x7a1523*/
  }
  this->profileSpline = 0; /*0x7a152e*/
  begin = (OB_SFrondTexture_010201A0 *)this->frondTextureVectorWrapper.begin; /*0x7a1531*/
  if ( begin ) /*0x7a1536*/
  {
    OB_SFrondTexture_DestroyRange_010201A0(begin, (OB_SFrondTexture_010201A0 *)this->frondTextureVectorWrapper.end); /*0x7a1543*/
    FormHeapFree((unsigned int)this->frondTextureVectorWrapper.begin); /*0x7a154c*/
  }
  this->frondTextureVectorWrapper.begin = 0; /*0x7a1554*/
  this->frondTextureVectorWrapper.end = 0; /*0x7a1557*/
  this->frondTextureVectorWrapper.capacityEnd = 0; /*0x7a155a*/
  v4 = this->guideLodVectorWrapper.begin; /*0x7a155d*/
  if ( v4 ) /*0x7a1565*/
  {
    OB_stVector_stVector_SFrondGuide_DestroyRange_010201A0(v4, this->guideLodVectorWrapper.end);// CFrondEngine destructor releases CFrondEngine+0x18 as vector<st_vector<SFrondGuide>>, deep-destroying every level and every contained compact guide. /*0x7a1572*/
    FormHeapFree((unsigned int)this->guideLodVectorWrapper.begin); /*0x7a157b*/
  }
  this->guideLodVectorWrapper.begin = 0; /*0x7a1583*/
  this->guideLodVectorWrapper.end = 0; /*0x7a1586*/
  this->guideLodVectorWrapper.capacityEnd = 0; /*0x7a1589*/
  v5 = this->guideVectorWrapper.begin; /*0x7a158c*/
  if ( v5 ) /*0x7a1594*/
  {
    OB_SFrondGuide_DestroyRange_010201A0(v5, this->guideVectorWrapper.end); /*0x7a15a1*/
    FormHeapFree((unsigned int)this->guideVectorWrapper.begin); /*0x7a15aa*/
  }
  this->guideVectorWrapper.begin = 0; /*0x7a15b2*/
  this->guideVectorWrapper.end = 0; /*0x7a15b5*/
  this->guideVectorWrapper.capacityEnd = 0; /*0x7a15b8*/
}
