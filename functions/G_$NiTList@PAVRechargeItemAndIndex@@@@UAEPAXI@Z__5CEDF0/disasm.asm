0x5CEDF0: push    esi
0x5CEDF1: mov     esi, ecx
0x5CEDF3: call    ??1?$NiTList@PAVRechargeItemAndIndex@@@@UAE@XZ; NiTList<RechargeItemAndIndex *>::~NiTList<RechargeItemAndIndex *>(void)
0x5CEDF8: test    [esp+4+arg_0], 1
0x5CEDFD: jz      short loc_5CEE08
0x5CEDFF: push    esi
0x5CEE00: call    FormHeapFree
0x5CEE05: add     esp, 4
0x5CEE08: mov     eax, esi
0x5CEE0A: pop     esi
0x5CEE0B: retn    4
