_DWORD *__thiscall sub_6AA320(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // ecx

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
  result[2] = *a2;
  result[1] = 0;
  *result = *(this + 1);
  v4 = *(this + 1);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 4) = result;
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
