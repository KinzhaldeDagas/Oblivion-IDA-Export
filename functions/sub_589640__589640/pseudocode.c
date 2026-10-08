_DWORD *__thiscall NiTPointerList__InsertBeforePosition(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD *v5; // edx

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this); /*0x589648*/
  result[2] = *a3; /*0x589654*/
  *result = a2; /*0x589657*/
  result[1] = *(_DWORD *)(a2 + 4); /*0x58965c*/
  v5 = *(_DWORD **)(a2 + 4); /*0x58965f*/
  if ( v5 ) /*0x589664*/
    *v5 = result; /*0x589666*/
  else
    *(this + 1) = result; /*0x589673*/
  *(_DWORD *)(a2 + 4) = result; /*0x589668*/
  ++*(this + 3); /*0x58966b*/
  return result; /*0x58966f*/
}
