BSExtraData *__thiscall TESObjectREFR_GetMagicTarget(TESChildCELL *this)
{
  TESForm *v2; // eax
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // edi
  NonActorMagicTarget *v5; // eax

  v2 = (*((TESForm *(__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this); /*0x4d8cae*/
  if ( OblivionDynamicCast(
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESMagicTargetForm `RTTI Type Descriptor',
         0)
    && ((ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x11), kExtraData_Seed|kExtraData_Havok),
         (v4 = (BSExtraData *)OblivionDynamicCast(
                                ExtraData,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                                &NonActorMagicTarget `RTTI Type Descriptor',
                                0)) != 0)
     || ((v5 = (NonActorMagicTarget *)FormHeapAlloc(0x20u)) == 0
       ? (v4 = 0)
       : (v4 = (BSExtraData *)NonActorMagicTarget_constr(v5, (TESObjectREFR *)this)),
         BaseExtraList_AddExtra((ExtraDataList *)(this + 0x11), v4),
         (*((void (__thiscall **)(TESChildCELL *, int))this->vtbl + 0x10))(this, 0x200000),
         v4)) )                                 // Verified TESObjectREFR_GetMagicTarget lazily creates ExtraData type 0x3A, constructs NonActorMagicTarget with this reference, attaches it to the ExtraDataList, marks the reference modified, and returns the embedded MagicTarget at outer-object +0x0C.
  {
    return v4 + 1; /*0x4d8d3e*/
  }
  else
  {
    return 0; /*0x4d8d54*/
  }
}
