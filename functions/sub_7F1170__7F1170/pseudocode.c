int sub_7F1170()
{
  int result; // eax
  float v1; // [esp+4h] [ebp-14h]
  float v2; // [esp+8h] [ebp-10h]
  float v3; // [esp+Ch] [ebp-Ch]
  float v4; // [esp+10h] [ebp-8h]
  float v5; // [esp+14h] [ebp-4h]

  result = dword_B43124;
  v1 = *(float *)(dword_B43124 + 0x74);
  v2 = *(float *)(dword_B43124 + 0x80);
  v3 = *(float *)(dword_B43124 + 0x6C);
  v4 = *(float *)(dword_B43124 + 0x78);
  v5 = *(float *)(dword_B43124 + 0x84);
  flt_B46768 = *(float *)(dword_B43124 + 0x68);
  flt_B4676C = v1;
  flt_B46770 = v2;
  flt_B46774 = 0.0;
  flt_B46758 = v3;
  flt_B4675C = v4;
  flt_B46760 = v5;
  flt_B46764 = 0.0;
  return result;
}
