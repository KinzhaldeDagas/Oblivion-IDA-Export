Creature *__thiscall sub_5E0EA0(Actor *this, float a2)
{
  Creature *result; // eax

  result = (Creature *)this->members.DeadState; /*0x5e0ea0*/
  if ( !result || result == (Creature *)4 ) /*0x5e0ead*/
    return sub_65A450(this, a2); /*0x5e0eb7*/
  return result; /*0x5e0ebc*/
}
