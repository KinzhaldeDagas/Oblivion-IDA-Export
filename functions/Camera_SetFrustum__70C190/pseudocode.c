char __thiscall Camera_SetFrustum(NiCamera *this, int a2)
{
  double v3; // st7
  char result; // al
  float a2b; // [esp+4h] [ebp+4h]
  float a2a; // [esp+4h] [ebp+4h]

  a2b = *(float *)(a2 + 0x10);
  v3 = a2b;
  this->members.Frustum.Near = a2b;
  a2a = *(float *)(a2 + 0x14) / this->members.MaxFarNearRatio;
  if ( a2a > v3 )
    this->members.Frustum.Near = a2a;
  if ( this->members.MinNearPlaneDist > (double)this->members.Frustum.Near )
    this->members.Frustum.Near = this->members.MinNearPlaneDist;
  this->members.Frustum.Left = *(float *)a2;
  this->members.Frustum.Right = *(float *)(a2 + 4);
  this->members.Frustum.Top = *(float *)(a2 + 8);
  this->members.Frustum.Bottom = *(float *)(a2 + 0xC);
  this->members.Frustum.Far = *(float *)(a2 + 0x14);
  result = *(_BYTE *)(a2 + 0x18);
  this->members.Frustum.Ortho = result;
  return result;
}
