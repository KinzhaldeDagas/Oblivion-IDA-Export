_BYTE *__thiscall sub_918560(_DWORD ***this, unsigned __int8 a2)
{
  _BYTE *result; // eax
  char v4; // [esp+7h] [ebp-5h] BYREF
  int v5; // [esp+8h] [ebp-4h] BYREF

  if ( a2 == 0xC2 ) /*0x918570*/
  {
    sub_947910(*(this + 2), (char *)&v5, 4, 1); /*0x9185b9*/
    result = (_BYTE *)sub_918060(*(this + 2), (int)&v4); /*0x9185c6*/
    if ( *result ) /*0x9185cb*/
      return ((_BYTE *(__thiscall *)(_DWORD ***, int))(*(this + 0xFFFFFFFF))[5])(this + 0xFFFFFFFF, v5); /*0x9185db*/
  }
  else
  {
    result = (_BYTE *)(a2 - 0xC3); /*0x918572*/
    if ( a2 == 0xC3 ) /*0x918573*/
    {
      sub_947910(*(this + 2), (char *)&v5, 4, 1); /*0x918581*/
      result = (_BYTE *)sub_918060(*(this + 2), (int)&a2); /*0x91858e*/
      if ( *result ) /*0x918593*/
        return ((_BYTE *(__thiscall *)(_DWORD ***, int))(*(this + 0xFFFFFFFF))[6])(this + 0xFFFFFFFF, v5); /*0x9185a3*/
    }
  }
  return result; /*0x9185a6*/
}
