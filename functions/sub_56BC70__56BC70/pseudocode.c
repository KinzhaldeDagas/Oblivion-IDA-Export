// Verified BSTempEffect lifetime update: adds deltaSeconds to elapsed +0x10 and returns duration +0x08 >= elapsed. Equality remains alive for that update.
bool __thiscall BSTempEffect_Update(BSTempEffect *self, float deltaSeconds)
{
  float deltaSecondsa; // [esp+4h] [ebp+4h]

  deltaSecondsa = deltaSeconds + self->elapsedSeconds;// BloodOnDeath decode 2026-05-30: BSTempEffect_Update adds deltaSeconds to elapsed at +0x10 and persists while elapsed <= duration at +0x08. Longer decal lifetime directly means blood is left behind longer. /*0x56bc77*/
  self->elapsedSeconds = deltaSecondsa; /*0x56bc7f*/
  return self->durationSeconds >= (double)deltaSecondsa; /*0x56bc90*/
}
