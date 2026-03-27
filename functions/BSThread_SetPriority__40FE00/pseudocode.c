BOOL __cdecl BSThread_SetPriority(int a1)
{
  BOOL result; // eax

  switch ( a1 )
  {
    case 0:
      dword_B33438 = a1;
      result = SetThreadPriority(hHandle, 0xFFFFFFFE);
      break;
    case 1:
      dword_B33438 = a1;
      result = SetThreadPriority(hHandle, 0xFFFFFFFF);
      break;
    case 3:
      dword_B33438 = a1;
      result = SetThreadPriority(hHandle, 1);
      break;
    case 4:
      dword_B33438 = a1;
      result = SetThreadPriority(hHandle, 2);
      break;
    case 5:
      dword_B33438 = a1;
      result = SetThreadPriority(hHandle, 0xF);
      break;
    default:
      dword_B33438 = a1;
      result = SetThreadPriority(hHandle, 0);
      break;
  }
  return result;
}
