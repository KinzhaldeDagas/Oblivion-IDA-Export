_DWORD *__thiscall sub_7C6A20(_DWORD *this, int a2, int *a3)
{
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // eax
  bool v7; // zf
  _DWORD *v8; // ecx

  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
  v5 = v4[2];
  if ( v5 != *a3 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    v6 = *a3;
    v7 = *a3 == 0;
    v4[2] = *a3;
    if ( !v7 )
      InterlockedIncrement((volatile LONG *)(v6 + 4));
  }
  *v4 = a2;
  v4[1] = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD **)(a2 + 4);
  if ( v8 )
    *v8 = v4;
  else
    *(this + 1) = v4;
  *(_DWORD *)(a2 + 4) = v4;
  ++*(this + 3);
  return v4;
}
