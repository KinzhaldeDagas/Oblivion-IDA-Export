// Returns Actor rotation X as the native aim-pitch value used by projectile launch, impact, input, dialogue-camera, and magic-projectile paths.
float __thiscall Actor_GetAimPitch(Actor *this)
{
  return this->members.super.super.rot.x; /*0x4a9723*/
}
