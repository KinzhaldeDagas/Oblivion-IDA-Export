_DWORD *__cdecl sub_774AE0(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)(a1 - 0x46);
  switch ( a1 )
  {
    case 'F':
      *a2 = 0x10;
      *a3 = 0;
      result = a2;
      break;
    case 'G':
      *a2 = 0x20;
      *a3 = 0;
      break;
    case 'I':
      *a2 = 0xF;
      *a3 = 1;
      result = a2;
      break;
    case 'K':
      *a2 = 0x18;
      *a3 = 8;
      result = a3;
      break;
    case 'M':
      *a2 = 0x18;
      *a3 = 0;
      break;
    case 'O':
      *a2 = 0x18;
      *a3 = 4;
      result = a2;
      break;
    case 'P':
      *a2 = 0x10;
      *a3 = 0;
      result = a3;
      break;
    default:
      *a2 = 0;
      *a3 = 0;
      result = a3;
      break;
  }
  return result;
}
