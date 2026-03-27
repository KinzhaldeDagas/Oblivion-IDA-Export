void __thiscall sub_66A5E0(PlayerCharacter *this)
{
  TESObjectCELL *ParentCell; // edi
  BSExtraDataVtbl *v3; // edi
  TESObjectCELL *v4; // edi
  int *v5; // eax

  if ( this->unk1F0 )
  {
    if ( TESObjectREFR_GetParentCell((TESObjectREFR *)this) )
    {
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
      if ( TESObjectCELL_IsInterior(ParentCell) )
        v3 = sub_424180(&ParentCell->members.extraData);
      else
        v3 = (BSExtraDataVtbl *)bhkWorldM;
      if ( (BSExtraDataVtbl *)sub_531F10((int *)this->unk1F0) != v3 )
      {
        v4 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
        if ( TESObjectCELL_IsInterior(v4) )
        {
          v5 = (int *)sub_424180(&v4->members.extraData);
          sub_531E90((int *)this->unk1F0, v5);
        }
        else
        {
          sub_531E90((int *)this->unk1F0, (int *)bhkWorldM);
        }
      }
    }
  }
}
