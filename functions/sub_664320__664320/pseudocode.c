TESWorldSpace *__thiscall sub_664320(PlayerCharacter *this)
{
  Actor *horseOrRider; // ecx
  PlayerCharacter *v3; // eax
  UInt32 v4; // ecx
  float *pos; // eax
  TESObjectCELL *v6; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  TESWorldSpace *result; // eax

  horseOrRider = this->super.super.horseOrRider; /*0x664323*/
  v3 = this; /*0x66432b*/
  if ( horseOrRider ) /*0x66432d*/
    v3 = (PlayerCharacter *)horseOrRider; /*0x66432f*/
  v4 = LODWORD(v3->super.super.super.super.pos[0]); /*0x664331*/
  pos = v3->super.super.super.super.pos; /*0x664334*/
  this->unk720 = v4; /*0x664337*/
  this->unk724 = (UInt32)pos[1]; /*0x664340*/
  this->unk728 = (UInt32)pos[2]; /*0x66434b*/
  if ( Shared_GetDwordAtOffset40(this) /*0x664363*/
    && (v6 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this), TESObjectCELL_GetWorldSpace(v6)) )
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x66436e*/
    result = TESObjectCELL_GetWorldSpace(DwordAtOffset40); /*0x664375*/
    this->unk72C = (UInt32)result; /*0x66437a*/
  }
  else
  {
    result = (TESWorldSpace *)Shared_GetDwordAtOffset40(this); /*0x664384*/
    this->unk72C = (UInt32)result; /*0x664389*/
  }
  return result; /*0x664380*/
}
