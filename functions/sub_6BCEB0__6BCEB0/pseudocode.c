int __cdecl sub_6BCEB0(int a1, int a2)
{
  int result; // eax

  result = a2 + 6 * a1;
  dword_B3D118[result] = (int)sub_6BC780;
  dword_B3CFF8[result] = (int)sub_6BC3A0;
  dword_B3D238[result] = (int)sub_6BC480;
  dword_B3D650[result] = (int)sub_6BC560;
  dword_B3D4A0[result] = (int)sub_6BC2C0;
  dword_B3D410[result] = (int)sub_6BC600;
  dword_B3D1A8[result] = (int)sub_6BC9A0;
  return result * 4;
}
