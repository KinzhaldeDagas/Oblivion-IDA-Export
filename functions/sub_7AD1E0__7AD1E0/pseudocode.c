_DWORD *__thiscall sub_7AD1E0(_DWORD *this, void *data)
{
  _DWORD *result; // eax
  unsigned int v4; // edx
  unsigned int v5; // esi

  result = (_DWORD *)*(this + 0x88C); /*0x7ad1e3*/
  if ( result ) /*0x7ad1eb*/
  {
    v4 = (unsigned int)data; /*0x7ad1ed*/
    while ( 1 ) /*0x7ad1f2*/
    {
      v5 = result[2]; /*0x7ad1f2*/
      result = (_DWORD *)*result; /*0x7ad1fa*/
      data = (void *)v5; /*0x7ad1fc*/
      if ( v5 ) /*0x7ad200*/
      {
        if ( *(_DWORD *)(v5 + 0x10) == v4 ) /*0x7ad205*/
          break; /*0x7ad205*/
      }
      if ( !result ) /*0x7ad209*/
        return result; /*0x7ad209*/
    }
    if ( *(_DWORD *)(v5 + 0x14) ) /*0x7ad210*/
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v5 + 0x14) + 8))(*(_DWORD *)(v5 + 0x14)); /*0x7ad21f*/
      *(_DWORD *)(v5 + 0x14) = 0; /*0x7ad221*/
    }
    FormHeapFree(v5); /*0x7ad229*/
    return NiTPointerList_RemoveByData(this + 0x88B, &data); /*0x7ad23c*/
  }
  return result; /*0x7ad20c*/
}
