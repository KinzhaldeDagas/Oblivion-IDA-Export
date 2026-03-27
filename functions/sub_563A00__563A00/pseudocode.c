int __stdcall sub_563A00(int a1)
{
  int v2; // edx
  float v3; // ecx

  v2 = *((_DWORD *)&Vector3_InitValue_ + 1);
  *(float *)a1 = Vector3_InitValue_;
  v3 = dword_B3F9B0;
  *(_DWORD *)(a1 + 4) = v2;
  *(float *)(a1 + 8) = v3;
  return a1;
}
