NiVBChip *__thiscall sub_761AC0(NiGeometryBufferData *this, UInt32 a2)
{
  if ( a2 >= this->StreamCount )
    return 0;
  else
    return this->VBChip[a2];
}
