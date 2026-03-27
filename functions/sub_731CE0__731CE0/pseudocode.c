_DWORD *__thiscall sub_731CE0(_DWORD **this, _DWORD *a2)
{
  _DWORD *result; // eax

  if ( !a2 )
    JUMPOUT(0x731D60);
  if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 0x84))(a2) <= 3 )
    return sub_731BF0(this + 3, (int)a2);
  result = (_DWORD *)a2[0x52];
  switch ( (unsigned int)result )
  {
    case 0u:
      result = sub_731BF0(this + 4, (int)a2);
      *((_BYTE *)this + 8) = 1;
      break;
    case 1u:
      result = sub_731BF0(this + 5, (int)a2);
      *((_BYTE *)this + 8) = 1;
      break;
    case 2u:
      *(this + 6) = a2;
      *((_BYTE *)this + 8) = 1;
      break;
    case 3u:
      *(this + 7) = a2;
      result = (_DWORD *)def_731D1A(a2);
      break;
    default:
      JUMPOUT(0x731D5C);
  }
  return result;
}
