char __cdecl sub_687C30(MobileObject *a1, NiPoint3 *a2, float *a3)
{
  TESWorldSpace *CurrentWorldspace; // eax
  TESObjectCELL *v5; // eax
  TESObjectCELL *v6; // esi
  TESWorldSpace *v7; // eax
  TESObjectCELL *v8; // eax
  bool v9; // bl
  float *v10; // eax
  TeleportData v11; // [esp+14h] [ebp-34h] BYREF
  unsigned int v12; // [esp+44h] [ebp-4h]

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
        TESWorldSpace::GetCellAtPos(v7, a3);
        if ( v8 != v6 && (!v8 || sub_43E000(ModelLoaderPtr, v8)) )
          return 0;
      }
    }
  }
  if ( !a1 )
    return 0;
  v9 = 0;
  sub_68CB30(&v11);
  v12 = 0;
  sub_68CB30(&v11.yRot);
  LOBYTE(v12) = 1;
  if ( sub_686450(a1, a2, &v11, 1, 0) )
  {
    v10 = (float *)sub_6899C0((char *)&v11);
    v9 = sub_687060(a1, v10, a3, 0) == 0;
  }
  LOBYTE(v12) = 0;
  TESTexture::ClearComponentReferences(&v11.yRot);
  v12 = 0xFFFFFFFF;
  TESTexture::ClearComponentReferences(&v11);
  return v9;
}
