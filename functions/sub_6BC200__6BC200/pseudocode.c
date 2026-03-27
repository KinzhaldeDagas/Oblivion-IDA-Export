int __cdecl sub_6BC200(int a1, int a2)
{
  int result; // eax

  result = a2 + 6 * a1;
  dword_B3D118[result] = (int)nullsub_returnFloat0_0arg;
  dword_B3CFF8[result] = (int)sub_6BBB80;
  dword_B3D238[result] = (int)sub_6BBB80;
  dword_B3D650[result] = (int)sub_6BBB80;
  dword_B3D4A0[result] = (int)sub_6BBE80;
  dword_B3D410[result] = (int)TESTexture::ClearComponentReferences;
  dword_B3D1A8[result] = 0;
  return result * 4;
}
