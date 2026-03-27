bhkWorldRayCastData *__thiscall bhkWorldRayCastData::Init(bhkWorldRayCastData *this)
{
  this->WorldRayCastInput.EnableShapeCollectionFilter = 0;
  this->WorldRayCastInput.FilterInfo = 0;
  this->WorldRayCastOutput.HitFraction = 1.0;
  this->WorldRayCastOutput.RootCollidable = 0;
  this->BroadPhaseAabbCache = 0;
  this->RayHitCollector1 = 0;
  this->RayHitCollector2 = 0;
  this->unk60 = stru_BA7A40;
  return this;
}
