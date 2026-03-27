bool __cdecl sub_9A6670(int a1, int a2)
{
  if ( *(_BYTE *)(a1 + 0xAC) )
  {
    switch ( a2 )
    {
      case 1:
        return !sub_435CC0((int)dword_B40224, a1);
      case 2:
        return sub_435CC0((int)dword_B3FD80, a1);
      case 3:
        return sub_435CC0((int)dword_B3FCFC, a1);
      case 4:
        return sub_435CC0((int)dword_B40190, a1);
      default:
        break;
    }
  }
  JUMPOUT(0x9A66D9);
}
