bool __thiscall sub_43F840(_DWORD *this, float *a2)
{
  int v3; // eax
  int v4; // ebx
  unsigned int v5; // esi
  int v6; // edx
  int v7; // edi
  int v8; // ecx

  if ( *(this + 0xD) ) /*0x43f841*/
    return 1; /*0x43f847*/
  v3 = (int)*a2 >> 0xC; /*0x43f86d*/
  v4 = uGridsToLoad; /*0x43f878*/
  v5 = (unsigned int)uGridsToLoad >> 1; /*0x43f88a*/
  v6 = *(this + 8) - v5; /*0x43f88c*/
  v7 = (int)a2[1] >> 0xC; /*0x43f88e*/
  v8 = *(this + 9) - v5; /*0x43f891*/
  return v3 >= v6 && v3 < v4 + v6 && v7 >= v8 && v7 < v8 + v4; /*0x43f84a*/
}
