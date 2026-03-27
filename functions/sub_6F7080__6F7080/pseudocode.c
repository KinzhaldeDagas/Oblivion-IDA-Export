int __thiscall sub_6F7080(_DWORD **this)
{
  int result; // eax
  _DWORD *v3; // eax
  unsigned __int8 *v4; // ecx

  result = ((int (__thiscall *)(_DWORD **))(*this)[4])(this);
  if ( result != 0xFFFFFFFF )
  {
    --**(this + 0xC);
    v3 = *(this + 8);
    v4 = (unsigned __int8 *)(*v3)++;
    return *v4;
  }
  return result;
}
