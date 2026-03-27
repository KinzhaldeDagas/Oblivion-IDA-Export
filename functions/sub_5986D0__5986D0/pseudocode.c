_DWORD *__thiscall sub_5986D0(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
  result[2] = *a3;
  result[1] = a2;
  *result = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 )
    *(_DWORD *)(*(_DWORD *)a2 + 4) = result;
  else
    *(this + 2) = result;
  *(_DWORD *)a2 = result;
  ++*(this + 3);
  return result;
}
