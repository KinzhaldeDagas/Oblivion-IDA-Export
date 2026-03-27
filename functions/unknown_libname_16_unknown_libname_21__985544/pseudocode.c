int __usercall unknown_libname_16_::unknown_libname_21@<eax>(int a1@<edx>, int a2@<ecx>, int a3@<edi>, int a4@<esi>)
{
  switch ( a2 )
  {
    case 0:
      return funcs_9855A0[a1]();
    case 1:
      goto UnwindUp1_0;
    case 2:
      goto UnwindUp2_0;
    case 3:
      goto UnwindUp3_0;
    case 4:
      goto UnwindUp4_0;
    case 5:
      goto UnwindUp5_0;
    case 6:
      goto UnwindUp6_0;
    case 7:
      *(_DWORD *)(a3 + 4 * a2 - 0x1C) = *(_DWORD *)(a4 + 4 * a2 - 0x1C);
UnwindUp6_0:
      *(_DWORD *)(a3 + 4 * a2 - 0x18) = *(_DWORD *)(a4 + 4 * a2 - 0x18);
UnwindUp5_0:
      *(_DWORD *)(a3 + 4 * a2 - 0x14) = *(_DWORD *)(a4 + 4 * a2 - 0x14);
UnwindUp4_0:
      *(_DWORD *)(a3 + 4 * a2 - 0x10) = *(_DWORD *)(a4 + 4 * a2 - 0x10);
UnwindUp3_0:
      *(_DWORD *)(a3 + 4 * a2 - 0xC) = *(_DWORD *)(a4 + 4 * a2 - 0xC);
UnwindUp2_0:
      *(_DWORD *)(a3 + 4 * a2 - 8) = *(_DWORD *)(a4 + 4 * a2 - 8);
UnwindUp1_0:
      *(_DWORD *)(a3 + 4 * a2 - 4) = *(_DWORD *)(a4 + 4 * a2 - 4);
      return funcs_9855A0[a1]();
  }
}
