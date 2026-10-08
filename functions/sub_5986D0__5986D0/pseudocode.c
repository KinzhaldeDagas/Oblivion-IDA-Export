_DWORD *__thiscall sub_5986D0(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this); /*0x5986d8*/
  result[2] = *a3; /*0x5986e4*/
  result[1] = a2; /*0x5986e7*/
  *result = *(_DWORD *)a2; /*0x5986ec*/
  if ( *(_DWORD *)a2 ) /*0x5986ee*/
    *(_DWORD *)(*(_DWORD *)a2 + 4) = result; /*0x5986f4*/
  else
    *(this + 2) = result; /*0x598701*/
  *(_DWORD *)a2 = result; /*0x5986f7*/
  ++*(this + 3); /*0x5986f9*/
  return result; /*0x5986fd*/
}
