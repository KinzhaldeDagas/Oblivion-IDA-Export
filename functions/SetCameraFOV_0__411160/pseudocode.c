void __thiscall SetCameraFOV_0(SceneGraph *this, float a2, float a3)
{
  double v3; // st7
  NiCamera *camera; // eax
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  float v10; // [esp+Ch] [ebp-24h]
  float v11; // [esp+Ch] [ebp-24h]
  float v12; // [esp+Ch] [ebp-24h]
  float v13; // [esp+10h] [ebp-20h]
  NiFrustum v14; // [esp+14h] [ebp-1Ch] BYREF
  float v15; // [esp+38h] [ebp+8h]
  float v16; // [esp+38h] [ebp+8h]
  float v17; // [esp+38h] [ebp+8h]
  float v18; // [esp+38h] [ebp+8h]
  float v19; // [esp+38h] [ebp+8h]
  float v20; // [esp+38h] [ebp+8h]

  v3 = a2;
  if ( LOBYTE(a3) || v3 != this->cameraFOV )
  {
    this->cameraFOV = a2;
    v15 = v3 * 0.01745329238474369 * 0.5;
    NiFrustum::SetOrtho(&v14, 0);
    v14.Far = GetFarPlane(this);
    camera = this->camera;
    v14.Near = NearDistance;
    v10 = v14.Far / NearDistance;
    camera->members.MaxFarNearRatio = v10;
    v6 = (double)nHeight / (double)nWidth;
    if ( this->IsMinFarPlaneDistance )
    {
      v11 = v6;
      v16 = tan(v15);
      v7 = v16;
      v17 = -v16;
      v14.Left = v17;
      v14.Right = v7;
      v14.Bottom = v17 * v11;
      v8 = v11 * v7;
    }
    else
    {
      v13 = v6;
      v12 = 0.75 / v6;
      v18 = tan(v15);
      v9 = v18;
      v19 = -v18;
      v14.Left = v19 * v12;
      v14.Right = v9 * v12;
      v14.Bottom = v19 * v13 * v12;
      v8 = v12 * (v13 * v9);
    }
    v14.Top = v8;
    Camera_SetFrustum(this->camera, (int)&v14);
    NiAVObject_UpdateNiAVObject((NiAVObject *)this->camera, 0.0, 1);
    v20 = a2 / g_DefaulFOV;
    this->camera->members.LODAdjust = v20;
  }
}
