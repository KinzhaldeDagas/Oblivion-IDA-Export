void __stdcall sub_7F63D0(int a1, unsigned __int16 a2, int a3, _DWORD *a4, unsigned int *a5)
{
  if ( a2 > 0x11Bu )
  {
    switch ( a2 )
    {
      case 0x122u:
        sub_85E160(a5, a1, 0, a3, a4, 1);
        break;
      case 0x129u:
        sub_85E300(a5, a1, 0, a3, a4, 1);
        break;
      case 0x194u:
        sub_85C7D0(a5, a1, 0, a3, (int)a4, 1);
        break;
    }
  }
  else if ( a2 == 0x11B )
  {
    sub_85E050(a5, a1, 0, a3, a4, 1);
  }
  else
  {
    switch ( a2 )
    {
      case 0x18u:
        sub_85BF40(a5, a1, 0, a3, (int)a4, 1);
        break;
      case 0x2Fu:
        sub_85BFD0(a5, a1, 0, a3, a4, 1);
        break;
      case 0x30u:
        sub_85C110(a5, a1, 0, a3, a4, 1);
        break;
      case 0x33u:
        sub_85C250(a5, a1, 0, a3, a4, 1);
        break;
      case 0x54u:
        sub_85D380(a5, a1, 0, a3, a4, 1);
        break;
      case 0x5Fu:
        sub_85D500(a5, a1, 0, a3, a4, 1);
        break;
      case 0x6Au:
        sub_85D720(a5, a1, 0, a3, a4, 1);
        break;
      case 0x75u:
        sub_85D8A0(a5, a1, 0, a3, a4, 1);
        break;
      case 0x82u:
        sub_85C870(a5, a1, 0, a3, a4, 1);
        break;
      case 0x90u:
        sub_85CA00(a5, a1, 0, a3, a4, 1);
        break;
      case 0x9Du:
        sub_85CC20(a5, a1, 0, a3, a4, 1);
        break;
      case 0xAAu:
        sub_85CDB0(a5, a1, 0, a3, a4, 1);
        break;
      case 0xB8u:
        sub_85CFD0(a5, a1, 0, a3, a4, 1);
        break;
      case 0xC5u:
        sub_85D160(a5, a1, 0, a3, a4, 1);
        break;
      case 0xD2u:
        sub_85DAC0(a5, a1, 0, a3, a4, 1);
        break;
      case 0xDFu:
        sub_85DC50(a5, a1, 0, a3, a4, 1);
        break;
      case 0xE6u:
        sub_85C370(a5, a1, 0, a3, a4, 1);
        break;
      case 0xE7u:
        sub_85C450(a5, a1, 0, a3, a4, 1);
        break;
      case 0xEEu:
        sub_85DE70(a5, a1, 0, a3, a4, 1);
        break;
      case 0xFCu:
        sub_85DF60(a5, a1, 0, a3, a4, 1);
        break;
      case 0x10Bu:
        sub_85C530(a5, a1, 0, a3, (int)a4, 1);
        break;
      case 0x113u:
        sub_85C610(a5, a1, 0, a3, a4, 1);
        break;
      case 0x114u:
        sub_85C6F0(a5, a1, 0, a3, a4, 1);
        break;
      default:
        return;
    }
  }
}
