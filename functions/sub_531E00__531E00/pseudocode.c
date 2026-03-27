hkVector4 *__thiscall sub_531E00(_DWORD *this)
{
  _DWORD *v1; // ecx

  if ( this && (v1 = (_DWORD *)*(this + 2)) != 0 )
    return (hkVector4 *)sub_8AC070(v1);
  else
    return &stru_BA7A40;
}
