int __thiscall sub_585A70(_DWORD *this, const char **a2)
{
  int v3; // edi
  int result; // eax

  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
  BSStringT_Set((BSStringT *)(v3 + 8), *a2, 0);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)v3 = *(this + 1);
  result = *(this + 1);
  if ( result )
  {
    *(_DWORD *)(result + 4) = v3;
    ++*(this + 3);
  }
  else
  {
    ++*(this + 3);
    *(this + 2) = v3;
  }
  *(this + 1) = v3;
  return result;
}
