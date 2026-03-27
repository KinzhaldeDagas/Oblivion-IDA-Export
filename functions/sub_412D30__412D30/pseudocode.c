TESForm *__thiscall sub_412D30(_DWORD *this, int a2, TESForm *a3)
{
  int v4; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // edi
  TESForm *result; // eax

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2);
  v5 = *(_DWORD **)(*(this + 2) + 4 * v4);
  if ( v5 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v5[1]) )
    {
      v5 = (_DWORD *)*v5;
      if ( !v5 )
        goto LABEL_4;
    }
    if ( !*((_BYTE *)this + 0x10) )
      v5[1] = a2;
    v5[2] = a3;
    return a3;
  }
  else
  {
LABEL_4:
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this);
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, TESForm *))(*this + 0xC))(this, v6, a2, a3);
    result = (TESForm *)*(this + 2);
    *v6 = *((_DWORD *)&result->vtbl + v4);
    *(_DWORD *)(*(this + 2) + 4 * v4) = v6;
    ++*(this + 3);
  }
  return result;
}
