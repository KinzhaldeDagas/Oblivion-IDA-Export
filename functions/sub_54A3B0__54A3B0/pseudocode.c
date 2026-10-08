int *__thiscall sub_54A3B0(int ***this)
{
  int **v2; // ecx
  int *v3; // eax
  bool v4; // zf
  int *v5; // edi

  v2 = *(this + 1); /*0x54a3b3*/
  v3 = *v2; /*0x54a3b6*/
  v4 = *v2 == 0; /*0x54a3ba*/
  *(this + 1) = (int **)*v2; /*0x54a3bd*/
  if ( v4 ) /*0x54a3c0*/
    *(this + 2) = 0; /*0x54a3c7*/
  else
    v3[1] = 0; /*0x54a3c2*/
  v5 = v2[2]; /*0x54a3cc*/
  ((void (__thiscall *)(int ***, int **))(*this)[2])(this, v2); /*0x54a3d5*/
  *(this + 3) = (int **)((char *)*(this + 3) + 0xFFFFFFFF); /*0x54a3d7*/
  return v5; /*0x54a3dd*/
}
