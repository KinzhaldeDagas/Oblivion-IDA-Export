void __thiscall sub_4112E0(SceneGraph *this)
{
  NiViewport *p_ViewPort; // eax

  p_ViewPort = &this->camera->members.ViewPort; /*0x4112ee*/
  p_ViewPort->l = 0.0; /*0x4112f8*/
  p_ViewPort->r = 1.0; /*0x411308*/
  p_ViewPort->t = 1.0; /*0x41130f*/
  p_ViewPort->b = 0.0; /*0x41131a*/
  SetCameraFOV_0(this, this->cameraFOV, COERCE_FLOAT(1)); /*0x411327*/
}
