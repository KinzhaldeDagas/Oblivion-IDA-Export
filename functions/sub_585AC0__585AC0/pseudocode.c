BSStringT *__thiscall sub_585AC0(int **this, BSStringT *a2)
{
  int v3; // ebx
  int *v4; // eax
  bool v5; // zf

  v3 = (int)*(this + 1); /*0x585aed*/
  v4 = *(int **)v3; /*0x585af0*/
  v5 = *(_DWORD *)v3 == 0; /*0x585af2*/
  *(this + 1) = *(int **)v3; /*0x585af8*/
  if ( v5 ) /*0x585afb*/
    *(this + 2) = 0; /*0x585b02*/
  else
    v4[1] = 0; /*0x585afd*/
  a2->m_data = 0; /*0x585b09*/
  a2->m_dataLen = 0; /*0x585b0b*/
  a2->m_bufLen = 0; /*0x585b0f*/
  BSStringT_Set(a2, *(const char **)(v3 + 8), 0); /*0x585b1a*/
  ((void (__thiscall *)(int **, int))(*this)[2])(this, v3); /*0x585b33*/
  *(this + 3) = (int *)((char *)*(this + 3) + 0xFFFFFFFF); /*0x585b35*/
  return a2; /*0x585b3b*/
}
