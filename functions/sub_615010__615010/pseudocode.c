_DWORD *__thiscall sub_615010(int *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  int v5; // ecx

  result = a2; /*0x615010*/
  if ( a2 != (_DWORD *)*(this + 0xF) ) /*0x61501a*/
  {
    v4 = this + 0x57; /*0x61501d*/
    BSSimpleList_Remove(this + 0x57, (int)a2); /*0x615026*/
    result = this + 0x57; /*0x61502b*/
    v5 = 0; /*0x61502d*/
    if ( v4 ) /*0x615032*/
    {
      do /*0x615041*/
      {
        if ( *result ) /*0x615034*/
          ++v5; /*0x615039*/
        result = (_DWORD *)result[1]; /*0x61503c*/
      }
      while ( result ); /*0x615041*/
    }
    *(this + 0x5E) = v5; /*0x615043*/
  }
  return result; /*0x615049*/
}
