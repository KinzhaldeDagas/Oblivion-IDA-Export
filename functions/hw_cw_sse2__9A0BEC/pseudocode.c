int __fastcall __hw_cw_sse2(int a1, int a2)
{
  int result; // eax
  int v3; // ecx
  int v4; // edx

  result = 0;
  if ( (a2 & 0x10) != 0 )
    result = 0x80;
  if ( (a2 & 8) != 0 )
    result |= 0x200u;
  if ( (a2 & 4) != 0 )
    result |= 0x400u;
  if ( (a2 & 2) != 0 )
    result |= 0x800u;
  if ( (a2 & 1) != 0 )
    result |= 0x1000u;
  if ( (a2 & 0x80000) != 0 )
    result |= 0x100u;
  v3 = a2 & 0x300;
  if ( (a2 & 0x300) != 0 )
  {
    switch ( v3 )
    {
      case 0x100:
        result |= 0x2000u;
        break;
      case 0x200:
        result |= 0x4000u;
        break;
      case 0x300:
        result |= 0x6000u;
        break;
    }
  }
  v4 = a2 & 0x3000000;
  switch ( v4 )
  {
    case 0x1000000:
      return result | 0x8040;
    case 0x2000000:
      return result | 0x40;
    case 0x3000000:
      return result | 0x8000;
  }
  return result;
}
