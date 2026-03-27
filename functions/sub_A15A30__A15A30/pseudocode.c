int sub_A15A30()
{
  int result; // eax

  result = dword_BA8188;
  dword_B305F8 = dword_BA8188;
  dword_BA8188 = (int)&off_B305F4;
  return result;
}
