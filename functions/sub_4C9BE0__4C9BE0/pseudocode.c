signed int __cdecl sub_4C9BE0(TESObjectREFR *a1)
{
  signed int v2; // edi
  double v3; // st7
  double v4; // st7
  float v6; // [esp+Ch] [ebp+4h]
  float v7; // [esp+Ch] [ebp+4h]

  v2 = 0;
  if ( a1 )
  {
    if ( TESObjectREFR_GetParentCell(a1) )
    {
      if ( (TESObjectREFR_GetParentCell(a1)->members.flags0 & 1) == 0 )
      {
        v3 = *a1->vtbl->GetPos(a1);
        unknown_libname_14(dbl_A37650, v3);
        v6 = v3;
        v2 = (int)abs32(Double_To_SInt32(v6)) > 0x800;
        v4 = a1->vtbl->GetPos(a1)[1];
        unknown_libname_14(dbl_A37650, v4);
        v7 = v4;
        if ( (int)abs32(Double_To_SInt32(v7)) > 0x800 )
          v2 += 2;
      }
    }
  }
  return v2;
}
