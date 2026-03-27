int __thiscall sub_521BA0(char *this, int a2)
{
  int result; // eax

  result = TESActorBase_GetModifiedSize(this, a2);
  if ( (a2 & 0x200) != 0 )
    result = (unsigned __int16)result + 0x15;
  if ( (a2 & 0x400) != 0 )
    result += 4;
  return result;
}
