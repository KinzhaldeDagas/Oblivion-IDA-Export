bool (__thiscall *__cdecl sub_536F20(TESChildCELL *a1))(BSExtraData *this, BSExtraData *other)
{
  TESObjectCELL *DwordAtOffset40; // eax
  ExtraDataList *v2; // esi
  BSExtraDataVtbl *v3; // eax

  if ( !a1 ) /*0x536f29*/
    return 0; /*0x536f60*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x536f2c*/
  v2 = (ExtraDataList *)DwordAtOffset40; /*0x536f31*/
  if ( DwordAtOffset40
    && (!TESObjectCELL_IsInterior(DwordAtOffset40)
      ? (v3 = (BSExtraDataVtbl *)MEMORY[0xB35C24])
      : (v3 = sub_424180(v2 + 2)),
        v3) )
  {
    return v3[4].CompareTo; /*0x536f55*/
  }
  else
  {
    return 0; /*0x536f5c*/
  }
}
