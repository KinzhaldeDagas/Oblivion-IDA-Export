void __stdcall sub_7F6150(int a1, int a2, int a3, NiD3DTextureStage *a4, NiTArray_NiD3DPass *a5)
{
  if ( (unsigned __int16)a2 > 0x168u ) /*0x7f615a*/
  {
    switch ( (__int16)a2 ) /*0x7f61d7*/
    {
      case 0x169: /*0x7f61d7*/
        ((void (__thiscall *)(NiTArray_NiD3DPass *, int, _DWORD, int, NiD3DTextureStage *, _DWORD))loc_846C50)( /*0x7f6290*/
          a5,
          a1,
          0,
          a3,
          a4,
          0);
        return; /*0x7f6295*/
      case 0x16A: /*0x7f61d7*/
        sub_846DC0(a5, a1, 0, a3, a4, 0); /*0x7f62af*/
        return; /*0x7f62b4*/
      case 0x16B: /*0x7f61d7*/
        sub_8479E0(a5, a1, 0, a3, a4, 0); /*0x7f634a*/
        return; /*0x7f634f*/
      case 0x16C: /*0x7f61d7*/
        sub_846F90(a5, a1, 0, a3, a4, 0); /*0x7f62ce*/
        return; /*0x7f62d3*/
      case 0x16D: /*0x7f61d7*/
        sub_851250(a5, a1, 0, a3, (int)a4, 0); /*0x7f6214*/
        return; /*0x7f6219*/
      case 0x16E: /*0x7f61d7*/
        sub_850F60(a5, a1, 0, a3, a4, 0); /*0x7f61f5*/
        return; /*0x7f61fa*/
      case 0x16F: /*0x7f61d7*/
        sub_846570(a5, a1, 0, a3, a4, 0); /*0x7f6271*/
        return; /*0x7f6276*/
      case 0x170: /*0x7f61d7*/
        sub_851520(a5, a1, 0, a3, (int)a4, 0); /*0x7f6233*/
        return; /*0x7f6238*/
      case 0x171: /*0x7f61d7*/
        sub_8519B0(a5, a1, 0, a3, a4, 0); /*0x7f6252*/
        return; /*0x7f6257*/
      case 0x172: /*0x7f61d7*/
        sub_847160(a5, a1, 0, a3, a4, 0); /*0x7f62ed*/
        return; /*0x7f62f2*/
      case 0x173: /*0x7f61d7*/
        sub_847400(a5, a1, 0, a3, a4, 0); /*0x7f630c*/
        return; /*0x7f6311*/
      case 0x174: /*0x7f61d7*/
        sub_8476F0(a5, a1, 0, a3, a4, 0); /*0x7f632b*/
        return; /*0x7f6330*/
      case 0x175: /*0x7f61d7*/
        sub_847D50(a5, a1, 0, a3, a4, 0); /*0x7f6369*/
        return; /*0x7f636e*/
      case 0x176: /*0x7f61d7*/
        sub_846890(a5, a1, 0, a3, (float *)&a4->Stage, 0); /*0x7f6388*/
        def_7F61D7(a1, a2, a3, (int)a4, (int)a5); /*0x7f6389*/
        return; /*0x7f6389*/
      default:
        goto LABEL_23;
    }
  }
  switch ( (unsigned __int16)a2 ) /*0x7f615c*/
  {
    case 0x168u: /*0x7f615c*/
      sub_8517F0(a5, a1, 0, a3, a4, 0); /*0x7f61c1*/
      break;
    case 0x48u: /*0x7f615c*/
      sub_850C70(a5, a1, 0, a3, a4, 0); /*0x7f61a2*/
      break;
    case 0x49u: /*0x7f615c*/
      sub_846250(a5, a1, 0, a3, a4, 0); /*0x7f6183*/
      break;
    default:
LABEL_23:
      JUMPOUT(0x7F638D); /*0x7f638d*/
  }
}
