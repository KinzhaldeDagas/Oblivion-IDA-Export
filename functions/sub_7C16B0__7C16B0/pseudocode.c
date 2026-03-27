_DWORD *__thiscall sub_7C16B0(_DWORD *this, int *a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // eax
  bool v6; // zf
  _DWORD *result; // eax

  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
  v4 = v3[2];
  if ( v4 != *a2 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    v5 = *a2;
    v6 = *a2 == 0;
    v3[2] = *a2;
    if ( !v6 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  *v3 = 0;
  v3[1] = *(this + 2);
  result = (_DWORD *)*(this + 2);
  if ( result )
  {
    *result = v3;
    ++*(this + 3);
  }
  else
  {
    ++*(this + 3);
    *(this + 1) = v3;
  }
  *(this + 2) = v3;
  return result;
}
