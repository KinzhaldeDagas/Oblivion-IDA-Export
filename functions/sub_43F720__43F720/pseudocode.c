void __thiscall sub_43F720(_DWORD *this, int *a2, float a3)
{
  int v3; // ebp
  unsigned int v4; // esi

  v3 = *(this + 9);
  v4 = (unsigned int)uGridsToLoad >> 1;
  *a2 = Double_To_SInt32(a3);
  a2[3] = Double_To_SInt32(a3);
  a2[2] = Double_To_SInt32(a3);
  a2[1] = Double_To_SInt32((double)(int)((v4 + v3 + 1) << 0xC) - a3);
}
