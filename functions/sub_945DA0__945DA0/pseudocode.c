BOOL __thiscall sub_945DA0(SOCKET *this, HWND hWnd, u_int wMsg, char a4)
{
  return WSAAsyncSelect_0(*(this + 8), hWnd, wMsg, a4 & 3 | (4 * (a4 & 0xC))) != 0;
}
