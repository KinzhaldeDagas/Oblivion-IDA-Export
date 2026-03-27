int __stdcall sub_60CFE0(int a1, int a2, int a3)
{
  int v4; // edx
  float v5; // ecx

  v4 = *((_DWORD *)&Vector3_InitValue_ + 1);
  *(float *)a1 = Vector3_InitValue_;
  v5 = dword_B3F9B0;
  *(_DWORD *)(a1 + 4) = v4;
  *(float *)(a1 + 8) = v5;
  return a1;
}
