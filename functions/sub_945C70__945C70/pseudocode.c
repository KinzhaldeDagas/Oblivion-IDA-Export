int __thiscall sub_945C70(SOCKET *this, char *buf, int len)
{
  SOCKET v4; // eax
  int result; // eax

  v4 = *(this + 8); /*0x945c73*/
  if ( v4 != 0xFFFFFFFF ) /*0x945c79*/
  {
    result = send_0(v4, buf, len, 0); /*0x945c88*/
    if ( result > 0 ) /*0x945c8f*/
      return result; /*0x945c8f*/
    if ( WSAGetLastError_0() != 0x2733 ) /*0x945ca0*/
      (*(void (__thiscall **)(SOCKET *))(*this + 0xC))(this); /*0x945ca6*/
  }
  return 0; /*0x945cab*/
}
