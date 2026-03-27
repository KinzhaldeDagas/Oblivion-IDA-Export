int __thiscall sub_945C30(SOCKET *this, char *buf, int len)
{
  SOCKET v4; // eax
  int result; // eax

  v4 = *(this + 8);
  if ( v4 != 0xFFFFFFFF )
  {
    result = recv_0(v4, buf, len, 0);
    if ( result > 0 )
      return result;
    if ( WSAGetLastError_0() != 0x2733 )
      (*(void (__thiscall **)(SOCKET *))(*this + 0xC))(this);
  }
  return 0;
}
