int __cdecl sub_948BC0(int a1)
{
  int result; // eax

  switch ( *(_DWORD *)(a1 + 0x54) )
  {
    case 1:
    case 5:
      result = 0x35;
      break;
    case 2:
    case 7:
      result = def_948BD2();
      break;
    case 3:
      result = 0x19;
      break;
    case 4:
      result = 0x25;
      break;
    case 6:
      result = 0xC * (*(_DWORD *)(*(_DWORD *)(a1 + 0x50) + 4) + *(_DWORD *)(*(_DWORD *)(a1 + 0x50) + 0x10)) + 0x25;
      break;
    case 8:
    case 9:
      result = 0x41;
      break;
    default:
      JUMPOUT(0x948C0A);
  }
  return result;
}
