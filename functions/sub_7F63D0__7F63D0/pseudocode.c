void __stdcall sub_7F63D0(int a1, unsigned __int16 a2, int a3, _DWORD *a4, NiTArray_NiD3DPass *a5)
{
  if ( a2 > 0x11Bu ) /*0x7f63da*/
  {
    switch ( a2 ) /*0x7f66ef*/
    {
      case 0x122u: /*0x7f66ef*/
        sub_85E160(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f6750*/
        break;
      case 0x129u: /*0x7f66ef*/
        sub_85E300(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f6731*/
        break;
      case 0x194u: /*0x7f66ef*/
        sub_85C7D0(a5, a1, 0, a3, (int)a4, (NiD3DPass *)1); /*0x7f6712*/
        break;
    }
  }
  else if ( a2 == 0x11B ) /*0x7f63e0*/
  {
    sub_85E050(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f66e2*/
  }
  else
  {
    switch ( a2 ) /*0x7f63fb*/
    {
      case 0x18u: /*0x7f63fb*/
        sub_85BF40(a5, a1, 0, a3, (int)a4, 1); /*0x7f6419*/
        break; /*0x7f641e*/
      case 0x2Fu: /*0x7f63fb*/
        sub_85BFD0(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f6438*/
        break; /*0x7f643d*/
      case 0x30u: /*0x7f63fb*/
        sub_85C110(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f6457*/
        break; /*0x7f645c*/
      case 0x33u: /*0x7f63fb*/
        sub_85C250(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f6476*/
        break; /*0x7f647b*/
      case 0x54u: /*0x7f63fb*/
        sub_85D380(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f6530*/
        break; /*0x7f6535*/
      case 0x5Fu: /*0x7f63fb*/
        sub_85D500(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f654f*/
        break; /*0x7f6554*/
      case 0x6Au: /*0x7f63fb*/
        sub_85D720(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f656e*/
        break; /*0x7f6573*/
      case 0x75u: /*0x7f63fb*/
        sub_85D8A0(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f658d*/
        break; /*0x7f6592*/
      case 0x82u: /*0x7f63fb*/
        sub_85C870(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f65ac*/
        break; /*0x7f65b1*/
      case 0x90u: /*0x7f63fb*/
        sub_85CA00(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f65cb*/
        break; /*0x7f65d0*/
      case 0x9Du: /*0x7f63fb*/
        sub_85CC20(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f65ea*/
        break; /*0x7f65ef*/
      case 0xAAu: /*0x7f63fb*/
        sub_85CDB0(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f6609*/
        break; /*0x7f660e*/
      case 0xB8u: /*0x7f63fb*/
        sub_85CFD0(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f6628*/
        break; /*0x7f662d*/
      case 0xC5u: /*0x7f63fb*/
        sub_85D160(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f6647*/
        break; /*0x7f664c*/
      case 0xD2u: /*0x7f63fb*/
        sub_85DAC0(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f6666*/
        break; /*0x7f666b*/
      case 0xDFu: /*0x7f63fb*/
        sub_85DC50(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f6685*/
        break; /*0x7f668a*/
      case 0xE6u: /*0x7f63fb*/
        sub_85C370(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f6495*/
        break; /*0x7f649a*/
      case 0xE7u: /*0x7f63fb*/
        sub_85C450(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f64b4*/
        break; /*0x7f64b9*/
      case 0xEEu: /*0x7f63fb*/
        sub_85DE70(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f66a4*/
        break; /*0x7f66a9*/
      case 0xFCu: /*0x7f63fb*/
        sub_85DF60(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f66c3*/
        break; /*0x7f66c8*/
      case 0x10Bu: /*0x7f63fb*/
        sub_85C530(a5, a1, 0, a3, (int)a4, (NiD3DPass *)1); /*0x7f6511*/
        break; /*0x7f6516*/
      case 0x113u: /*0x7f63fb*/
        sub_85C610(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f64d3*/
        break; /*0x7f64d8*/
      case 0x114u: /*0x7f63fb*/
        sub_85C6F0(a5, a1, 0, a3, a4, (NiD3DPass *)1); /*0x7f64f2*/
        break; /*0x7f64f7*/
      default:
        return;
    }
  }
}
