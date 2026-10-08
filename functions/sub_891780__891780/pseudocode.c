// TES4 authoritative: recomputes two controller capsule probe/end points at proxy+0x380 and proxy+0x390 from Havok object transform+0x70, capsule height +0x3A4, radius +0x3A0, and vertical base offset +0x248.
void __thiscall bhkCharacterProxy_UpdateCapsuleProbePoints(int this)
{
  _DWORD *v2; // ecx
  int HavokObject; // eax
  unsigned int v4; // edi
  __m128 *v5; // ebx
  float *v6; // eax
  __m128 v7; // [esp+10h] [ebp-20h] BYREF

  if ( (*(_BYTE *)(this + 0x1F4) & 1) != 0 ) /*0x8917a0*/
  {
    v2 = *(_DWORD **)(this + 8); /*0x8917a6*/
    if ( v2 ) /*0x8917ab*/
      HavokObject = bhkCollisionWrapper_GetHavokObject(v2); /*0x8917ad*/
    else
      HavokObject = 0; /*0x8917b4*/
    v4 = 0; /*0x8917b6*/
    v5 = (__m128 *)(HavokObject + 0x70); /*0x8917b8*/
    do /*0x891831*/
    {
      v7.m128_f32[0] = 0.0; /*0x8917c5*/
      v7.m128_f32[1] = *(float *)(this + 0x3A4) * dbl_A2FAA0 - *(float *)(this + 0x3A0);// Local endpoint axial coordinate = capsuleHeight*0.5 - radius. /*0x8917db*/
      v7.m128_f32[2] = *(float *)(this + 0x3A0); /*0x8917e5*/
      v7.m128_f32[3] = 0.0; /*0x8917e9*/
      if ( v4 == 1 ) /*0x8917ed*/
        v7.m128_f32[1] = v7.m128_f32[1] * dbl_A3D360;// Second endpoint mirrors the axial coordinate by multiplying by -1.0. /*0x8917f9*/
      hkTransform_TransformPosition((__m128 *)(this + 0x10 * (v4 + 0x38)), v5, &v7);// Transform local capsule endpoint into controller/Havok world space. /*0x89180b*/
      v6 = (float *)(0x10 * v4++ + this + 0x388); /*0x89181c*/
      *v6 = *v6 + *(float *)(this + 0x248);     // Add proxy+0x248 vertical/base offset to endpoint z after transform. /*0x89182f*/
    }
    while ( v4 < 2 ); /*0x891831*/
  }
}
