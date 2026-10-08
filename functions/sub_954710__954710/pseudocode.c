_DWORD *__thiscall sub_954710(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // esi
  _DWORD *v4; // ecx

  *(this + 0xE) = a2[0xA] - a2[9]; /*0x95471b*/
  *(this + 0xF) = a2[0xB]; /*0x954721*/
  result = (_DWORD *)a2[0xB]; /*0x954724*/
  v3 = 0; /*0x954727*/
  if ( (int)result > 0 ) /*0x95472b*/
  {
    v4 = this + 0x11; /*0x95472d*/
    result = a2 + 0xC; /*0x954730*/
    do /*0x95474c*/
    {
      v4[0xFFFFFFFF] = *result; /*0x954736*/
      *v4 = result[1] - *result; /*0x95473e*/
      ++v3; /*0x954743*/
      ++result; /*0x954744*/
      ++v4; /*0x954747*/
    }
    while ( v3 < a2[0xB] ); /*0x95474c*/
  }
  return result; /*0x95474f*/
}
