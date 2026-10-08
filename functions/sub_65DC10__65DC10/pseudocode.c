int __thiscall sub_65DC10(Actor *this, char a2)
{
  if ( a2 ) /*0x65dc16*/
    qword_B3BB2C[0x14] = *((float *)this + 0x187); /*0x65dc22*/
  else
    *((float *)this + 0x187) = qword_B3BB2C[0x14]; /*0x65dc37*/
  return sub_5E0E50(this);
}
