UInt32 __thiscall sub_5E1F40(Actor *this)
{
  UInt32 v1; // ecx
  UInt32 result; // eax

  v1 = this->members.unk0E8[4];
  result = 0;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 4) == 0x35 )
      return v1;
  }
  return result;
}
