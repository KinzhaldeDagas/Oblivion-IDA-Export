BSExtraData *__thiscall TESObjectREFR_GetMagicCaster(TESChildCELL *this)
{
  ExtraDataList *v2; // ebx
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // esi
  NonActorMagicCaster *v5; // eax

  v2 = (ExtraDataList *)(this + 0x11);
  ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x11), kExtraData_NonActorMagicCaster);
  v4 = (BSExtraData *)OblivionDynamicCast(
                        ExtraData,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                        &NonActorMagicCaster `RTTI Type Descriptor',
                        0);
  if ( v4 )
    return v4 + 1;
  v5 = (NonActorMagicCaster *)FormHeapAlloc(0x24u);
  v4 = v5 ? (BSExtraData *)NonActorMagicCaster::NonActorMagicCaster(v5) : 0;
  BaseExtraList_AddExtra(v2, v4);
  (*((void (__thiscall **)(TESChildCELL *, int))this->vtbl + 0x10))(this, 0x200000);
  if ( v4 )
    return v4 + 1;
  else
    return 0;
}
