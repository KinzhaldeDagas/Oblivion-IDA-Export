signed int __cdecl sub_4C9BE0(TESObjectREFR *a1)
{
  signed int v2; // edi
  double v3; // st7
  double v4; // st7
  float v6; // [esp+Ch] [ebp+4h]
  float v7; // [esp+Ch] [ebp+4h]

  v2 = 0; /*0x4c9be6*/
  if ( a1 ) /*0x4c9bea*/
  {
    if ( Shared_GetDwordAtOffset40(a1) ) /*0x4c9bf2*/
    {
      if ( (*(_BYTE *)(Shared_GetDwordAtOffset40(a1) + 0x24) & 1) == 0 ) /*0x4c9c06*/
      {
        v3 = *a1->vtbl->GetPos(a1); /*0x4c9c14*/
        unknown_libname_14(dbl_A37650, v3); /*0x4c9c1c*/
        v6 = v3; /*0x4c9c21*/
        v2 = (int)abs32(Double_To_SInt32(v6)) > 0x800; /*0x4c9c3a*/
        v4 = a1->vtbl->GetPos(a1)[1]; /*0x4c9c4b*/
        unknown_libname_14(dbl_A37650, v4); /*0x4c9c54*/
        v7 = v4; /*0x4c9c59*/
        if ( (int)abs32(Double_To_SInt32(v7)) > 0x800 ) /*0x4c9c70*/
          v2 += 2; /*0x4c9c72*/
      }
    }
  }
  return v2; /*0x4c9c77*/
}
