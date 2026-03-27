BSStringT *__thiscall sub_585AC0(int **this, BSStringT *a2)
{
  int *v3; // ebx
  int v4; // eax
  bool v5; // zf

  v3 = *(this + 1);
  v4 = *v3;
  v5 = *v3 == 0;
  *(this + 1) = (int *)*v3;
  if ( v5 )
    *(this + 2) = 0;
  else
    *(_DWORD *)(v4 + 4) = 0;
  a2->m_data = 0;
  a2->m_dataLen = 0;
  a2->m_bufLen = 0;
  BSStringT_Set(a2, (const char *)v3[2], 0);
  ((void (__thiscall *)(int **, int *))(*this)[2])(this, v3);
  *(this + 3) = (int *)((char *)*(this + 3) + 0xFFFFFFFF);
  return a2;
}
