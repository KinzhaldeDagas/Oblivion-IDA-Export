unsigned int *__thiscall sub_782840(_DWORD *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int *v5; // edi
  int v6; // ecx

  v2 = (unsigned int)a2; /*0x782841*/
  if ( *(this + 9) < (unsigned int)a2 ) /*0x78284b*/
    return 0; /*0x78284e*/
  v5 = (unsigned int *)unk_B428D4; /*0x782855*/
  if ( !unk_B428D4 ) /*0x782855*/
  {
    sub_7827A0(); /*0x78285f*/
    v5 = (unsigned int *)unk_B428D4; /*0x782864*/
  }
  v6 = v5[6]; /*0x78286a*/
  unk_B428D4 = v6; /*0x782872*/
  if ( v6 ) /*0x782878*/
    *(_DWORD *)(v6 + 0x1C) = 0; /*0x78287a*/
  v5[6] = 0; /*0x782881*/
  v5[7] = 0; /*0x782887*/
  v5[1] = (unsigned int)this; /*0x78288e*/
  v5[2] = *(this + 2); /*0x782894*/
  v5[3] = *(this + 8); /*0x78289a*/
  v5[5] = v2; /*0x78289d*/
  *(this + 8) += v2; /*0x7828a0*/
  *(this + 9) -= v2; /*0x7828a3*/
  *(this + 0xA) -= v2; /*0x7828a6*/
  a2 = v5; /*0x7828b1*/
  *v5 = sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(this + 0xB), &a2); /*0x7828ba*/
  return v5; /*0x78284d*/
}
