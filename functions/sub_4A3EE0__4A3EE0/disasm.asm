0x4A3EE0: push    0FFFFFFFFh
0x4A3EE2: push    offset SEH_8C62B0
0x4A3EE7: mov     eax, large fs:0
0x4A3EED: push    eax
0x4A3EEE: push    ecx
0x4A3EEF: push    esi
0x4A3EF0: mov     eax, ds:0B30AACh
0x4A3EF5: xor     eax, esp
0x4A3EF7: push    eax
0x4A3EF8: lea     eax, [esp+18h+var_C]
0x4A3EFC: mov     large fs:0, eax
0x4A3F02: mov     esi, ecx
0x4A3F04: push    0Ch; Size
0x4A3F06: call    FormHeapAlloc
0x4A3F0B: add     esp, 4
0x4A3F0E: mov     [esp+18h+var_10], eax
0x4A3F12: test    eax, eax
0x4A3F14: mov     [esp+18h+var_4], 0
0x4A3F1C: jz      short loc_4A3F37
0x4A3F1E: push    esi
0x4A3F1F: mov     ecx, eax
0x4A3F21: call    sub_4A3D80
0x4A3F26: mov     ecx, [esp+18h+var_C]
0x4A3F2A: mov     large fs:0, ecx
0x4A3F31: pop     ecx
0x4A3F32: pop     esi
0x4A3F33: add     esp, 10h
0x4A3F36: retn
0x4A3F37: xor     eax, eax
0x4A3F39: mov     ecx, [esp+18h+var_C]
0x4A3F3D: mov     large fs:0, ecx
0x4A3F44: pop     ecx
0x4A3F45: pop     esi
0x4A3F46: add     esp, 10h
0x4A3F49: retn
