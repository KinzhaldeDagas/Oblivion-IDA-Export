_DWORD *__thiscall sub_7EE3E0(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  _DWORD *result; // eax
  _DWORD *v5; // ecx

  v3 = this + 0x20;
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x20) + 4))(this + 0x20);
  result[2] = a2;
  *result = 0;
  result[1] = v3[2];
  v5 = (_DWORD *)v3[2];
  if ( v5 )
  {
    *v5 = result;
    ++v3[3];
  }
  else
  {
    ++v3[3];
    v3[1] = result;
  }
  v3[2] = result;
  *(this + 9) = 0;
  return result;
}
