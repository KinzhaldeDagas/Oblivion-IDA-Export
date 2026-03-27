int __thiscall sub_566150(_DWORD *this, int a2)
{
  int result; // eax

  result = nullsub_returnvVoid_1arg(a2);
  if ( (a2 & 0x10000000) != 0 )
    *(this + 7) &= ~0x8000u;
  if ( (a2 & 0x8000000) != 0 )
    *(this + 7) &= ~0x10000u;
  return result;
}
