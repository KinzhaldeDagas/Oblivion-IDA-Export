bool __thiscall sub_43F840(_DWORD *this, float *a2)
{
  int v3; // eax
  int v4; // ebx
  unsigned int v5; // esi
  int v6; // edx
  int v7; // edi
  int v8; // ecx

  if ( *(this + 0xD) )
    return 1;
  v3 = (int)*a2 >> 0xC;
  v4 = uGridsToLoad;
  v5 = (unsigned int)uGridsToLoad >> 1;
  v6 = *(this + 8) - v5;
  v7 = (int)a2[1] >> 0xC;
  v8 = *(this + 9) - v5;
  return v3 >= v6 && v3 < v4 + v6 && v7 >= v8 && v7 < v8 + v4;
}
