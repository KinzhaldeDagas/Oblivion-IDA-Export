// MoonSugarEffect decode: SetCameraFOV_0 rebuilds SceneGraph camera frustum, max far/near ratio, camera LODAdjust, and leaves persistent camera state. Avoid for per-frame Moon Sugar wobble.
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

  v3 = a2; /*0x411160*/
  if ( LOBYTE(a3) || v3 != this->cameraFOV ) /*0x411180*/
  {
    this->cameraFOV = a2; /*0x411186*/
    v15 = v3 * 0.01745329238474369 * 0.5; /*0x41119e*/
    NiFrustum::SetOrtho(&v14, 0); /*0x4111a2*/
    v14.Far = GetFarPlane(this); /*0x4111ae*/
    camera = this->camera; /*0x4111b8*/
    v14.Near = NearDistance; /*0x4111be*/
    v10 = v14.Far / NearDistance; /*0x4111ca*/
    camera->members.MaxFarNearRatio = v10; /*0x4111d2*/
    v6 = (double)nHeight / (double)nWidth; /*0x4111e5*/
    if ( this->IsMinFarPlaneDistance ) /*0x4111de*/
    {
      v11 = v6; /*0x4111ed*/
      v16 = tan(v15); /*0x4111fa*/
      v7 = v16; /*0x4111fe*/
      v17 = -v16; /*0x411206*/
      v14.Left = v17; /*0x41120e*/
      v14.Right = v7; /*0x411214*/
      v14.Bottom = v17 * v11; /*0x411222*/
      v8 = v11 * v7; /*0x411226*/
    }
    else
    {
      v13 = v6; /*0x41122a*/
      v12 = 0.75 / v6; /*0x411234*/
      v18 = tan(v15); /*0x411241*/
      v9 = v18; /*0x411245*/
      v19 = -v18; /*0x41124d*/
      v14.Left = v19 * v12; /*0x411261*/
      v14.Right = v9 * v12; /*0x411269*/
      v14.Bottom = v19 * v13 * v12; /*0x41127b*/
      v8 = v12 * (v13 * v9); /*0x411283*/
    }
    v14.Top = v8; /*0x411289*/
    Camera_SetFrustum(this->camera, (int)&v14); /*0x411294*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)this->camera, 0.0, 1); /*0x4112a7*/
    v20 = a2 / g_DefaulFOV; /*0x4112bd*/
    this->camera->members.LODAdjust = v20; /*0x4112c5*/
  }
}
