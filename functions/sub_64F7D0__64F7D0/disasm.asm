0x64F7D0: push    0FFFFFFFFh
0x64F7D2: push    offset SEH_8C62B0
0x64F7D7: mov     eax, large fs:0
0x64F7DD: push    eax
0x64F7DE: push    ecx
0x64F7DF: push    esi
0x64F7E0: mov     eax, ds:0B30AACh
0x64F7E5: xor     eax, esp
0x64F7E7: push    eax
0x64F7E8: lea     eax, [esp+18h+var_C]
0x64F7EC: mov     large fs:0, eax
0x64F7F2: mov     esi, ecx
0x64F7F4: cmp     dword ptr [esi+34h], 0
0x64F7F8: jnz     short loc_64F826
0x64F7FA: push    1Ch; Size
0x64F7FC: call    FormHeapAlloc
0x64F801: add     esp, 4
0x64F804: mov     [esp+18h+var_10], eax
0x64F808: test    eax, eax
0x64F80A: mov     [esp+18h+var_4], 0
0x64F812: jz      short loc_64F81D
0x64F814: mov     ecx, eax; this
0x64F816: call    ??0PathMiddleHigh@@QAE@XZ; PathMiddleHigh::PathMiddleHigh(void)
0x64F81B: jmp     short loc_64F81F
0x64F81D: xor     eax, eax
0x64F81F: mov     [esi+34h], eax
0x64F822: mov     byte ptr [eax+10h], 0
0x64F826: mov     ecx, [esp+18h+var_C]
0x64F82A: mov     large fs:0, ecx
0x64F831: pop     ecx
0x64F832: pop     esi
0x64F833: add     esp, 10h
0x64F836: retn
