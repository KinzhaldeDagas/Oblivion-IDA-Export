int __cdecl sub_52B780(char a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = *(_DWORD *)dword_B39338;
      break;
    case 1:
      result = *(_DWORD *)dword_B39340;
      break;
    case 2:
      result = *(_DWORD *)dword_B39348;
      break;
    case 3:
      result = *(_DWORD *)dword_B39350;
      break;
    case 4:
      result = *(_DWORD *)dword_B39358;
      break;
    case 5:
      result = *(_DWORD *)dword_B39360;
      break;
    case 6:
      result = *(_DWORD *)dword_B39368;
      break;
    case 7:
      result = *(_DWORD *)dword_B39370;
      break;
    case 8:
      result = *(_DWORD *)dword_B39378;
      break;
    case 9:
      result = *(_DWORD *)dword_B39380;
      break;
    case 0xA:
      result = *(_DWORD *)dword_B39388;
      break;
    case 0xB:
      result = *(_DWORD *)dword_B39390;
      break;
    case 0xC:
      result = *(_DWORD *)dword_B39398;
      break;
    case 0xD:
      result = *(_DWORD *)dword_B393A0;
      break;
    case 0xE:
      result = *(_DWORD *)dword_B393A8;
      break;
    case 0xF:
      result = *(_DWORD *)dword_B393B0;
      break;
    default:
      JUMPOUT(0x52B7F1);
  }
  return result;
}
