0x7175C0: push    0FFFFFFFFh
0x7175C2: push    offset SEH_8C62B0
0x7175C7: mov     eax, large fs:0
0x7175CD: push    eax
0x7175CE: push    ecx
0x7175CF: push    esi
0x7175D0: mov     eax, ds:0B30AACh
0x7175D5: xor     eax, esp
0x7175D7: push    eax
0x7175D8: lea     eax, [esp+18h+var_C]
0x7175DC: mov     large fs:0, eax
0x7175E2: push    0C0h ; 'À'; Size
0x7175E7: call    FormHeapAlloc
0x7175EC: mov     esi, eax
0x7175EE: add     esp, 4
0x7175F1: mov     [esp+18h+var_10], esi
0x7175F5: xor     eax, eax
0x7175F7: cmp     esi, eax
0x7175F9: mov     [esp+18h+var_4], eax
0x7175FD: jz      short loc_71760E
0x7175FF: mov     ecx, esi
0x717601: call    sub_7226C0
0x717606: mov     dword ptr [esi], offset ??_7NiTriShape@@6B@; const NiTriShape::`vftable'
0x71760C: mov     eax, esi
0x71760E: mov     ecx, [esp+18h+var_C]
0x717612: mov     large fs:0, ecx
0x717619: pop     ecx
0x71761A: pop     esi
0x71761B: add     esp, 10h
0x71761E: retn
