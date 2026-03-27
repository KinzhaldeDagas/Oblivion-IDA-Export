signed int __cdecl sub_774EE0(signed int a1)
{
  signed int result; // eax
  bool v2; // zf

  if ( a1 > 0x3154454D )
  {
    if ( a1 > 0x34545844 )
    {
      if ( a1 > 0x47424752 )
      {
        v2 = a1 == 0x59565955;
      }
      else
      {
        if ( a1 == 0x47424752 || a1 == 0x35545844 )
          return 0;
        v2 = a1 == 0x42475247;
      }
    }
    else
    {
      if ( a1 == 0x34545844 )
        return 0;
      if ( a1 > 0x32595559 )
      {
        v2 = a1 == 0x33545844;
      }
      else
      {
        if ( a1 == 0x32595559 || a1 == 0x31545844 )
          return 0;
        v2 = a1 == 0x32545844;
      }
    }
    if ( !v2 )
      return 0xFFFFFFFF;
    return 0;
  }
  if ( a1 == 0x3154454D )
    return 0;
  switch ( a1 )
  {
    case 0:
    case 0x64:
      return 0;
    case 0x14:
      result = 0x18;
      break;
    case 0x15:
    case 0x16:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x23:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x43:
    case 0x47:
    case 0x4B:
    case 0x4D:
    case 0x4F:
    case 0x52:
    case 0x53:
    case 0x66:
    case 0x70:
    case 0x72:
      result = 0x20;
      break;
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1D:
    case 0x1E:
    case 0x22:
    case 0x28:
    case 0x33:
    case 0x3C:
    case 0x3D:
    case 0x46:
    case 0x49:
    case 0x50:
    case 0x51:
    case 0x65:
    case 0x6F:
    case 0x75:
      result = 0x10;
      break;
    case 0x1B:
    case 0x1C:
    case 0x29:
    case 0x32:
    case 0x34:
      result = 8;
      break;
    case 0x24:
    case 0x6E:
    case 0x71:
    case 0x73:
      result = 0x40;
      break;
    case 0x74:
      result = 0x80;
      break;
    default:
      return 0xFFFFFFFF;
  }
  return result;
}
