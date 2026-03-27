void __userpurge sub_60DBB0(int a1@<ecx>, double a2@<st2>, double a3@<st0>, __m128 *a4)
{
  int v4; // eax

  v4 = *(_DWORD *)(a1 + 0x1E0);                 // Probably not an Actor*
                                                // 
  if ( v4 )
  {
    if ( !*(_DWORD *)(v4 + 0x60) && (*(_DWORD *)(v4 + 8) & kFormFlags_Deleted) == 0 )
      sub_60D950(a2, a3, (ArrowProjectile *)v4, a4[2].m128_i32[2], a4, a4 + 1);
  }
}
