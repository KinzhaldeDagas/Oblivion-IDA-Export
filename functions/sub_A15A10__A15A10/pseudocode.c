int sub_A15A10()
{
  int result; // eax

  result = dword_BA8188;
  dword_B305EC = dword_BA8188;
  dword_BA8188 = (int)&off_B305E8;
  return result;
}
