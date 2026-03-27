_BYTE *__thiscall sub_918560(_DWORD ***this, unsigned __int8 a2)
{
  _BYTE *result; // eax
  char v4; // [esp+7h] [ebp-5h] BYREF
  int v5; // [esp+8h] [ebp-4h] BYREF

  if ( a2 == 0xC2 )
  {
    sub_947910(*(this + 2), (char *)&v5, 4, 1);
    result = (_BYTE *)sub_918060(*(this + 2), (int)&v4);
    if ( *result )
      return ((_BYTE *(__thiscall *)(_DWORD ***, int))(*(this + 0xFFFFFFFF))[5])(this + 0xFFFFFFFF, v5);
  }
  else
  {
    result = (_BYTE *)(a2 - 0xC3);
    if ( a2 == 0xC3 )
    {
      sub_947910(*(this + 2), (char *)&v5, 4, 1);
      result = (_BYTE *)sub_918060(*(this + 2), (int)&a2);
      if ( *result )
        return ((_BYTE *(__thiscall *)(_DWORD ***, int))(*(this + 0xFFFFFFFF))[6])(this + 0xFFFFFFFF, v5);
    }
  }
  return result;
}
