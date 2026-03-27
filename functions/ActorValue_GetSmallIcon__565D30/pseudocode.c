int __cdecl ActorValue_GetSmallIcon(unsigned int a1)
{
  if ( a1 <= 0x20 )
  {
    switch ( a1 )
    {
      case 0u:
        return sAttributeIconSmallStrength;
      case 1u:
        return dword_B3A2C4;
      case 2u:
        return sAttributeIconSmallWillpower;
      case 3u:
        return dword_B3A2D4;
      case 4u:
        return dword_B3A2DC;
      case 5u:
        return dword_B3A2E4;
      case 6u:
        return dword_B3A2EC;
      case 7u:
        return sAttributeIconSmallLuck;
      default:
        break;
    }
  }
  JUMPOUT(0x565D75);
}
