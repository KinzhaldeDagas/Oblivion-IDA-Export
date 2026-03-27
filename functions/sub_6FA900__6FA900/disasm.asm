0x6FA900: push    0FFFFFFFFh
0x6FA902: push    offset SEH_8C62B0
0x6FA907: mov     eax, large fs:0
0x6FA90D: push    eax
0x6FA90E: push    ecx
0x6FA90F: push    esi
0x6FA910: mov     eax, ds:0B30AACh
0x6FA915: xor     eax, esp
0x6FA917: push    eax
0x6FA918: lea     eax, [esp+18h+var_C]
0x6FA91C: mov     large fs:0, eax
0x6FA922: push    10h; Size
0x6FA924: call    FormHeapAlloc
0x6FA929: add     esp, 4
0x6FA92C: mov     [esp+18h+var_10], eax
0x6FA930: test    eax, eax
0x6FA932: mov     [esp+18h+var_4], 0
0x6FA93A: jz      short loc_6FA947
0x6FA93C: mov     ecx, eax
0x6FA93E: call    BSXFlags_constr
0x6FA943: mov     esi, eax
0x6FA945: jmp     short loc_6FA949
0x6FA947: xor     esi, esi
0x6FA949: push    0; Src
0x6FA94B: mov     ecx, esi
0x6FA94D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6FA955: call    sub_721440
0x6FA95A: mov     eax, esi
0x6FA95C: mov     ecx, [esp+18h+var_C]
0x6FA960: mov     large fs:0, ecx
0x6FA967: pop     ecx
0x6FA968: pop     esi
0x6FA969: add     esp, 10h
0x6FA96C: retn
