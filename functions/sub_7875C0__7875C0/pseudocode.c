// Oblivion CSpeedTreeRT::GetUserData: returns the char pointer stored at CSpeedTreeRT+0x68. RT4.1 confirms the public const-char getter name after the binary field access was established.
const char *__thiscall CSpeedTreeRT__GetUserData(const OB_CSpeedTreeRT_010201A0 *this)
{
  return this->userDataString; /*0x7875c3*/
}
