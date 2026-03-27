void __thiscall sub_77DAF0(NiGeometryGroup *this, NiGeometryData *a2)
{
  NiGeometryBufferData *BuffData; // esi

  BuffData = a2->member.BuffData;
  if ( BuffData )
  {
    sub_782930(this, a2->member.BuffData);
    sub_778110(BuffData);
    FormHeapFree((unsigned int)BuffData);
    a2->member.BuffData = 0;
  }
}
