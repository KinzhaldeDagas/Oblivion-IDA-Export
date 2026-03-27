Data *__thiscall sub_664320(PlayerCharacter *this)
{
  Actor *horseOrRider; // ecx
  PlayerCharacter *v3; // eax
  UInt32 v4; // ecx
  float *pos; // eax
  TESObjectCELL *v6; // eax
  TESObjectCELL *ParentCell; // eax
  Data *result; // eax

  horseOrRider = this->super.super.horseOrRider;
  v3 = this;
  if ( horseOrRider )
    v3 = (PlayerCharacter *)horseOrRider;
  v4 = LODWORD(v3->super.super.super.super.pos[0]);
  pos = v3->super.super.super.super.pos;
  this->unk720 = v4;
  this->unk724 = (UInt32)pos[1];
  this->unk728 = (UInt32)pos[2];
  if ( TESObjectREFR_GetParentCell((TESObjectREFR *)this)
    && (v6 = TESObjectREFR_GetParentCell((TESObjectREFR *)this), TESObjectCELL_GetWorldSpace(v6)) )
  {
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
    result = (Data *)TESObjectCELL_GetWorldSpace(ParentCell);
    this->unk72C = (UInt32)result;
  }
  else
  {
    result = (Data *)TESObjectREFR_GetParentCell((TESObjectREFR *)this);
    this->unk72C = (UInt32)result;
  }
  return result;
}
