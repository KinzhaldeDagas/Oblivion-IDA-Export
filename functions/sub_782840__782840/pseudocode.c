unsigned int *__thiscall sub_782840(_DWORD *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int *v5; // edi
  int v6; // ecx

  v2 = (unsigned int)a2;
  if ( *(this + 9) < (unsigned int)a2 )
    return 0;
  v5 = (unsigned int *)dword_B428D4;
  if ( !dword_B428D4 )
  {
    sub_7827A0();
    v5 = (unsigned int *)dword_B428D4;
  }
  v6 = v5[6];
  dword_B428D4 = v6;
  if ( v6 )
    *(_DWORD *)(v6 + 0x1C) = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[1] = (unsigned int)this;
  v5[2] = *(this + 2);
  v5[3] = *(this + 8);
  v5[5] = v2;
  *(this + 8) += v2;
  *(this + 9) -= v2;
  *(this + 0xA) -= v2;
  a2 = v5;
  *v5 = sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(this + 0xB), &a2);
  return v5;
}
