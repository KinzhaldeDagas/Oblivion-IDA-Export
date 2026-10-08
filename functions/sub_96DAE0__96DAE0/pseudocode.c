NiCollisionData *sub_96DAE0()
{
  NiCollisionData *v0; // eax

  v0 = (NiCollisionData *)FormHeapAlloc(0x50u); /*0x96dae2*/
  if ( v0 ) /*0x96daec*/
    return NiCollisionData::NiCollisionData(v0); /*0x96daf0*/
  else
    return 0; /*0x96daf5*/
}
