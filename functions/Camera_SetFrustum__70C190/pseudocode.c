char __thiscall Camera_SetFrustum(NiCamera *this, int a2)
{
  double v3; // st7
  char result; // al
  float a2b; // [esp+4h] [ebp+4h]
  float a2a; // [esp+4h] [ebp+4h]

  a2b = *(float *)(a2 + 0x10); /*0x70c197*/
  v3 = a2b; /*0x70c19b*/
  this->members.Frustum.Near = a2b; /*0x70c19f*/
  a2a = *(float *)(a2 + 0x14) / this->members.MaxFarNearRatio; /*0x70c1ae*/
  if ( a2a > v3 ) /*0x70c1bf*/
    this->members.Frustum.Near = a2a; /*0x70c1c1*/
  if ( this->members.MinNearPlaneDist > (double)this->members.Frustum.Near ) /*0x70c1de*/
    this->members.Frustum.Near = this->members.MinNearPlaneDist; /*0x70c1e6*/
  this->members.Frustum.Left = *(float *)a2; /*0x70c1ee*/
  this->members.Frustum.Right = *(float *)(a2 + 4); /*0x70c1f7*/
  this->members.Frustum.Top = *(float *)(a2 + 8); /*0x70c200*/
  this->members.Frustum.Bottom = *(float *)(a2 + 0xC); /*0x70c209*/
  this->members.Frustum.Far = *(float *)(a2 + 0x14); /*0x70c212*/
  result = *(_BYTE *)(a2 + 0x18); /*0x70c218*/
  this->members.Frustum.Ortho = result; /*0x70c21b*/
  return result; /*0x70c221*/
}
