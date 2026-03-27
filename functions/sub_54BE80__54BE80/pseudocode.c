int __thiscall sub_54BE80(int this, char a2)
{
  int result; // eax

  *(float *)(this + 0x170) = Vector3_InitValue_;
  *(float *)(this + 0x174) = *(&Vector3_InitValue_ + 1);
  result = LODWORD(dword_B3F9B0);
  *(float *)(this + 0x178) = dword_B3F9B0;
  *(_BYTE *)(this + 0x1D4) = a2;
  return result;
}
