_DWORD *__thiscall sub_7D1FD0(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // eax

  v3 = *(this + 2);
  v4 = *(_DWORD **)(v3 + 4);
  *(this + 2) = v4;
  if ( v4 )
    *v4 = 0;
  else
    *(this + 1) = 0;
  v5 = *(_DWORD *)(v3 + 8);
  *a2 = v5;
  if ( v5 )
    InterlockedIncrement((volatile LONG *)(v5 + 4));
  (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, v3);
  --*(this + 3);
  return a2;
}
