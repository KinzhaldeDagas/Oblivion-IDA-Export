UInt32 __thiscall sub_5E0EA0(Actor *this, float a2)
{
  UInt32 result; // eax

  result = this->members.DeadState;
  if ( !result || result == 4 )
    return sub_65A450(this, a2);
  return result;
}
