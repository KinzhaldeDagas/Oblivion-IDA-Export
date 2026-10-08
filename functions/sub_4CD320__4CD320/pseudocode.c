_DWORD *__thiscall sub_4CD320(const void **this, const void *a2)
{
  _DWORD *v3; // eax
  _DWORD *result; // eax

  if ( this ) /*0x4cd32a*/
  {
    v3 = (_DWORD *)(*((int (__thiscall **)(const void **))*this + 0x16))(this); /*0x4cd331*/
    if ( v3 ) /*0x4cd335*/
      sub_899CA0(v3, (int)a2); /*0x4cd33a*/
  }
  result = (_DWORD *)((unsigned int)*(this + 0x1A) & 0x3FFFFFFF); /*0x4cd346*/
  if ( *(this + 0x19) == result ) /*0x4cd34e*/
    result = (_DWORD *)sub_8A6EE0(this + 0x18, 4); /*0x4cd353*/
  *((_DWORD *)*(this + 0x18) + (_DWORD)*(this + 0x19)) = a2; /*0x4cd360*/
  *(this + 0x19) = (char *)*(this + 0x19) + 1; /*0x4cd363*/
  if ( this ) /*0x4cd36a*/
  {
    result = (_DWORD *)(*((int (__thiscall **)(const void **))*this + 0x16))(this); /*0x4cd373*/
    if ( result ) /*0x4cd377*/
    {
      if ( a2 ) /*0x4cd37b*/
      {
        result = (_DWORD *)sub_899CE0(result, (int)a2 + 0x14); /*0x4cd383*/
        *(this + 9) = a2; /*0x4cd388*/
        return result; /*0x4cd38d*/
      }
      result = (_DWORD *)sub_899CE0(result, 0); /*0x4cd395*/
    }
  }
  *(this + 9) = a2; /*0x4cd39a*/
  return result; /*0x4cd38b*/
}
