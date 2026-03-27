double __thiscall Actor_GetAcrobaticsFrac100(Actor *this)
{
  return (float)((double)this->vtbl->GetActorValue(this, kActorVal_Acrobatics) / fCostant_100);
}
