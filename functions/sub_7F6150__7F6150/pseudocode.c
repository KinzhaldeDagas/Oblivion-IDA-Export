void __stdcall sub_7F6150(int a1, int a2, int a3, _DWORD *a4, NiTArray_NiD3DPass *a5)
{
  if ( (unsigned __int16)a2 > 0x168u )
  {
    switch ( (__int16)a2 )
    {
      case 0x169:
        ((void (__thiscall *)(NiTArray_NiD3DPass *, int, _DWORD, int, _DWORD *, _DWORD))loc_846C50)(
          a5,
          a1,
          0,
          a3,
          a4,
          0);
        return;
      case 0x16A:
        sub_846DC0(a5, a1, 0, a3, a4, 0);
        return;
      case 0x16B:
        sub_8479E0(a5, a1, 0, a3, a4, 0);
        return;
      case 0x16C:
        sub_846F90(a5, a1, 0, a3, a4, 0);
        return;
      case 0x16D:
        sub_851250(a5, a1, 0, a3, (int)a4, 0);
        return;
      case 0x16E:
        sub_850F60(a5, a1, 0, a3, a4, 0);
        return;
      case 0x16F:
        sub_846570(a5, a1, 0, a3, a4, 0);
        return;
      case 0x170:
        sub_851520(a5, a1, 0, a3, (int)a4, 0);
        return;
      case 0x171:
        sub_8519B0(a5, a1, 0, a3, a4, 0);
        return;
      case 0x172:
        sub_847160(a5, a1, 0, a3, a4, 0);
        return;
      case 0x173:
        sub_847400(a5, a1, 0, a3, a4, 0);
        return;
      case 0x174:
        sub_8476F0(a5, a1, 0, a3, a4, 0);
        return;
      case 0x175:
        sub_847D50(a5, a1, 0, a3, a4, 0);
        return;
      case 0x176:
        sub_846890(a5, a1, 0, a3, a4, 0);
        def_7F61D7(a1, a2, a3, a4, a5);
        return;
      default:
        goto LABEL_23;
    }
  }
  switch ( (unsigned __int16)a2 )
  {
    case 0x168u:
      sub_8517F0(a5, a1, 0, a3, a4, 0);
      break;
    case 0x48u:
      sub_850C70(a5, a1, 0, a3, a4, 0);
      break;
    case 0x49u:
      sub_846250(a5, a1, 0, a3, a4, 0);
      break;
    default:
LABEL_23:
      JUMPOUT(0x7F638D);
  }
}
