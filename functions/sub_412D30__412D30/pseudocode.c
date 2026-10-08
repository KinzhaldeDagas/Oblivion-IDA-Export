TESForm *__thiscall sub_412D30(_DWORD *this, int a2, TESForm *a3)
{
  int v4; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // edi
  TESForm *result; // eax

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2); /*0x412d42*/
  v5 = *(_DWORD **)(*(this + 2) + 4 * v4); /*0x412d47*/
  if ( v5 ) /*0x412d4c*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v5[1]) ) /*0x412d60*/
    {
      v5 = (_DWORD *)*v5; /*0x412d62*/
      if ( !v5 ) /*0x412d66*/
        goto LABEL_4; /*0x412d66*/
    }
    if ( !*((_BYTE *)this + 0x10) ) /*0x412d9c*/
      v5[1] = a2; /*0x412da2*/
    v5[2] = a3; /*0x412da9*/
    return a3; /*0x412da5*/
  }
  else
  {
LABEL_4:
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this); /*0x412d68*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, TESForm *))(*this + 0xC))(this, v6, a2, a3); /*0x412d81*/
    result = (TESForm *)*(this + 2); /*0x412d83*/
    *v6 = *((_DWORD *)&result->vtbl + v4); /*0x412d89*/
    *(_DWORD *)(*(this + 2) + 4 * v4) = v6; /*0x412d8e*/
    ++*(this + 3); /*0x412d91*/
  }
  return result; /*0x412d95*/
}
