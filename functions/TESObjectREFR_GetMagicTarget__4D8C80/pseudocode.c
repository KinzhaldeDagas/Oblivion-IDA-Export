BSExtraData *__thiscall TESObjectREFR_GetMagicTarget(TESChildCELL *this)
{
  TESForm *v2; // eax
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // edi
  BSExtraData *v5; // eax

  v2 = (*((TESForm *(__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this);
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
     || (!FormHeapAlloc(0x20u) ? (v4 = 0) : (NonActorMagicTarget_constr(this), v4 = v5),
         BaseExtraList_AddExtra((ExtraDataList *)(this + 0x11), v4),
         (*((void (__thiscall **)(TESChildCELL *, int))this->vtbl + 0x10))(this, 0x200000),
         v4)) )
  {
    return v4 + 1;
  }
  else
  {
    return 0;
  }
}
