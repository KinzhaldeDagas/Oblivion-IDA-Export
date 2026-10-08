UInt32 __thiscall sub_5E1F40(Actor *this)
{
  UInt32 v1; // ecx
  UInt32 result; // eax

  v1 = this->members.unk0E8[4]; /*0x5e1f40*/
  result = 0; /*0x5e1f46*/
  if ( v1 ) /*0x5e1f4a*/
  {
    if ( *(_BYTE *)(v1 + 4) == 0x35 ) /*0x5e1f50*/
      return v1; /*0x5e1f52*/
  }
  return result; /*0x5e1f54*/
}
