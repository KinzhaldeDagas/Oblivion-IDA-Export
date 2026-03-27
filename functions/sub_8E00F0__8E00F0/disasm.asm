0x8E00F0: push    ebp
0x8E00F1: mov     ebp, [esp+4+arg_0]
0x8E00F5: mov     ecx, [ebp+0]
0x8E00F8: cmp     byte ptr [ecx+4], 2
0x8E00FC: push    esi
0x8E00FD: push    edi
0x8E00FE: jnz     short loc_8E012B
0x8E0100: movsx   eax, byte ptr [ecx+5]
0x8E0104: mov     esi, [eax+ecx+10h]
0x8E0108: add     eax, ecx
0x8E010A: mov     ecx, [ebp+4]
0x8E010D: movsx   edi, byte ptr [ecx+5]
0x8E0111: add     esi, eax
0x8E0113: add     edi, ecx
0x8E0115: mov     ecx, esi
0x8E0117: call    sub_8DF540
0x8E011C: mov     eax, [esi]
0x8E011E: push    edi
0x8E011F: mov     ecx, esi
0x8E0121: call    dword ptr [eax+18h]
0x8E0124: mov     ecx, esi
0x8E0126: call    sub_8DF540
0x8E012B: mov     ecx, [ebp+4]
0x8E012E: cmp     byte ptr [ecx+4], 2
0x8E0132: jnz     short loc_8E015F
0x8E0134: mov     eax, [ebp+0]
0x8E0137: movsx   edi, byte ptr [eax+5]
0x8E013B: add     edi, eax
0x8E013D: movsx   eax, byte ptr [ecx+5]
0x8E0141: mov     esi, [eax+ecx+10h]
0x8E0145: add     eax, ecx
0x8E0147: add     esi, eax
0x8E0149: mov     ecx, esi
0x8E014B: call    sub_8DF540
0x8E0150: mov     edx, [esi]
0x8E0152: push    edi
0x8E0153: mov     ecx, esi
0x8E0155: call    dword ptr [edx+18h]
0x8E0158: mov     ecx, esi
0x8E015A: call    sub_8DF540
0x8E015F: pop     edi
0x8E0160: pop     esi
0x8E0161: pop     ebp
0x8E0162: retn    4
