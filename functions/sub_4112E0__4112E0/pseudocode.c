void __thiscall sub_4112E0(SceneGraph *this)
{
  float *p_l; // eax

  p_l = &this->camera->members.ViewPort.l;
  *p_l = 0.0;
  p_l[1] = 1.0;
  p_l[2] = 1.0;
  p_l[3] = 0.0;
  SetCameraFOV_0(this, this->cameraFOV, COERCE_FLOAT(1));
}
