void __thiscall sub_60DBB0(int this, __m128 *havokPoint)
{
  int v4; // eax

  v4 = *(_DWORD *)(this + 0x1E0);               // Probably not an Actor* /*0x60dbb0*/
                                                //
  if ( v4 ) /*0x60dbb8*/
  {
    if ( !*(_DWORD *)(v4 + 0x60) && (*(_DWORD *)(v4 + 8) & kFormFlags_Deleted) == 0 ) /*0x60dbc9*/
      ArrowProjectile_HandleCollisionHit( /*0x60dbd9*/
        (ArrowProjectile *)v4,
        (void *)havokPoint[2].m128_i32[2],
        havokPoint,
        &havokPoint[1]);
  }
}
