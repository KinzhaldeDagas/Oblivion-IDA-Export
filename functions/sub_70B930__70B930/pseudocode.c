_DWORD *__thiscall sub_70B930(_DWORD *this, _DWORD *data)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  bool v5; // zf

  result = (_DWORD *)*(this + 0x30); /*0x70b933*/
  if ( result ) /*0x70b93b*/
  {
    v4 = data; /*0x70b93e*/
    while ( 1 ) /*0x70b942*/
    {
      v5 = data == (_DWORD *)result[2]; /*0x70b942*/
      result = (_DWORD *)*result; /*0x70b94a*/
      if ( v5 ) /*0x70b94c*/
        break; /*0x70b94c*/
      if ( !result ) /*0x70b950*/
        return result; /*0x70b950*/
    }
    NiTPointerList_RemoveByData(this + 0x2F, (void **)&data); /*0x70b966*/
    return sub_70B930(v4, this); /*0x70b96e*/
  }
  return result; /*0x70b953*/
}
