// CSpeedTreeRT::FreeProjectedShadowData. Oblivion destroys CSpeedTreeRT+0x50 projected-shadow storage and clears branch/frond scratch vectors. This is a distinct post-Compute cleanup, not DeleteTransientData.
void __thiscall CSpeedTreeRT__FreeProjectedShadowData(OB_CSpeedTreeRT_010201A0 *this)
{
  unsigned int *projectedShadow; // esi
  char *v3; // ebx
  int branchGeometry; // eax
  _DWORD *v5; // esi
  char *v6; // ebp
  int frondGeometry; // edi
  _DWORD *v8; // esi
  char *v9; // edi
  char *v10; // ebx
  int v11[2]; // [esp+Ch] [ebp-8h] BYREF

  projectedShadow = (unsigned int *)this->projectedShadow; /*0x789038*/
  v3 = 0; /*0x78903b*/
  if ( projectedShadow ) /*0x78903f*/
  {
    if ( projectedShadow[0xF] >= 0x10 ) /*0x789045*/
      FormHeapFree(projectedShadow[0xA]); /*0x78904b*/
    projectedShadow[0xF] = 0xF; /*0x789053*/
    projectedShadow[0xE] = 0; /*0x78905a*/
    *((_BYTE *)projectedShadow + 0x28) = 0; /*0x78905e*/
    FormHeapFree((unsigned int)projectedShadow); /*0x789061*/
    this->projectedShadow = 0; /*0x789069*/
  }
  branchGeometry = this->branchGeometry; /*0x78906c*/
  if ( branchGeometry ) /*0x789071*/
  {
    v5 = (_DWORD *)(branchGeometry + 0xE8); /*0x789073*/
    v6 = *(char **)(branchGeometry + 0xF0); /*0x78907a*/
    if ( *(_DWORD *)(branchGeometry + 0xEC) > (unsigned int)v6 ) /*0x789080*/
      _invalid_parameter_noinfo(0, (int)this, (int)v5); /*0x789082*/
    v3 = (char *)v5[1]; /*0x789087*/
    if ( (unsigned int)v3 > v5[2] ) /*0x78908d*/
      _invalid_parameter_noinfo((int)v3, (int)this, (int)v5); /*0x78908f*/
    OB_stVector4_EraseRange_010201A0(v5, (int)v3, v11, (int)v5, v3, (int)v5, v6); /*0x78909f*/
  }
  frondGeometry = this->frondGeometry; /*0x7890a5*/
  if ( frondGeometry ) /*0x7890aa*/
  {
    v8 = (_DWORD *)(frondGeometry + 0xE8); /*0x7890ac*/
    v9 = *(char **)(frondGeometry + 0xF0); /*0x7890b2*/
    if ( v8[1] > (unsigned int)v9 ) /*0x7890b8*/
      _invalid_parameter_noinfo((int)v3, (int)v9, (int)v8); /*0x7890ba*/
    v10 = (char *)v8[1]; /*0x7890bf*/
    if ( (unsigned int)v10 > v8[2] ) /*0x7890c5*/
      _invalid_parameter_noinfo((int)v10, (int)v9, (int)v8); /*0x7890c7*/
    OB_stVector4_EraseRange_010201A0(v8, (int)v10, v11, (int)v8, v10, (int)v8, v9); /*0x7890d7*/
  }
}
