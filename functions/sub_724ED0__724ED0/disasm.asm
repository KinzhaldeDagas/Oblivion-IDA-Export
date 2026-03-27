0x724ED0: mov     eax, [esp+arg_0]
0x724ED4: push    edi
0x724ED5: mov     edi, [ecx+20h]
0x724ED8: cmp     edi, [eax+20h]
0x724EDB: jz      short loc_724EE3
0x724EDD: xor     al, al
0x724EDF: pop     edi
0x724EE0: retn    4
0x724EE3: push    ebx
0x724EE4: xor     edx, edx
0x724EE6: test    edi, edi
0x724EE8: push    esi
0x724EE9: jbe     short loc_724F21
0x724EEB: mov     eax, [eax+24h]
0x724EEE: mov     ecx, [ecx+24h]
0x724EF1: mov     ebx, eax
0x724EF3: lea     esi, [eax+4]
0x724EF6: sub     ebx, ecx
0x724EF8: fld     dword ptr [ebx+ecx]
0x724EFB: fld     dword ptr [ecx]
0x724EFD: fucompp
0x724EFF: fnstsw  ax
0x724F01: test    ah, 44h
0x724F04: jp      short loc_724F29
0x724F06: fld     dword ptr [esi]
0x724F08: fld     dword ptr [ecx+4]
0x724F0B: fucompp
0x724F0D: fnstsw  ax
0x724F0F: test    ah, 44h
0x724F12: jp      short loc_724F29
0x724F14: add     edx, 1
0x724F17: add     esi, 10h
0x724F1A: add     ecx, 10h
0x724F1D: cmp     edx, edi
0x724F1F: jb      short loc_724EF8
0x724F21: pop     esi
0x724F22: pop     ebx
0x724F23: mov     al, 1
0x724F25: pop     edi
0x724F26: retn    4
0x724F29: pop     esi
0x724F2A: pop     ebx
0x724F2B: xor     al, al
0x724F2D: pop     edi
0x724F2E: retn    4
