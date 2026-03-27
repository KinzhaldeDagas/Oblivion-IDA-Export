char __cdecl sub_7623D0(int a1, _DWORD *a2, _DWORD *a3)
{
  char result; // al

  *a3 &= 0xFFFFFF0F;
  switch ( a1 )
  {
    case 0:
      *a2 = 1;
      *a3 |= 0x50u;
      result = 1;
      break;
    case 1:
      *a2 = 1;
      *a3 |= 0x40u;
      result = 1;
      break;
    case 2:
      *a2 = 1;
      *a3 |= 0x80u;
      result = 1;
      break;
    case 3:
      *a2 = 1;
      *a3 |= 0x20u;
      result = 1;
      break;
    case 4:
      *a2 = 2;
      *a3 |= 0x20u;
      result = 1;
      break;
    case 5:
      *a2 = 2;
      *a3 |= 0x40u;
      result = 1;
      break;
    case 6:
      *a2 = 2;
      *a3 |= 0x80u;
      result = 1;
      break;
    default:
      JUMPOUT(0x762460);
  }
  return result;
}
