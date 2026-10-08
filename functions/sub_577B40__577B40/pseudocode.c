_DWORD *__thiscall sub_577B40(int *this, signed int *a2, signed int a3, char a4)
{
  _DWORD *result; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // ecx

  if ( !*(this + 3) || a4 ) /*0x577b70*/
  {
    v6 = (_DWORD *)FormHeapAlloc(0x3Cu); /*0x577b8e*/
    if ( v6 ) /*0x577ba4*/
      result = sub_577A10(v6, (int)this, a2, *(this + 4), *(this + 5)); /*0x577bb6*/
    else
      result = 0; /*0x577bbd*/
  }
  else
  {
    result = sub_577840(*(_DWORD **)(*(this + 2) + 8), a2, a3); /*0x577b85*/
  }
  v7 = result; /*0x577bc7*/
  if ( result ) /*0x577bcb*/
  {
    result = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 4))(this); /*0x577bd4*/
    result[2] = v7; /*0x577bd6*/
    *result = 0; /*0x577bd9*/
    result[1] = *(this + 2); /*0x577be2*/
    v8 = (_DWORD *)*(this + 2); /*0x577be5*/
    if ( v8 ) /*0x577bea*/
      *v8 = result; /*0x577bec*/
    else
      *(this + 1) = (int)result; /*0x577bf0*/
    ++*(this + 3); /*0x577bf3*/
    *(this + 2) = (int)result; /*0x577bf7*/
  }
  return result; /*0x577bfa*/
}
