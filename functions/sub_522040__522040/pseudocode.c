bool __thiscall sub_522040(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // edi
  FaceGenHeadParameters *v6; // eax
  int v7; // esi
  FaceGenHeadParameters *SexFaceGenDeltaParameters; // [esp-Ch] [ebp-14h]

  v3 = (TESForm *)OblivionDynamicCast( /*0x522057*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESNPC `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x52205c*/
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) ) /*0x52206f*/
    return 1; /*0x522066*/
  if ( memcmp((char *)this + 0xEC, &v4[9].member.modlist.next, 0x15u) ) /*0x522094*/
    return 1; /*0x522094*/
  if ( *((TESForm::ModReferenceList **)this + 0x41) != v4[0xA].member.modlist.next ) /*0x522117*/
    return 1; /*0x522117*/
  if ( *((TESFormVtbl **)this + 0x72) != v4[0x13].vtbl ) /*0x522125*/
    return 1; /*0x522125*/
  if ( *(float *)&v4[0x13].member.type != *((float *)this + 0x73) ) /*0x52213a*/
    return 1; /*0x52213a*/
  if ( *((_DWORD *)this + 0x74) != v4[0x13].member.flags ) /*0x522148*/
    return 1; /*0x522148*/
  if ( *((_DWORD *)this + 0x7A) != v4[0x14].member.flags ) /*0x522156*/
    return 1; /*0x522156*/
  SexFaceGenDeltaParameters = TESNPC_GetActiveFaceGenDeltaParameters((TESNPC *)v4);// CORRECTION: both TESNPC comparison operands resolve to inline, non-null vampirism-selected delta banks through GetAViBase(0x45). Zero selects +0x108; nonzero +0x168. Earlier sex-specific comment was wrong. This form-comparison path is not the player LoadGame gate itself. /*0x52215f*/
  v6 = TESNPC_GetActiveFaceGenDeltaParameters((TESNPC *)this); /*0x522162*/
  if ( FaceGenHeadParameters_Differ(v6, SexFaceGenDeltaParameters) || *((_WORD *)this + 0xF0) != LOWORD(v4[0x14].vtbl) ) /*0x522182*/
    return 1; /*0x522187*/
  v7 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].ClearModified)(v4); /*0x52219b*/
  return ((int (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this) != v7; /*0x522065*/
}
