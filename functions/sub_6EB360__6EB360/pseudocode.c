BOOL __thiscall sub_6EB360(char *this, unsigned int a2)
{
  BOOL result; // eax

  sub_6CD720((NiRenderer *)this, a2);
  sub_715420(this + 0x30, a2);
  result = sub_632310((float *)this + 0xC, (float *)&dword_B24FD4);
  if ( result )
    *(this + 0x40) = 1;
  return result;
}
