// Pass329 decode: this camera-bound helper only fits near/far to the supplied source sphere (projected center +/- radius) and updates the camera. It does not recompute or overwrite ShadowSceneLight::Render's lateral FOV, so D1's remaining large-static silhouette cannot be assigned to a second lateral framing stage.
char __thiscall sub_70C230(float *this, float *a2)
{
  double v4; // st7
  double v5; // st7
  void (*v7)(void); // edx
  float v8; // [esp+4h] [ebp-1Ch]
  float v9; // [esp+4h] [ebp-1Ch]
  float v10; // [esp+8h] [ebp-18h]
  float v11; // [esp+Ch] [ebp-14h]
  float v12; // [esp+10h] [ebp-10h]
  float v13; // [esp+24h] [ebp+4h]
  float v14; // [esp+24h] [ebp+4h]

  v10 = *a2 - *(this + 0x22); /*0x70c257*/
  v11 = a2[1] - *(this + 0x23); /*0x70c264*/
  v12 = a2[2] - *(this + 0x24); /*0x70c271*/
  v13 = v10 * *(this + 0x19) + v11 * *(this + 0x1C) + v12 * *(this + 0x1F); /*0x70c291*/
  v4 = v13; /*0x70c295*/
  v14 = v13 - a2[3];                            // Pass328: NiCamera bound fitting derives near distance as projected center depth minus the supplied BSphere radius. /*0x70c29e*/
  v8 = v4 + a2[3];                              // Pass328: NiCamera bound fitting derives far distance as projected center depth plus the supplied BSphere radius; a temporary conservative radius also keeps native camera culling conservative. /*0x70c2a5*/
  v5 = v8; /*0x70c2b3*/
  if ( v8 <= 0.0 ) /*0x70c2b8*/
    return 0; /*0x70c2bc*/
  v9 = v5 / *(this + 0x43); /*0x70c2cd*/
  if ( v9 > (double)v14 ) /*0x70c2e2*/
    v14 = v5 / *(this + 0x43); /*0x70c2e4*/
  if ( *(this + 0x42) > (double)v14 ) /*0x70c2fd*/
    v14 = *(this + 0x42); /*0x70c305*/
  v7 = *(void (**)(void))(*(_DWORD *)this + 0x74); /*0x70c30f*/
  *(this + 0x3F) = v14; /*0x70c312*/
  *(this + 0x40) = v5; /*0x70c318*/
  v7(); /*0x70c31e*/
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 0x78))(this); /*0x70c327*/
  return 1; /*0x70c2be*/
}
