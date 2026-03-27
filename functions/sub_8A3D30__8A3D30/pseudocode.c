__m128 *__thiscall sub_8A3D30(_DWORD *this, __m128 *a2)
{
  int v3; // esi
  int v4; // ecx
  __m128 v6; // [esp+1Ch] [ebp-70h] BYREF
  __m128 v7; // [esp+2Ch] [ebp-60h] BYREF
  __m128 v8[4]; // [esp+3Ch] [ebp-50h] BYREF

  (*(void (__thiscall **)(_DWORD *, __m128 *))(*this + 0xAC))(this, v8);
  v3 = *(this + 2);
  if ( !v3 || v3 == 0xFFFFFFEC )
    v4 = 0;
  else
    v4 = *(_DWORD *)(v3 + 0x14);
  if ( v4 )
    return (*(__m128 *(__stdcall **)(__m128 *, float, __m128 *))(*(_DWORD *)v4 + 0xC))(v8, flt_A37080, a2);
  v7.m128_f32[0] = flt_A57CB0;
  v7.m128_f32[1] = v7.m128_f32[0];
  v7.m128_f32[2] = v7.m128_f32[0];
  v7.m128_f32[3] = 0.0;
  v6.m128_f32[0] = flt_A37080;
  v6.m128_f32[1] = v6.m128_f32[0];
  v6.m128_f32[2] = v6.m128_f32[0];
  v6.m128_f32[3] = 0.0;
  sub_88FCC0(a2, v8, &v7);
  return sub_88FCC0(a2 + 1, v8, &v6);
}
