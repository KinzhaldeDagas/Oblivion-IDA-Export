__m128 *__thiscall sub_8A3D30(_DWORD *this, __m128 *a2)
{
  int v3; // esi
  int v4; // ecx
  __m128 v6; // [esp+1Ch] [ebp-70h] BYREF
  __m128 v7; // [esp+2Ch] [ebp-60h] BYREF
  __m128 v8[4]; // [esp+3Ch] [ebp-50h] BYREF

  (*(void (__thiscall **)(_DWORD *, __m128 *))(*this + 0xAC))(this, v8); /*0x8a3d5a*/
  v3 = *(this + 2); /*0x8a3d5c*/
  if ( !v3 || v3 == 0xFFFFFFEC ) /*0x8a3d68*/
    v4 = 0; /*0x8a3d6e*/
  else
    v4 = *(_DWORD *)(v3 + 0x14); /*0x8a3d6a*/
  if ( v4 ) /*0x8a3d76*/
    return (*(__m128 *(__stdcall **)(__m128 *, float, __m128 *))(*(_DWORD *)v4 + 0xC))(v8, flt_A37080, a2); /*0x8a3d89*/
  v7.m128_f32[0] = flt_A57CB0; /*0x8a3da8*/
  v7.m128_f32[1] = v7.m128_f32[0]; /*0x8a3dad*/
  v7.m128_f32[2] = v7.m128_f32[0]; /*0x8a3db2*/
  v7.m128_f32[3] = 0.0; /*0x8a3dba*/
  v6.m128_f32[0] = flt_A37080; /*0x8a3dc4*/
  v6.m128_f32[1] = v6.m128_f32[0]; /*0x8a3dc8*/
  v6.m128_f32[2] = v6.m128_f32[0]; /*0x8a3dcc*/
  v6.m128_f32[3] = 0.0; /*0x8a3dd0*/
  hkTransform_TransformPosition(a2, v8, &v7); /*0x8a3dd4*/
  return hkTransform_TransformPosition(a2 + 1, v8, &v6); /*0x8a3d8b*/
}
