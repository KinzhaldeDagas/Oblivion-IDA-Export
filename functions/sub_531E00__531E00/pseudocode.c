hkVector4 *__thiscall sub_531E00(_DWORD *this)
{
  _DWORD *v1; // ecx

  if ( this && (v1 = (_DWORD *)*(this + 2)) != 0 ) /*0x531e09*/
    return (hkVector4 *)bhkCollisionWrapper_GetPositionPtr(v1); /*0x531e0b*/
  else
    return &unk_BA7A40; /*0x531e10*/
}
