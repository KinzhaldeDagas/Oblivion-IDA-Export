void __cdecl sub_948BC0(int a1)
{
  switch ( *(_DWORD *)(a1 + 0x54) ) /*0x948bd2*/
  {
    case 1: /*0x948bd2*/
    case 3: /*0x948bd2*/
    case 4: /*0x948bd2*/
    case 5: /*0x948bd2*/
    case 6: /*0x948bd2*/
    case 8: /*0x948bd2*/
    case 9: /*0x948bd2*/
      return;
    case 2: /*0x948bd2*/
    case 7: /*0x948bd2*/
      def_948BD2(); /*0x948c06*/
      break; /*0x948c06*/
    default:
      JUMPOUT(0x948C0A); /*0x948c0a*/
  }
}
