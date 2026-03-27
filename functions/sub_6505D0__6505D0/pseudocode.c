char __cdecl sub_6505D0(TESObjectREFR *a1, TESObjectREFR *a2)
{
  TESForm::FormFlags flags; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  TESFurniture *v6; // eax
  TESFurniture *v7; // edi

  if ( a1 )
  {
    flags = a1->member.super.flags;
    if ( (flags & 0x20) == 0 && (flags & 0x4000) == 0 && (flags & 0x800) == 0 )
    {
      if ( !a2 )
        return 0;
      if ( sub_446C30(&stru_B3BA9C, a1) )
        return 0;
      if ( !sub_4D74B0(a1) )
        return 0;
      if ( !sub_4DB9A0(a1) )
        return 0;
      if ( TESObjectREFR_GetOwner(a1) && !TESOBjectREFR_IsOwnedBy(a1, a2, 1) )
        return 0;
      sub_4D8AF0((TESObjectCELL **)a1);
      v4 = v3;
      sub_4D8AF0((TESObjectCELL **)a2);
      if ( v4 != v5 )
        return 0;
      v6 = (TESFurniture *)a1->vtbl->GetBaseForm(a1);
      v7 = v6;
      if ( !byte_B3BA80 )
        goto LABEL_21;
      if ( sub_4AE590(v6) )
      {
LABEL_16:
        BSSimpleList_PushFront(&stru_B3BA9C, (int)a1);
        return 0;
      }
      if ( !byte_B3BA80 )
      {
LABEL_21:
        if ( sub_4AE5A0(v7) )
          goto LABEL_16;
      }
      return 0;
    }
  }
  return 0;
}
