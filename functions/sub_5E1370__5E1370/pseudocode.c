int __thiscall sub_5E1370(_DWORD *this, char a2, int a3)
{
  int result; // eax

  if ( a2 )
    result = a3 | *(this + 0x31);
  else
    result = *(this + 0x31) & ~a3;
  *(this + 0x31) = result;
  return result;
}
