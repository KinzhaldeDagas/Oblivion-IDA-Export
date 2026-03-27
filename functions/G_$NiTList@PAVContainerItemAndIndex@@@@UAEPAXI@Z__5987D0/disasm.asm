0x5987D0: push    esi
0x5987D1: mov     esi, ecx
0x5987D3: call    ??1?$NiTList@PAVContainerItemAndIndex@@@@UAE@XZ; NiTList<ContainerItemAndIndex *>::~NiTList<ContainerItemAndIndex *>(void)
0x5987D8: test    [esp+4+arg_0], 1
0x5987DD: jz      short loc_5987E8
0x5987DF: push    esi
0x5987E0: call    FormHeapFree
0x5987E5: add     esp, 4
0x5987E8: mov     eax, esi
0x5987EA: pop     esi
0x5987EB: retn    4
