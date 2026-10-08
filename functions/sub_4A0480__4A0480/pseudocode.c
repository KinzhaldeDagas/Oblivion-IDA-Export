int **__thiscall sub_4A0480(int ***this, int **a2)
{
  int **v3; // edi
  int *v4; // eax
  bool v5; // zf
  int *v6; // eax

  v3 = *(this + 1); /*0x4a04ad*/
  v4 = *v3; /*0x4a04b0*/
  v5 = *v3 == 0; /*0x4a04b2*/
  *(this + 1) = (int **)*v3; /*0x4a04b4*/
  if ( v5 ) /*0x4a04b7*/
    *(this + 2) = 0; /*0x4a04be*/
  else
    v4[1] = 0; /*0x4a04b9*/
  v6 = v3[2]; /*0x4a04c1*/
  *a2 = v6; /*0x4a04ca*/
  if ( v6 ) /*0x4a04cc*/
    InterlockedIncrement(v6 + 1); /*0x4a04d2*/
  ((void (__thiscall *)(int ***, int **))(*this)[2])(this, v3); /*0x4a04ec*/
  *(this + 3) = (int **)((char *)*(this + 3) + 0xFFFFFFFF); /*0x4a04ee*/
  return a2; /*0x4a04f4*/
}
