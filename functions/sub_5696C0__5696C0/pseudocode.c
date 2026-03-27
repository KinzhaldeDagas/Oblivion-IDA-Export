char *__thiscall sub_5696C0(char *this, char *a2)
{
  char *result; // eax

  result = this;
  *this = *a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 2);
  switch ( *this )
  {
    case 0:
    case 5:
      *((_DWORD *)this + 2) = *((_DWORD *)a2 + 1);
      break;
    case 1:
      *((_DWORD *)this + 2) = *((_DWORD *)a2 + 1);
      *((_DWORD *)this + 1) = 0;
      break;
    case 2:
    case 3:
      *((_DWORD *)this + 2) = 0;
      result = (char *)def_5696D8(a2);
      break;
    case 4:
      *((_DWORD *)this + 2) = *((_DWORD *)a2 + 1);
      break;
    default:
      JUMPOUT(0x569708);
  }
  return result;
}
