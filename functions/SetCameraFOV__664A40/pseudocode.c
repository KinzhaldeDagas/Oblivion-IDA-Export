// MoonSugarEffect decode: PlayerCharacter SetCameraFOV wrapper writes worldFoV, calls SetCameraFOV_0, then updates particle shader FOV data.
double __thiscall SetCameraFOV(float *this, float a2)
{
  *(this + 0x166) = a2; /*0x664a49*/
  SetCameraFOV_0((SceneGraph *)g_WorldSceneReceiverRoot, a2, 0.0); /*0x664a59*/
  UpdateParticleShaderFOVData(a2); /*0x664a66*/
  return *(this + 0x166); /*0x664a75*/
}
