int __usercall unknown_libname_16_::unknown_libname_21@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5@<ebp>)
{
  switch ( a2 ) /*0x985544*/
  {
    case 0: /*0x985544*/
      return ((int (__usercall *)@<eax>(int@<ebp>))funcs_9855A0[a1])(a5);
    case 1: /*0x985544*/
      goto UnwindUp1_0;
    case 2: /*0x985544*/
      goto UnwindUp2_0;
    case 3: /*0x985544*/
      goto UnwindUp3_0;
    case 4: /*0x985544*/
      goto UnwindUp4_0;
    case 5: /*0x985544*/
      goto UnwindUp5_0;
    case 6: /*0x985544*/
      goto UnwindUp6_0;
    case 7: /*0x985544*/
      *(_DWORD *)(a3 + 4 * a2 - 0x1C) = *(_DWORD *)(a4 + 4 * a2 - 0x1C); /*0x9855ec*/
UnwindUp6_0:
      *(_DWORD *)(a3 + 4 * a2 - 0x18) = *(_DWORD *)(a4 + 4 * a2 - 0x18); /*0x9855f0*/
UnwindUp5_0:
      *(_DWORD *)(a3 + 4 * a2 - 0x14) = *(_DWORD *)(a4 + 4 * a2 - 0x14); /*0x9855f8*/
UnwindUp4_0:
      *(_DWORD *)(a3 + 4 * a2 - 0x10) = *(_DWORD *)(a4 + 4 * a2 - 0x10); /*0x985600*/
UnwindUp3_0:
      *(_DWORD *)(a3 + 4 * a2 - 0xC) = *(_DWORD *)(a4 + 4 * a2 - 0xC); /*0x985608*/
UnwindUp2_0:
      *(_DWORD *)(a3 + 4 * a2 - 8) = *(_DWORD *)(a4 + 4 * a2 - 8); /*0x985610*/
UnwindUp1_0:
      *(_DWORD *)(a3 + 4 * a2 - 4) = *(_DWORD *)(a4 + 4 * a2 - 4); /*0x985618*/
      return ((int (__usercall *)@<eax>(int@<ebp>))funcs_9855A0[a1])(a5);
  }
}
