bool __cdecl sub_687AA0(MobileObject *a1, NiPoint3 *a2, NiPoint3 *a3)
{
  TESWorldSpace *CurrentWorldspace; // eax
  TESObjectCELL *v5; // eax
  TESObjectCELL *v6; // esi
  TESWorldSpace *v7; // eax
  TESObjectCELL *v8; // eax
  bool v9; // bl
  float *v10; // eax
  float *v11; // [esp-8h] [ebp-50h]
  TeleportData v12; // [esp+14h] [ebp-34h] BYREF
  unsigned int v13; // [esp+44h] [ebp-4h]

  if ( byte_B3C089 )
    return 1;
  if ( ModelLoaderPtr )
  {
    if ( !TES->currentInteriorCell )
    {
      if ( TES::GetCurrentWorldspace(TES) )
      {
        CurrentWorldspace = TES::GetCurrentWorldspace(TES);
        TESWorldSpace::GetCellAtPos(CurrentWorldspace, &a2->x);
        v6 = v5;
        if ( !v5 )
          return 0;
        if ( sub_43E000(ModelLoaderPtr, v5) )
          return 0;
        v7 = TES::GetCurrentWorldspace(TES);
        TESWorldSpace::GetCellAtPos(v7, &a3->x);
        if ( v8 != v6 && (!v8 || sub_43E000(ModelLoaderPtr, v8)) )
          return 0;
      }
    }
  }
  if ( !a1 )
    return 0;
  v9 = 0;
  sub_68CB30(&v12.yRot);
  v13 = 0;
  sub_68CB30(&v12);
  LOBYTE(v13) = 1;
  if ( sub_686450(a1, a2, (TeleportData *)&v12.yRot, 1, 0) )
  {
    if ( sub_686450(a1, a3, &v12, 1, 0) )
    {
      v11 = (float *)sub_6899C0((char *)&v12);
      v10 = (float *)sub_6899C0((char *)&v12.yRot);
      v9 = sub_687060(a1, v10, v11, 0) == 0;
    }
  }
  LOBYTE(v13) = 0;
  TESTexture::ClearComponentReferences(&v12);
  v13 = 0xFFFFFFFF;
  TESTexture::ClearComponentReferences(&v12.yRot);
  return v9;
}
