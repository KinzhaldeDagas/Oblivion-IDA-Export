// TES4 authoritative: bhkWorldRayCastData::Init. Raycast input From at +0x00, To at +0x10, enable/filter at +0x20/+0x24, output hit fraction at +0x44, root collidable at +0x50, extra collector pointers at +0x70/+0x74/+0x78.
bhkWorldRayCastData *__thiscall bhkWorldRayCastData::Init(bhkWorldRayCastData *this)
{
  this->WorldRayCastInput.EnableShapeCollectionFilter = 0; /*0x4f5ea6*/
  this->WorldRayCastInput.FilterInfo = 0; /*0x4f5ea9*/
  this->WorldRayCastOutput.HitFraction = 1.0; /*0x4f5eac*/
  this->WorldRayCastOutput.RootCollidable = 0; /*0x4f5eaf*/
  this->BroadPhaseAabbCache = 0; /*0x4f5eb2*/
  this->RayHitCollector1 = 0; /*0x4f5eb5*/
  this->RayHitCollector2 = 0; /*0x4f5eb8*/
  this->unk60 = unk_BA7A40;                     // bhkWorldRayCastData must be 16-byte aligned: Init stores sentinel vector at +0x60 with movaps. /*0x4f5ec2*/
  return this; /*0x4f5ec6*/
}
