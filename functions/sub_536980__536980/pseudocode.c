_DWORD *__thiscall sub_536980(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edx

  result = a2; /*0x536980*/
  if ( this == a2 ) /*0x536986*/
    return (_DWORD *)*(this + 1); /*0x536988*/
  v3 = a2; /*0x536991*/
  if ( a2 ) /*0x536993*/
  {
    while ( 1 ) /*0x536995*/
    {
      v4 = (_DWORD *)v3[1]; /*0x536995*/
      if ( this == v4 ) /*0x53699a*/
        break; /*0x53699a*/
      v3 = (_DWORD *)v3[1]; /*0x53699e*/
      if ( !v4 ) /*0x5369a0*/
        return result; /*0x5369a0*/
    }
    v3[1] = v4[1]; /*0x5369a9*/
  }
  return result; /*0x53698b*/
}
