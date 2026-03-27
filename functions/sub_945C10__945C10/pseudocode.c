int __thiscall sub_945C10(SOCKET *this)
{
  int result; // eax

  result = *(this + 8);
  if ( result != 0xFFFFFFFF )
  {
    result = closesocket_0(*(this + 8));
    *(this + 8) = 0xFFFFFFFF;
  }
  return result;
}
