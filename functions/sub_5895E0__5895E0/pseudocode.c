_DWORD *__thiscall sub_5895E0(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // edx
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // esi

  result = *(_DWORD **)(*this + 0x28); /*0x5895e4*/
  v2 = result; /*0x5895e7*/
  v3 = 0; /*0x5895e9*/
  if ( result ) /*0x5895ed*/
  {
    while ( v2 != this ) /*0x5895f2*/
    {
      v3 = v2; /*0x5895f4*/
      v2 = (_DWORD *)v2[5]; /*0x5895f6*/
      if ( !v2 ) /*0x5895fb*/
        return result; /*0x5895fb*/
    }
    v4 = v2[5]; /*0x589606*/
    if ( v3 ) /*0x589609*/
    {
      v3[5] = v4; /*0x58960b*/
      v5 = v4; /*0x58960f*/
    }
    else
    {
      *(_DWORD *)(*this + 0x28) = v4; /*0x58961e*/
      v5 = *(_DWORD *)(*this + 0x28); /*0x589623*/
    }
    FormHeapFree((unsigned int)v2); /*0x589611*/
    return (_DWORD *)v5; /*0x58961a*/
  }
  return result; /*0x5895fd*/
}
