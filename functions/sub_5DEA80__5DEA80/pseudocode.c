_DWORD *__thiscall sub_5DEA80(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // ecx

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this); /*0x5dea88*/
  result[2] = *a2; /*0x5dea90*/
  result[3] = a2[1]; /*0x5dea96*/
  result[1] = 0; /*0x5dea99*/
  *result = *(this + 1); /*0x5deaa3*/
  v4 = *(this + 1); /*0x5deaa5*/
  if ( v4 ) /*0x5deaaa*/
  {
    *(_DWORD *)(v4 + 4) = result; /*0x5deaac*/
    ++*(this + 3); /*0x5deaaf*/
  }
  else
  {
    ++*(this + 3); /*0x5deaba*/
    *(this + 2) = result; /*0x5deabe*/
  }
  *(this + 1) = result; /*0x5deab3*/
  return result; /*0x5deab6*/
}
