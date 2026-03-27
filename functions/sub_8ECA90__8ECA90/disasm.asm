0x8ECA90: mov     eax, [esp+arg_0]
0x8ECA94: push    ebx
0x8ECA95: push    ebp
0x8ECA96: push    esi
0x8ECA97: mov     esi, eax
0x8ECA99: push    edi
0x8ECA9A: mov     edx, esi
0x8ECA9C: shr     edx, 17h
0x8ECA9F: and     edx, 0FFh
0x8ECAA5: sub     edx, 7Fh
0x8ECAA8: mov     [esp+10h+arg_0], eax
0x8ECAAC: mov     ecx, 17h
0x8ECAB1: sub     ecx, edx
0x8ECAB3: mov     eax, ecx
0x8ECAB5: sar     eax, 1Fh
0x8ECAB8: mov     edi, esi
0x8ECABA: and     edi, 7FFFFFFFh
0x8ECAC0: dec     edi
0x8ECAC1: sar     edi, 1Fh
0x8ECAC4: not     edi
0x8ECAC6: and     esi, edi
0x8ECAC8: not     eax
0x8ECACA: mov     edi, eax
0x8ECACC: and     edi, ecx
0x8ECACE: mov     ecx, eax
0x8ECAD0: and     ecx, 17h
0x8ECAD3: sub     ecx, edi
0x8ECAD5: mov     edi, 0FF800000h
0x8ECADA: sar     edi, cl
0x8ECADC: not     eax
0x8ECADE: mov     ecx, offset loc_800000
0x8ECAE3: mov     [esp+10h+arg_0], ecx
0x8ECAE7: or      edi, eax
0x8ECAE9: mov     ebp, edi
0x8ECAEB: not     ebp
0x8ECAED: and     ebp, esi
0x8ECAEF: mov     eax, edx
0x8ECAF1: mov     ecx, edx
0x8ECAF3: mov     edx, [esp+10h+arg_0]
0x8ECAF7: mov     ebx, esi
0x8ECAF9: sar     ebx, 1Fh
0x8ECAFC: sar     eax, 1Fh
0x8ECAFF: dec     ebp
0x8ECB00: not     ebp
0x8ECB02: sar     edx, cl
0x8ECB04: mov     ecx, eax
0x8ECB06: not     ecx
0x8ECB08: and     eax, ebx
0x8ECB0A: and     ebp, edx
0x8ECB0C: and     ebp, ebx
0x8ECB0E: add     ebp, esi
0x8ECB10: and     ebp, ecx
0x8ECB12: and     ebp, edi
0x8ECB14: pop     edi
0x8ECB15: and     eax, 0BF800000h
0x8ECB1A: or      ebp, eax
0x8ECB1C: pop     esi
0x8ECB1D: mov     [esp+8+arg_0], ebp
0x8ECB21: fld     [esp+8+arg_0]
0x8ECB25: pop     ebp
0x8ECB26: pop     ebx
0x8ECB27: retn
