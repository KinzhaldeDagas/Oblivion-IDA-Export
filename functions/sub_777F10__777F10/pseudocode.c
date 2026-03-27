char __thiscall sub_777F10(NiGeometryBufferData *this)
{
  UInt32 StreamCount; // esi
  int v3; // edx
  NiVBChip **i; // eax

  StreamCount = this->StreamCount;
  if ( StreamCount )
  {
    v3 = 0;
    for ( i = this->VBChip; *i && (*i)->VB; ++i )
    {
      if ( ++v3 >= StreamCount )
        return 1;
    }
  }
  return 0;
}
