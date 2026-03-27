_DWORD *__thiscall sub_7C1740(int **this, _DWORD *a2)
{
  int *v3; // edi
  int v4; // eax
  bool v5; // zf
  int v6; // eax

  v3 = *(this + 1);
  v4 = *v3;
  v5 = *v3 == 0;
  *(this + 1) = (int *)*v3;
  if ( v5 )
    *(this + 2) = 0;
  else
    *(_DWORD *)(v4 + 4) = 0;
  v6 = v3[2];
  *a2 = v6;
  if ( v6 )
    InterlockedIncrement((volatile LONG *)(v6 + 4));
  ((void (__thiscall *)(int **, int *))(*this)[2])(this, v3);
  *(this + 3) = (int *)((char *)*(this + 3) + 0xFFFFFFFF);
  return a2;
}
