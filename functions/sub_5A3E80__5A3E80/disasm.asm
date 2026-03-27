0x5A3E80: push    0FFFFFFFFh
0x5A3E82: push    offset SEH_5A3E80
0x5A3E87: mov     eax, large fs:0
0x5A3E8D: push    eax
0x5A3E8E: sub     esp, 8
0x5A3E91: push    ebx
0x5A3E92: push    esi
0x5A3E93: mov     eax, ds:0B30AACh
0x5A3E98: xor     eax, esp
0x5A3E9A: push    eax
0x5A3E9B: lea     eax, [esp+20h+var_C]
0x5A3E9F: mov     large fs:0, eax
0x5A3EA5: mov     esi, ecx
0x5A3EA7: mov     [esp+20h+var_14], esi
0x5A3EAB: xor     ebx, ebx
0x5A3EAD: mov     [esi+8], ebx
0x5A3EB0: mov     [esi+0Ch], bx
0x5A3EB4: mov     [esi+0Eh], bx
0x5A3EB8: fldz
0x5A3EBA: push    18h; Size
0x5A3EBC: fstp    dword ptr [esi+4]
0x5A3EBF: mov     [esp+24h+var_4], ebx
0x5A3EC3: mov     word ptr [esi+18h], 0FAEh
0x5A3EC9: mov     [esi], ebx
0x5A3ECB: call    FormHeapAlloc
0x5A3ED0: add     esp, 4
0x5A3ED3: mov     [esp+20h+var_10], eax
0x5A3ED7: cmp     eax, ebx
0x5A3ED9: mov     byte ptr [esp+20h+var_4], 1
0x5A3EDE: jz      short loc_5A3EEA
0x5A3EE0: push    esi
0x5A3EE1: mov     ecx, eax
0x5A3EE3: call    sub_5888C0
0x5A3EE8: jmp     short loc_5A3EEC
0x5A3EEA: xor     eax, eax
0x5A3EEC: push    18h; Size
0x5A3EEE: mov     byte ptr [esp+24h+var_4], bl
0x5A3EF2: mov     [esi+10h], eax
0x5A3EF5: call    FormHeapAlloc
0x5A3EFA: add     esp, 4
0x5A3EFD: mov     [esp+20h+var_10], eax
0x5A3F01: cmp     eax, ebx
0x5A3F03: mov     byte ptr [esp+20h+var_4], 2
0x5A3F08: jz      short loc_5A3F14
0x5A3F0A: push    esi
0x5A3F0B: mov     ecx, eax
0x5A3F0D: call    sub_5888C0
0x5A3F12: jmp     short loc_5A3F16
0x5A3F14: xor     eax, eax
0x5A3F16: mov     [esi+14h], eax
0x5A3F19: mov     byte ptr [esi+1Ah], 1
0x5A3F1D: mov     eax, esi
0x5A3F1F: mov     ecx, [esp+20h+var_C]
0x5A3F23: mov     large fs:0, ecx
0x5A3F2A: pop     ecx
0x5A3F2B: pop     esi
0x5A3F2C: pop     ebx
0x5A3F2D: add     esp, 14h
0x5A3F30: retn
