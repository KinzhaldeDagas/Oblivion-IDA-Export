int __cdecl sub_6C0820(int a1, int a2)
{
  int result; // eax

  result = a2 + 6 * a1;
  dword_B3D118[result] = (int)sub_6C0430;
  dword_B3CFF8[result] = (int)sub_6BFCD0;
  dword_B3D238[result] = (int)sub_6BFDB0;
  dword_B3D650[result] = (int)sub_6BFE90;
  dword_B3D4A0[result] = (int)sub_6BFBB0;
  dword_B3D410[result] = (int)sub_6C0170;
  dword_B3D1A8[result] = (int)sub_6C0680;
  return result * 4;
}
