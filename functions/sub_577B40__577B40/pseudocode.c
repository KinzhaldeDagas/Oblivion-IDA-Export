_DWORD *__thiscall sub_577B40(int *this, _DWORD *a2, signed int a3, char a4)
{
  _DWORD *result; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // ecx

  if ( !*(this + 3) || a4 )
  {
    v6 = (_DWORD *)FormHeapAlloc(0x3Cu);
    if ( v6 )
      result = sub_577A10(v6, (int)this, a2, *(this + 4), *(this + 5));
    else
      result = 0;
  }
  else
  {
    result = sub_577840(*(_DWORD **)(*(this + 2) + 8), a2, a3);
  }
  v7 = result;
  if ( result )
  {
    result = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 4))(this);
    result[2] = v7;
    *result = 0;
    result[1] = *(this + 2);
    v8 = (_DWORD *)*(this + 2);
    if ( v8 )
      *v8 = result;
    else
      *(this + 1) = (int)result;
    ++*(this + 3);
    *(this + 2) = (int)result;
  }
  return result;
}
