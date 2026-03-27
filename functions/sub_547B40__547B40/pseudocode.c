int __cdecl sub_547B40(int a1, float a2, int a3, int a4, int a5)
{
  int v5; // eax

  v5 = Double_To_SInt32(((double)a4 - (double)a5) / dbl_A3F3E8 + pow((double)(0x64 - a1), a2) - (double)a3 / dbl_A3F3E8);
  return v5 <= 0 ? 0 : v5;
}
