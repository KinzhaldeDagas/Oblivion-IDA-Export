float *sub_88ED20()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x28u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_897600(v0);
  *(_DWORD *)v1 = &bhkBlendCollisionObject::`vftable';
  ++dword_BA7A1C;
  v1[5] = 0.0;
  *((_WORD *)v1 + 6) &= ~0x100u;
  v1[6] = 1.0;
  *((_DWORD *)v1 + 7) = 8;
  v1[8] = 0.0;
  v1[9] = 0.0;
  return v1;
}
