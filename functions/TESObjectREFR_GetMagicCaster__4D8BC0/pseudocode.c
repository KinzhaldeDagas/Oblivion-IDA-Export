BSExtraData *__thiscall TESObjectREFR_GetMagicCaster(TESChildCELL *this)
{
  ExtraDataList *v2; // ebx
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // esi
  NonActorMagicCaster *v5; // eax

  v2 = (ExtraDataList *)(this + 0x11); /*0x4d8bf4*/
  ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x11), kExtraData_NonActorMagicCaster); /*0x4d8bfb*/
  v4 = (BSExtraData *)OblivionDynamicCast( /*0x4d8c06*/
                        ExtraData,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                        &NonActorMagicCaster `RTTI Type Descriptor',
                        0);
  if ( v4 ) /*0x4d8c0d*/
    return v4 + 1; /*0x4d8c0d*/
  v5 = (NonActorMagicCaster *)FormHeapAlloc(0x24u); /*0x4d8c11*/
  v4 = v5 ? (BSExtraData *)NonActorMagicCaster::NonActorMagicCaster(v5, (int)this) : 0;
  BaseExtraList_AddExtra(v2, v4); /*0x4d8c3e*/
  (*((void (__thiscall **)(TESChildCELL *, int))this->vtbl + 0x10))(this, 0x200000); /*0x4d8c4f*/
  if ( v4 ) /*0x4d8c53*/
    return v4 + 1; /*0x4d8c55*/
  else
    return 0; /*0x4d8c6b*/
}
