int __thiscall sub_945C30(SOCKET *this, char *buf, int len)
{
  SOCKET v4; // eax
  int result; // eax

  v4 = *(this + 8); /*0x945c33*/
  if ( v4 != 0xFFFFFFFF ) /*0x945c39*/
  {
    result = recv_0(v4, buf, len, 0); /*0x945c48*/
    if ( result > 0 ) /*0x945c4f*/
      return result; /*0x945c4f*/
    if ( WSAGetLastError_0() != 0x2733 ) /*0x945c60*/
      (*(void (__thiscall **)(SOCKET *))(*this + 0xC))(this); /*0x945c66*/
  }
  return 0; /*0x945c6b*/
}
