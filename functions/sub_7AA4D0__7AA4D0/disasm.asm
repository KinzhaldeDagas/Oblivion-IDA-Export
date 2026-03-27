0x7AA4D0: push    ebx
0x7AA4D1: push    ebp
0x7AA4D2: mov     ebx, ecx
0x7AA4D4: xor     ebp, ebp
0x7AA4D6: cmp     [ebx+2238h], ebp
0x7AA4DC: jz      short loc_7AA544
0x7AA4DE: push    esi
0x7AA4DF: push    edi
0x7AA4E0: lea     esi, [ebx+222Ch]
0x7AA4E6: jmp     short loc_7AA4F0
0x7AA4E8: align 10h
0x7AA4F0: mov     eax, [ebx+2230h]
0x7AA4F6: mov     edi, [eax+8]
0x7AA4F9: cmp     edi, ebp
0x7AA4FB: jz      short loc_7AA518
0x7AA4FD: mov     eax, [edi+14h]
0x7AA500: cmp     eax, ebp
0x7AA502: jz      short loc_7AA50F
0x7AA504: mov     ecx, [eax]
0x7AA506: mov     edx, [ecx+8]
0x7AA509: push    eax
0x7AA50A: call    edx
0x7AA50C: mov     [edi+14h], ebp
0x7AA50F: push    edi
0x7AA510: call    FormHeapFree
0x7AA515: add     esp, 4
0x7AA518: mov     ecx, [esi+4]
0x7AA51B: mov     eax, [ecx]
0x7AA51D: cmp     eax, ebp
0x7AA51F: mov     [esi+4], eax
0x7AA522: jz      short loc_7AA529
0x7AA524: mov     [eax+4], ebp
0x7AA527: jmp     short loc_7AA52C
0x7AA529: mov     [esi+8], ebp
0x7AA52C: mov     eax, [esi]
0x7AA52E: mov     edx, [eax+8]
0x7AA531: push    ecx
0x7AA532: mov     ecx, esi
0x7AA534: call    edx
0x7AA536: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7AA53A: cmp     [ebx+2238h], ebp
0x7AA540: jnz     short loc_7AA4F0
0x7AA542: pop     edi
0x7AA543: pop     esi
0x7AA544: pop     ebp
0x7AA545: pop     ebx
0x7AA546: retn
