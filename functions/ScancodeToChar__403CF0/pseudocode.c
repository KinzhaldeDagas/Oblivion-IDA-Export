int __stdcall ScancodeToChar(int a1, int a2)
{
  int result; // eax

  if ( (unsigned int)a1 > 0xFF )
    return 0xFFFFFFFF;
  switch ( dword_B02C44 )
  {
    case 1:
      if ( a2 )
        result = (unsigned __int8)byte_B02498[a1];
      else
        result = (unsigned __int8)byte_B02398[a1];
      break;
    case 2:
      if ( a2 )
        result = (unsigned __int8)byte_B02698[a1];
      else
        result = (unsigned __int8)byte_B02598[a1];
      break;
    case 3:
      if ( a2 )
        result = (unsigned __int8)byte_B02898[a1];
      else
        result = (unsigned __int8)byte_B02798[a1];
      break;
    case 4:
      if ( a2 )
        result = (unsigned __int8)byte_B02A98[a1];
      else
        result = (unsigned __int8)byte_B02998[a1];
      break;
    default:
      if ( a2 )
        result = (unsigned __int8)byte_B02298[a1];
      else
        result = (unsigned __int8)byte_B02198[a1];
      break;
  }
  return result;
}
