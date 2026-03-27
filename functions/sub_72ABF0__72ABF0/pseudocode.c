_WORD *sub_72ABF0()
{
  _WORD *v0; // eax
  _WORD *v1; // esi

  v0 = (_WORD *)FormHeapAlloc(0x5Cu);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_71FBB0(v0);
  *(_DWORD *)v1 = &NiTriShapeDynamicData::`vftable';
  v1[0x2C] = 0;
  v1[0x2D] = 0;
  return v1;
}
