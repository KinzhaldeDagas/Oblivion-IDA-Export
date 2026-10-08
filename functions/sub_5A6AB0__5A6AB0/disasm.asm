0x5A6AB0: push    esi
0x5A6AB1: mov     esi, ecx
0x5A6AB3: push    edi
0x5A6AB4: mov     edi, [esi+0Ch]
0x5A6AB7: cmp     edi, [esi+8]
0x5A6ABA: jb      short loc_5A6AC7
0x5A6ABC: mov     eax, [esi+14h]
0x5A6ABF: add     eax, edi
0x5A6AC1: push    eax
0x5A6AC2: call    NiTLargeArray_Resize32; MEF SAVE PERF PASS2 2026-10-08: PERF-20 VERIFIED: on used>=capacity, append requests used+growBy from452910, then writes at old used via446C50. Resize copies used DWORDs and zeroes spare slots. LoadGame local queue starts50/grow50 every invocation. N=100000 appended slots =>1999 growth allocations and399800000 copied bytes, excluding initial allocation/record payloads. Other callers463A26 and5A7EC9 prevent a blanket global policy change.
0x5A6AC7: mov     ecx, [esp+8+value]
0x5A6ACB: push    ecx; value
0x5A6ACC: push    edi; index
0x5A6ACD: mov     ecx, esi; self
0x5A6ACF: call    NiTLargeArray32_SetSlot
0x5A6AD4: mov     eax, edi
0x5A6AD6: pop     edi
0x5A6AD7: pop     esi
0x5A6AD8: retn    4
