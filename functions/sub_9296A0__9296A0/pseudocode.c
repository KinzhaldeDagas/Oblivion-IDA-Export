int __thiscall sub_9296A0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2 + 1; /*0x9296a7*/
  if ( a2 + 1 >= *(this + 8) ) /*0x9296aa*/
    return 0xFFFFFFFF; /*0x9296ac*/
  return result; /*0x9296af*/
}
