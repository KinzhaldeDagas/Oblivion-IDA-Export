int __thiscall sub_54A3B0(int **this)
{
  int *v2; // ecx
  int v3; // eax
  bool v4; // zf
  int v5; // edi

  v2 = *(this + 1);
  v3 = *v2;
  v4 = *v2 == 0;
  *(this + 1) = (int *)*v2;
  if ( v4 )
    *(this + 2) = 0;
  else
    *(_DWORD *)(v3 + 4) = 0;
  v5 = v2[2];
  ((void (__thiscall *)(int **, int *))(*this)[2])(this, v2);
  *(this + 3) = (int *)((char *)*(this + 3) + 0xFFFFFFFF);
  return v5;
}
