double __thiscall SetCameraFOV(float *this, float a2)
{
  *(this + 0x166) = a2;
  SetCameraFOV_0(g_worldScenegraph, a2, 0.0);
  UpdateParticleShaderFOVData(a2);
  return *(this + 0x166);
}
