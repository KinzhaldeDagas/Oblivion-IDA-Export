int __thiscall sub_530410(_BYTE *this, int a2)
{
  int result; // eax

  result = nullsub_returnvVoid_1arg(a2);
  if ( (a2 & 0x10000000) != 0 )
    *(this + 0x22) = 0;
  return result;
}
