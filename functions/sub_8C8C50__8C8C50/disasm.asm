0x8C8C50: push    ebp
0x8C8C51: mov     ebp, esp
0x8C8C53: and     esp, 0FFFFFFF0h
0x8C8C56: push    ecx
0x8C8C57: push    ebx
0x8C8C58: push    esi
0x8C8C59: mov     esi, [ebp+arg_0]
0x8C8C5C: push    edi
0x8C8C5D: push    esi
0x8C8C5E: mov     edi, ecx
0x8C8C60: call    sub_8AEA60
0x8C8C65: test    edi, edi
0x8C8C67: jz      loc_8C8D2F
0x8C8C6D: mov     edi, [edi+8]
0x8C8C70: test    edi, edi
0x8C8C72: jz      loc_8C8D2F
0x8C8C78: lea     eax, [esi+8]
0x8C8C7B: push    eax
0x8C8C7C: mov     ecx, edi
0x8C8C7E: call    sub_917200
0x8C8C83: mov     ecx, edi
0x8C8C85: call    sub_916BC0
0x8C8C8A: mov     ecx, [esi+1Ch]
0x8C8C8D: mov     edi, eax
0x8C8C8F: mov     eax, ecx
0x8C8C91: and     eax, 3FFFFFFFh
0x8C8C96: cmp     eax, [edi+4]
0x8C8C99: jge     short loc_8C8D09
0x8C8C9B: test    ecx, ecx
0x8C8C9D: mov     ebx, ds:0BA9DE4h
0x8C8CA3: js      short loc_8C8CCE
0x8C8CA5: mov     ecx, large fs:2Ch
0x8C8CAC: mov     edx, [ecx+ebx*4]
0x8C8CAF: mov     ecx, [edx+19Ch]
0x8C8CB5: test    ecx, ecx
0x8C8CB7: jnz     short loc_8C8CBF
0x8C8CB9: mov     ecx, ds:0BA7D9Ch
0x8C8CBF: push    14h
0x8C8CC1: shl     eax, 4
0x8C8CC4: push    eax
0x8C8CC5: mov     eax, [esi+14h]
0x8C8CC8: push    eax
0x8C8CC9: call    sub_8A75D0
0x8C8CCE: mov     ecx, large fs:2Ch
0x8C8CD5: mov     edx, [ecx+ebx*4]
0x8C8CD8: mov     eax, [edx+19Ch]
0x8C8CDE: test    eax, eax
0x8C8CE0: jnz     short loc_8C8CE7
0x8C8CE2: mov     eax, ds:0BA7D9Ch
0x8C8CE7: mov     ecx, [edi+4]
0x8C8CEA: shl     ecx, 4
0x8C8CED: push    14h
0x8C8CEF: push    ecx
0x8C8CF0: mov     ecx, eax
0x8C8CF2: call    sub_8A7560
0x8C8CF7: mov     edx, [esi+1Ch]
0x8C8CFA: and     edx, 40000000h
0x8C8D00: mov     [esi+14h], eax
0x8C8D03: or      edx, [edi+4]
0x8C8D06: mov     [esi+1Ch], edx
0x8C8D09: mov     ecx, [edi+4]
0x8C8D0C: test    ecx, ecx
0x8C8D0E: mov     eax, [esi+14h]
0x8C8D11: mov     [esi+18h], ecx
0x8C8D14: mov     edx, [edi]
0x8C8D16: jle     short loc_8C8D2F
0x8C8D18: sub     edx, eax
0x8C8D1A: lea     ebx, [ebx+0]
0x8C8D20: movaps  xmm0, xmmword ptr [edx+eax]
0x8C8D24: movaps  xmmword ptr [eax], xmm0
0x8C8D27: add     eax, 10h
0x8C8D2A: sub     ecx, 1
0x8C8D2D: jnz     short loc_8C8D20
0x8C8D2F: pop     edi
0x8C8D30: pop     esi
0x8C8D31: pop     ebx
0x8C8D32: mov     esp, ebp
0x8C8D34: pop     ebp
0x8C8D35: retn    4
