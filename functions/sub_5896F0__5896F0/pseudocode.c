int __thiscall sub_5896F0(_DWORD *this, float *a2)
{
  int result; // eax
  double v4; // st7
  int v5; // ecx

  result = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
  v4 = *a2;
  *(_DWORD *)(result + 4) = 0;
  *(float *)(result + 8) = v4;
  *(_DWORD *)result = *(this + 1);
  v5 = *(this + 1);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 4) = result;
    ++*(this + 3);
  }
  else
  {
    ++*(this + 3);
    *(this + 2) = result;
  }
  *(this + 1) = result;
  return result;
}
