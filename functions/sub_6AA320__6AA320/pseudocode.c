// NiTList AddHead helper. Allocates a node, stores payload at +0x08, installs it as the list head, repairs the previous head/backlink or empty-list tail, and increments count. Repeated per-light calls reverse the source iterator order.
_DWORD *__thiscall sub_6AA320(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // ecx

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this); /*0x6aa328*/
  result[2] = *a2; /*0x6aa330*/
  result[1] = 0; /*0x6aa333*/
  *result = *(this + 1); /*0x6aa33d*/
  v4 = *(this + 1); /*0x6aa33f*/
  if ( v4 ) /*0x6aa344*/
  {
    *(_DWORD *)(v4 + 4) = result; /*0x6aa346*/
    ++*(this + 3); /*0x6aa349*/
  }
  else
  {
    ++*(this + 3); /*0x6aa354*/
    *(this + 2) = result; /*0x6aa358*/
  }
  *(this + 1) = result; /*0x6aa34d*/
  return result; /*0x6aa350*/
}
