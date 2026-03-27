NiCollisionData *sub_96DAE0()
{
  NiCollisionData *v0; // eax

  v0 = (NiCollisionData *)FormHeapAlloc(0x50u);
  if ( v0 )
    return NiCollisionData::NiCollisionData(v0);
  else
    return 0;
}
