_DWORD *__thiscall sub_589640(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD *v5; // edx

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
  result[2] = *a3;
  *result = a2;
  result[1] = *(_DWORD *)(a2 + 4);
  v5 = *(_DWORD **)(a2 + 4);
  if ( v5 )
    *v5 = result;
  else
    *(this + 1) = result;
  *(_DWORD *)(a2 + 4) = result;
  ++*(this + 3);
  return result;
}
