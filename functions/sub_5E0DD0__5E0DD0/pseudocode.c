double __thiscall sub_5E0DD0(int **this)
{
  int *v2; // ecx
  int v3; // edi
  int v4; // eax
  double result; // st7

  if ( !*(this + 0x16) )
    return flt_A3D8F0;
  v2 = *(this + 0x16);
  v3 = *v2;
  v4 = (*(int (__thiscall **)(int *))(*v2 + 0x4CC))(v2);
  (*(void (__thiscall **)(_DWORD, int **, int))(v3 + 0x1D8))(*(this + 0x16), this, v4);
  return result;
}
